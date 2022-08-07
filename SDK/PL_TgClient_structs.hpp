#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Basic.hpp"
#include "PL_PlatformCommon_classes.hpp"
#include "PL_GFxUI_classes.hpp"
#include "PL_Core_classes.hpp"
#include "PL_Engine_classes.hpp"
#include "PL_TgGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_PROCESS_MESSAGE_SECS                               2.0f
#define CONST_NUM_ABILITYPOINTPOOL_SKILLS                        4
#define CONST_URGENT_POPUP                                       100
#define CONST_MAX_ITEM_STAT_CATEGORY                             7
#define CONST_UIHUDSKILLS3P_COUNT                                5
#define CONST_UISAFEFRAME_STEPCOUNT                              20
#define CONST_UIRETICLES_DAMAGE_LIGHT                            20
#define CONST_UICOMPONENT_GENERICTITLEBUTTONS_TITLECOUNT         2
#define CONST_UIHUDTEAM_STATS                                    10
#define CONST_GFXGROUP_LOC_NONE                                  -10000
#define CONST_UIHUDCOOLDOWN_COUNT                                6
#define CONST_MAX_UI_EFFECTS                                     16
#define CONST_SETTINGS_MANAGER_KEY_ALTERNATES                    2
#define CONST_UIHUDDECKS_CARDS                                   5
#define CONST_LOADING_SCREEN_TIP_COUNT                           5
#define CONST_UIINVITE_INVITECOUNTER_MAXLEN                      64
#define CONST_UIHUDCHAMPIONSELECT_COUNT                          60
#define CONST_UIHEALFEED_NUM_ICONS                               5
#define CONST_UIHUDSKILLS_MARK_TYPE_COUNT                        4
#define CONST_UICOMPONENT_GENERICTITLEBUTTONS_BUTTONCOUNT        8
#define CONST_GFXSETTINGS_BUTTONS                                7
#define CONST_TGDATA_EOM_TEAMCOUNT                               2
#define CONST_EMBLEM_ROULETTE_SCALE_START                        90.0f
#define CONST_UIHUD_DEBUG_INFO_DISPLAY_TEXT_COUNT                4
#define CONST_NUM_UI_DEVICES                                     25
#define CONST_FIRST_BLOOD_MESSAGE_ID                             109234
#define CONST_DCTEAM_MAX_MEMBERS                                 5
#define CONST_DCTEAM_MAX_TOWERS                                  9
#define CONST_DEFAULT_AVATAR_ID                                  23120
#define CONST_UIHUDMINIMAP_PLAYERS                               4
#define CONST_UISCENE_NATIVE_WIDTH                               1920
#define CONST_UISCENE_NATIVE_HEIGHT                              1080
#define CONST_EMBLEM_SCALEUP_TIME                                0.04f
#define CONST_PLAY_EVERY_CHAMPION_ID                             1732
#define CONST_UI_AUTHORED_WIDTH                                  1920
#define CONST_TEAM_PEDESTAL_MESH_ACTORS                          5
#define CONST_CURRENCY_CRYSTALS                                  12687
#define CONST_UI_AUTHORED_HEIGHT                                 1080
#define CONST_CHAMPION_SKINS_ITEM_WIDTH                          3
#define CONST_UIHUDSKILLS3P_MARK_TYPE_COUNT                      4
#define CONST_UIINVITE_BUTTONS                                   2
#define CONST_PROP_FULLSCREEN_SPLASH_VERSION                     2135
#define CONST_UISCENE_UIPROFILE_MATCHSTATSPOPUP_TABS             2
#define CONST_DAILY_QUESTS_TOTAL                                 10
#define CONST_UIINVITE_INVITESPAM_PERIOD                         2.6
#define CONST_UIComponent_CommendationToastEntry_TOAST_Sustain_Time 6.00f
#define CONST_UIPROFILE_ACCOUNTBOOSTTOOLTIP_COUNT                4
#define CONST_LOBBY_PLAYERS_PER_TEAM                             10
#define CONST_TG_MAX_TOTAL_PING                                  10
#define CONST_UIACADEMY_BUTTONS                                  8
#define CONST_UIACADEMY_VIDEOTYPE                                11427
#define CONST_UIACHIEVEMENTPOPUPS_PROGRESS_PERCENT               0.2
#define CONST_NUM_BAR_SEGMENTS                                   3
#define CONST_UIACQUISITION_MAX_ITEMS                            5
#define CONST_UIEDITLOAOUDTS_GAMEPAD_BUMPERS                     2
#define CONST_UIHUDSKILLS_BARS                                   3
#define CONST_EOML_MVPCOUNT                                      5
#define CONST_UIHUDTEAM_COUNT                                    5
#define CONST_HIDDEN_CHALLENGE_ACTIVITY                          2214
#define CONST_UIBACKGROUND_TYPES                                 8
#define CONST_CHAT_OUTPUT_COUNT                                  4
#define CONST_UIPROFILE_CHAMPION_DATA                            5
#define CONST_EMBLEM_ROULETTE_POSX                               960.0f
#define CONST_MAX_BOOSTER_BENEFITS                               3
#define CONST_UIHUDSNIPER_SIDES                                  2
#define CONST_EMBLEM_ALPHA_TIME                                  0.17f
#define CONST_UIPROFILE_AWARD_COLS                               2
#define CONST_NUM_BENEFITS_TFS                                   11
#define CONST_PLAY_EVERY_CHAMPION_STARTING_ID                    1774
#define CONST_KILL_EVERY_CHAMPION_ID                             1731
#define CONST_EMBLEM_MOVE_TIME                                   0.17f
#define CONST_PRIME_QUEST_TIME_FRAME_ID                          50
#define CONST_BOOST_ACTIVATION_TIMER                             2.5f
#define CONST_UICOMPONENT_HOLDPURCHASE_RADIALFRAMES              360
#define CONST_NUM_PIPS                                           5
#define CONST_KILL_EVERY_CHAMPION_STARTING_ID                    1736
#define CONST_UICUSTOM_CREATE_ANIM_DISTANCE                      100.0f
#define CONST_UIHUDMAP_LEGENDS                                   2
#define CONST_KILL_EVERY_CHAMPION_ENDING_ID                      1773
#define CONST_EMBLEM_SCALEUP_DELAY                               0.2f
#define CONST_PLAY_EVERY_CHAMPION_ENDING_ID                      17811
#define CONST_UICHAMPION_OVERVIEW_SKILLS_SLOTS_COUNT             5
#define CONST_CHAMPION_LOADOUTS_WIDTH                            2
#define CONST_UILOBBYCHAT_TAB_Y_MOUSE_POS                        1056
#define CONST_UIVAULT_VERSION                                    2
#define CONST_PROP_UI_VAULT_LAST_SEEN_VERSION                    2132
#define CONST_UICOMPONENT_GENERICTITLEBUTTONS_COLUMNSIZE         4
#define CONST_EMBLEM_MOVE_DELAY                                  0.5f
#define CONST_UICHESTS_OPEN_GIFT_ICON_ID                         58
#define CONST_UICOMPONENT_GENERICTITLEINPUTBUTTONS_TITLECOUNT    2
#define CONST_UICOMPONENT_GENERICTITLEINPUTBUTTONS_BUTTONCOUNT   2
#define CONST_UIHUD_SCENE_CARDS                                  3
#define CONST_UIHEALFEED_ENTRY_PRECACHE_AMOUNT                   20
#define CONST_HNH_EVENT_HOME_NUM_ORBS                            3
#define CONST_UIEDITLOADOUTS_CARDS                               5
#define CONST_EMBLEM_SCALEDOWN_TIME                              0.17f
#define CONST_EMBLEM_X_3P                                        1350.0f
#define CONST_UIHOME_NUM_USED_HOME_SCREEN_PANELS                 8
#define CONST_EMBLEM_ROULETTE_POSY                               747.20f
#define CONST_UIREGION_HUBS                                      3
#define CONST_TOAST_DELAY                                        0.50f
#define CONST_UIHUD_SCENE_PARTY                                  0
#define CONST_BOUNTY_OFFSETX                                     31.0f
#define CONST_DAILY_QUESTS_ACCOUNT_LEVEL                         0
#define CONST_KILLSTREAK_OFFSETX                                 32.9f
#define CONST_EMBLEM_FADE_TIME                                   0.2f
#define CONST_UIPURCHASE_WITHAD_X                                -255
#define CONST_EMBLEM_Y                                           885.0f
#define CONST_EMBLEM_ULT_NOT_READY_X_SKILL_SLOT_4                1060.0f
#define CONST_EMBLEM_ULT_READY_X_SKILL_SLOT_4                    1080.0f
#define CONST_EMBLEM_ULT_NOT_READY_X_SKILL_SLOT_3                860.0f
#define CONST_UIHUDBURNSCONQUEST_GROUPS                          4
#define CONST_EMBLEM_ULT_READY_X_SKILL_SLOT_3                    840.0f
#define CONST_UICOMPONENT_DECK_SIZE                              5
#define CONST_UICOMPONENT_MATCHDISPLAY_BUILDHEADERS_COUNT        6
#define CONST_UIPURCHASE_NOAD_X                                  0
#define CONST_UICOMPONENT_MATCHDISPLAY_STATSHEADERS_COUNT        9
#define CONST_UICOMPONENT_MATCHDISPLAY_PLAYERS_COUNT             10
#define CONST_UICOMPONENT_MATCHPLAYERENTRY_BUILD_STATCOUNT       2
#define CONST_DQB_LTI                                            19768
#define CONST_UICOMPONENT_MATCHPLAYERENTRY_DETAILS_STATCOUNT     7
#define CONST_UICOMPONENT_MATCHPLAYERENTRY_BUILD_CARDCOUNT       5
#define CONST_UICOMPONENT_MATCHPLAYERENTRY_BUILD_ITEMCOUNT       4
#define CONST_RADIAL_ZERO_PERCENT_FRAME                          43
#define CONST_UIHUDBURNS_ARROWS                                  2
#define CONST_RADIAL_HUNDRED_PERCENT_FRAME                       315
#define CONST_UICOMPONENT_QUEST_GOALS                            7
#define CONST_UICOMPONENT_QUEST_GOAL_SPACING                     15
#define CONST_UICOMPONENT_SKILL_PROMPT_HANDHELD_SCALING          140.0
#define CONST_UISTOREFEATURED_NUM_JSON_PANELS                    7
#define CONST_UIPROFILE_ANNOUNCERPACK_CONSOLE_PROMPT_COUNT       2
#define CONST_PORTRAITS_MAX_TASK_FORCE_SIZE                      5
#define CONST_TENCENTJSON_NUM_JSON_PANELS                        3
#define CONST_UIComponent_ChallengeToastEntry_TOAST_Sustain_Time 6.00f
#define CONST_UIDATA_CHESTEXTENDED_MAX_BUNDLES                   4
#define CONST_MATCH_MAX_PLAYERS                                  10
#define CONST_UIDATA_PLAYERMATCHRECORD_DECKSIZE                  5
#define CONST_UIHUDSKILLS_CARDS                                  5
#define CONST_UIDATA_PLAYERMATCHRECORD_ITEMCOUNT                 4
#define CONST_UIDATA_POPUPGENERIC_TITLECOUNT                     2
#define CONST_UISCOREBOARD_ITEMS_V2                              12
#define CONST_UIDATA_POPUPGENERIC_BUTTONCOUNT                    8
#define CONST_UIDATA_POPUPINPUT_TITLECOUNT                       2
#define CONST_UIDATA_POPUPINPUT_BUTTONCOUNT                      2
#define CONST_ABYSSAL_ECHO_VIVIAN_ID                             2498
#define CONST_UIDATA_SPRAYRENTAL_MAX_BUNDLES                     4
#define CONST_UIHUDCARD_ITEMS                                    6
#define CONST_MONTHLY_QUEST_TIME_FRAME_ID                        11
#define CONST_MAX_MASTERY_REWARD_LEVEL                           30
#define CONST_NUM_TEMPLATE_DECKS_PER_CHAMPION                    3
#define CONST_NUM_USER_DECKS_PER_CHAMPION                        6
#define CONST_FLOAT_IMPORT_REQUEST_TIMEOUT                       5.0
#define CONST_SAFE_LOAD_VOICEPACK_RETRY_WINDOW                   8.0f
#define CONST_UISCOREBOARD_ITEMS                                 4
#define CONST_UIHUD_SCENE_CHAT                                   1
#define CONST_UIHUD_SCENE_PLAYER                                 2
#define CONST_UIHUD_SCENE_BUFFS                                  7
#define CONST_UIHUD_SCENE_LEVEL                                  4
#define CONST_UIHUD_SCENE_KILLINFO                               5
#define CONST_UIHUD_SCENE_NOTIFY                                 6
#define CONST_UISAFEFRAME_MAX                                    1.f
#define CONST_UIHUD_SCENE_COMBATLOG                              8
#define CONST_UIHUD_SCENE_SKILLS                                 9
#define CONST_UIHUD_SCENE_SKILLS3P                               10
#define CONST_UIHUDBURNS_BURN_CARD_V2_GROUPS                     3
#define CONST_UIHUD_SCENE_COUNT                                  12
#define CONST_UIHUD_SCENE_DEBUGINFO                              11
#define CONST_UIHUDBINOCULARS_BARRAGES                           3
#define CONST_UIHUDBINOCULARS_RETICULEARROWS                     4
#define CONST_ULTIMATE_READY_SKILLS_SHIFT_AMOUNT                 20.0f
#define CONST_UIHUDBURNS_GROUPS                                  4
#define CONST_UIHUDMAP_PLAYERS                                   4
#define CONST_UIHUDBURNS_OPTIONS                                 5
#define CONST_CHAT_VGS_CALLOUT_TOTAL_COUNT                       40
#define CONST_UIHUDBURNS_UPGRADES                                3
#define CONST_UIHUDBURNS_UNDO_OPTIONS                            12
#define CONST_UISTORE_FILTER_RARITY_COUNT                        5
#define CONST_UIHUDBURNSCONQUEST_ARROWS                          2
#define CONST_UIHUDBURNSCONQUEST_OPTIONS                         5
#define CONST_UIHUDBURNSCONQUEST_UPGRADES                        3
#define CONST_UIHUDCARD_SLOTS                                    4
#define CONST_UIHUDCARD_LOADOUTSIZE                              5
#define CONST_UIHUDSCORE_WAYPOINTS                               4
#define CONST_UIRETICLES_PROJECTILES                             10
#define CONST_GFXSETTINGS_KEYBINDS_COLUMNS                       2
#define CONST_UIHITMARKER_TICKS                                  4
#define CONST_UIDAMAGEINSTIGATOR_MAX                             5
#define CONST_ENGAGEMENT_STORE_MAX_SKIN_ITEMS                    3
#define CONST_FORCE_CASUAL_QUEUE_FOR_LOW_LEVEL                   true
#define CONST_UIRETICLES_DAMAGE_MEDIUM                           15
#define CONST_UIRETICLES_DAMAGE_HEAVY                            10
#define CONST_UICHESTS_SCROLL_TIME                               0.5f
#define CONST_UIRETICLES_DAMAGE_AOEMEDIUM                        10
#define CONST_UIRETICLES_DAMAGE_AOEHEAVY                         10
#define CONST_MIXER_SKIN_ACTIVITY_ID                             2250
#define CONST_UIHITMARKER_ERRORTOLERANCE                         48.0
#define CONST_NUM_CHALLENGE_SLOTS                                5
#define CONST_CHAT_VGS_CALLOUT_COUNT                             5
#define CONST_UIRETICLES_HANDHELD_SCALING                        200.0
#define CONST_PROP_POPUP_TWITCH_PRIME_LAST_SEEN_UPPER            2103
#define CONST_CHAT_COUNT                                         8
#define CONST_UIPROFILE_AWARD_ROWS                               4
#define CONST_UIHUDBUFFS_COUNT                                   3
#define CONST_UIHUDDECKS_COUNT                                   8
#define CONST_UIHUDTALENTS_COUNT                                 3
#define CONST_UIHUDTEAM_LOADOUTSIZE                              5
#define CONST_UIHUDTEAM_ITEMSLOTS                                4
#define CONST_UIHUDTEAM_STREAK_MIN_STREAK                        5
#define CONST_UIHUDTEAM_STREAK_FADE_CEILING                      20
#define CONST_UIHUDKILLFEED_Y_SPACING                            50.0
#define CONST_UIHUDKILLFEED_ALTERNATE_Y_POS                      700.0
#define CONST_UIHUDKILLFEED_START_Y_POS                          800.0
#define CONST_UIHUDMINIMAP_IMAGES                                2
#define CONST_UIHUDMAP_TEXT                                      4
#define CONST_UIHUDMAP_IMAGES                                    2
#define CONST_UIHUDMAP_COORDS                                    8
#define CONST_UIHUDMAP_CHOSEN                                    4
#define CONST_UIHUDMAP_GRIDWIDTH                                 8
#define CONST_UIHUDMAP_CHAMPIONS                                 8
#define CONST_UIHUDMENU_COUNT                                    8
#define CONST_UIPROFILE_CHAMPION_ROWS                            8
#define CONST_UIHudNotify_SUDDEN_DEATH_MSG_ID                    195974
#define CONST_ABYSSAL_ECHO_FERNANDO_ID                           2496
#define CONST_ABYSSAL_ECHO_VIKTOR_ID                             2499
#define CONST_ABYSSAL_ECHO_YING_ID                               2497
#define CONST_UIHUDSNIPER_PINS                                   4
#define CONST_UIHUDSCORE_COMPASS_TICKS                           24
#define CONST_MARK_FADE_TIME                                     0.2f
#define CONST_UISCOREBOARD_CARDS                                 5
#define CONST_UISCOREBOARD_STATS                                 5
#define CONST_UISCOREBOARD_PLAYERS                               5
#define CONST_UISCOREBOARD_TABS                                  2
#define CONST_UIHUDSKILLS3P_WEAPONS                              3
#define CONST_UIHUDSNIPER_CHARGES                                4
#define CONST_UIHUDSNIPER_BULLETS                                6
#define CONST_NUM_TOAST_SLOTS                                    6
#define CONST_UIHOME_NUM_TOTAL_HOME_SCREEN_PANELS                9
#define CONST_CUSTOMS_SKIN_COUNT                                 2
#define CONST_UIHUD_DEBUG_INFO_LEFT_TEXT_COUNT                   4
#define CONST_UIVOICECHAT_TEAMPLAYERS                            5
#define CONST_UIHUDWAYPOINT_PROJECTILES                          4
#define CONST_BUTTON_PRICE_NUM_PRICES                            3
#define CONST_NUM_LIVE_TEXT_STROKES                              3
#define CONST_UILOBBYCHAT_ARROWS                                 2
#define CONST_UILOBBYCHAT_TAB_Y_ORIG                             1040
#define CONST_UILOBBYCHAT_TAB_X_ORIG                             30
#define CONST_UIPROFILE_LOADOUT_CATEGORIES                       9
#define CONST_UIPROFILE_AWARD_ENTRIES                            8
#define CONST_CURRENCY_GOLD                                      13256
#define CONST_UIPROFILE_AWARD_GOALS                              10
#define CONST_UIPROFILE_COLLECTIONS                              4
#define CONST_UIPROFILE_HEADER_COUNT                             6
#define CONST_UIPROFILE_PLAYER_COUNT                             5
#define CONST_UIComponent_ChallengeToastEntry_TOAST_Decay_Time   0.75f
#define CONST_UIPROFILE_HISTORY_DATA                             7
#define CONST_UIPROFILE_HISTORY_ROWS                             8
#define CONST_UIPROFILE_DETAILS_COUNT                            12
#define CONST_UIPROFILE_ANNOUNCERPACK_SLOT_COUNT                 10
#define CONST_UIPROFILE_ANNOUNCERPACK_SLOTS_PER_ROW              2
#define CONST_NUM_ULT_BULLETS_SAATI                              3
#define CONST_UIPROFILE_MUSICPACK_SLOT_COUNT                     10
#define CONST_UIPROFILE_MUSICPACK_SLOTS_PER_ROW                  2
#define CONST_UIPROFILE_MUSICPACK_CONSOLE_PROMPT_COUNT           2
#define CONST_UIPROFILE_AWARD_PROGRESS_PADDING                   10
#define CONST_Q_SKILL_SLOT_2_TO_SLOT_3_X_OFFSET                  200.0f
#define CONST_DAILY_QUESTS_COUNT                                 3
#define CONST_MINIPROF_ACCOUNTBOOSTTOOLTIP_ENTRIES               4
#define CONST_MINIPROF_VIPBOOSTTOOLTIP_ENTRIES                   4
#define CONST_UIPURCHASE_ITEMS                                   4
#define CONST_UIPURCHASE_TABS                                    2
#define CONST_UIPURCHASE_OPTIONS                                 3
#define CONST_UIPURCHASE_LINES                                   6
#define CONST_UIPURCHASE_VIP_LINES                               5
#define CONST_UIPURCHASE_FOUNDERSPACK                            19800
#define CONST_UIPURCHASE_SKINBOOST                               "SkinBoost"
#define CONST_UIWORLDOVERLAY_MAXTICKS                            60
#define CONST_UIPURCHASEGEMS_CONSUMABLEPACKS                     7
#define CONST_SIMULMEDIA_GOLD_REWARD_LTI                         70174
#define CONST_UISAFEFRAME_MIN                                    0.9f
#define CONST_BATTLE_PASS_REWARD_ITEM_COUNT                      5
#define CONST_UIBATTLEPASS_NUM_DLC                               4
#define CONST_UI_CHAMPIONSELECT_PREVIEW_DELAY                    1.0f
#define CONST_UIEDITLOADOUTS_POINT_BLIPS                         15
#define CONST_UIEDITLOADOUTS_OPTIONS                             5
#define CONST_UIEDITLOADOUTS_TITLES                              4
#define CONST_UIEDITLOADOUTS_CHOICES                             16
#define CONST_UIEDITLOADOUTS_CARDS_PER_ROW                       8
#define CONST_UIEDITLOADOUTS_SEARCH_TYPES                        3
#define CONST_UIEDITLOADOUTS_ARROWS                              2
#define CONST_UIFOOTERGAMEPAD_OPTIONS                            8
#define CONST_UIFOOTERGAMEPAD_OPTION_WIDTH                       1000
#define CONST_UIHOME_CAROUSEL_ASPECT_TOLERANCE                   0.09
#define CONST_UIFOOTERGAMEPAD_HANDHELD_SCALING                   120.0
#define CONST_UIHOME_SIMULMEDIA_LEVEL_REQ                        3
#define CONST_UIHUDSKILLS_COUNT                                  5
#define CONST_UIComponent_CommendationToastEntry_TOAST_Decay_Time 0.75f
#define CONST_UIHUDSKILLS_MARK_DISPLAY_COUNT                     3
#define CONST_UICUSTOM_SLOTS                                     6
#define CONST_UIHUDSKILLS3P_MARK_DISPLAY_COUNT                   3
#define CONST_PRIME_QUEST_ICON_ID                                7337
#define CONST_NUM_COMMENDATION_SLOTS                             4
#define CONST_UIPLAY_MAX_REGION_ENTRIES                          12
#define CONST_SCROLL_OFFSET_JUMP                                 20
#define CONST_PROP_POPUP_TWITCH_PRIME_LAST_SEEN_LOWER            2102
#define CONST_UIComponent_CommendationToastEntry_TOAST_Attack_Time 0.50f
#define CONST_UISKILLS_SLOTS_COUNT                               5
#define CONST_GFXSETTINGS_OPTIONS                                12
#define CONST_GFXSETTINGS_KEYBINDS                               12
#define CONST_UIWORLDOVERLAY_HEALTHPERTICK                       250
#define CONST_UIComponent_ChallengeToastEntry_TOAST_Attack_Time  0.50f
#define CONST_UICHESTS_MIN_LOAD_TIME                             3.0f
#define CONST_UICHESTS_ACUISITION_POOL_TIME                      0.5f
#define CONST_UICHESTS_SEND_GIFT_ICON_ID                         57
#define CONST_UICHESTS_OPEN_GIFT_DISABLED_ICON_ID                59
#define CONST_MAX_COMMENDATION_COUNT                             500
#define CONST_MARKED_CHAMPIONS_COUNT                             2
#define CONST_MULTI_MARK_DEVICE_ID                               25366
#define CONST_NUM_TRIAL_SLOTS                                    2
#define CONST_UICUSTOM_MODES                                     5
#define CONST_THICC_SHIELD_REGEN                                 16379
#define CONST_TEAM_BOOSTER_ID                                    23849
#define CONST_ENGAGEMENT_STORE_MAX_BOOSTER_ITEMS                 3
#define CONST_REI_TARGETER_ANIMATION_FRAMES                      3
#define CONST_FSBP_LOW_LEVEL_INTERVAL                            30
#define CONST_FSBP_HIGH_LEVEL_INTERVAL                           50
#define CONST_FSBP_TOTAL_PREVIEW_ITEMS                           5
#define CONST_UIHUDATLAS_SHOTS                                   3
#define CONST_NUM_PIPS_SAATI                                     8
#define CONST_SEVEN_INHAND_FIRE_MODES                            3
#define CONST_VAMPIRE_Q_MODES                                    2

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TgClient.TgBrowserManager.WebPageType
enum class EWebPageType : uint8_t
{
	WPT_Gold                       = 0,
	WPT_CreateAccount              = 1,
	WPT_RecoverPassword            = 2,
	WPT_RecoverUsername            = 3,
	WPT_GodPack                    = 4,
	WPT_FacebookPromo              = 5,
	WPT_TwitterPromo               = 6,
	WPT_RecruitPromo               = 7,
	WPT_ReferLinkup                = 8,
	WPT_MAX                        = 9
};


// Enum TgClient.TgDataObject.UIID
enum class EUIID : uint8_t
{
	UIID_NONE                      = 0,
	UIID_XP                        = 1,
	UIID_LEVEL                     = 2,
	UIID_LEVEL_PCT                 = 3,
	UIID_BOT_ID                    = 4,
	UIID_DEVICE_ID                 = 5,
	UIID_NAME                      = 6,
	UIID_AMMO                      = 7,
	UIID_ICON                      = 8,
	UIID_STATUS                    = 9,
	UIID_POWER                     = 10,
	UIID_COOLDOWN                  = 11,
	UIID_ENEMY_SCORE               = 12,
	UIID_ENEMY_CHARGE              = 13,
	UIID_ENEMY_TASKFORCE           = 14,
	UIID_FRIENDLY_SCORE            = 15,
	UIID_FRIENDLY_CHARGE           = 16,
	UIID_FRIENDLY_TASKFORCE        = 17,
	UIID_ATTACKING_TASKFORCE       = 18,
	UIID_TIMER_VALUE               = 19,
	UIID_TIMER_STATE               = 20,
	UIID_TIMER_TEXT                = 21,
	UIID_MANA                      = 22,
	UIID_MANA_MAX                  = 23,
	UIID_MANA_PCT                  = 24,
	UIID_HEALTH                    = 25,
	UIID_HEALTH_MAX                = 26,
	UIID_HEALTH_PCT                = 27,
	UIID_SHIELD                    = 28,
	UIID_SHIELD_MAX                = 29,
	UIID_SHIELD_PCT                = 30,
	UIID_TIMER_ACTIVATION          = 31,
	UIID_BONUS_CARDS               = 32,
	UIID_COMBAT_FLAG               = 33,
	UIID_COMBAT_TIME               = 34,
	UIID_COMBAT_TIMER              = 35,
	UIID_DISPLAY_CARDS             = 36,
	UIID_PLAYER_ID                 = 37,
	UIID_PLAYER_NAME               = 38,
	UIID_PLAYER_NOTE               = 39,
	UIID_PLAYER_LEVEL              = 40,
	UIID_CLAN_TAG                  = 41,
	UIID_CLAN_NAME                 = 42,
	UIID_MASTERY_LEVEL             = 43,
	UIID_IS_RECENT                 = 44,
	UIID_IS_ONLINE                 = 45,
	UIID_IS_STREAMING              = 46,
	UIID_IS_PARTY                  = 47,
	UIID_IS_MY_PARTY               = 48,
	UIID_IS_FRIEND                 = 49,
	UIID_IS_PENDING                = 50,
	UIID_IS_REQUESTED              = 51,
	UIID_STATUS_ID                 = 52,
	UIID_STATUS_LABEL              = 53,
	UIID_STATUS_MESSAGE            = 54,
	UIID_QUEUE_ICON                = 55,
	UIID_AVATAR_ID                 = 56,
	UIID_FRIENDS_TOTAL             = 57,
	UIID_FRIENDS_ONLINE            = 58,
	UIID_FRIENDS_PENDING           = 59,
	UIID_CLAN_PENDING              = 60,
	UIID_EQUIP_POINT               = 61,
	UIID_MASTERY                   = 62,
	UIID_INVITE_MAP                = 63,
	UIID_INVITE_QUEUE              = 64,
	UIID_INVITE_PENDING            = 65,
	UIID_PARTY_LEADER              = 66,
	UIID_MAX                       = 67
};


// Enum TgClient.TgDataObject.UIDeviceStatus
enum class EUIDeviceStatus : uint8_t
{
	UIDS_NONE                      = 0,
	UIDS_LOCKED                    = 1,
	UIDS_READY                     = 2,
	UIDS_COOLDOWN                  = 3,
	UIDS_FIRING                    = 4,
	UIDS_DEPLOYED                  = 5,
	UIDS_MAX                       = 6
};


// Enum TgClient.UIMoviePlayer.EActionLog
enum class EActionLog : uint8_t
{
	EAL_NONE                       = 0,
	EAL_STORE                      = 1,
	EAL_BUYITEM                    = 2,
	EAL_CENTERPLAY                 = 3,
	EAL_QUICK1                     = 4,
	EAL_QUICK2                     = 5,
	EAL_QUICK3                     = 6,
	EAL_QUICK4                     = 7,
	EAL_JOINSOLO                   = 8,
	EAL_JOINPARTY                  = 9,
	EAL_INVITEPARTY                = 10,
	EAL_CANCELPARTY                = 11,
	EAL_LEAVEQUEUE                 = 12,
	EAL_PLAYAGAIN                  = 13,
	EAL_RENTITEM                   = 14,
	EAL_JSONPANEL                  = 15,
	EAL_GIFTING                    = 16,
	EAL_MAX                        = 17
};


// Enum TgClient.TgGameDC_Chat.TG_CHAT_PRIORITY
enum class ETG_CHAT_PRIORITY : uint8_t
{
	CHAT_PRIORITY_THROWAWAY        = 0,
	CHAT_PRIORITY_NORMAL           = 1,
	CHAT_PRIORITY_HIGH             = 2,
	CHAT_PRIORITY_INTERRUPT        = 3,
	CHAT_PRIORITY_MAX              = 4
};


// Enum TgClient.TgGameDC_Game.GAME_MODE_TYPE
enum class EGAME_MODE_TYPE : uint8_t
{
	GAME_TYPE_BATTLE               = 0,
	GAME_TYPE_ARENA                = 1,
	GAME_TYPE_DOM                  = 2,
	GAME_TYPE_SIEGE                = 3,
	GAME_TYPE_MAX                  = 4
};


// Enum TgClient.TgGameHUD.GameHudState
enum class EGameHudState : uint8_t
{
	GHS_None                       = 0,
	GHS_Deploy                     = 1,
	GHS_Match                      = 2,
	GHS_Summary                    = 3,
	GHS_MAX                        = 4
};


// Enum TgClient.TgGameHUD.TgClientVisibilityMode
enum class ETgClientVisibilityMode : uint8_t
{
	CVM_NORMAL                     = 0,
	CVM_ENEMY                      = 1,
	CVM_PLAYERS                    = 2,
	CVM_ALL                        = 3,
	CVM_MAX                        = 4
};


// Enum TgClient.TgGameHUD.HelpPromptType
enum class EHelpPromptType : uint8_t
{
	HPT_None                       = 0,
	HPT_Cards                      = 1,
	HPT_Mount                      = 2,
	HPT_MAX                        = 3
};


// Enum TgClient.UIComponent.UIALIGNINGTYPE
enum class EUIALIGNINGTYPE : uint8_t
{
	UIALIGNING_NONE                = 0,
	UIALIGNING_LEFT                = 1,
	UIALIGNING_RIGHT               = 2,
	UIALIGNING_CENTER              = 3,
	UIALIGNING_MAX                 = 4
};


// Enum TgClient.UIComponent.UIANIMTYPE
enum class EUIANIMTYPE : uint8_t
{
	UIANIM_X                       = 0,
	UIANIM_Y                       = 1,
	UIANIM_ALPHA                   = 2,
	UIANIM_WIDTH                   = 3,
	UIANIM_HEIGHT                  = 4,
	UIANIM_XSCALE                  = 5,
	UIANIM_YSCALE                  = 6,
	UIANIM_VISIBLE                 = 7,
	UIANIM_ROTATION                = 8,
	UIANIM_SOUND                   = 9,
	UIANIM_MAX                     = 10
};


// Enum TgClient.UIComponent.UICOMPONENTTYPE
enum class EUICOMPONENTTYPE : uint8_t
{
	UICOMP_COMPONENT               = 0,
	UICOMP_SCENE                   = 1,
	UICOMP_MAX                     = 2
};


// Enum TgClient.TgGfxScene.GFXOPTION
enum class EGFXOPTION : uint8_t
{
	GFXOPTION_NONE                 = 0,
	GFXOPTION_BACK                 = 1,
	GFXOPTION_APPLY                = 2,
	GFXOPTION_LEAVEQUEUE           = 3,
	GFXOPTION_SELECT               = 4,
	GFXOPTION_ADDCARD              = 5,
	GFXOPTION_REMOVECARD           = 6,
	GFXOPTION_FILTER               = 7,
	GFXOPTION_FILTERCHAMP          = 8,
	GFXOPTION_FILTERCHAMP_Y        = 9,
	GFXOPTION_ADDREMOVE            = 10,
	GFXOPTION_CHAT                 = 11,
	GFXOPTION_CHANGEUSER           = 12,
	GFXOPTION_CHANGETAB            = 13,
	GFXOPTION_JOIN                 = 14,
	GFXOPTION_PREVIOUS             = 15,
	GFXOPTION_NEXT                 = 16,
	GFXOPTION_ACCEPT               = 17,
	GFXOPTION_CANCEL               = 18,
	GFXOPTION_PURCHASE             = 19,
	GFXOPTION_HOME                 = 20,
	GFXOPTION_PLAYAGAIN            = 21,
	GFXOPTION_UNLOCK               = 22,
	GFXOPTION_LEADERBOARD          = 23,
	GFXOPTION_TRADE                = 24,
	GFXOPTION_PURCHASEGEMS         = 25,
	GFXOPTION_MUTEPLAYER           = 26,
	GFXOPTION_UNMUTEPLAYER         = 27,
	GFXOPTION_REROLL_QUEST         = 28,
	GFXOPTION_CLAIM_QUEST          = 29,
	GFXOPTION_CHANGEEMAIL          = 30,
	GFXOPTION_DECLINE              = 31,
	GFXOPTION_VIEWPROFILE          = 32,
	GFXOPTION_SBVIEWPROFILE        = 33,
	GFXOPTION_INVITE               = 34,
	GFXOPTION_CRAFT                = 35,
	GFXOPTION_DISENCHANT           = 36,
	GFXOPTION_MASTERYDETAILS       = 37,
	GFXOPTION_HOLDSELECT           = 38,
	GFXOPTION_VIEWCHAMPIONS        = 39,
	GFXOPTION_PURCHASE_INGAME      = 40,
	GFXOPTION_HOLDPURCHASE         = 41,
	GFXOPTION_CLEAR                = 42,
	GFXOPTION_DELETELOADOUT        = 43,
	GFXOPTION_TOGGLETAB            = 44,
	GFXOPTION_PLAY                 = 45,
	GFXOPTION_INFO                 = 46,
	GFXOPTION_RESET_TO_DEFAULTS    = 47,
	GFXOPTION_SAVE_AND_EXIT        = 48,
	GFXOPTION_ACTIVATE_BOOSTER     = 49,
	GFXOPTION_CLEAR_ALL            = 50,
	GFXOPTION_WATCH_NOW            = 51,
	GFXOPTION_EQUIP_ALL            = 52,
	GFXOPTION_NOT_NOW              = 53,
	GFXOPTION_CLAIM_REWARD         = 54,
	GFXOPTION_UNDO                 = 55,
	GFXOPTION_AUTOBUY_ON           = 56,
	GFXOPTION_AUTOBUY_OFF          = 57,
	GFXOPTION_MAX                  = 58
};


// Enum TgClient.TgGfxScene.GFXEVENT
enum class EGFXEVENT : uint8_t
{
	GFXEVENT_CLICK                 = 0,
	GFXEVENT_ROLLOVER              = 1,
	GFXEVENT_ROLLOUT               = 2,
	GFXEVENT_MAX                   = 3
};


// Enum TgClient.TgGfxScene.UIBACKGROUNDTYPE
enum class EUIBACKGROUNDTYPE : uint8_t
{
	UIBT_NONE                      = 0,
	UIBT_MAIN                      = 1,
	UIBT_CHAMPION                  = 2,
	UIBT_DECKS                     = 3,
	UIBT_SOCIAL                    = 4,
	UIBT_PROFILE                   = 5,
	UIBT_LINE                      = 6,
	UIBT_PLAIN                     = 7,
	UIBT_MAX                       = 8
};


// Enum TgClient.TgGfxScene.UISNAPPINGTYPE
enum class EUISNAPPINGTYPE : uint8_t
{
	UISNAPPING_NONE                = 0,
	UISNAPPING_TOP                 = 1,
	UISNAPPING_BOT                 = 2,
	UISNAPPING_MAX                 = 3
};


// Enum TgClient.TgGfxScene.UISCALINGTYPE
enum class EUISCALINGTYPE : uint8_t
{
	UISCALING_FITWIDE              = 0,
	UISCALING_FITTALL              = 1,
	UISCALING_OVERSIZE             = 2,
	UISCALING_NONE                 = 3,
	UISCALING_MAX                  = 4
};


// Enum TgClient.TgGfxScene.GFXFUNCTIONS
enum class EGFXFUNCTIONS : uint8_t
{
	GFXFUNC_NONE                   = 0,
	GFXFUNC_PURCHASE               = 1,
	GFXFUNC_PREVIEW                = 2,
	GFXFUNC_RESET                  = 3,
	GFXFUNC_DETAILS                = 4,
	GFXFUNC_JOIN                   = 5,
	GFXFUNC_BACK                   = 6,
	GFXFUNC_EXIT                   = 7,
	GFXFUNC_MINIMIZE               = 8,
	GFXFUNC_PLAY                   = 9,
	GFXFUNC_STORE                  = 10,
	GFXFUNC_LEFT                   = 11,
	GFXFUNC_RIGHT                  = 12,
	GFXFUNC_SELECT                 = 13,
	GFXFUNC_CARD                   = 14,
	GFXFUNC_ACCEPT                 = 15,
	GFXFUNC_SUBMIT                 = 16,
	GFXFUNC_CANCEL                 = 17,
	GFXFUNC_FRIENDS                = 18,
	GFXFUNC_REMOVE                 = 19,
	GFXFUNC_SCROLL                 = 20,
	GFXFUNC_OPTION                 = 21,
	GFXFUNC_KEY                    = 22,
	GFXFUNC_NEXT                   = 23,
	GFXFUNC_ITEM                   = 24,
	GFXFUNC_SEARCH                 = 25,
	GFXFUNC_UPGRADE                = 26,
	GFXFUNC_CHANGE                 = 27,
	GFXFUNC_CREATE                 = 28,
	GFXFUNC_CREATEGAME             = 29,
	GFXFUNC_INPUT                  = 30,
	GFXFUNC_ROTATE                 = 31,
	GFXFUNC_MAP                    = 32,
	GFXFUNC_TEAM                   = 33,
	GFXFUNC_CHANGETEAM             = 34,
	GFXFUNC_REGION                 = 35,
	GFXFUNC_SPECTATE               = 36,
	GFXFUNC_DRAFT                  = 37,
	GFXFUNC_TOGGLEMUTE             = 38,
	GFXFUNC_EQUIP                  = 39,
	GFXFUNC_INTERACTABLE           = 40,
	GFXFUNC_INTERACTABLE_SCROLL    = 41,
	GFXFUNC_TALENT                 = 42,
	GFXFUNC_PASSIVE                = 43,
	GFXFUNC_SLIDER                 = 44,
	GFXFUNC_TAB                    = 45,
	GFXFUNC_EQUIPALL               = 46,
	GFXFUNC_ALLOW3P                = 47,
	GFXFUNC_CLOSE                  = 48,
	GFXFUNC_MAX                    = 49
};


// Enum TgClient.TgGfxScene.GamepadKeys
enum class EGamepadKeys : uint8_t
{
	GAMEPAD_NONE                   = 0,
	GAMEPAD_BUTTON_A               = 1,
	GAMEPAD_BUTTON_B               = 2,
	GAMEPAD_BUTTON_X               = 3,
	GAMEPAD_BUTTON_Y               = 4,
	GAMEPAD_BUTTON_MENU            = 5,
	GAMEPAD_BUTTON_LB              = 6,
	GAMEPAD_BUTTON_RB              = 7,
	GAMEPAD_BUTTON_LT              = 8,
	GAMEPAD_BUTTON_RT              = 9,
	GAMEPAD_BUTTON_BUMPERS         = 10,
	GAMEPAD_BUTTON_L_STICK         = 11,
	GAMEPAD_BUTTON_R_STICK         = 12,
	GAMEPAD_BUTTON_DPAD_UNPRESSED  = 13,
	GAMEPAD_BUTTON_DPAD_DOWN       = 14,
	GAMEPAD_BUTTON_DPAD_LEFT       = 15,
	GAMEPAD_BUTTON_DPAD_RIGHT      = 16,
	GAMEPAD_BUTTON_DPAD_UP         = 17,
	GAMEPAD_BUTTON_VIEW            = 18,
	GAMEPAD_BUTTON_L_STICK_ALL_AXIS = 19,
	GAMEPAD_BUTTON_L_STICK_X_AXIS  = 20,
	GAMEPAD_BUTTON_L_STICK_Y_AXIS  = 21,
	GAMEPAD_BUTTON_R_STICK_ALL_AXIS = 22,
	GAMEPAD_BUTTON_R_STICK_X_AXIS  = 23,
	GAMEPAD_BUTTON_R_STICK_Y_AXIS  = 24,
	GAMEPAD_MAX                    = 25
};


// Enum TgClient.TgGfxScene.LobbyEvent
enum class ELobbyEvent : uint8_t
{
	LOBBY_EVENT_ENTER_QUEUE        = 0,
	LOBBY_EVENT_CHAMPION_LOCKED_IN = 1,
	LOBBY_EVENT_EVERYONE_LOCKED_IN = 2,
	LOBBY_EVENT_REENTER_LOBBY      = 3,
	LOBBY_EVENT_MAX                = 4
};


// Enum TgClient.TgGfxFriendManagement.EFriendTabs
enum class EFriendTabs : uint8_t
{
	FRT_CURRENT_FRIENDS            = 0,
	FRT_REQUESTS                   = 1,
	FRT_RECENT                     = 2,
	FRT_CLAN                       = 3,
	FRT_BLOCKED                    = 4,
	FRT_MAX                        = 5
};


// Enum TgClient.TgLobbyHUD.LobbyHudState
enum class ELobbyHudState : uint8_t
{
	LHS_None                       = 0,
	LHS_Offline                    = 1,
	LHS_Lobby                      = 2,
	LHS_Match                      = 3,
	LHS_Summary                    = 4,
	LHS_MAX                        = 5
};


// Enum TgClient.TgLobbyHUD.UIHeaderState
enum class EUIHeaderState : uint8_t
{
	UIHS_NONE                      = 0,
	UIHS_HOME                      = 1,
	UIHS_PLAY                      = 2,
	UIHS_SHOP                      = 3,
	UIHS_CARD                      = 4,
	UIHS_MAX                       = 5
};


// Enum TgClient.TgLobbyHUD.UIMapFrame
enum class EUIMapFrame : uint8_t
{
	UIMF_NONE                      = 0,
	UIMF_ENCHANTED_FOREST          = 1,
	UIMF_TEMPLE_RUINS              = 2,
	UIMF_OUTPOST                   = 3,
	UIMF_GLACIER_KEEP              = 4,
	UIMF_SERPENT_TEMPLE            = 5,
	UIMF_SINISTRAL                 = 6,
	UIMF_ARENA                     = 7,
	UIMF_DEATHGATE                 = 8,
	UIMF_DISTRICT                  = 9,
	UIMF_GLACIER_KEEP_V2           = 10,
	UIMF_MAX                       = 11
};


// Enum TgClient.TgMiniMap.TgMapOrientation
enum class ETgMapOrientation : uint8_t
{
	TMO_NORMAL                     = 0,
	TMO_ROTATE                     = 1,
	TMO_MAX                        = 2
};


// Enum TgClient.TgMiniMap.MiniMapIconLayer
enum class EMiniMapIconLayer : uint8_t
{
	MMap_Layer_Enemy_Deployable    = 0,
	MMap_Layer_Friendly_Deployable = 1,
	MMap_Layer_Enemy_Bot           = 2,
	MMap_Layer_Friendly_Bot        = 3,
	MMap_Layer_Enemy_Player        = 4,
	MMap_Layer_Friendly_Player     = 5,
	MMap_Layer_Neutral_Factory     = 6,
	MMap_Layer_Friendly_Factory    = 7,
	MMap_Layer_Enemy_Factory       = 8,
	MMap_Layer_Neutral_CapturePoint = 9,
	MMap_Layer_Enemy_CapturePoint  = 10,
	MMap_Layer_Friendly_CapturePoint = 11,
	MMap_Layer_Targeting           = 12,
	MMap_Layer_Local_Player_Pet    = 13,
	MMap_Layer_Local_Player        = 14,
	MMap_Layer_MAX                 = 15
};


// Enum TgClient.TgMiniMap.MiniMapPortalLayer
enum class EMiniMapPortalLayer : uint8_t
{
	MMap_Portal_Layer_Enemy        = 0,
	MMap_Portal_Layer_Friendly     = 1,
	MMap_Portal_Layer_MAX          = 2
};


// Enum TgClient.TgMiniMap.MinimapDisplayType
enum class EMinimapDisplayType : uint8_t
{
	MDT_Friendly                   = 0,
	MDT_Enemy                      = 1,
	MDT_FriendlyCB                 = 2,
	MDT_EnemyCB                    = 3,
	MDT_Neutral                    = 4,
	MDT_Pending                    = 5,
	MDT_MAX                        = 6
};


// Enum TgClient.UIData_Quest.QuestType
enum class EQuestType : uint8_t
{
	EQT_Daily                      = 0,
	EQT_Collection                 = 1,
	EQT_Special                    = 2,
	EQT_Training                   = 3,
	EQT_ItemQuest                  = 4,
	EQT_Unique                     = 5,
	EQT_Twitch                     = 6,
	EQT_HnHEvent                   = 7,
	EQT_MAX                        = 8
};


// Enum TgClient.TgSetting.SETTING_TYPE
enum class ESETTING_TYPE : uint8_t
{
	SET_RESOLUTION                 = 0,
	SET_ASPECTRATIO                = 1,
	SET_SCREENTYPE                 = 2,
	SET_ANTIALIASING               = 3,
	SET_VERTICALSYNC               = 4,
	SET_DETAILWORLD                = 5,
	SET_DETAILSHADOW               = 6,
	SET_DETAILTEXTURE              = 7,
	SET_DETAILPARTICLE             = 8,
	SET_SHADERQUALITY              = 9,
	SET_GAMMALEVEL                 = 10,
	SET_FOV                        = 11,
	SET_SAFEFRAME                  = 12,
	SET_HUDMINIMAP                 = 13,
	SET_HUDTEAMS                   = 14,
	SET_HUDDAMAGE                  = 15,
	SET_HUDSKILLS                  = 16,
	SET_HUDSKILLSORDER             = 17,
	SET_HUDCOMBATLOG               = 18,
	SET_HUDAUTOLEVEL               = 19,
	SET_HUDHEALTHBAR               = 20,
	SET_HUDBLOOM                   = 21,
	SET_HUDCOLOR                   = 22,
	SET_HUDRETICLE                 = 23,
	SET_VOLUMEMASTER               = 24,
	SET_VOLUMEEFFECTS              = 25,
	SET_VOLUMEMUSIC                = 26,
	SET_VOLUMEVOICE                = 27,
	SET_VOLUMENOTIFY               = 28,
	SET_MOUSEINVERT                = 29,
	SET_MOUSESMOOTH                = 30,
	SET_ALLOWGAMEPAD               = 31,
	SET_MOUSESENSITIVITY           = 32,
	SET_XAXISSENSITIVITY           = 33,
	SET_YAXISSENSITIVITY           = 34,
	SET_AIMACCELMODE               = 35,
	SET_AIMACCELBOOST              = 36,
	SET_GAMEPADINVERT              = 37,
	SET_AIMASSISTFRICTION          = 38,
	SET_AIMASSISTMAGNET            = 39,
	SET_DEADZONEINNER              = 40,
	SET_DEADZONEOUTER              = 41,
	SET_SHOWGAMETIPS               = 42,
	SET_SPECTATE                   = 43,
	SET_SPECTATORPLAYERICONS       = 44,
	SET_SPECTATORSHOWITEMS         = 45,
	SET_SPECTATORBLUETEAMSERIESSCORE = 46,
	SET_SPECTATORREDTEAMSERIESSCORE = 47,
	SET_CONTROLICONSTYLE           = 48,
	SET_HAPTICFEEDBACK             = 49,
	SET_HUDTEAMUI                  = 50,
	SET_VOLUMEVOICECHAT            = 51,
	SET_VOLUMEVOICECHATMIC         = 52,
	SET_ENABLEVOICECHAT            = 53,
	SET_USEVOICECHATPUSHTOTALK     = 54,
	SET_TOGGLEZOOM                 = 55,
	SET_AUDIOPANNING               = 56,
	SET_SCOPESENSITIVITY           = 57,
	SET_RETICLECHANGE              = 58,
	SET_USEPROFANITYFILTER         = 59,
	SET_HEALFEED                   = 60,
	SET_D3D11                      = 61,
	SET_RESOLUTIONSCALE            = 62,
	SET_VOLUMECHARACTER            = 63,
	SET_SHOWLIVEVIDEO_UNUSED       = 64,
	SET_SHOWCAUTERIZEHEALTHBAR     = 65,
	SET_SHOWCCARDCOOLDOWNS         = 66,
	SET_HUDTEAMDEATHMARKERS        = 67,
	SET_HAPTICSTRENGTH             = 68,
	SET_CROSSPLAY                  = 69,
	SET_GYRO                       = 70,
	SET_GYROSENSITIVITYX           = 71,
	SET_GYROSENSITIVITYY           = 72,
	SET_COLORBLINDMODE             = 73,
	SET_CROSSPLAYCOMBINED          = 74,
	SET_CROSSINPUTMETHOD           = 75,
	SET_DONOTDISTURB               = 76,
	SET_PUBLICPROFILE              = 77,
	SET_COLORBLIND_INTENSITY       = 78,
	SET_GYROAIMASSIST              = 79,
	SET_VGSTYPE                    = 80,
	SET_SCOREBOARDTYPE             = 81,
	SET_MAX                        = 82
};


// Enum TgClient.TgSetting.SETTING_BINARY
enum class ESETTING_BINARY : uint8_t
{
	SEB_DISABLED                   = 0,
	SEB_ENABLED                    = 1,
	SEB_MAX                        = 2
};


// Enum TgClient.TgSetting.SETTING_SCREENTYPE
enum class ESETTING_SCREENTYPE : uint8_t
{
	SST_WINDOWED                   = 0,
	SST_BORDERLESS                 = 1,
	SST_FULLSCREEN                 = 2,
	SST_MAX                        = 3
};


// Enum TgClient.TgSetting.SETTING_ANTIALIASING
enum class ESETTING_ANTIALIASING : uint8_t
{
	SAA_OFF                        = 0,
	SAA_TWO                        = 1,
	SAA_FOUR                       = 2,
	SAA_EIGHT                      = 3,
	SAA_MAX                        = 4
};


// Enum TgClient.TgSetting.OPTION_DETAILLEVEL
enum class EOPTION_DETAILLEVEL : uint8_t
{
	SDL_LOWEST                     = 0,
	SDL_LOW                        = 1,
	SDL_MEDIUM                     = 2,
	SDL_HIGH                       = 3,
	SDL_MAX                        = 4
};


// Enum TgClient.TgSetting.SETTING_AIMACCELMODE
enum class ESETTING_AIMACCELMODE : uint8_t
{
	SAIM_DYNAMIC                   = 0,
	SAIM_CLASSIC                   = 1,
	SAIM_PRECISION                 = 2,
	SAIM_MAX                       = 3
};


// Enum TgClient.TgSetting.SETTING_DEADZONESIZE
enum class ESETTING_DEADZONESIZE : uint8_t
{
	SDZS_MINIMUM                   = 0,
	SDZS_SMALL                     = 1,
	SDZS_MEDIUM                    = 2,
	SDZS_LARGE                     = 3,
	SDZS_MAX                       = 4
};


// Enum TgClient.TgSetting.SETTING_AUDIOPANNING
enum class ESETTING_AUDIOPANNING : uint8_t
{
	SAP_SPEAKERS                   = 0,
	SAP_HEADPHONES                 = 1,
	SAP_MAX                        = 2
};


// Enum TgClient.TgSetting.SETTING_SCOREBOARDTYPE
enum class ESETTING_SCOREBOARDTYPE : uint8_t
{
	SSCT_DEFAULT                   = 0,
	SSCT_ADVANCED                  = 1,
	SSCT_MAX                       = 2
};


// Enum TgClient.TgSetting.SETTING_VGSTYPE
enum class ESETTING_VGSTYPE : uint8_t
{
	SVGST_DEFAULT                  = 0,
	SVGST_RADIAL                   = 1,
	SVGST_TEXT                     = 2,
	SVGST_LEGACY                   = 3,
	SVGST_MAX                      = 4
};


// Enum TgClient.TgSettingsManager.ESettingsValidationError
enum class ESettingsValidationError : uint8_t
{
	ESVE_None                      = 0,
	ESVE_NoGamepad                 = 1,
	ESVE_NoMouse                   = 2,
	ESVE_NoKeyboard                = 3,
	ESVE_NotAllowed                = 4,
	ESVE_NoChangeNow               = 5,
	ESVE_CrossValidationFailed     = 6,
	ESVE_MAX                       = 7
};


// Enum TgClient.TgStreamManager.STREAMTYPE
enum class ESTREAMTYPE : uint8_t
{
	VST_NONE                       = 0,
	VST_HIREZ                      = 1,
	VST_TWITCH                     = 2,
	VST_TRAINING                   = 3,
	VST_COMMUNITY                  = 4,
	VST_NEWS                       = 5,
	VST_MAX                        = 6
};


// Enum TgClient.UIChatScene.SHORTCUT_COMMANDS
enum class ESHORTCUT_COMMANDS : uint8_t
{
	CHAT_COMMAND_R                 = 0,
	CHAT_COMMAND_REPLY             = 1,
	CHAT_COMMAND_W                 = 2,
	CHAT_COMMAND_WHISPER           = 3,
	CHAT_COMMAND_MAX               = 4
};


// Enum TgClient.UIChatScene.AUTOCOMPLETE_STATE
enum class EAUTOCOMPLETE_STATE : uint8_t
{
	NOTACTIVE                      = 0,
	STANDBY                        = 1,
	PARAM_ONE                      = 2,
	PARAM_TWO                      = 3,
	AUTOCOMPLETE_STATE_MAX         = 4
};


// Enum TgClient.UIDataItem.SimplifiedItemObtainabilityValue
enum class ESimplifiedItemObtainabilityValue : uint8_t
{
	SIOV_Normal                    = 0,
	SIOV_Limited                   = 1,
	SIOV_Exclusive                 = 2,
	SIOV_Mastery                   = 3,
	SIOV_Quest                     = 4,
	SIOV_VIPReward                 = 5,
	SIOV_Unlimited                 = 6,
	SIOV_MAX                       = 7
};


// Enum TgClient.UIDataItem.AbilityModifiedByDevice
enum class EAbilityModifiedByDevice : uint8_t
{
	AMBD_Armor                     = 0,
	AMBD_Weapon                    = 1,
	AMBD_AltFire                   = 2,
	AMBD_Ability                   = 3,
	AMBD_Movement                  = 4,
	AMBD_Ultimate                  = 5,
	AMBD_MAX                       = 6
};


// Enum TgClient.UIDataItem.UIChampionItemSort
enum class EUIChampionItemSort : uint8_t
{
	UICIS_Default                  = 0,
	UICIS_OWNED                    = 1,
	UICIS_Crystals                 = 2,
	UICIS_Gold                     = 3,
	UICIS_Mixer                    = 4,
	UICIS_Chest                    = 5,
	UICIS_BattlePass               = 6,
	UICIS_DLC                      = 7,
	UICIS_Event                    = 8,
	UICIS_Limited                  = 9,
	UICIS_Exclusive                = 10,
	UICIS_Mastery                  = 11,
	UICIS_Vault                    = 12,
	UICIS_Promo                    = 13,
	UICIS_Rent                     = 14,
	UICIS_Unknown                  = 15,
	UICIS_MAX                      = 16
};


// Enum TgClient.UIDataItem.PrimaryObtainabilitySource
enum class EPrimaryObtainabilitySource : uint8_t
{
	POS_None                       = 0,
	POS_IsOwned                    = 1,
	POS_Rent                       = 2,
	POS_Purchase                   = 3,
	POS_Chest                      = 4,
	POS_BattlePass                 = 5,
	POS_Event                      = 6,
	POS_Vault                      = 7,
	POS_Mastery                    = 8,
	POS_Promo                      = 9,
	POS_Mixer                      = 10,
	POS_DLC                        = 11,
	POS_Bounty                     = 12,
	POS_MAX                        = 13
};


// Enum TgClient.UIComponent_BattlePassHome.UIHBATTLEPASSHOME_STATE
enum class EUIHBATTLEPASSHOME_STATE : uint8_t
{
	UIBPHS_FREETRACK               = 0,
	UIBPHS_ENCOREWARNING           = 1,
	UIBPHS_MAX                     = 2
};


// Enum TgClient.UIData_LobbySlotItem.UIChampionCustomizeState
enum class EUIChampionCustomizeState : uint8_t
{
	UICCS_Body                     = 0,
	UICCS_Weapon                   = 1,
	UICCS_Emote                    = 2,
	UICCS_MVPPose                  = 3,
	UICCS_Mount                    = 4,
	UICCS_Spray                    = 5,
	UICCS_DeathStamp               = 6,
	UICCS_MAX                      = 7
};


// Enum TgClient.UIComponent_ChampionSkins.UIChampionEquipTab
enum class EUIChampionEquipTab : uint8_t
{
	UICET_SKIN                     = 0,
	UICET_WEAPON                   = 1,
	UICET_EMOTE                    = 2,
	UICET_MVPPOSE                  = 3,
	UICET_MAX                      = 4
};


// Enum TgClient.UIComponent_ChampionSkins.UIChampionSkinsButtonAction
enum class EUIChampionSkinsButtonAction : uint8_t
{
	UICSBA_None                    = 0,
	UICSBA_Purchase                = 1,
	UICSBA_Equip                   = 2,
	UICSBA_Chest                   = 3,
	UICSBA_Battlepass              = 4,
	UICSBA_Collection              = 5,
	UICSBA_Event                   = 6,
	UICSBA_ChampUnlock             = 7,
	UICSBA_MAX                     = 8
};


// Enum TgClient.UIComponent_Currency.UICCurr_DisplayType
enum class EUICCurr_DisplayType : uint8_t
{
	UICCDT_Price                   = 0,
	UICCDT_OriginalPrice           = 1,
	UICCDT_Quantity                = 2,
	UICCDT_MAX                     = 3
};


// Enum TgClient.UIComponent_DLCPack.AdTextureSize
enum class EAdTextureSize : uint8_t
{
	ATS_DEFAULT                    = 0,
	ATS_SMALL                      = 1,
	ATS_MAX                        = 2
};


// Enum TgClient.UIComponent_HealFeedEntry.HealDisplayType
enum class EHealDisplayType : uint8_t
{
	HDT_RawHealing                 = 0,
	HDT_NoOverheal                 = 1,
	HDT_SymbolOnly                 = 2,
	HDT_MAX                        = 3
};


// Enum TgClient.UIComponent_HealthBar.EHealthTickType
enum class EHealthTickType : uint8_t
{
	EHTT_Health                    = 0,
	EHTT_Armor                     = 1,
	EHTT_Shield                    = 2,
	EHTT_Shadow                    = 3,
	EHTT_Damage                    = 4,
	EHTT_BloodHealth               = 5,
	EHTT_MAX                       = 6
};


// Enum TgClient.UIComponent_HealthBar.EHealthTickColor_Player
enum class EHealthTickColor_Player : uint8_t
{
	EHTCP_Invalid                  = 0,
	EHTCP_Blue                     = 1,
	EHTCP_Red                      = 2,
	EHTCP_Purple                   = 3,
	EHTCP_Orange                   = 4,
	EHTCP_Yellow                   = 5,
	EHTCP_Shadow                   = 6,
	EHTCP_Cauterized               = 7,
	EHTCP_Rainbow                  = 8,
	EHTCP_Armor                    = 9,
	EHTCP_DeepRed                  = 10,
	EHTCP_BloodHealth              = 11,
	EHTCP_MAX                      = 12
};


// Enum TgClient.UIComponent_HealthBar_Overlay.EHealthTickColor_Overlay
enum class EHealthTickColor_Overlay : uint8_t
{
	EHTCO_Invalid                  = 0,
	EHTCO_Blue                     = 1,
	EHTCO_Red                      = 2,
	EHTCO_Purple                   = 3,
	EHTCO_Orange                   = 4,
	EHTCO_Yellow                   = 5,
	EHTCO_White                    = 6,
	EHTCO_Green                    = 7,
	EHTCO_DarkYellow               = 8,
	EHTCO_DarkGreen                = 9,
	EHTCO_DarkBlue                 = 10,
	EHTCO_DarkRed                  = 11,
	EHTCO_DarkOrange               = 12,
	EHTCO_CauterizedLight          = 13,
	EHTCO_CauterizedDark           = 14,
	EHTCO_MAX                      = 15
};


// Enum TgClient.UIComponent_ItemStatsEntry.ItemStatCategory
enum class EItemStatCategory : uint8_t
{
	ISC_Unknown                    = 0,
	ISC_Animation                  = 1,
	ISC_VFX                        = 2,
	ISC_Audio                      = 3,
	ISC_UniqueDeployable           = 4,
	ISC_DeathVFX                   = 5,
	ISC_StatDisplay                = 6,
	ISC_MAX                        = 7
};


// Enum TgClient.UIComponent_MatchDisplay.EUICMatchDisplayTabType
enum class EUICMatchDisplayTabType : uint8_t
{
	EUICMDT_Stats                  = 0,
	EUICMDT_Build                  = 1,
	EUICMDT_MAX                    = 2
};


// Enum TgClient.UIComponent_OracleSoulCharges.SoulChargesAnimEvent
enum class ESoulChargesAnimEvent : uint8_t
{
	SoulChargesAE_Show             = 0,
	SoulChargesAE_Hide             = 1,
	SoulChargesAE_Increase         = 2,
	SoulChargesAE_Decrease         = 3,
	SoulChargesAE_MaxStacks        = 4,
	SoulChargesAE_MAX              = 5
};


// Enum TgClient.UIComponent_StoreItems.UIStoreItemTab
enum class EUIStoreItemTab : uint8_t
{
	UISIT_SKIN                     = 0,
	UISIT_WEAPON                   = 1,
	UISIT_EMOTE                    = 2,
	UISIT_MVPPOSE                  = 3,
	UISIT_AVATAR                   = 4,
	UISIT_SPRAY                    = 5,
	UISIT_MOUNT                    = 6,
	UISIT_ANNOUNCER                = 7,
	UISIT_BUNDLE                   = 8,
	UISIT_MAX                      = 9
};


// Enum TgClient.UIComponent_ChallengeToastEntry.ToastSequence
enum class EToastSequence : uint8_t
{
	TST_None                       = 0,
	TST_Idle                       = 1,
	TST_Attack                     = 2,
	TST_Sustain                    = 3,
	TST_Decay                      = 4,
	TST_Cancel                     = 5,
	TST_MAX                        = 6
};


// Enum TgClient.UIData_DailyRewardDay.RewardDayPosition
enum class ERewardDayPosition : uint8_t
{
	RDP_Collected                  = 0,
	RDP_Current                    = 1,
	RDP_Future                     = 2,
	RDP_Uncollected                = 3,
	RDP_MAX                        = 4
};


// Enum TgClient.UIData_DailyRewardDay.RewardDayType
enum class ERewardDayType : uint8_t
{
	RDT_Gold                       = 0,
	RDT_Crystals                   = 1,
	RDT_Chest                      = 2,
	RDT_Invalid                    = 3,
	RDT_MAX                        = 4
};


// Enum TgClient.UIData_LeagueTierChange.UIDLTC_PromotionType
enum class EUIDLTC_PromotionType : uint8_t
{
	UIDLTC_Promoted                = 0,
	UIDLTC_Demoted                 = 1,
	UIDLTC_MAX                     = 2
};


// Enum TgClient.UIData_LootTableItem.ITEM_STACKABLE_FORCED_OWNERSHIP_TYPE
enum class EITEM_STACKABLE_FORCED_OWNERSHIP_TYPE : uint8_t
{
	ISFOT_USE_STACKABLE_OWNERSHIP  = 0,
	ISFOT_ALWAYS_OWN_STACKABLE     = 1,
	ISFOT_NEVER_OWN_STACKABLE      = 2,
	ISFOT_MAX                      = 3
};


// Enum TgClient.UIData_Match.UIDataMatchLobbyState
enum class EUIDataMatchLobbyState : uint8_t
{
	UIDMLS_None                    = 0,
	UIDMLS_Waiting                 = 1,
	UIDMLS_Banning                 = 2,
	UIDMLS_Picking                 = 3,
	UIDMLS_WaitingForLock          = 4,
	UIDMLS_LockedIn                = 5,
	UIDMLS_LockedInChampList       = 6,
	UIDMLS_Trading                 = 7,
	UIDMLS_MatchStarting           = 8,
	UIDMLS_Spectating              = 9,
	UIDMLS_MAX                     = 10
};


// Enum TgClient.UIData_MatchInvitePlayerState.MatchInvitePlayerState
enum class EMatchInvitePlayerState : uint8_t
{
	MIPS_Waiting                   = 0,
	MIPS_JustAccepted              = 1,
	MIPS_Accepted                  = 2,
	MIPS_Failed                    = 3,
	MIPS_MAX                       = 4
};


// Enum TgClient.UIData_Queue.EUIDQCallToAction
enum class EUIDQCallToAction : uint8_t
{
	EUIDQCTA_None                  = 0,
	EUIDQCTA_NewMode               = 1,
	EUIDQCTA_NewMap                = 2,
	EUIDQCTA_MAX                   = 3
};


// Enum TgClient.UIData_RewardPanel.UIEOML_REWARD_TYPE
enum class EUIEOML_REWARD_TYPE : uint8_t
{
	UIEOMLRT_COMP_RANK             = 0,
	UIEOMLRT_CHAMP_XP              = 1,
	UIEOMLRT_ACCOUNT_XP            = 2,
	UIEOMLRT_BATTLE_PASS           = 3,
	UIEOMLRT_MAX                   = 4
};


// Enum TgClient.UIData_RewardPanelEntry.UIEOML_REWARD_ENTRY_ICON
enum class EUIEOML_REWARD_ENTRY_ICON : uint8_t
{
	UIEOMLREI_NONE                 = 0,
	UIEOMLREI_PARTYOFF             = 1,
	UIEOMLREI_PARTYON              = 2,
	UIEOMLREI_ACCOUNTOFF           = 3,
	UIEOMLREI_ACCOUNTON            = 4,
	UIEOMLREI_NETCAFE1             = 5,
	UIEOMLREI_NETCAFE2             = 6,
	UIEOMLREI_NETCAFE3             = 7,
	UIEOMLREI_MATCHBOOST           = 8,
	UIEOMLREI_VIPOFF               = 9,
	UIEOMLREI_VIPON                = 10,
	UIEOMLREI_SKINBOOST            = 11,
	UIEOMLREI_VIPTIERBOOST         = 12,
	UIEOMLREI_ACCOLADE             = 13,
	UIEOMLREI_EVENT                = 14,
	UIEOMLREI_EOMBOOST             = 15,
	UIEOMLREI_MAX                  = 16
};


// Enum TgClient.UIData_SocialAction.SAL_LIST
enum class ESAL_LIST : uint8_t
{
	SAL_CROSS_PLATFORM_FRIENDS     = 0,
	SAL_PORTAL_FRIENDS             = 1,
	SAL_ALL_FRIENDS                = 2,
	SAL_PARTY                      = 3,
	SAL_SEARCH_WAITING             = 4,
	SAL_SEARCH                     = 5,
	SAL_REFERRED                   = 6,
	SAL_REFERRERS                  = 7,
	SAL_MAX                        = 8
};


// Enum TgClient.UIData_SocialAction.SAACT_ACTION
enum class ESAACT_ACTION : uint8_t
{
	SAACT_VIEW_PROFILE             = 0,
	SAACT_ADD_FRIEND               = 1,
	SAACT_PARTY_INVITE             = 2,
	SAACT_PARTY_KICK               = 3,
	SAACT_SEND_REFERRAL            = 4,
	SAACT_REQUEST_INFO_STATS       = 5,
	SAACT_SELECT_REFERRER          = 6,
	SAACT_SEND_MESSAGE             = 7,
	SAACT_BLOCK                    = 8,
	SAACT_UNBLOCK                  = 9,
	SAACT_SPECTATE                 = 10,
	SAACT_LIVE_SPECTATE            = 11,
	SAACT_MAX                      = 12
};


// Enum TgClient.UIData_StoreItemFilter.UIStoreItemSort
enum class EUIStoreItemSort : uint8_t
{
	UISIS_Default                  = 0,
	UISIS_Newest                   = 1,
	UISIS_Champion                 = 2,
	UISIS_RarityDescending         = 3,
	UISIS_RarityAscending          = 4,
	UISIS_Name                     = 5,
	UISIS_MAX                      = 6
};


// Enum TgClient.UIData_StoreItemFilter.UIStoreChampFilter
enum class EUIStoreChampFilter : uint8_t
{
	UISCF_All                      = 0,
	UISCF_Owned                    = 1,
	UISCF_Individual               = 2,
	UISCF_MAX                      = 3
};


// Enum TgClient.UIDataAcquisition.QuestOrigin
enum class EQuestOrigin : uint8_t
{
	QO_NONE                        = 0,
	QO_FWOTD                       = 1,
	QO_MASTERY                     = 2,
	QO_VIPTIER                     = 3,
	QO_DAILYREWARD                 = 4,
	QO_DAILYQUEST                  = 5,
	QO_RANKEDREWARD                = 6,
	QO_BRREWARD                    = 7,
	QO_BATTLEPASSREWARD            = 8,
	QO_HNHEVENT                    = 9,
	QO_CHALLENGEREWARD             = 10,
	QO_SUMMEREVENT                 = 11,
	QO_HALLOWEENEVENT              = 12,
	QO_MAX                         = 13
};


// Enum TgClient.UIDataChampion.SimplifiedCardType
enum class ESimplifiedCardType : uint8_t
{
	SCT_Card                       = 0,
	SCT_BurnCard                   = 1,
	SCT_Talent                     = 2,
	SCT_MAX                        = 3
};


// Enum TgClient.UIDataGoals.QuestRewardDisplayType
enum class EQuestRewardDisplayType : uint8_t
{
	EQRDT_None                     = 0,
	EQRDT_Crystals                 = 1,
	EQRDT_Essence                  = 2,
	EQRDT_Gold                     = 3,
	EQRDT_Chest                    = 4,
	EQRDT_Card                     = 5,
	EQRDT_Item                     = 6,
	EQRDT_Texture                  = 7,
	EQRDT_MAX                      = 8
};


// Enum TgClient.UIDataLeagueTier.UIDLT_Tag
enum class EUIDLT_Tag : uint8_t
{
	UIDLT_Decays                   = 0,
	UIDLT_PlatinumQueue            = 1,
	UIDLT_NoDivisions              = 2,
	UIDLT_MAX                      = 3
};


// Enum TgClient.UIDataLoadouts.LoadoutValidationResult
enum class ELoadoutValidationResult : uint8_t
{
	LVR_Valid                      = 0,
	LVR_Invalid                    = 1,
	LVR_InvalidName                = 2,
	LVR_InvalidItem                = 3,
	LVR_ItemCountExceeded          = 4,
	LVR_ItemCountInsufficient      = 5,
	LVR_ItemQuantityExceeded       = 6,
	LVR_ItemQuantityInsufficient   = 7,
	LVR_ItemsTotalExceeded         = 8,
	LVR_ItemsTotalInsufficient     = 9,
	LVR_ContainsDuplicates         = 10,
	LVR_MAX                        = 11
};


// Enum TgClient.UIGameMoviePlayer.EUpdateModelType
enum class EUpdateModelType : uint8_t
{
	UMT_All                        = 0,
	UMT_WeaponOnly                 = 1,
	UMT_Spray                      = 2,
	UMT_MAX                        = 3
};


// Enum TgClient.UIGameMoviePlayer.EVoicePackSound
enum class EVoicePackSound : uint8_t
{
	VPS_None                       = 0,
	VPS_Unlock                     = 1,
	VPS_Select                     = 2,
	VPS_MatchStart                 = 3,
	VPS_Ultimate                   = 4,
	VPS_Random                     = 5,
	VPS_MAX                        = 6
};


// Enum TgClient.TgAudioManager.UIAudioChannel
enum class EUIAudioChannel : uint8_t
{
	UIAC_Generic                   = 0,
	UIAC_ItemPreview               = 1,
	UIAC_Acquisition               = 2,
	UIAC_MAX                       = 3
};


// Enum TgClient.UIHudCenter.UIDamageSeverity
enum class EUIDamageSeverity : uint8_t
{
	UIDAMAGE_Light                 = 0,
	UIDAMAGE_Medium                = 1,
	UIDAMAGE_Heavy                 = 2,
	UIDAMAGE_AOEMedium             = 3,
	UIDAMAGE_AOEHeavy              = 4,
	UIDAMAGE_MAX                   = 5
};


// Enum TgClient.UIHudCenter.UIAmmoType
enum class EUIAmmoType : uint8_t
{
	UIAMMO_BULLET                  = 0,
	UIAMMO_ICE                     = 1,
	UIAMMO_CELL                    = 2,
	UIAMMO_DART                    = 3,
	UIAMMO_ARROW                   = 4,
	UIAMMO_LARGE                   = 5,
	UIAMMO_SMALL                   = 6,
	UIAMMO_FLAME                   = 7,
	UIAMMO_POTION                  = 8,
	UIAMMO_SHELL                   = 9,
	UIAMMO_ROCKET                  = 10,
	UIAMMO_MAX                     = 11
};


// Enum TgClient.UIHudCenter.ECombatInfoType
enum class ECombatInfoType : uint8_t
{
	ECIT_All                       = 0,
	ECIT_Damage                    = 1,
	ECIT_Status                    = 2,
	ECIT_MAX                       = 3
};


// Enum TgClient.UIHudTeam.UIHudTeamDisplayMode
enum class EUIHudTeamDisplayMode : uint8_t
{
	TeamDisplayMode_Top            = 0,
	TeamDisplayMode_SidesWithItems = 1,
	TeamDisplayMode_SidesWithCards = 2,
	TeamDisplayMode_KDA            = 3,
	TeamDisplayMode_MAX            = 4
};


// Enum TgClient.UIHudTeam.UIHudTeamStatsMode
enum class EUIHudTeamStatsMode : uint8_t
{
	TeamStatsMode_Credits          = 0,
	TeamStatsMode_Damage           = 1,
	TeamStatsMode_Shielding        = 2,
	TeamStatsMode_Healing          = 3,
	TeamStatsMode_ObjectiveTime    = 4,
	TeamStatsMode_MAX              = 5
};


// Enum TgClient.UIHudTeam.UIHudTeamAnimGroup
enum class EUIHudTeamAnimGroup : uint8_t
{
	TeamAnimGroup_Team             = 0,
	TeamAnimGroup_Stats            = 1,
	TeamAnimGroup_MAX              = 2
};


// Enum TgClient.UIHudKillFeed.EKillFeedEntryType
enum class EKillFeedEntryType : uint8_t
{
	KFET_Kill                      = 0,
	KFET_HHPickup                  = 1,
	KFET_MAX                       = 2
};


// Enum TgClient.UIHudMenu.HUDMENU_OPTIONS
enum class EHUDMENU_OPTIONS : uint8_t
{
	UIHM_RETURNTOGAME              = 0,
	UIHM_PAUSE                     = 1,
	UIHM_SWAPLOADOUT               = 2,
	UIHM_EDITLOADOUT               = 3,
	UIHM_SETTINGS                  = 4,
	UIHM_SCOREBOARD                = 5,
	UIHM_CHANGECHAMPION            = 6,
	UIHM_SKILLS                    = 7,
	UIHM_DEATHRECAP                = 8,
	UIHM_RETURNTOLOBBY             = 9,
	UIHM_FACEBOOKLIVE              = 10,
	UIHM_QUITGAME                  = 11,
	UIHM_MAX                       = 12
};


// Enum TgClient.UIHudResult.EPlayOfTheGameState
enum class EPlayOfTheGameState : uint8_t
{
	EPOTGS_None                    = 0,
	EPOTGS_Setup                   = 1,
	EPOTGS_Intro                   = 2,
	EPOTGS_PlaybackRequested       = 3,
	EPOTGS_PlaybackStarted         = 4,
	EPOTGS_Outro                   = 5,
	EPOTGS_MAX                     = 6
};


// Enum TgClient.UIHudScoreboard.ScoreboardTabs
enum class EScoreboardTabs : uint8_t
{
	UIST_Items                     = 0,
	UIST_Loadouts                  = 1,
	UIST_Overview                  = 2,
	UIST_MAX                       = 3
};


// Enum TgClient.UIHudSkills.UIHudSkillsSpectatorMode
enum class EUIHudSkillsSpectatorMode : uint8_t
{
	SkillsSpecatorMode_Skills      = 0,
	SkillsSpecatorMode_Items       = 1,
	SkillsSpecatorMode_Cards       = 2,
	SkillsSpecatorMode_MAX         = 3
};


// Enum TgClient.UIHudSniper.KINESSA_HUD_TYPE
enum class EKINESSA_HUD_TYPE : uint8_t
{
	KINESSA_NORMAL                 = 0,
	KINESSA_VALENTINA              = 1,
	KINESSA_MAX                    = 2
};


// Enum TgClient.UIInteractable_Item.DisplayOverride
enum class EDisplayOverride : uint8_t
{
	eDO_None                       = 0,
	eDO_Owned                      = 1,
	eDO_Unowned                    = 2,
	eDO_MAX                        = 3
};


// Enum TgClient.UILogin.UILoginState
enum class EUILoginState : uint8_t
{
	UILS_NONE                      = 0,
	UILS_LOGIN_INPUT_CREDENTIALS   = 1,
	UILS_LOGIN_INPUT_ANONYMOUS     = 2,
	UILS_WAITING                   = 3,
	UILS_LOADING                   = 4,
	UILS_EULA                      = 5,
	UILS_CREATE_PLAYER_NAME        = 6,
	UILS_TUTORIAL_PROMPT           = 7,
	UILS_CREATE_NEW_ACCOUNT        = 8,
	UILS_LINK_ACCOUNT_PROMPT_GAME  = 9,
	UILS_LINK_ACCOUNT_PROMPT_HIREZ = 10,
	UILS_LINK_ACCOUNT_PROMPT_DECLINE_VERIFY = 11,
	UILS_LINK_ACCOUNT_EXISTING     = 12,
	UILS_LINK_ACCOUNT_NEW          = 13,
	UILS_TWO_FACTOR                = 14,
	UILS_TWO_FACTOR_LINK_ACCOUNT_EXISTING = 15,
	UILS_LOGGEDIN                  = 16,
	UILS_IN_LOGIN_QUEUE            = 17,
	UILS_LOGIN_WITH_QR_CODE        = 18,
	UILS_LOADING_VENDORS           = 19,
	UILS_MAX                       = 20
};


// Enum TgClient.UIProfile.LoadoutState
enum class ELoadoutState : uint8_t
{
	ELS_AVATARS                    = 0,
	ELS_TITLES                     = 1,
	ELS_LOADING_FRAMES             = 2,
	ELS_MOUNTS                     = 3,
	ELS_ANNOUNCERS                 = 4,
	ELS_SPRAYS                     = 5,
	ELS_DEATH_STAMPS               = 6,
	ELS_MUSIC_PACKS                = 7,
	ELS_DEATH_CARDS                = 8,
	ELS_MAX                        = 9
};


// Enum TgClient.UIProfile.PROFILESTATE
enum class EPROFILESTATE : uint8_t
{
	EPS_LOADOUT                    = 0,
	EPS_OVERVIEW                   = 1,
	EPS_AWARDS                     = 2,
	EPS_HISTORY                    = 3,
	EPS_MAX                        = 4
};


// Enum TgClient.UIProfile.EHistoryResult
enum class EHistoryResult : uint8_t
{
	EHR_WIN                        = 0,
	EHR_LOSS                       = 1,
	EHR_LEFT                       = 2,
	EHR_MAX                        = 3
};


// Enum TgClient.UIScene_UIAsiaticEvent.UIAsiaticEventTab
enum class EUIAsiaticEventTab : uint8_t
{
	UIAET_HOME                     = 0,
	UIAET_QUESTS                   = 1,
	UIAET_INFO                     = 2,
	UIAET_MAX                      = 3
};


// Enum TgClient.UIScene_UIBattlePass.UIBattlePassOwnershipState
enum class EUIBattlePassOwnershipState : uint8_t
{
	UIBPOS_Free                    = 0,
	UIBPOS_Paid                    = 1,
	UIBPOS_MAX                     = 2
};


// Enum TgClient.UIScene_UIChampion.UICHAMPION_STATE
enum class EUICHAMPION_STATE : uint8_t
{
	UICS_SKILLS                    = 0,
	UICS_SKINS                     = 1,
	UICS_WEAPONS                   = 2,
	UICS_EMOTES                    = 3,
	UICS_MVPPOSES                  = 4,
	UICS_LOADOUTS                  = 5,
	UICS_OVERVIEW                  = 6,
	UICS_MAX                       = 7
};


// Enum TgClient.UIScene_UIChampionSelect.UICHAMPIONSELECT_SORT_TYPES
enum class EUICHAMPIONSELECT_SORT_TYPES : uint8_t
{
	UICSST_OWNERSHIPLEVEL          = 0,
	UICSST_OWNERSHIPNAME           = 1,
	UICSST_LEVEL                   = 2,
	UICSST_NAME                    = 3,
	UICSST_MAX                     = 4
};


// Enum TgClient.UIScene_UIEditLoadouts.UIEditLoadoutsState
enum class EUIEditLoadoutsState : uint8_t
{
	UIELS_Edit                     = 0,
	UIELS_CardSelect               = 1,
	UIELS_Rename                   = 2,
	UIELS_MAX                      = 3
};


// Enum TgClient.UIScene_UIEditLoadouts.UIEditLoadoutsImportState
enum class EUIEditLoadoutsImportState : uint8_t
{
	UIELIS_None                    = 0,
	UIELIS_SearchType              = 1,
	UIELIS_SearchPlayerSelect      = 2,
	UIELIS_SearchInput             = 3,
	UIELIS_ImportSelect            = 4,
	UIELIS_MAX                     = 5
};


// Enum TgClient.UIScene_UIEndOfMatchLobby.UIEOML_STATE
enum class EUIEOML_STATE : uint8_t
{
	UIEOML_BESTCLASS               = 0,
	UIEOML_REWARDS                 = 1,
	UIEOML_TRIALS                  = 2,
	UIEOML_QUESTS                  = 3,
	UIEOML_SCOREBOARD              = 4,
	UIEOML_MAX                     = 5
};


// Enum TgClient.UIScene_UIFacebookLivePopup.FACEBOOK_OPTIONS
enum class EFACEBOOK_OPTIONS : uint8_t
{
	FCO_WEBCAM                     = 0,
	FCO_MICROPHONE                 = 1,
	FCO_AUDIO                      = 2,
	FCO_MAX                        = 3
};


// Enum TgClient.UIScene_UIGameMenu.GAMEMENU_OPTIONS
enum class EGAMEMENU_OPTIONS : uint8_t
{
	UIGM_RESUME                    = 0,
	UIGM_DAILYREWARDS              = 1,
	UIGM_NOTIFICATION              = 2,
	UIGM_SETTINGS                  = 3,
	UIGM_FACEBOOK                  = 4,
	UIGM_CREDITS                   = 5,
	UIGM_QUITGAME                  = 6,
	UIGM_MAX                       = 7
};


// Enum TgClient.UIScene_UIHalloweenEvent.UIHALLOWEEN_STATE
enum class EUIHALLOWEEN_STATE : uint8_t
{
	UIHALLOWEEN_HOME               = 0,
	UIHALLOWEEN_STORE              = 1,
	UIHALLOWEEN_VAULT              = 2,
	UIHALLOWEEN_OVERVIEW           = 3,
	UIHALLOWEEN_MAX                = 4
};


// Enum TgClient.UIScene_UIHnHAcquisition.EHnHAcquisitionState
enum class EHnHAcquisitionState : uint8_t
{
	EHNHS_None                     = 0,
	EHNHS_Blessing                 = 1,
	EHNHS_Acquisition              = 2,
	EHNHS_Seal                     = 3,
	EHNHS_MAX                      = 4
};


// Enum TgClient.UIScene_UIHnHEvent.UIHNH_STATE
enum class EUIHNH_STATE : uint8_t
{
	UIHNH_HOME                     = 0,
	UIHNH_STORE                    = 1,
	UIHNH_QUESTS                   = 2,
	UIHNH_OVERVIEW                 = 3,
	UIHNH_MAX                      = 4
};


// Enum TgClient.UIScene_UIHome.HomeScreenPanel
enum class EHomeScreenPanel : uint8_t
{
	HSP_Play                       = 0,
	HSP_Champ                      = 1,
	HSP_BattlePass                 = 2,
	HSP_ChallengeSystem            = 3,
	HSP_Store                      = 4,
	HSP_Quests                     = 5,
	HSP_Profile                    = 6,
	HSP_SimulMedia                 = 7,
	HSP_Event                      = 8,
	HSP_MAX                        = 9
};


// Enum TgClient.UIScene_UIHome.EFeaturedSectionType
enum class EFeaturedSectionType : uint8_t
{
	FST_None                       = 0,
	FST_ChampionUpdate             = 1,
	FST_GoToChest                  = 2,
	FST_Event                      = 3,
	FST_GoToBattlePass             = 4,
	FST_GoToItem                   = 5,
	FST_Calendar                   = 6,
	FST_MAX                        = 7
};


// Enum TgClient.UIScene_UIHudBurns.ItemStoreCardTrack
enum class EItemStoreCardTrack : uint8_t
{
	ISCT_UNKNOWN                   = 0,
	ISCT_DAMAGE                    = 1,
	ISCT_UNIVERSAL                 = 2,
	ISCT_SUPPORT                   = 3,
	ISCT_TANK                      = 4,
	ISCT_MAX                       = 5
};


// Enum TgClient.UIScene_UIHudSkills.HudSkillsMarkTypes
enum class EHudSkillsMarkTypes : uint8_t
{
	MARK_None                      = 0,
	MARK_Corvus                    = 1,
	MARK_Vampire_Enemy             = 2,
	MARK_Vampire_Ally              = 3,
	MARK_Lex                       = 4,
	MARK_MAX                       = 5
};


// Enum TgClient.UIScene_UIHudSkills3P.HudSkills3PMarkTypes
enum class EHudSkills3PMarkTypes : uint8_t
{
	MARK_3P_None                   = 0,
	MARK_3P_Corvus                 = 1,
	MARK_3P_Vampire_Enemy          = 2,
	MARK_3P_Vampire_Ally           = 3,
	MARK_3P_Lex                    = 4,
	MARK_3P_MAX                    = 5
};


// Enum TgClient.UIScene_UIHudVGS.VGS_GamepadItem
enum class EVGS_GamepadItem : uint8_t
{
	VGSGP_L                        = 0,
	VGSGP_R                        = 1,
	VGSGP_Y                        = 2,
	VGSGP_X                        = 3,
	VGSGP_B                        = 4,
	VGSGP_A                        = 5,
	VGSGP_MAX                      = 6
};


// Enum TgClient.UIScene_UINotificationCenter.UINOTIFICATIONCENTER_STATE
enum class EUINOTIFICATIONCENTER_STATE : uint8_t
{
	UINCS_NOTIFICATIONS            = 0,
	UINCS_MAX                      = 1
};


// Enum TgClient.UIScene_UIPlay.UIPLAYSTATE
enum class EUIPLAYSTATE : uint8_t
{
	UIPS_QUICKPLAY                 = 0,
	UIPS_RANKED                    = 1,
	UIPS_TRAINING                  = 2,
	UIPS_CUSTOM                    = 3,
	UIPS_DEVQUEUES                 = 4,
	UIPS_MAX                       = 5
};


// Enum TgClient.UIScene_UIQuests.QuestPanel
enum class EQuestPanel : uint8_t
{
	QUEST_Daily                    = 0,
	QUEST_Special                  = 1,
	QUEST_Lore                     = 2,
	QUEST_Prime                    = 3,
	QUEST_MAX                      = 4
};


// Enum TgClient.UIScene_UIRadialMenu.RadialMenuDir
enum class ERadialMenuDir : uint8_t
{
	RMD_E                          = 0,
	RMD_S                          = 1,
	RMD_W                          = 2,
	RMD_N                          = 3,
	RMD_Center                     = 4,
	RMD_MAX                        = 5
};


// Enum TgClient.UIScene_UISocial.UISOCIAL_TAB
enum class EUISOCIAL_TAB : uint8_t
{
	UISOCIAL_PARTY                 = 0,
	UISOCIAL_FRIENDS               = 1,
	UISOCIAL_REFERRALS             = 2,
	UISOCIAL_MAX                   = 3
};


// Enum TgClient.UIScene_UIStore.UISTORE_STATE
enum class EUISTORE_STATE : uint8_t
{
	UISS_HIDDENDLC                 = 0,
	UISS_DLC                       = 1,
	UISS_CHESTS                    = 2,
	UISS_BOUNTY                    = 3,
	UISS_ACCOUNT                   = 4,
	UISS_MAX                       = 5
};


// Enum TgClient.UIScene_UISummerEvent.UISUMMER_STATE
enum class EUISUMMER_STATE : uint8_t
{
	UISUMMER_HOME                  = 0,
	UISUMMER_VAULT                 = 1,
	UISUMMER_REWARDS               = 2,
	UISUMMER_OVERVIEW              = 3,
	UISUMMER_MAX                   = 4
};


// Enum TgClient.UISettings.UISETTINGS_CATEGORY
enum class EUISETTINGS_CATEGORY : uint8_t
{
	UISC_VIDEO                     = 0,
	UISC_AUDIO                     = 1,
	UISC_HUD                       = 2,
	UISC_CONTROLS                  = 3,
	UISC_GAMEPAD                   = 4,
	UISC_KEYBINDS                  = 5,
	UISC_SPECTATOR                 = 6,
	UISC_MAX                       = 7
};


// Enum TgClient.UIWorldOverlay.EDeployableOverlayType
enum class EDeployableOverlayType : uint8_t
{
	EDOT_Targetable                = 0,
	EDOT_Player                    = 1,
	EDOT_Deployable                = 2,
	EDOT_MAX                       = 3
};


// Enum TgClient.UIWorldOverlay.EDeployableOverlayOwnershipType
enum class EDeployableOverlayOwnershipType : uint8_t
{
	EDOOT_Mine                     = 0,
	EDOOT_Friendly                 = 1,
	EDOOT_Enemy                    = 2,
	EDOOT_Neutral                  = 3,
	EDOOT_MAX                      = 4
};


// Enum TgClient.UIWorldOverlay.EDeployableOverlayInternalState
enum class EDeployableOverlayInternalState : uint8_t
{
	EDOIS_None                     = 0,
	EDOIS_Created                  = 1,
	EDOIS_Idle                     = 2,
	EDOIS_Active                   = 3,
	EDOIS_TimedOut                 = 4,
	EDOIS_Destroyed                = 5,
	EDOIS_Inactive                 = 6,
	EDOIS_MAX                      = 7
};


// Enum TgClient.UIWorldOverlay.EPlayerIconState
enum class EPlayerIconState : uint8_t
{
	EPIS_Hidden                    = 0,
	EPIS_Icon                      = 1,
	EPIS_Respawn                   = 2,
	EPIS_MAX                       = 3
};


// Enum TgClient.UIWorldOverlay.EOverlayPoolType
enum class EOverlayPoolType : uint8_t
{
	EOPT_Critical                  = 0,
	EOPT_Damage                    = 1,
	EOPT_Healing                   = 2,
	EOPT_MAX                       = 3
};


// Enum TgClient.UIComponent_ChestItemButton.UICHESTITEM_BACKGROUND_FRAME
enum class EUICHESTITEM_BACKGROUND_FRAME : uint8_t
{
	UICIBF_NONE                    = 0,
	UICIBF_CHESTITEM               = 1,
	UICIBF_GIFTITEM                = 2,
	UICIBF_DISABLEDITEM            = 3,
	UICIBF_MAX                     = 4
};


// Enum TgClient.UIComponent_Chests.UICHESTS_STATE
enum class EUICHESTS_STATE : uint8_t
{
	UICHS_CHESTLIST                = 0,
	UICHS_CHESTDETAILS             = 1,
	UICHS_GIFTDETAILS              = 2,
	UICHS_OPENEDITEMLOADING        = 3,
	UICHS_OPENEDITEMDISPLAY        = 4,
	UICHS_MAX                      = 5
};


// Enum TgClient.UIComponent_CorrupterCorruptionUI.CorruptionChargesAnimEvent
enum class ECorruptionChargesAnimEvent : uint8_t
{
	CorruptionChargesAE_Show       = 0,
	CorruptionChargesAE_Hide       = 1,
	CorruptionChargesAE_Increase   = 2,
	CorruptionChargesAE_Decrease   = 3,
	CorruptionChargesAE_MaxStacks  = 4,
	CorruptionChargesAE_MAX        = 5
};


// Enum TgClient.UIComponent_PlayCustom.UICustomGameState
enum class EUICustomGameState : uint8_t
{
	UICGS_GAME_LIST                = 0,
	UICGS_CREATING_MAP             = 1,
	UICGS_CREATING_SETTINGS        = 2,
	UICGS_JOINING                  = 3,
	UICGS_LOBBY                    = 4,
	UICGS_GAME_STARTING            = 5,
	UICGS_MAX                      = 6
};


// Enum TgClient.UIComponent_HeaderTabRotating.UIHEADERTABROTATING_DISPLAY_STATE
enum class EUIHEADERTABROTATING_DISPLAY_STATE : uint8_t
{
	UIHTRDS_ICONONLY               = 0,
	UIHTRDS_TEXTONLY               = 1,
	UIHTRDS_ICONANDTEXT            = 2,
	UIHTRDS_MAX                    = 3
};


// Enum TgClient.UIComponent_ItemHint.UI_ITEM_HINT_TYPE
enum class EUI_ITEM_HINT_TYPE : uint8_t
{
	UIIHT_NONE                     = 0,
	UIIHT_NEW                      = 1,
	UIIHT_HOT                      = 2,
	UIIHT_SALE                     = 3,
	UIIHT_MAX                      = 4
};


// Enum TgClient.UIComponent_MatchLobbyChampion.UICMLCState
enum class EUICMLCState : uint8_t
{
	UICMLC_Hidden                  = 0,
	UICMLC_Available               = 1,
	UICMLC_Locked                  = 2,
	UICMLC_HighlightedAvailable    = 3,
	UICMLC_HighlightedLocked       = 4,
	UICMLC_Disabled                = 5,
	UICMLC_MAX                     = 6
};


// Enum TgClient.UIComponent_MatchLobbyHeader.UIMatchLobbyHeaderText
enum class EUIMatchLobbyHeaderText : uint8_t
{
	UIMLHT_None                    = 0,
	UIMLHT_Selection               = 1,
	UIMLHT_Customization           = 2,
	UIMLHT_BanFriendly             = 3,
	UIMLHT_BanEnemy                = 4,
	UIMLHT_Trading                 = 5,
	UIMLHT_MatchStarting           = 6,
	UIMLHT_MAX                     = 7
};


// Enum TgClient.UIComponent_SimulMediaCollectionReward.eCollectionRewardType
enum class EeCollectionRewardType : uint8_t
{
	ECRT_None                      = 0,
	ECRT_Gold                      = 1,
	ECRT_Bounty                    = 2,
	ECRT_Event                     = 3,
	ECRT_Skin                      = 4,
	ECRT_XP                        = 5,
	ECRT_Crystal                   = 6,
	ECRT_Chest                     = 7,
	ECRT_MAX                       = 8
};


// Enum TgClient.UIData_BurnCardSelection.BurnCardSelectionState
enum class EBurnCardSelectionState : uint8_t
{
	BCSS_NONE                      = 0,
	BCSS_QUEUED                    = 1,
	BCSS_PURCHASED                 = 2,
	BCSS_CURRENT                   = 3,
	BCSS_SELECTED                  = 4,
	BCSS_MAX                       = 5
};


// Enum TgClient.UIData_MatchLobbyChampion.UIChampionMatchState
enum class EUIChampionMatchState : uint8_t
{
	UICMS_None                     = 0,
	UICMS_Disallowed               = 1,
	UICMS_Available                = 2,
	UICMS_Disabled                 = 3,
	UICMS_PotentialBan             = 4,
	UICMS_Banned                   = 5,
	UICMS_BannedBlue               = 6,
	UICMS_BannedRed                = 7,
	UICMS_Selected                 = 8,
	UICMS_SelectedByOther          = 9,
	UICMS_SelectedButAvailable     = 10,
	UICMS_Locked                   = 11,
	UICMS_MAX                      = 12
};


// Enum TgClient.UIData_Notification.NotificationType
enum class ENotificationType : uint8_t
{
	NT_NONE                        = 0,
	NT_ACQUISITION                 = 1,
	NT_ACHIEVEMENT                 = 2,
	NT_SOCIAL                      = 3,
	NT_QUEST                       = 4,
	NT_MAX                         = 5
};


// Enum TgClient.UIData_Notification.IconStackType
enum class EIconStackType : uint8_t
{
	IST_DefaultIcon                = 0,
	IST_Texture                    = 1,
	IST_ChestStack                 = 2,
	IST_GFxStack                   = 3,
	IST_Avatar                     = 4,
	IST_LoadingFrame               = 5,
	IST_DeathCard                  = 6,
	IST_MAX                        = 7
};


// Enum TgClient.UIScene_UIAccessories.UIACCESSORIES_STATE
enum class EUIACCESSORIES_STATE : uint8_t
{
	UIAS_AVATARS                   = 0,
	UIAS_TITLES                    = 1,
	UIAS_LOADINGFRAMES             = 2,
	UIAS_MOUNTS                    = 3,
	UIAS_ANNOUNCERS                = 4,
	UIAS_SPRAYS                    = 5,
	UIAS_DEATHSTAMPS               = 6,
	UIAS_MUSICPACKS                = 7,
	UIAS_DEATHCARDS                = 8,
	UIAS_MAX                       = 9
};


// Enum TgClient.UIScene_UICalendarEvent.UICALENDER_STATE
enum class EUICALENDER_STATE : uint8_t
{
	UICALENDAR_EVENTS              = 0,
	UICALENDAR_OVERVIEW            = 1,
	UICALENDAR_MAX                 = 2
};


// Enum TgClient.UIScene_UIEndTimesEvent.UIENDTIMES_STATE
enum class EUIENDTIMES_STATE : uint8_t
{
	UIETS_HOME                     = 0,
	UIETS_REWARDS                  = 1,
	UIETS_QUESTS                   = 2,
	UIETS_OVERVIEW                 = 3,
	UIETS_MAX                      = 4
};


// Enum TgClient.UIScene_UIRadialMenuVGS.RadialMenuVGSDir
enum class ERadialMenuVGSDir : uint8_t
{
	RMVGSD_WNW                     = 0,
	RMVGSD_NNW                     = 1,
	RMVGSD_NNE                     = 2,
	RMVGSD_ENE                     = 3,
	RMVGSD_ESE                     = 4,
	RMVGSD_SSE                     = 5,
	RMVGSD_SSW                     = 6,
	RMVGSD_WSW                     = 7,
	RMVGSD_MAX                     = 8
};


// Enum TgClient.UIScene_UIRadialMenuVGS.RadialMenuVGSChildDir
enum class ERadialMenuVGSChildDir : uint8_t
{
	RMVGSCD_N                      = 0,
	RMVGSCD_E                      = 1,
	RMVGSCD_S                      = 2,
	RMVGSCD_W                      = 3,
	RMVGSCD_MAX                    = 4
};


// Enum TgClient.UIScene_UISimulMedia.SimulmediaRewardUpdateType
enum class ESimulmediaRewardUpdateType : uint8_t
{
	SRUT_Normal                    = 0,
	SRUT_Completed                 = 1,
	SRUT_Update                    = 2,
	SRUT_Presentation              = 3,
	SRUT_MAX                       = 4
};


// Enum TgClient.UIScene_UIStreetStyleEvent.UISTREETSTYLE_STATE
enum class EUISTREETSTYLE_STATE : uint8_t
{
	UISSS_HOME                     = 0,
	UISSS_REWARDS                  = 1,
	UISSS_QUESTS                   = 2,
	UISSS_OVERVIEW                 = 3,
	UISSS_MAX                      = 4
};


// Enum TgClient.UIScene_UIWinterEvent.UIWINTER_STATE
enum class EUIWINTER_STATE : uint8_t
{
	UIWINTER_HOME                  = 0,
	UIWINTER_STORE                 = 1,
	UIWINTER_EVENTS                = 2,
	UIWINTER_OVERVIEW              = 3,
	UIWINTER_MAX                   = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TgClient.TgClientHUD.SceneInfo
// 0x001C
struct FSceneInfo
{
	int                                                nDepth;                                                   // 0x0000(0x0004)
	struct FName                                       nmName;                                                   // 0x0004(0x0008)
	struct FString                                     sPath;                                                    // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgClientHUD.MessageRedirect
// 0x0014
struct FMessageRedirect
{
	int                                                nMsgId;                                                   // 0x0000(0x0004)
	struct FString                                     sKey;                                                     // 0x0004(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.TgDataChunk.DataField
// 0x0054
struct FDataField
{
	struct FString                                     FieldName;                                                // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FASValue                                    Value;                                                    // 0x0010(0x0020) (NeedCtorLink)
	struct FASValue                                    Last;                                                     // 0x0030(0x0020) (NeedCtorLink)
	unsigned long                                      bDirty : 1;                                               // 0x0050(0x0004)
};

// ScriptStruct TgClient.UIData_Quest.GoalRewardItem
// 0x0010
struct FGoalRewardItem
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nQuantity;                                                // 0x0004(0x0004)
	int                                                nLootId;                                                  // 0x0008(0x0004)
	unsigned long                                      bRental : 1;                                              // 0x000C(0x0004)
};

// ScriptStruct TgClient.TgStreamManager.GameStream
// 0x0058
struct FGameStream
{
	unsigned long                                      bLive : 1;                                                // 0x0000(0x0004)
	unsigned long                                      bFeatured : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bSpecial : 1;                                             // 0x0000(0x0004)
	TEnumAsByte<ESTREAMTYPE>                           Type;                                                     // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     Title;                                                    // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     StreamURL;                                                // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     ChannelName;                                              // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Description;                                              // 0x0038(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Viewers;                                                  // 0x0048(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UIHudSpectator.BotLifeData
// 0x001C
struct FBotLifeData
{
	unsigned long                                      bAlive : 1;                                               // 0x0000(0x0004)
	int                                                nSpawnTime;                                               // 0x0004(0x0004)
	int                                                nRespawnTime;                                             // 0x0008(0x0004)
	TArray<int>                                        m_DeathTimes;                                             // 0x000C(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.UILandingPanelManager.JsonHomeFeatureData
// 0x0044
struct FJsonHomeFeatureData
{
	struct FString                                     sStartDate;                                               // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sEndDate;                                                 // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      eFeatureType;                                             // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                nBotId;                                                   // 0x0024(0x0004)
	int                                                nFeaturedItemId;                                          // 0x0028(0x0004)
	int                                                nSkinId;                                                  // 0x002C(0x0004)
	int                                                nWepSkinId;                                               // 0x0030(0x0004)
	unsigned char                                      eLobbyCam;                                                // 0x0034(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              fChanceToShow;                                            // 0x0038(0x0004)
	float                                              fRotationOffset;                                          // 0x003C(0x0004)
	int                                                nLocationId;                                              // 0x0040(0x0004)
};

// ScriptStruct TgClient.UINotificationCenterJsonManager.TabInfo
// 0x0020
struct FTabInfo
{
	struct FString                                     sTitle;                                                   // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sURL;                                                     // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UIPatchNotesJsonManager.PatchVersionNumber
// 0x0010
struct FPatchVersionNumber
{
	int                                                nVersionMajor;                                            // 0x0000(0x0004)
	int                                                nVersionMinor;                                            // 0x0004(0x0004)
	int                                                nVersionPatch;                                            // 0x0008(0x0004)
	int                                                nVersionBuild;                                            // 0x000C(0x0004)
};

// ScriptStruct TgClient.UILandingPanelManager.JsonFeatureData
// 0x0098
struct FJsonFeatureData
{
	struct FString                                     sId;                                                      // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sHeader;                                                  // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sSubheader;                                               // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDesc;                                                    // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sData;                                                    // 0x0040(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sData2;                                                   // 0x0050(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nMinLevel;                                                // 0x0060(0x0004)
	int                                                nMaxLevel;                                                // 0x0064(0x0004)
	int                                                nProbability;                                             // 0x0068(0x0004)
	int                                                nVersion;                                                 // 0x006C(0x0004)
	int                                                nNumForcedPresentations;                                  // 0x0070(0x0004)
	int                                                nType;                                                    // 0x0074(0x0004)
	int                                                nXpos;                                                    // 0x0078(0x0004)
	int                                                nYpos;                                                    // 0x007C(0x0004)
	int                                                nWidth;                                                   // 0x0080(0x0004)
	int                                                nHeight;                                                  // 0x0084(0x0004)
	unsigned long                                      bIsUsed : 1;                                              // 0x0088(0x0004)
	unsigned long                                      bIsLive : 1;                                              // 0x0088(0x0004)
	class UTexture2DDynamic*                           Texture;                                                  // 0x008C(0x0008)
	int                                                nLocationId;                                              // 0x0094(0x0004)
};

// ScriptStruct TgClient.UIPatchNotesJsonManager.PatchNotesData
// 0x0040
struct FPatchNotesData
{
	struct FString                                     sPatchIdentifier;                                         // 0x0000(0x0010) (NeedCtorLink)
	struct FPatchVersionNumber                         PatchVersion;                                             // 0x0010(0x0010)
	struct FPatchVersionNumber                         PatchRelevantVersion;                                     // 0x0020(0x0010)
	TArray<struct FJsonFeatureData>                    vPatchDetails;                                            // 0x0030(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.TgData_EOM.UIMVPDATA
// 0x0028
struct FUIMVPDATA
{
	int                                                nBot;                                                     // 0x0000(0x0004)
	int                                                nBody;                                                    // 0x0004(0x0004)
	int                                                nPedestal;                                                // 0x0008(0x0004)
	int                                                nMVPType;                                                 // 0x000C(0x0004)
	int                                                nFrame;                                                   // 0x0010(0x0004)
	int                                                nLevel;                                                   // 0x0014(0x0004)
	int                                                nValue;                                                   // 0x0018(0x0004)
	int                                                nWeapon;                                                  // 0x001C(0x0004)
	class UUIData_PlayerMatchRecord*                   pPlayer;                                                  // 0x0020(0x0008)
};

// ScriptStruct TgClient.TgData_EOM.AccoladeData
// 0x000C
struct FAccoladeData
{
	int                                                nMsgId;                                                   // 0x0000(0x0004)
	int                                                nPlace;                                                   // 0x0004(0x0004)
	int                                                nValue;                                                   // 0x0008(0x0004)
};

// ScriptStruct TgClient.UIData_EventChallengeSystem.ChallengeRegionConfig
// 0x001C
struct FChallengeRegionConfig
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (NeedCtorLink)
	int                                                RegionIndex;                                              // 0x0010(0x0004)
	int                                                SortOrder;                                                // 0x0014(0x0004)
	int                                                ColorIndex;                                               // 0x0018(0x0004)
};

// ScriptStruct TgClient.UIData_MatchMember.MatchLobbyPlayerCustomize
// 0x0020
struct FMatchLobbyPlayerCustomize
{
	int                                                nBotId;                                                   // 0x0000(0x0004)
	int                                                nSkinId;                                                  // 0x0004(0x0004)
	int                                                nWeaponDeviceId;                                          // 0x0008(0x0004)
	int                                                nWeaponSkinId;                                            // 0x000C(0x0004)
	int                                                nVoiceId;                                                 // 0x0010(0x0004)
	int                                                nEmoteId;                                                 // 0x0014(0x0004)
	int                                                nMVPPoseId;                                               // 0x0018(0x0004)
	int                                                nSprayId;                                                 // 0x001C(0x0004)
};

// ScriptStruct TgClient.UIDataChatManager.ChannelChatData
// 0x0010
struct FChannelChatData
{
	TArray<class UTgChatData*>                         ChatData;                                                 // 0x0000(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.UIDataLoadouts.PendingImportRequest
// 0x0018
struct FPendingImportRequest
{
	struct FString                                     sPlayerName;                                              // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      dwBotId;                                                  // 0x0010(0x0004)
	float                                              fTTL;                                                     // 0x0014(0x0004)
};

// ScriptStruct TgClient.InputGroup.UIGroupObject
// 0x0028
struct FUIGroupObject
{
	int                                                nLocX;                                                    // 0x0000(0x0004)
	int                                                nLocY;                                                    // 0x0004(0x0004)
	int                                                nWidth;                                                   // 0x0008(0x0004)
	int                                                nHeight;                                                  // 0x000C(0x0004)
	class UInputGroup*                                 pGroup;                                                   // 0x0010(0x0008)
	class UGFxObject*                                  pObj;                                                     // 0x0018(0x0008)
	class UGFxObject*                                  pCursorHoverObj;                                          // 0x0020(0x0008)
};

// ScriptStruct TgClient.InputAction.InputKeyEvent
// 0x001C
struct FInputKeyEvent
{
	struct FName                                       nmKey;                                                    // 0x0000(0x0008)
	TEnumAsByte<EInputEvent>                           eEvent;                                                   // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FString                                     sDisplayName;                                             // 0x000C(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.TgGameDC_Chat.QueueMessage
// 0x0030
struct FQueueMessage
{
	int                                                Id;                                                       // 0x0000(0x0004)
	TEnumAsByte<ETG_CHAT_PRIORITY>                     Priority;                                                 // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	unsigned long                                      bHasPlayedSound : 1;                                      // 0x0008(0x0004)
	int                                                VoicePackId;                                              // 0x000C(0x0004)
	int                                                VoiceBotId;                                               // 0x0010(0x0004)
	int                                                VoiceSkinId;                                              // 0x0014(0x0004)
	struct FString                                     VoicePackCustomSuffix;                                    // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	class UAkBaseSoundObject*                          SoundObject;                                              // 0x0028(0x0008)
};

// ScriptStruct TgClient.TgGameDC_Chat.MessageToken
// 0x001C
struct FMessageToken
{
	int                                                msgId;                                                    // 0x0000(0x0004)
	int                                                MsgIdRed;                                                 // 0x0004(0x0004)
	int                                                MsgIdBlue;                                                // 0x0008(0x0004)
	struct FString                                     Token;                                                    // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgMiniMap.BuffMonsterMIC
// 0x0018
struct FBuffMonsterMIC
{
	class UMaterialInstanceConstant*                   SpawnedMIC;                                               // 0x0000(0x0008)
	class UMaterialInstanceConstant*                   DroppedMIC;                                               // 0x0008(0x0008)
	class UMaterialInstanceConstant*                   TimerMIC;                                                 // 0x0010(0x0008)
};

// ScriptStruct TgClient.TgMiniMap.LayerIndex
// 0x0010
struct FLayerIndex
{
	TArray<int>                                        Entries;                                                  // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgMiniMap.MiniMapPingInfo
// 0x0048
struct FMiniMapPingInfo
{
	float                                              fServerStartTime;                                         // 0x0000(0x0004)
	float                                              fClientStartTime;                                         // 0x0004(0x0004)
	class ATgRepInfo_Player*                           pingedPri;                                                // 0x0008(0x0008)
	struct FVector                                     vPingedLoc;                                               // 0x0010(0x000C)
	unsigned long                                      bIsPinging : 1;                                           // 0x001C(0x0004)
	TEnumAsByte<EPING_TYPE>                            eType;                                                    // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                nIconSize;                                                // 0x0024(0x0004)
	class UMaterialInstanceConstant*                   pingMIC;                                                  // 0x0028(0x0008)
	class ATgRepInfo_Player*                           sourcePRI;                                                // 0x0030(0x0008)
	int                                                SourceIndex;                                              // 0x0038(0x0004)
	struct FVector                                     vSourceWorldLocation;                                     // 0x003C(0x000C)
};

// ScriptStruct TgClient.TgLobbyHUD.MapDetails
// 0x005C
struct FMapDetails
{
	unsigned long                                      bProcessed : 1;                                           // 0x0000(0x0004)
	int                                                nMapId;                                                   // 0x0004(0x0004)
	struct FString                                     sMapName;                                                 // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     sGameMode;                                                // 0x0018(0x0010) (NeedCtorLink)
	int                                                nMapIconFrame;                                            // 0x0028(0x0004)
	struct FString                                     sLoadingTexture;                                          // 0x002C(0x0010) (NeedCtorLink)
	struct FString                                     sLoadingTip;                                              // 0x003C(0x0010) (NeedCtorLink)
	struct FString                                     sLoadingTipMessage;                                       // 0x004C(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.TgLobbyHUD.CameraSprayPreviewOffset
// 0x0010
struct FCameraSprayPreviewOffset
{
	TEnumAsByte<ELobbyCameraTag>                       eCameraTag;                                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     vOffset;                                                  // 0x0004(0x000C)
};

// ScriptStruct TgClient.TgSetting.OptionData
// 0x0018
struct FOptionData
{
	float                                              fValue;                                                   // 0x0000(0x0004)
	float                                              fOther;                                                   // 0x0004(0x0004)
	struct FString                                     sName;                                                    // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgSettingsManager.TgKeyCommand
// 0x0048
struct FTgKeyCommand
{
	unsigned long                                      bAllowGamepadAxis : 1;                                    // 0x0000(0x0004)
	int                                                nPropId;                                                  // 0x0004(0x0004)
	struct FString                                     sKeyCommand;                                              // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sMirroredCommand;                                         // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             sDefaultKeys;                                             // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             sDefaultGamepad;                                          // 0x0038(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgSettingsManager.TgSettingPropMapping
// 0x000C
struct FTgSettingPropMapping
{
	int                                                nSettingId;                                               // 0x0000(0x0004)
	int                                                nPropId;                                                  // 0x0004(0x0004)
	int                                                nPlayerFlag;                                              // 0x0008(0x0004)
};

// ScriptStruct TgClient.UIComponent_AnimSet.UICompAnimSetAnim
// 0x0014
struct FUICompAnimSetAnim
{
	float                                              fAnimTimeInSequence;                                      // 0x0000(0x0004)
	TEnumAsByte<EUIANIMTYPE>                           eAnimType;                                                // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              fValue;                                                   // 0x0008(0x0004)
	unsigned char                                      eQuad;                                                    // 0x000C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              fDuration;                                                // 0x0010(0x0004)
};

// ScriptStruct TgClient.UIComponent_HealFeed.HealSource
// 0x0034
struct FHealSource
{
	int                                                nPawnId;                                                  // 0x0000(0x0004)
	class UGFxObject*                                  mcIconParent;                                             // 0x0004(0x0008)
	class UGFxObject*                                  mcIcon;                                                   // 0x000C(0x0008)
	class UGFxObject*                                  mcGlow;                                                   // 0x0014(0x0008)
	float                                              fHideTimer;                                               // 0x001C(0x0004)
	float                                              fGlowTimer;                                               // 0x0020(0x0004)
	TArray<class UUIComponent_HealFeedEntry*>          ActiveEntries;                                            // 0x0024(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.UIComponent_HealthBar.BarTickTypes
// 0x0040
struct FBarTickTypes
{
	struct FString                                     sMaskName;                                                // 0x0000(0x0010) (Const, NeedCtorLink)
	struct FString                                     sContainerName;                                           // 0x0010(0x0010) (Const, NeedCtorLink)
	float                                              fWidth;                                                   // 0x0020(0x0004)
	TEnumAsByte<EHealthTickType>                       eBorderTickType;                                          // 0x0024(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	class UGFxObject*                                  mcBorderTickMask;                                         // 0x0028(0x0008)
	class UGFxObject*                                  mcLeftBorderTick;                                         // 0x0030(0x0008)
	class UGFxObject*                                  mcRightBorderTick;                                        // 0x0038(0x0008)
};

// ScriptStruct TgClient.UIData_Mutator.MutatorPropKeyValue
// 0x0020
struct FMutatorPropKeyValue
{
	struct FString                                     sKey;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     sValue;                                                   // 0x0010(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.UIComponent_RewardPanel.ProgressInfo
// 0x0010
struct FProgressInfo
{
	int                                                nLevel;                                                   // 0x0000(0x0004)
	int                                                nCurrentXP;                                               // 0x0004(0x0004)
	int                                                nRequiredXP;                                              // 0x0008(0x0004)
	int                                                nXPFloor;                                                 // 0x000C(0x0004)
};

// ScriptStruct TgClient.UIScene.UIQueuedSounds
// 0x000C
struct FUIQueuedSounds
{
	float                                              fStartTime;                                               // 0x0000(0x0004)
	class UAkBaseSoundObject*                          akSound;                                                  // 0x0004(0x0008)
};

// ScriptStruct TgClient.UIScene_UIFooterGamepad.FooterOption
// 0x0044
struct FFooterOption
{
	int                                                nOption;                                                  // 0x0000(0x0004)
	class UGFxObject*                                  pObj;                                                     // 0x0004(0x0008)
	class UGFxObject*                                  pKey;                                                     // 0x000C(0x0008)
	class UGFxObject*                                  pKeyTF;                                                   // 0x0014(0x0008)
	class UGFxObject*                                  pGlow;                                                    // 0x001C(0x0008)
	class UGFxObject*                                  pGlowTF;                                                  // 0x0024(0x0008)
	class UGFxObject*                                  pTitle;                                                   // 0x002C(0x0008)
	class UGFxObject*                                  pTitleTF;                                                 // 0x0034(0x0008)
	class UGFxObject*                                  pFrame;                                                   // 0x003C(0x0008)
};

// ScriptStruct TgClient.UIScene_UIQuests.EmptyPanel
// 0x0018
struct FEmptyPanel
{
	class UGFxObject*                                  mcRoot;                                                   // 0x0000(0x0008)
	class UGFxObject*                                  mcTF0;                                                    // 0x0008(0x0008)
	class UGFxObject*                                  mcTF1;                                                    // 0x0010(0x0008)
};

// ScriptStruct TgClient.UIScene_UIAcquisition.UIAcquiredItem
// 0x0108
struct FUIAcquiredItem
{
	class UUIInteractable_Item*                        Card;                                                     // 0x0000(0x0008)
	class UUIComponent_Avatar*                         Avatar;                                                   // 0x0008(0x0008)
	class UGFxObject*                                  mcEquipButton;                                            // 0x0010(0x0008)
	class UGFxObject*                                  mcEquippedText;                                           // 0x0018(0x0008)
	class UGFxObject*                                  mcEquipPrompt;                                            // 0x0020(0x0008)
	class UGFxObject*                                  mcStoreItemContainer;                                     // 0x0028(0x0008)
	class UGFxObject*                                  mcItemContainer;                                          // 0x0030(0x0008)
	class UGFxObject*                                  mcBoostContainer;                                         // 0x0038(0x0008)
	class UGFxObject*                                  mcBoostQuantity;                                          // 0x0040(0x0008)
	class UGFxObject*                                  mcChestContainer;                                         // 0x0048(0x0008)
	class UGFxObject*                                  mcChestQuantityText;                                      // 0x0050(0x0008)
	class UGFxObject*                                  mcChestChampionPortrait;                                  // 0x0058(0x0008)
	class UGFxObject*                                  mcChestChampionPortraitTexture;                           // 0x0060(0x0008)
	class UGFxObject*                                  mcChestCardQuantity;                                      // 0x0068(0x0008)
	class UGFxObject*                                  mcChampionIcon;                                           // 0x0070(0x0008)
	class UGFxObject*                                  mcChampionImage;                                          // 0x0078(0x0008)
	class UGFxObject*                                  mcChampionTitle;                                          // 0x0080(0x0008)
	class UGFxObject*                                  mcItemIcon;                                               // 0x0088(0x0008)
	class UGFxObject*                                  mcCardIcon;                                               // 0x0090(0x0008)
	class UGFxObject*                                  mcLoadingFrame;                                           // 0x0098(0x0008)
	class UGFxObject*                                  mcDeathCard;                                              // 0x00A0(0x0008)
	class UGFxObject*                                  mcCurrency;                                               // 0x00A8(0x0008)
	class UGFxObject*                                  mcTexture;                                                // 0x00B0(0x0008)
	class UGFxObject*                                  mcRarityFrame;                                            // 0x00B8(0x0008)
	class UGFxObject*                                  mcRarityText;                                             // 0x00C0(0x0008)
	class UGFxObject*                                  mcItemTitle;                                              // 0x00C8(0x0008)
	class UGFxObject*                                  mcItemAudio;                                              // 0x00D0(0x0008)
	class UGFxObject*                                  mcItemChampion;                                           // 0x00D8(0x0008)
	class UGFxObject*                                  mcItemChampionIcon;                                       // 0x00E0(0x0008)
	class UGFxObject*                                  mcItemQuantityText;                                       // 0x00E8(0x0008)
	class UGFxObject*                                  mcOwnedText;                                              // 0x00F0(0x0008)
	class UGFxObject*                                  mcOwnedCheckmark;                                         // 0x00F8(0x0008)
	class UGFxObject*                                  mcQuestIcon;                                              // 0x0100(0x0008)
};

// ScriptStruct TgClient.UIComponent_OptionEntryPaged.PagedEntry
// 0x0014
struct FPagedEntry
{
	int                                                nValue;                                                   // 0x0000(0x0004)
	struct FString                                     sText;                                                    // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UIComponent_PopupManager.SceneData
// 0x0010
struct FSceneData
{
	struct FName                                       nmSceneName;                                              // 0x0000(0x0008)
	class UUIData*                                     pData;                                                    // 0x0008(0x0008)
};

// ScriptStruct TgClient.UIComponent_List.UICListEntry
// 0x0048
struct FUICListEntry
{
	class UUIComponent_Display*                        pDisplay;                                                 // 0x0000(0x0008)
	class UUIComponent_Interactable*                   pInteractable;                                            // 0x0008(0x0008)
	float                                              fOrigX;                                                   // 0x0010(0x0004)
	float                                              fOrigY;                                                   // 0x0014(0x0004)
	float                                              fOrigAlpha;                                               // 0x0018(0x0004)
	float                                              fOrigWidth;                                               // 0x001C(0x0004)
	float                                              fOrigHeight;                                              // 0x0020(0x0004)
	float                                              fOrigXScale;                                              // 0x0024(0x0004)
	float                                              fOrigYScale;                                              // 0x0028(0x0004)
	float                                              fOrigRotation;                                            // 0x002C(0x0004)
	float                                              fDisplayWidth;                                            // 0x0030(0x0004)
	float                                              fDisplayHeight;                                           // 0x0034(0x0004)
	int                                                nNavPosX;                                                 // 0x0038(0x0004)
	int                                                nNavPosY;                                                 // 0x003C(0x0004)
	int                                                nNavWidth;                                                // 0x0040(0x0004)
	int                                                nNavHeight;                                               // 0x0044(0x0004)
};

// ScriptStruct TgClient.UIComponent_List.SmoothScrollingAxis
// 0x0020
struct FSmoothScrollingAxis
{
	unsigned long                                      bEnable : 1;                                              // 0x0000(0x0004)
	float                                              fDelay;                                                   // 0x0004(0x0004)
	float                                              fMargin;                                                  // 0x0008(0x0004)
	int                                                nTarget;                                                  // 0x000C(0x0004)
	int                                                nVelocity;                                                // 0x0010(0x0004)
	float                                              fBufferPos;                                               // 0x0014(0x0004)
	float                                              fSpan;                                                    // 0x0018(0x0004)
	float                                              fAnimTime;                                                // 0x001C(0x0004)
};

// ScriptStruct TgClient.TgGfxScene.UIDisplayData
// 0x000C
struct FUIDisplayData
{
	unsigned char                                      eType;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UGFxObject*                                  pObj;                                                     // 0x0004(0x0008)
};

// ScriptStruct TgClient.UIAcademy.AcademyVideoButton
// 0x0040
struct FAcademyVideoButton
{
	struct FString                                     sImagePath;                                               // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     sVideoURL;                                                // 0x0010(0x0010) (NeedCtorLink)
	class UGFxObject*                                  pClip;                                                    // 0x0020(0x0008)
	class UGFxObject*                                  pImage;                                                   // 0x0028(0x0008)
	class UGFxObject*                                  pTitle;                                                   // 0x0030(0x0008)
	class UGFxObject*                                  pSubtitle;                                                // 0x0038(0x0008)
};

// ScriptStruct TgClient.UIAchievementPopups.AchievementProgressData
// 0x003C
struct FAchievementProgressData
{
	unsigned long                                      hasBeenProcessed : 1;                                     // 0x0000(0x0004)
	unsigned long                                      isCompleted : 1;                                          // 0x0000(0x0004)
	int                                                ActivityId;                                               // 0x0004(0x0004)
	int                                                goalId;                                                   // 0x0008(0x0004)
	int                                                goalGroupType;                                            // 0x000C(0x0004)
	int                                                numGoalsInGroup;                                          // 0x0010(0x0004)
	int                                                descMsgId;                                                // 0x0014(0x0004)
	int                                                activityMsgId;                                            // 0x0018(0x0004)
	int                                                goalMsgId;                                                // 0x001C(0x0004)
	int                                                activationValueId;                                        // 0x0020(0x0004)
	int                                                countToComplete;                                          // 0x0024(0x0004)
	int                                                currentCount;                                             // 0x0028(0x0004)
	int                                                countDelta;                                               // 0x002C(0x0004)
	int                                                titleMsgId;                                               // 0x0030(0x0004)
	int                                                IconId;                                                   // 0x0034(0x0004)
	int                                                pointValue;                                               // 0x0038(0x0004)
};

// ScriptStruct TgClient.UIScene_UIEOMLAcquisition.AcquiredItem
// 0x0018
struct FAcquiredItem
{
	struct Fdword                                      dwLocalAcquisitionId;                                     // 0x0000(0x0004)
	struct Fdword                                      eItemType;                                                // 0x0004(0x0004)
	int                                                nItemId;                                                  // 0x0008(0x0004)
	int                                                nQuantity;                                                // 0x000C(0x0004)
	unsigned long                                      bIsRental : 1;                                            // 0x0010(0x0004)
	int                                                eQuestOrigin;                                             // 0x0014(0x0004)
};

// ScriptStruct TgClient.UIChatScene.ChatMessage
// 0x0020
struct FChatMessage
{
	struct FString                                     sMessage;                                                 // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bIsPaidBattlePass : 1;                                    // 0x0010(0x0004)
	unsigned long                                      bIsVerifiedPlayer : 1;                                    // 0x0010(0x0004)
	struct Fdword                                      dwBattlePassXp;                                           // 0x0014(0x0004)
	struct Fdword                                      dwSenderId;                                               // 0x0018(0x0004)
	struct Fdword                                      dwSenderPortalId;                                         // 0x001C(0x0004)
};

// ScriptStruct TgClient.UIChatScene.ChannelData
// 0x0014
struct FChannelData
{
	int                                                nChannel;                                                 // 0x0000(0x0004)
	struct FString                                     sName;                                                    // 0x0004(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.UIHudBinoculars.UIBinocArrowPositions
// 0x0020
struct FUIBinocArrowPositions
{
	struct FVector2D                                   vInnerArrowStart;                                         // 0x0000(0x0008)
	struct FVector2D                                   vInnerArrowEnd;                                           // 0x0008(0x0008)
	struct FVector2D                                   vOuterArrowStart;                                         // 0x0010(0x0008)
	struct FVector2D                                   vOuterArrowEnd;                                           // 0x0018(0x0008)
};

// ScriptStruct TgClient.UIHudBurns.UIITEMRANK
// 0x000C
struct FUIITEMRANK
{
	int                                                nId;                                                      // 0x0000(0x0004)
	int                                                nRank;                                                    // 0x0004(0x0004)
	int                                                nCost;                                                    // 0x0008(0x0004)
};

// ScriptStruct TgClient.UIHudBurns.UIITEMDATA
// 0x0040
struct FUIITEMDATA
{
	class UGFxObject*                                  Obj;                                                      // 0x0000(0x0008)
	class UGFxObject*                                  Icon;                                                     // 0x0008(0x0008)
	class UGFxObject*                                  frame;                                                    // 0x0010(0x0008)
	class UGFxObject*                                  Title;                                                    // 0x0018(0x0008)
	class UGFxObject*                                  Price;                                                    // 0x0020(0x0008)
	class UGFxObject*                                  Button;                                                   // 0x0028(0x0008)
	class UGFxObject*                                  Selected;                                                 // 0x0030(0x0008)
	class UGFxObject*                                  SubTitle;                                                 // 0x0038(0x0008)
};

// ScriptStruct TgClient.UIHudBurns.UIITEMGROUP
// 0x0160
struct FUIITEMGROUP
{
	class UGFxObject*                                  Obj;                                                      // 0x0000(0x0008)
	class UGFxObject*                                  Title;                                                    // 0x0008(0x0008)
	class UGFxObject*                                  Items;                                                    // 0x0010(0x0008)
	class UGFxObject*                                  frame;                                                    // 0x0018(0x0008)
	struct FUIITEMDATA                                 Item[0x5];                                                // 0x0020(0x0040)
};

// ScriptStruct TgClient.UIHudCards.UICardDisplayEntry
// 0x002C
struct FUICardDisplayEntry
{
	class UGFxObject*                                  Obj;                                                      // 0x0000(0x0008)
	class UGFxObject*                                  Card;                                                     // 0x0008(0x0008)
	class UGFxObject*                                  Icon;                                                     // 0x0010(0x0008)
	class UGFxObject*                                  PowerLevel;                                               // 0x0018(0x0008)
	class UGFxObject*                                  CardLevel;                                                // 0x0020(0x0008)
	int                                                DeviceID;                                                 // 0x0028(0x0004)
};

// ScriptStruct TgClient.UIHudCards.UICardDisplayGroup
// 0x0190
struct FUICardDisplayGroup
{
	struct FUICardDisplayEntry                         Items[0x4];                                               // 0x0000(0x002C)
	struct FUICardDisplayEntry                         Cards[0x5];                                               // 0x00B0(0x002C)
	int                                                LastCardsPawnId;                                          // 0x018C(0x0004)
};

// ScriptStruct TgClient.UIHudCenter.HudProjectile
// 0x0040
struct FHudProjectile
{
	int                                                nId;                                                      // 0x0000(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x0004(0x0004)
	unsigned long                                      bInRange : 1;                                             // 0x0004(0x0004)
	struct FVector                                     vProjLoc;                                                 // 0x0008(0x000C)
	float                                              fScaleMult;                                               // 0x0014(0x0004)
	class UGFxObject*                                  pObj;                                                     // 0x0018(0x0008)
	class UGFxObject*                                  pPointer;                                                 // 0x0020(0x0008)
	class UGFxObject*                                  pIconTinted;                                              // 0x0028(0x0008)
	class UGFxObject*                                  pIcon;                                                    // 0x0030(0x0008)
	class UGFxObject*                                  pArrow;                                                   // 0x0038(0x0008)
};

// ScriptStruct TgClient.UIHudCenter.HudMarker
// 0x004C
struct FHudMarker
{
	float                                              fOrigBotY;                                                // 0x0000(0x0004)
	float                                              fOrigTopY;                                                // 0x0004(0x0004)
	float                                              fValue;                                                   // 0x0008(0x0004)
	float                                              fTime;                                                    // 0x000C(0x0004)
	float                                              fAngle;                                                   // 0x0010(0x0004)
	float                                              fOffset;                                                  // 0x0014(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0018(0x0004)
	struct FVector                                     vHitLoc;                                                  // 0x001C(0x000C)
	struct FVector                                     vPawnLoc;                                                 // 0x0028(0x000C)
	class UGFxObject*                                  pObj;                                                     // 0x0034(0x0008)
	class UGFxObject*                                  pTop;                                                     // 0x003C(0x0008)
	class UGFxObject*                                  pBot;                                                     // 0x0044(0x0008)
};

// ScriptStruct TgClient.UIHudCenter.MessageClip
// 0x002C
struct FMessageClip
{
	int                                                nIcon;                                                    // 0x0000(0x0004)
	int                                                nType;                                                    // 0x0004(0x0004)
	int                                                nValue;                                                   // 0x0008(0x0004)
	float                                              fTimer;                                                   // 0x000C(0x0004)
	float                                              fDuration;                                                // 0x0010(0x0004)
	class UGFxObject*                                  pMovie;                                                   // 0x0014(0x0008)
	class UGFxObject*                                  pTimer;                                                   // 0x001C(0x0008)
	class UGFxObject*                                  pTimerBar;                                                // 0x0024(0x0008)
};

// ScriptStruct TgClient.UIHudCenter.HitMarkerInfo
// 0x0028
struct FHitMarkerInfo
{
	unsigned long                                      bPlayed : 1;                                              // 0x0000(0x0004)
	float                                              DamageAmount;                                             // 0x0004(0x0004)
	float                                              fMaxDamageAmount;                                         // 0x0008(0x0004)
	TArray<struct FString>                             HitActors;                                                // 0x000C(0x0010) (NeedCtorLink)
	unsigned long                                      bIsShieldHit : 1;                                         // 0x001C(0x0004)
	struct FExtraDamageInfo                            ExtraInfo;                                                // 0x0020(0x0004)
	float                                              fAccumulatedDamage;                                       // 0x0024(0x0004)
};

// ScriptStruct TgClient.UIHudCenter.DamageInstance
// 0x0008
struct FDamageInstance
{
	float                                              fDamage;                                                  // 0x0000(0x0004)
	float                                              fTimestamp;                                               // 0x0004(0x0004)
};

// ScriptStruct TgClient.UIHudCredits.UIRewardInfo
// 0x0034
struct FUIRewardInfo
{
	unsigned long                                      bIsCombo : 1;                                             // 0x0000(0x0004)
	float                                              fAlpha;                                                   // 0x0004(0x0004)
	float                                              fTimer;                                                   // 0x0008(0x0004)
	class UGFxObject*                                  pClip;                                                    // 0x000C(0x0008)
	class UGFxObject*                                  pCredits;                                                 // 0x0014(0x0008)
	class UGFxObject*                                  pAmount;                                                  // 0x001C(0x0008)
	class UGFxObject*                                  pTitle;                                                   // 0x0024(0x0008)
	class UGFxObject*                                  pSubtitle;                                                // 0x002C(0x0008)
};

// ScriptStruct TgClient.UIHudDebuff.HudDebuffEffect
// 0x001C
struct FHudDebuffEffect
{
	int                                                nGroup;                                                   // 0x0000(0x0004)
	float                                              fPercent;                                                 // 0x0004(0x0004)
	int                                                nIcon;                                                    // 0x0008(0x0004)
	struct FString                                     sName;                                                    // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UIHudKillFeed.UIKILLFEED_DATA
// 0x0080
struct FUIKILLFEED_DATA
{
	TEnumAsByte<EKillFeedEntryType>                    eType;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UGFxObject*                                  pKillEntry;                                               // 0x0004(0x0008)
	class UGFxObject*                                  pPlayer0;                                                 // 0x000C(0x0008)
	class UGFxObject*                                  pPlayer0Name;                                             // 0x0014(0x0008)
	class UGFxObject*                                  pChampion0;                                               // 0x001C(0x0008)
	class UGFxObject*                                  pChampion0Icon;                                           // 0x0024(0x0008)
	class UGFxObject*                                  pPlayer1;                                                 // 0x002C(0x0008)
	class UGFxObject*                                  pPlayer1Name;                                             // 0x0034(0x0008)
	class UGFxObject*                                  pChampion1;                                               // 0x003C(0x0008)
	class UGFxObject*                                  pChampion1Icon;                                           // 0x0044(0x0008)
	class UGFxObject*                                  pKill;                                                    // 0x004C(0x0008)
	class UGFxObject*                                  pHHPickupEntry;                                           // 0x0054(0x0008)
	class UGFxObject*                                  pHHPickupPlayer;                                          // 0x005C(0x0008)
	class UGFxObject*                                  pHHPickupPlayerName;                                      // 0x0064(0x0008)
	class UGFxObject*                                  pHHPickupChampion;                                        // 0x006C(0x0008)
	class UGFxObject*                                  pHHPickupChampionIcon;                                    // 0x0074(0x0008)
	float                                              fTimer;                                                   // 0x007C(0x0004)
};

// ScriptStruct TgClient.UIHudMinimap.UIPING_DATA
// 0x0018
struct FUIPING_DATA
{
	float                                              fTimer;                                                   // 0x0000(0x0004)
	struct FVector                                     vLocation;                                                // 0x0004(0x000C)
	class UGFxObject*                                  pObj;                                                     // 0x0010(0x0008)
};

// ScriptStruct TgClient.UIHudMap.BGTEAM_PLAYER
// 0x0050
struct FBGTEAM_PLAYER
{
	int                                                nBotId;                                                   // 0x0000(0x0004)
	int                                                nLives;                                                   // 0x0004(0x0004)
	unsigned char                                      eMorph;                                                   // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              fHealth;                                                  // 0x000C(0x0004)
	class UGFxObject*                                  pObj;                                                     // 0x0010(0x0008)
	class UGFxObject*                                  pIcon;                                                    // 0x0018(0x0008)
	class UGFxObject*                                  pDead;                                                    // 0x0020(0x0008)
	class UGFxObject*                                  pName;                                                    // 0x0028(0x0008)
	class UGFxObject*                                  pLives;                                                   // 0x0030(0x0008)
	class UGFxObject*                                  pHealth;                                                  // 0x0038(0x0008)
	class UGFxObject*                                  pHealthBar;                                               // 0x0040(0x0008)
	class UGFxObject*                                  pHealthTip;                                               // 0x0048(0x0008)
};

// ScriptStruct TgClient.UIHudNotify.NotifyData
// 0x0044
struct FNotifyData
{
	int                                                nIcon;                                                    // 0x0000(0x0004)
	int                                                nMsgId;                                                   // 0x0004(0x0004)
	int                                                nSound;                                                   // 0x0008(0x0004)
	int                                                nTaskForce;                                               // 0x000C(0x0004)
	unsigned long                                      bLocal : 1;                                               // 0x0010(0x0004)
	unsigned long                                      bFriend : 1;                                              // 0x0010(0x0004)
	struct FString                                     sSource;                                                  // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sTarget;                                                  // 0x0024(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sMessage;                                                 // 0x0034(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UIHudScore.PayloadStatus
// 0x005C
struct FPayloadStatus
{
	class UGFxObject*                                  PayloadStatusCon;                                         // 0x0000(0x0008)
	class UGFxObject*                                  Diamond;                                                  // 0x0008(0x0008)
	class UGFxObject*                                  DiamondTint;                                              // 0x0010(0x0008)
	class UGFxObject*                                  DashForward;                                              // 0x0018(0x0008)
	class UGFxObject*                                  DashBackward;                                             // 0x0020(0x0008)
	float                                              fTargetDashFAlpha;                                        // 0x0028(0x0004)
	float                                              fTargetDashBAlpha;                                        // 0x002C(0x0004)
	float                                              fTargetTintAlpha;                                         // 0x0030(0x0004)
	int                                                nTargetTintFrame;                                         // 0x0034(0x0004)
	class UGFxObject*                                  PayloadContestedCon;                                      // 0x0038(0x0008)
	class UGFxObject*                                  ContestedTF;                                              // 0x0040(0x0008)
	class UGFxObject*                                  ContestedLeft;                                            // 0x0048(0x0008)
	class UGFxObject*                                  ContestedRight;                                           // 0x0050(0x0008)
	float                                              fTargetContestedAlpha;                                    // 0x0058(0x0004)
};

// ScriptStruct TgClient.UIHudScoreboard.ScoreInfo
// 0x03C4
struct FScoreInfo
{
	int                                                nCard[0x5];                                               // 0x0000(0x0004)
	int                                                nCardLevel[0x5];                                          // 0x0014(0x0004)
	int                                                nTalent;                                                  // 0x0028(0x0004)
	int                                                nTalentLevel;                                             // 0x002C(0x0004)
	int                                                nTalentXPos;                                              // 0x0030(0x0004)
	int                                                nTalentYPos;                                              // 0x0034(0x0004)
	int                                                nPassive;                                                 // 0x0038(0x0004)
	int                                                nPassiveXPos;                                             // 0x003C(0x0004)
	int                                                nPassiveYPos;                                             // 0x0040(0x0004)
	int                                                nPlayerId;                                                // 0x0044(0x0004)
	int                                                nItem[0x4];                                               // 0x0048(0x0004)
	int                                                nItemLevel[0x4];                                          // 0x0058(0x0004)
	class UGFxObject*                                  Item[0x4];                                                // 0x0068(0x0008)
	class UGFxObject*                                  ItemBase[0x4];                                            // 0x0088(0x0008)
	class UGFxObject*                                  ItemIcon[0x4];                                            // 0x00A8(0x0008)
	int                                                nItemXPos[0x4];                                           // 0x00C8(0x0004)
	int                                                nItemYPos[0x4];                                           // 0x00D8(0x0004)
	int                                                nItemV2[0xC];                                             // 0x00E8(0x0004)
	int                                                nItemV2Level[0xC];                                        // 0x0118(0x0004)
	class UGFxObject*                                  ItemV2[0xC];                                              // 0x0148(0x0008)
	class UGFxObject*                                  ItemV2Base[0xC];                                          // 0x01A8(0x0008)
	class UGFxObject*                                  ItemV2Icon[0xC];                                          // 0x0208(0x0008)
	int                                                nItemV2XPos[0xC];                                         // 0x0268(0x0004)
	int                                                nItemV2YPos[0xC];                                         // 0x0298(0x0004)
	struct FUniqueNetId                                ConsoleUniqueId;                                          // 0x02C8(0x0008)
	struct Fdword                                      PortalId;                                                 // 0x02D0(0x0004)
	class UGFxObject*                                  pObj;                                                     // 0x02D4(0x0008)
	class UGFxObject*                                  Name;                                                     // 0x02DC(0x0008)
	class UUIComponent_PlayerName*                     pName;                                                    // 0x02E4(0x0008)
	class UUIComponent_CrossPlayIcon*                  pCrossPlayIcon;                                           // 0x02EC(0x0008)
	class UGFxObject*                                  EquipableTitle;                                           // 0x02F4(0x0008)
	class UGFxObject*                                  Icon;                                                     // 0x02FC(0x0008)
	class UGFxObject*                                  Mute;                                                     // 0x0304(0x0008)
	class UGFxObject*                                  Bounds;                                                   // 0x030C(0x0008)
	class UGFxObject*                                  Charge;                                                   // 0x0314(0x0008)
	class UGFxObject*                                  Killstreak;                                               // 0x031C(0x0008)
	class UGFxObject*                                  Respawn;                                                  // 0x0324(0x0008)
	class UGFxObject*                                  Champion;                                                 // 0x032C(0x0008)
	class UGFxObject*                                  TalentButton;                                             // 0x0334(0x0008)
	class UGFxObject*                                  TalentIcon;                                               // 0x033C(0x0008)
	class UGFxObject*                                  PassiveButton;                                            // 0x0344(0x0008)
	class UGFxObject*                                  PassiveIcon;                                              // 0x034C(0x0008)
	class UGFxObject*                                  ItemBacks;                                                // 0x0354(0x0008)
	class UGFxObject*                                  Card[0x5];                                                // 0x035C(0x0008)
	class UGFxObject*                                  CardIcon[0x5];                                            // 0x0384(0x0008)
	class UGFxObject*                                  KDA;                                                      // 0x03AC(0x0008)
	class UGFxObject*                                  MuteVoice;                                                // 0x03B4(0x0008)
	class UGFxObject*                                  Disconnected;                                             // 0x03BC(0x0008)
};

// ScriptStruct TgClient.UIHudCenter.CastingInfo
// 0x0024
struct FCastingInfo
{
	int                                                nWidth;                                                   // 0x0000(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0004(0x0004)
	float                                              fPercent;                                                 // 0x0008(0x0004)
	class UGFxObject*                                  pObj;                                                     // 0x000C(0x0008)
	class UGFxObject*                                  pText;                                                    // 0x0014(0x0008)
	class UGFxObject*                                  pAnim;                                                    // 0x001C(0x0008)
};

// ScriptStruct TgClient.UIHudTeam.TEAMPLAYER_INFO
// 0x00C0
struct FTEAMPLAYER_INFO
{
	int                                                nRespawn;                                                 // 0x0000(0x0004)
	unsigned long                                      bHealth : 1;                                              // 0x0004(0x0004)
	unsigned long                                      bRespawn : 1;                                             // 0x0004(0x0004)
	unsigned long                                      bVisible : 1;                                             // 0x0004(0x0004)
	float                                              fHealth;                                                  // 0x0008(0x0004)
	float                                              fRespawn;                                                 // 0x000C(0x0004)
	int                                                nUlt;                                                     // 0x0010(0x0004)
	int                                                nUltReq;                                                  // 0x0014(0x0004)
	unsigned long                                      bSelected : 1;                                            // 0x0018(0x0004)
	struct FString                                     sIcon;                                                    // 0x001C(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              fUltIconScale;                                            // 0x002C(0x0004)
	unsigned long                                      bCorvusMark : 1;                                          // 0x0030(0x0004)
	class UGFxObject*                                  pObj;                                                     // 0x0034(0x0008)
	class UGFxObject*                                  pIcon;                                                    // 0x003C(0x0008)
	class UGFxObject*                                  pIconDead;                                                // 0x0044(0x0008)
	class UGFxObject*                                  pHealth;                                                  // 0x004C(0x0008)
	class UGFxObject*                                  pHealthTip;                                               // 0x0054(0x0008)
	class UGFxObject*                                  pHealthBG;                                                // 0x005C(0x0008)
	float                                              fHealthBarWidth;                                          // 0x0064(0x0004)
	class UGFxObject*                                  pRespawn;                                                 // 0x0068(0x0008)
	class UGFxObject*                                  pDeadX;                                                   // 0x0070(0x0008)
	class UGFxObject*                                  pUlt;                                                     // 0x0078(0x0008)
	class UGFxObject*                                  pUltReady;                                                // 0x0080(0x0008)
	class UGFxObject*                                  pSelected;                                                // 0x0088(0x0008)
	class UGFxObject*                                  pCorvusMark;                                              // 0x0090(0x0008)
	int                                                nStreak;                                                  // 0x0098(0x0004)
	float                                              fStreakAnimOffset;                                        // 0x009C(0x0004)
	class UGFxObject*                                  pStreak;                                                  // 0x00A0(0x0008)
	class UGFxObject*                                  pStreakAdd1;                                              // 0x00A8(0x0008)
	class UGFxObject*                                  pStreakAdd2;                                              // 0x00B0(0x0008)
	class UGFxObject*                                  pStreakCount;                                             // 0x00B8(0x0008)
};

// ScriptStruct TgClient.UIHudTeam.TEAMPLAYER_INFO_EXTENDED
// 0x01CC (0x028C - 0x00C0)
struct FTEAMPLAYER_INFO_EXTENDED : public FTEAMPLAYER_INFO
{
	unsigned long                                      bItemsVisible : 1;                                        // 0x00C0(0x0004)
	unsigned long                                      bCardsVisible : 1;                                        // 0x00C0(0x0004)
	struct FUICardDisplayGroup                         CardDisplayGroup;                                         // 0x00C4(0x0190)
	struct FString                                     sPlayerName;                                              // 0x0254(0x0010) (AlwaysInit, NeedCtorLink)
	class UGFxObject*                                  pPlayerName;                                              // 0x0264(0x0008)
	int                                                nCredits;                                                 // 0x026C(0x0004)
	class UGFxObject*                                  pCredits;                                                 // 0x0270(0x0008)
	int                                                nKills;                                                   // 0x0278(0x0004)
	int                                                nDeaths;                                                  // 0x027C(0x0004)
	int                                                nAssists;                                                 // 0x0280(0x0004)
	class UGFxObject*                                  pKDA;                                                     // 0x0284(0x0008)
};

// ScriptStruct TgClient.UIHudTeam.TEAMSTAT_INFO
// 0x004C
struct FTEAMSTAT_INFO
{
	class UGFxObject*                                  pObj;                                                     // 0x0000(0x0008)
	class UGFxObject*                                  pIcon;                                                    // 0x0008(0x0008)
	class UGFxObject*                                  pText;                                                    // 0x0010(0x0008)
	class UGFxObject*                                  pTip;                                                     // 0x0018(0x0008)
	class UGFxObject*                                  pBar;                                                     // 0x0020(0x0008)
	class UGFxObject*                                  pBackground;                                              // 0x0028(0x0008)
	class UGFxObject*                                  pMask;                                                    // 0x0030(0x0008)
	struct FString                                     sIcon;                                                    // 0x0038(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              fMaskBaseWidth;                                           // 0x0048(0x0004)
};

// ScriptStruct TgClient.UIHudWaypoint.WaypointObjective
// 0x0034
struct FWaypointObjective
{
	class UGFxObject*                                  pClip;                                                    // 0x0000(0x0008)
	class UGFxObject*                                  pIcon;                                                    // 0x0008(0x0008)
	class UGFxObject*                                  pDist;                                                    // 0x0010(0x0008)
	class UGFxObject*                                  pPulse;                                                   // 0x0018(0x0008)
	class UGFxObject*                                  pTitle;                                                   // 0x0020(0x0008)
	class UGFxObject*                                  pTotalProgressText;                                       // 0x0028(0x0008)
	unsigned long                                      bVisible : 1;                                             // 0x0030(0x0004)
};

// ScriptStruct TgClient.UIHudWaypoint.WaypointTwoFill
// 0x0028 (0x005C - 0x0034)
struct FWaypointTwoFill : public FWaypointObjective
{
	class UUIComponent_ProgressBarVertical*            pBlueFill;                                                // 0x0034(0x0008)
	class UUIComponent_ProgressBarVertical*            pPurpleFill;                                              // 0x003C(0x0008)
	class UGFxObject*                                  pBuffGained;                                              // 0x0044(0x0008)
	class UGFxObject*                                  pHealthText;                                              // 0x004C(0x0008)
	float                                              fLastProgress;                                            // 0x0054(0x0004)
	unsigned long                                      bHasStartedInitialAnim : 1;                               // 0x0058(0x0004)
};

// ScriptStruct TgClient.UIHudWaypoint.WayPointDamageableObjective
// 0x0038 (0x006C - 0x0034)
struct FWayPointDamageableObjective : public FWaypointObjective
{
	class UUIComponent_ProgressBarRadialFull*          pFriendlyProgress;                                        // 0x0034(0x0008)
	class UUIComponent_ProgressBarRadialFull*          pEnemyProgress;                                           // 0x003C(0x0008)
	class UUIComponent_ProgressBarRadialFull*          pCrystalProgress;                                         // 0x0044(0x0008)
	class UGFxObject*                                  pSpeedUp;                                                 // 0x004C(0x0008)
	class UGFxObject*                                  pSlowDown;                                                // 0x0054(0x0008)
	class UGFxObject*                                  pBuffIcon;                                                // 0x005C(0x0008)
	class UGFxObject*                                  pHealthText;                                              // 0x0064(0x0008)
};

// ScriptStruct TgClient.UILobbyChat.ChannelCloseTimeOverride
// 0x0008
struct FChannelCloseTimeOverride
{
	int                                                Channel;                                                  // 0x0000(0x0004)
	int                                                AutoCloseTime;                                            // 0x0004(0x0004)
};

// ScriptStruct TgClient.UIProfile.UIGoalData
// 0x0070
struct FUIGoalData
{
	int                                                nDate;                                                    // 0x0000(0x0004)
	int                                                nGoal;                                                    // 0x0004(0x0004)
	int                                                nValue;                                                   // 0x0008(0x0004)
	int                                                nProgress;                                                // 0x000C(0x0004)
	int                                                nDisplayId;                                               // 0x0010(0x0004)
	int                                                nLootId;                                                  // 0x0014(0x0004)
	int                                                nGoalProgress;                                            // 0x0018(0x0004)
	unsigned long                                      bCompleted : 1;                                           // 0x001C(0x0004)
	struct FString                                     sDate;                                                    // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDesc;                                                    // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sTier;                                                    // 0x0040(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sTitle;                                                   // 0x0050(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sSource;                                                  // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UIProfile.UIAwardData
// 0x0470
struct FUIAwardData
{
	int                                                nType;                                                    // 0x0000(0x0004)
	int                                                nActivity;                                                // 0x0004(0x0004)
	int                                                nGoalCount;                                               // 0x0008(0x0004)
	int                                                nGoalGroup;                                               // 0x000C(0x0004)
	struct FUIGoalData                                 Goals[0xA];                                               // 0x0010(0x0070) (NeedCtorLink)
};

// ScriptStruct TgClient.UIProfile.UIHistoryData
// 0x0054
struct FUIHistoryData
{
	int                                                nId;                                                      // 0x0000(0x0004)
	int                                                nClass;                                                   // 0x0004(0x0004)
	struct FString                                     sDate;                                                    // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sMode;                                                    // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sScore;                                                   // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	TEnumAsByte<EHistoryResult>                        eResult;                                                  // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FString                                     sDuration;                                                // 0x003C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FDateTimeWrapper                            dtEvent;                                                  // 0x004C(0x0008)
};

// ScriptStruct TgClient.UIPurchaseGems.UIConsumablePack
// 0x0038
struct FUIConsumablePack
{
	class UGFxObject*                                  Obj;                                                      // 0x0000(0x0008)
	class UGFxObject*                                  Title;                                                    // 0x0008(0x0008)
	class UGFxObject*                                  Icon;                                                     // 0x0010(0x0008)
	class UGFxObject*                                  Price;                                                    // 0x0018(0x0008)
	class UGFxObject*                                  PurchaseButton;                                           // 0x0020(0x0008)
	class UGFxObject*                                  Highlight;                                                // 0x0028(0x0008)
	class UGFxObject*                                  SaleBanner;                                               // 0x0030(0x0008)
};

// ScriptStruct TgClient.UISettings.SettingOption
// 0x0058
struct FSettingOption
{
	class UGFxObject*                                  Obj;                                                      // 0x0000(0x0008)
	class UGFxObject*                                  Base;                                                     // 0x0008(0x0008)
	class UGFxObject*                                  Type;                                                     // 0x0010(0x0008)
	class UGFxObject*                                  TypeTF;                                                   // 0x0018(0x0008)
	class UGFxObject*                                  Left;                                                     // 0x0020(0x0008)
	class UGFxObject*                                  Right;                                                    // 0x0028(0x0008)
	class UGFxObject*                                  Focus;                                                    // 0x0030(0x0008)
	class UGFxObject*                                  Color;                                                    // 0x0038(0x0008)
	class UGFxObject*                                  Slider;                                                   // 0x0040(0x0008)
	class UGFxObject*                                  SliderTF;                                                 // 0x0048(0x0008)
	class UGFxObject*                                  SliderTitle;                                              // 0x0050(0x0008)
};

// ScriptStruct TgClient.UISettings.KeybindOption
// 0x0040
struct FKeybindOption
{
	class UGFxObject*                                  Obj;                                                      // 0x0000(0x0008)
	class UGFxObject*                                  Base;                                                     // 0x0008(0x0008)
	class UGFxObject*                                  Focus;                                                    // 0x0010(0x0008)
	class UGFxObject*                                  Command;                                                  // 0x0018(0x0008)
	class UGFxObject*                                  Key[0x2];                                                 // 0x0020(0x0008)
	class UGFxObject*                                  KeyButton[0x2];                                           // 0x0030(0x0008)
};

// ScriptStruct TgClient.UIWorldOverlay.UIPooledOverlayData
// 0x0029
struct FUIPooledOverlayData
{
	class UGFxObject*                                  pClip;                                                    // 0x0000(0x0008)
	class UGFxObject*                                  pAnim;                                                    // 0x0008(0x0008)
	class UGFxObject*                                  pText;                                                    // 0x0010(0x0008)
	class UGFxObject*                                  pTF;                                                      // 0x0018(0x0008)
	class UGFxObject*                                  pTF2;                                                     // 0x0020(0x0008)
	TEnumAsByte<EOverlayPoolType>                      PoolType;                                                 // 0x0028(0x0001)
};

// ScriptStruct TgClient.UIWorldOverlay.OverlayData
// 0x0074
struct FOverlayData
{
	struct Fdword                                      dwDeviceTarget;                                           // 0x0000(0x0004)
	unsigned long                                      bInit : 1;                                                // 0x0004(0x0004)
	float                                              fRoll;                                                    // 0x0008(0x0004)
	float                                              fScale;                                                   // 0x000C(0x0004)
	float                                              fTimer;                                                   // 0x0010(0x0004)
	float                                              fAnimX;                                                   // 0x0014(0x0004)
	float                                              fAnimY;                                                   // 0x0018(0x0004)
	float                                              fStartX;                                                  // 0x001C(0x0004)
	float                                              fStartY;                                                  // 0x0020(0x0004)
	struct FVector                                     vWorldLoc;                                                // 0x0024(0x000C)
	struct FVector                                     vWorldVel;                                                // 0x0030(0x000C)
	struct FVector                                     vScreenLoc;                                               // 0x003C(0x000C)
	struct FUIPooledOverlayData                        PooledOverlayData;                                        // 0x0048(0x002C)
};

// ScriptStruct TgClient.UIWorldOverlay.UITargetableOverlay
// 0x0084
struct FUITargetableOverlay
{
	int                                                nLastColorFrame;                                          // 0x0000(0x0004)
	int                                                nTargetId;                                                // 0x0004(0x0004)
	unsigned long                                      bInit : 1;                                                // 0x0008(0x0004)
	unsigned long                                      bVisible : 1;                                             // 0x0008(0x0004)
	unsigned long                                      bOnEdge : 1;                                              // 0x0008(0x0004)
	unsigned long                                      bHighlight : 1;                                           // 0x0008(0x0004)
	unsigned long                                      bTraceResult : 1;                                         // 0x0008(0x0004)
	float                                              fAlpha;                                                   // 0x000C(0x0004)
	float                                              fScale;                                                   // 0x0010(0x0004)
	float                                              fTraceTimer;                                              // 0x0014(0x0004)
	float                                              fHighlightTimer;                                          // 0x0018(0x0004)
	struct FVector                                     vWorldLoc;                                                // 0x001C(0x000C)
	struct FVector                                     vScreenLoc;                                               // 0x0028(0x000C)
	struct FString                                     CachedName;                                               // 0x0034(0x0010) (NeedCtorLink)
	class UGFxObject*                                  pClip;                                                    // 0x0044(0x0008)
	class UGFxObject*                                  pName;                                                    // 0x004C(0x0008)
	class UGFxObject*                                  pCarat;                                                   // 0x0054(0x0008)
	class UGFxObject*                                  pHealingIndicator;                                        // 0x005C(0x0008)
	class UGFxObject*                                  pIcon;                                                    // 0x0064(0x0008)
	class UGFxObject*                                  pHealthBarParent;                                         // 0x006C(0x0008)
	class UUIComponent_HealthBar_Overlay*              pHealthBar;                                               // 0x0074(0x0008)
	TEnumAsByte<EDeployableOverlayType>                eType;                                                    // 0x007C(0x0001)
	TEnumAsByte<EDeployableOverlayOwnershipType>       eOwnership;                                               // 0x007D(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
	int                                                nDepth;                                                   // 0x0080(0x0004)
};

// ScriptStruct TgClient.UIWorldOverlay.UIPlayerOverlay
// 0x00B8 (0x013C - 0x0084)
struct FUIPlayerOverlay : public FUITargetableOverlay
{
	int                                                nMarked;                                                  // 0x0084(0x0004)
	int                                                nStreak;                                                  // 0x0088(0x0004)
	int                                                nUltCharge;                                               // 0x008C(0x0004)
	float                                              fBarragePercent;                                          // 0x0090(0x0004)
	class UGFxObject*                                  pMarked;                                                  // 0x0094(0x0008)
	class UGFxObject*                                  pStreak;                                                  // 0x009C(0x0008)
	class UGFxObject*                                  pUltimatePercent;                                         // 0x00A4(0x0008)
	class UGFxObject*                                  pBarrageFrame;                                            // 0x00AC(0x0008)
	class UGFxObject*                                  pBarrageMeter;                                            // 0x00B4(0x0008)
	class UGFxObject*                                  pHuntersMark;                                             // 0x00BC(0x0008)
	class UGFxObject*                                  pLexExecuteMark;                                          // 0x00C4(0x0008)
	class UGFxObject*                                  pLexTargetMark;                                           // 0x00CC(0x0008)
	class UGFxObject*                                  pLexVengeanceMark;                                        // 0x00D4(0x0008)
	class UGFxObject*                                  pLexExecuteGuide;                                         // 0x00DC(0x0008)
	class UGFxObject*                                  pAstroLotus;                                              // 0x00E4(0x0008)
	class UGFxObject*                                  pCorvusMark;                                              // 0x00EC(0x0008)
	class UGFxObject*                                  pReiMark;                                                 // 0x00F4(0x0008)
	class UGFxObject*                                  pSevenMark;                                               // 0x00FC(0x0008)
	class UGFxObject*                                  pRespawnMask;                                             // 0x0104(0x0008)
	class UUIComponent_OracleSoulCharges*              pSoulCharges;                                             // 0x010C(0x0008)
	class UUIComponent_TelepunchTarget*                pTelepunch;                                               // 0x0114(0x0008)
	class UUIComponent_MojiCounter*                    pMojiCounter;                                             // 0x011C(0x0008)
	class UUIComponent_CorrupterCorruptionUI*          pCorrupterUI;                                             // 0x0124(0x0008)
	float                                              fHideTimer;                                               // 0x012C(0x0004)
	unsigned long                                      bInParty : 1;                                             // 0x0130(0x0004)
	TEnumAsByte<EPlayerIconState>                      eIconState;                                               // 0x0134(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	unsigned long                                      bShowPlayerName : 1;                                      // 0x0138(0x0004)
};

// ScriptStruct TgClient.UIWorldOverlay.UIDeployableOverlay
// 0x0060 (0x00E4 - 0x0084)
struct FUIDeployableOverlay : public FUITargetableOverlay
{
	class UGFxObject*                                  pIconParent;                                              // 0x0084(0x0008)
	class UGFxObject*                                  pLeftArc;                                                 // 0x008C(0x0008)
	class UGFxObject*                                  pRightArc;                                                // 0x0094(0x0008)
	class UGFxObject*                                  pTopArc;                                                  // 0x009C(0x0008)
	class UGFxObject*                                  pPointer;                                                 // 0x00A4(0x0008)
	class UGFxObject*                                  pDynamicIcon;                                             // 0x00AC(0x0008)
	class UGFxObject*                                  pDynamicIconTexture;                                      // 0x00B4(0x0008)
	class UGFxObject*                                  pBarrageFrame;                                            // 0x00BC(0x0008)
	class UGFxObject*                                  pBarrageMeter;                                            // 0x00C4(0x0008)
	float                                              fAnimTime;                                                // 0x00CC(0x0004)
	TEnumAsByte<EDeployableOverlayInternalState>       eState;                                                   // 0x00D0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              fDamagePulseTimer;                                        // 0x00D4(0x0004)
	int                                                nCurrentIcon;                                             // 0x00D8(0x0004)
	int                                                nDynamicIconProfileId;                                    // 0x00DC(0x0004)
	int                                                nDynamicIconSkinId;                                       // 0x00E0(0x0004)
};

// ScriptStruct TgClient.UIWorldOverlay.QueuedDamageNumber
// 0x0012
struct FQueuedDamageNumber
{
	int                                                nTargetId;                                                // 0x0000(0x0004)
	int                                                nValue;                                                   // 0x0004(0x0004)
	int                                                nSourceItemId;                                            // 0x0008(0x0004)
	struct Fdword                                      dwDeviceTarget;                                           // 0x000C(0x0004)
	unsigned char                                      eTargetType;                                              // 0x0010(0x0001)
	TEnumAsByte<EDAMAGE_INFO_TYPE>                     eDamageType;                                              // 0x0011(0x0001)
};

// ScriptStruct TgClient.TgDataObject.UIDataValue
// 0x001C
struct FUIDataValue
{
	TEnumAsByte<EUIID>                                 eType;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bDirty : 1;                                               // 0x0004(0x0004)
	float                                              fValue;                                                   // 0x0008(0x0004)
	struct FString                                     sValue;                                                   // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgGfxScene.UIITEM_CLIP
// 0x0020
struct FUIITEM_CLIP
{
	class UGFxObject*                                  pObj;                                                     // 0x0000(0x0008)
	class UGFxObject*                                  pSelected;                                                // 0x0008(0x0008)
	class UGFxObject*                                  pButton;                                                  // 0x0010(0x0008)
	class UGFxObject*                                  pSaleBanner;                                              // 0x0018(0x0008)
};

// ScriptStruct TgClient.TgLobbyHUD.LobbyTransitionPlayer
// 0x0024
struct FLobbyTransitionPlayer
{
	int                                                nClassId;                                                 // 0x0000(0x0004)
	struct FString                                     sPlayerName;                                              // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sClassName;                                               // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgLobbyHUD.LobbyTransitionData
// 0x02D0
struct FLobbyTransitionData
{
	struct FLobbyTransitionPlayer                      FriendlyTeam[0xA];                                        // 0x0000(0x0024) (NeedCtorLink)
	struct FLobbyTransitionPlayer                      EnemyTeam[0xA];                                           // 0x0168(0x0024) (NeedCtorLink)
};

// ScriptStruct TgClient.TgMiniMap.FogMaskData
// 0x0030
struct FFogMaskData
{
	int                                                nSize;                                                    // 0x0000(0x0004)
	int                                                nMapDrawLocationX;                                        // 0x0004(0x0004)
	int                                                nMapDrawLocationY;                                        // 0x0008(0x0004)
	unsigned long                                      bLocationChanged : 1;                                     // 0x000C(0x0004)
	unsigned long                                      bVisionRangeChanged : 1;                                  // 0x000C(0x0004)
	struct FBitArray_Mirror                            m_MaskPoints;                                             // 0x0010(0x0020) (Const, Native, Transient)
};

// ScriptStruct TgClient.TgMiniMap.MiniMapEntity
// 0x0090
struct FMiniMapEntity
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
	int                                                GenericState;                                             // 0x002C(0x0004)
	int                                                nIdx;                                                     // 0x0030(0x0004)
	unsigned long                                      bMarked : 1;                                              // 0x0034(0x0004)
	unsigned long                                      bVisibleOnMap : 1;                                        // 0x0034(0x0004)
	unsigned long                                      bValidTarget : 1;                                         // 0x0034(0x0004)
	unsigned long                                      bHovered : 1;                                             // 0x0034(0x0004)
	unsigned long                                      bFlashHighlight : 1;                                      // 0x0034(0x0004)
	unsigned long                                      bVisible : 1;                                             // 0x0034(0x0004)
	float                                              fAlpha;                                                   // 0x0038(0x0004)
	float                                              fHealthPCT;                                               // 0x003C(0x0004)
	class UMaterialInstanceConstant*                   MIC;                                                      // 0x0040(0x0008)
	unsigned long                                      bHasNoIcon : 1;                                           // 0x0048(0x0004)
	int                                                nDrawSize;                                                // 0x004C(0x0004)
	int                                                nHitSize;                                                 // 0x0050(0x0004)
	struct FVector                                     vRect;                                                    // 0x0054(0x000C)
	struct FFogMaskData                                FogMaskData;                                              // 0x0060(0x0030)
};

// ScriptStruct TgClient.TgSettingsManager.TgKeyBind
// 0x0028
struct FTgKeyBind
{
	int                                                nCommandIndex;                                            // 0x0000(0x0004)
	unsigned long                                      bOverridesKeys : 1;                                       // 0x0004(0x0004)
	unsigned long                                      bOverridesGamepad : 1;                                    // 0x0004(0x0004)
	TArray<struct FString>                             sKeys;                                                    // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             sGamepadKeys;                                             // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgSettingsManager.TgSettingsSet
// 0x0014
struct FTgSettingsSet
{
	TArray<struct FTgKeyBind>                          Keybinds;                                                 // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nCharacterId;                                             // 0x0010(0x0004)
};

// ScriptStruct TgClient.UIComponent_AcquisitionCarousel.AcquisitionCarouselItem
// 0x0090
struct FAcquisitionCarouselItem
{
	class UGFxObject*                                  mcPurchaseItem;                                           // 0x0000(0x0008)
	class UGFxObject*                                  mcPurchaseChest;                                          // 0x0008(0x0008)
	class UUIInteractable_Item*                        mcPurchaseCard;                                           // 0x0010(0x0008)
	class UGFxObject*                                  mcPurchaseItemDisplay;                                    // 0x0018(0x0008)
	class UGFxObject*                                  mcPurchaseItemIcon;                                       // 0x0020(0x0008)
	class UGFxObject*                                  mcPurchaseItemCardIcon;                                   // 0x0028(0x0008)
	class UGFxObject*                                  mcPurchaseItemCurrency;                                   // 0x0030(0x0008)
	class UGFxObject*                                  mcPurchaseItemRarityFrame;                                // 0x0038(0x0008)
	class UGFxObject*                                  mcPurchaseItemRarityText;                                 // 0x0040(0x0008)
	class UGFxObject*                                  mcPurchaseItemTypeIcon;                                   // 0x0048(0x0008)
	class UGFxObject*                                  mcPurchaseItemTitle;                                      // 0x0050(0x0008)
	class UGFxObject*                                  mcPurchaseItemSubtitle;                                   // 0x0058(0x0008)
	class UGFxObject*                                  mcPurchaseItemChampion;                                   // 0x0060(0x0008)
	class UGFxObject*                                  mcPurchaseItemChampionIcon;                               // 0x0068(0x0008)
	class UGFxObject*                                  mcPurchaseItemChampionLarge;                              // 0x0070(0x0008)
	class UGFxObject*                                  mcPurchaseItemChampionTitle;                              // 0x0078(0x0008)
	class UGFxObject*                                  mcPurchaseItemChampionImage;                              // 0x0080(0x0008)
	class UGFxObject*                                  mcPurchaseItemAudio;                                      // 0x0088(0x0008)
};

// ScriptStruct TgClient.UIComponent_HealFeed.HealAccumulator
// 0x0018
struct FHealAccumulator
{
	int                                                nProfileId;                                               // 0x0000(0x0004)
	int                                                nSkinId;                                                  // 0x0004(0x0004)
	int                                                nIconOverrideId;                                          // 0x0008(0x0004)
	float                                              fRawAmount;                                               // 0x000C(0x0004)
	float                                              fChangeAmount;                                            // 0x0010(0x0004)
	unsigned long                                      bHealingReduced : 1;                                      // 0x0014(0x0004)
};

// ScriptStruct TgClient.UIDataGoals.ActivityGoal
// 0x0040
struct FActivityGoal
{
	int                                                nTargetValue;                                             // 0x0000(0x0004)
	int                                                nProgressValue;                                           // 0x0004(0x0004)
	struct FString                                     sDescription;                                             // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sName;                                                    // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bClaimed : 1;                                             // 0x0028(0x0004)
	int                                                nGoalId;                                                  // 0x002C(0x0004)
	TArray<struct FGoalRewardItem>                     pLootItems;                                               // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.UIDataGoals.ActivityGoalIds
// 0x0008
struct FActivityGoalIds
{
	struct Fdword                                      dwActivityId;                                             // 0x0000(0x0004)
	struct Fdword                                      dwGoalId;                                                 // 0x0004(0x0004)
};

// ScriptStruct TgClient.UIPurchaseGems.UIDurablePack
// 0x0030
struct FUIDurablePack
{
	class UGFxObject*                                  Obj;                                                      // 0x0000(0x0008)
	class UGFxObject*                                  Price;                                                    // 0x0008(0x0008)
	class UGFxObject*                                  PurchaseButton;                                           // 0x0010(0x0008)
	class UGFxObject*                                  Highlight;                                                // 0x0018(0x0008)
	class UGFxObject*                                  Refund;                                                   // 0x0020(0x0008)
	class UGFxObject*                                  SaleBanner;                                               // 0x0028(0x0008)
};

// ScriptStruct TgClient.UIScene.UIAnimData
// 0x0018
struct FUIAnimData
{
	float                                              fStartTime;                                               // 0x0000(0x0004)
	float                                              fEndTime;                                                 // 0x0004(0x0004)
	unsigned char                                      eType;                                                    // 0x0008(0x0001)
	unsigned char                                      eQuad;                                                    // 0x0009(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              fOrig;                                                    // 0x000C(0x0004)
	float                                              fTarget;                                                  // 0x0010(0x0004)
	unsigned long                                      bAnimating : 1;                                           // 0x0014(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
