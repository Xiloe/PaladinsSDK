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
#define CONST_UIHUDCHAMPIONSELECT_COUNT                          48
#define CONST_UIHEALFEED_NUM_ICONS                               5
#define CONST_UICOMPONENT_GENERICTITLEBUTTONS_BUTTONCOUNT        8
#define CONST_GFXSETTINGS_BUTTONS                                7
#define CONST_TGDATA_EOM_TEAMCOUNT                               2
#define CONST_EMBLEM_ROULETTE_SCALE_START                        90.0f
#define CONST_NUM_UI_DEVICES                                     25
#define CONST_FIRST_BLOOD_MESSAGE_ID                             109234
#define CONST_PROCESS_MESSAGE_SECS                               2.0f
#define CONST_DCTEAM_MAX_MEMBERS                                 5
#define CONST_DCTEAM_MAX_TOWERS                                  9
#define CONST_DEFAULT_AVATAR_ID                                  23120
#define CONST_UIHUDMINIMAP_PLAYERS                               4
#define CONST_UISCENE_NATIVE_WIDTH                               1920
#define CONST_UICHESTS_MIN_LOAD_TIME                             3.0f
#define CONST_EMBLEM_SHIFTX_RIGHT                                860.0f
#define CONST_UISCENE_NATIVE_HEIGHT                              1080
#define CONST_EMBLEM_SCALEUP_TIME                                0.04f
#define CONST_EMBLEM_POSY                                        885.0f
#define CONST_PLAY_EVERY_CHAMPION_ID                             1732
#define CONST_UI_AUTHORED_WIDTH                                  1920
#define CONST_TEAM_PEDESTAL_MESH_ACTORS                          5
#define CONST_CURRENCY_CRYSTALS                                  12687
#define CONST_UI_AUTHORED_HEIGHT                                 1080
#define CONST_CHAMPION_SKINS_ITEM_WIDTH                          3
#define CONST_UIINVITE_BUTTONS                                   2
#define CONST_PROP_FULLSCREEN_SPLASH_VERSION                     2135
#define CONST_UISCENE_UIPROFILE_MATCHSTATSPOPUP_TABS             2
#define CONST_DAILY_QUESTS_TOTAL                                 10
#define CONST_UIINVITE_INVITESPAM_PERIOD                         2.6
#define CONST_UIPROFILE_ACCOUNTBOOSTTOOLTIP_COUNT                4
#define CONST_LOBBY_PLAYERS_PER_TEAM                             10
#define CONST_TG_MAX_TOTAL_PING                                  10
#define CONST_UIACADEMY_BUTTONS                                  8
#define CONST_UIACADEMY_VIDEOTYPE                                11427
#define CONST_UIACHIEVEMENTPOPUPS_PROGRESS_PERCENT               0.2
#define CONST_MAX_COMMENDATION_COUNT                             500
#define CONST_EMBLEM_SHIFTX_LEFT                                 840.0f
#define CONST_NUM_BAR_SEGMENTS                                   3
#define CONST_UIACQUISITION_MAX_ITEMS                            5
#define CONST_UIEDITLOAOUDTS_GAMEPAD_BUMPERS                     2
#define CONST_UIHUDSKILLS_BARS                                   3
#define CONST_EOML_MVPCOUNT                                      5
#define CONST_UIHUDTEAM_COUNT                                    5
#define CONST_HIDDEN_CHALLENGE_ACTIVITY                          2214
#define CONST_UIBACKGROUND_TYPES                                 8
#define CONST_CHAT_OUTPUT_COUNT                                  4
#define CONST_NUM_ABILITYPOINTPOOL_SKILLS                        4
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
#define CONST_UIHOME_NUM_USED_HOME_SCREEN_PANELS                 7
#define CONST_EMBLEM_ROULETTE_POSY                               747.20f
#define CONST_TOAST_DELAY                                        0.50f
#define CONST_UIHUD_SCENE_PARTY                                  0
#define CONST_BOUNTY_OFFSETX                                     31.0f
#define CONST_DAILY_QUESTS_ACCOUNT_LEVEL                         0
#define CONST_KILLSTREAK_OFFSETX                                 32.9f
#define CONST_EMBLEM_FADE_TIME                                   0.2f
#define CONST_UICOMPONENT_DECK_SIZE                              5
#define CONST_UIFOOTER_PLAYERS                                   5
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
#define CONST_UIHUDKILLFEED_Y_SPACING                            50.0
#define CONST_TOAST_Sustain_Time                                 6.00f
#define CONST_UIDATA_CHESTEXTENDED_MAX_BUNDLES                   4
#define CONST_MATCH_MAX_PLAYERS                                  10
#define CONST_UIDATA_PLAYERMATCHRECORD_DECKSIZE                  5
#define CONST_UIHUDSKILLS_CARDS                                  5
#define CONST_UIDATA_PLAYERMATCHRECORD_ITEMCOUNT                 4
#define CONST_UIDATA_POPUPGENERIC_TITLECOUNT                     2
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
#define CONST_UIHUD_SCENE_COUNT                                  11
#define CONST_UIHUDBINOCULARS_BARRAGES                           3
#define CONST_UIHUDBINOCULARS_RETICULEARROWS                     4
#define CONST_UIHUDBURNS_GROUPS                                  4
#define CONST_UIHUDMAP_PLAYERS                                   4
#define CONST_UIHUDBURNS_OPTIONS                                 5
#define CONST_CHAT_VGS_CALLOUT_TOTAL_COUNT                       40
#define CONST_UIHUDBURNS_UPGRADES                                3
#define CONST_UIPROFILE_HISTORY_ROWS                             8
#define CONST_UIHUDBURNS_DEFT_HANDS_ITEM_ID                      13235
#define CONST_UIHUDBURNS_CHRONOS_ITEM_ID                         11723
#define CONST_UIHUDBURNS_UNDO_OPTIONS                            12
#define CONST_UIHUDBURNS_NIMBLE_ITEM_ID                          11826
#define CONST_FSBP_TOTAL_PREVIEW_ITEMS                           5
#define CONST_UIHUDBURNS_MASTER_RIDING_ITEM_ID                   11646
#define CONST_TOAST_Attack_Time                                  0.50f
#define CONST_UISTORE_FILTER_RARITY_COUNT                        5
#define CONST_UIHUDBURNSCONQUEST_ARROWS                          2
#define CONST_UIHUDBURNSCONQUEST_GROUPS                          4
#define CONST_UIHUDBURNSCONQUEST_OPTIONS                         5
#define CONST_UIHUDBURNSCONQUEST_UPGRADES                        3
#define CONST_UIHUDCARD_SLOTS                                    4
#define CONST_UIHUDCARD_LOADOUTSIZE                              5
#define CONST_UIHUDSCORE_WAYPOINTS                               4
#define CONST_UIRETICLES_PROJECTILES                             10
#define CONST_GFXSETTINGS_KEYBINDS_COLUMNS                       2
#define CONST_UIHITMARKER_TICKS                                  4
#define CONST_UIDAMAGEINSTIGATOR_MAX                             5
#define CONST_FORCE_CASUAL_QUEUE_FOR_LOW_LEVEL                   true
#define CONST_UIRETICLES_DAMAGE_MEDIUM                           15
#define CONST_UIRETICLES_DAMAGE_HEAVY                            10
#define CONST_UICHESTS_SCROLL_TIME                               0.5f
#define CONST_UIRETICLES_DAMAGE_AOEMEDIUM                        10
#define CONST_UIRETICLES_DAMAGE_AOEHEAVY                         10
#define CONST_MIXER_SKIN_ACTIVITY_ID                             2250
#define CONST_UIHITMARKER_ERRORTOLERANCE                         48.0
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
#define CONST_UIPROFILE_HISTORY_DATA                             7
#define CONST_UIPROFILE_DETAILS_COUNT                            12
#define CONST_UIPROFILE_ANNOUNCERPACK_SLOT_COUNT                 10
#define CONST_UIPROFILE_ANNOUNCERPACK_SLOTS_PER_ROW              2
#define CONST_UIPROFILE_MUSICPACK_SLOT_COUNT                     10
#define CONST_UIPROFILE_MUSICPACK_SLOTS_PER_ROW                  2
#define CONST_UIPROFILE_MUSICPACK_CONSOLE_PROMPT_COUNT           2
#define CONST_UIPROFILE_AWARD_PROGRESS_PADDING                   10
#define CONST_DAILY_QUESTS_COUNT                                 3
#define CONST_MINIPROF_ACCOUNTBOOSTTOOLTIP_ENTRIES               4
#define CONST_MINIPROF_VIPBOOSTTOOLTIP_ENTRIES                   4
#define CONST_UIPURCHASE_ITEMS                                   4
#define CONST_UIPURCHASE_TABS                                    2
#define CONST_UIPURCHASE_OPTIONS                                 3
#define CONST_UIPURCHASE_LINES                                   6
#define CONST_UIPURCHASE_VIP_LINES                               5
#define CONST_UIPURCHASE_WITHAD_X                                -255
#define CONST_UIPURCHASE_FOUNDERSPACK                            19800
#define CONST_UIWORLDOVERLAY_MAXTICKS                            60
#define CONST_UIPURCHASEGEMS_CONSUMABLEPACKS                     7
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
#define CONST_NUM_TOAST_SLOTS                                    6
#define CONST_UIHOME_NUM_TOTAL_HOME_SCREEN_PANELS                9
#define CONST_UIHUDSKILLS_COUNT                                  5
#define CONST_NUM_COMMENDATION_SLOTS                             4
#define CONST_PRIME_QUEST_ICON_ID                                7337
#define CONST_UIPLAY_MAX_REGION_ENTRIES                          12
#define CONST_SCROLL_OFFSET_JUMP                                 20
#define CONST_PROP_POPUP_TWITCH_PRIME_LAST_SEEN_LOWER            2102
#define CONST_GFXSETTINGS_OPTIONS                                12
#define CONST_GFXSETTINGS_KEYBINDS                               12
#define CONST_UIWORLDOVERLAY_HEALTHPERTICK                       250
#define CONST_UICHESTS_ACUISITION_POOL_TIME                      0.5f
#define CONST_UICHESTS_SEND_GIFT_ICON_ID                         57
#define CONST_UICHESTS_OPEN_GIFT_DISABLED_ICON_ID                59
#define CONST_TOAST_Decay_Time                                   0.75f
#define CONST_MARKED_CHAMPIONS_COUNT                             2
#define CONST_MULTI_MARK_DEVICE_ID                               25366
#define CONST_UICUSTOM_MODES                                     5
#define CONST_UICUSTOM_SLOTS                                     6
#define CONST_FSBP_LOW_LEVEL_INTERVAL                            30
#define CONST_FSBP_HIGH_LEVEL_INTERVAL                           50
#define CONST_UIHUDATLAS_SHOTS                                   3

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
	GFXOPTION_MAX                  = 56
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
	GFXFUNC_SLIDER                 = 43,
	GFXFUNC_TAB                    = 44,
	GFXFUNC_EQUIPALL               = 45,
	GFXFUNC_ALLOW3P                = 46,
	GFXFUNC_CLOSE                  = 47,
	GFXFUNC_MAX                    = 48
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
	SET_HUDCOMBATLOG               = 17,
	SET_HUDAUTOLEVEL               = 18,
	SET_HUDHEALTHBAR               = 19,
	SET_HUDBLOOM                   = 20,
	SET_HUDCOLOR                   = 21,
	SET_HUDRETICLE                 = 22,
	SET_VOLUMEMASTER               = 23,
	SET_VOLUMEEFFECTS              = 24,
	SET_VOLUMEMUSIC                = 25,
	SET_VOLUMEVOICE                = 26,
	SET_VOLUMENOTIFY               = 27,
	SET_MOUSEINVERT                = 28,
	SET_MOUSESMOOTH                = 29,
	SET_ALLOWGAMEPAD               = 30,
	SET_MOUSESENSITIVITY           = 31,
	SET_XAXISSENSITIVITY           = 32,
	SET_YAXISSENSITIVITY           = 33,
	SET_AIMACCELMODE               = 34,
	SET_AIMACCELBOOST              = 35,
	SET_GAMEPADINVERT              = 36,
	SET_AIMASSISTFRICTION          = 37,
	SET_AIMASSISTMAGNET            = 38,
	SET_DEADZONEINNER              = 39,
	SET_DEADZONEOUTER              = 40,
	SET_SHOWGAMETIPS               = 41,
	SET_SPECTATE                   = 42,
	SET_SPECTATORPLAYERICONS       = 43,
	SET_SPECTATORSHOWITEMS         = 44,
	SET_SPECTATORBLUETEAMSERIESSCORE = 45,
	SET_SPECTATORREDTEAMSERIESSCORE = 46,
	SET_CONTROLICONSTYLE           = 47,
	SET_HAPTICFEEDBACK             = 48,
	SET_HUDTEAMUI                  = 49,
	SET_VOLUMEVOICECHAT            = 50,
	SET_VOLUMEVOICECHATMIC         = 51,
	SET_ENABLEVOICECHAT            = 52,
	SET_USEVOICECHATPUSHTOTALK     = 53,
	SET_TOGGLEZOOM                 = 54,
	SET_AUDIOPANNING               = 55,
	SET_SCOPESENSITIVITY           = 56,
	SET_RETICLECHANGE              = 57,
	SET_USEPROFANITYFILTER         = 58,
	SET_HEALFEED                   = 59,
	SET_D3D11                      = 60,
	SET_RESOLUTIONSCALE            = 61,
	SET_VOLUMECHARACTER            = 62,
	SET_SHOWLIVEVIDEO_UNUSED       = 63,
	SET_SHOWCAUTERIZEHEALTHBAR     = 64,
	SET_SHOWCCARDCOOLDOWNS         = 65,
	SET_HUDTEAMDEATHMARKERS        = 66,
	SET_HAPTICSTRENGTH             = 67,
	SET_CROSSPLAY                  = 68,
	SET_GYRO                       = 69,
	SET_GYROSENSITIVITYX           = 70,
	SET_GYROSENSITIVITYY           = 71,
	SET_COLORBLINDMODE             = 72,
	SET_CROSSPLAYCOMBINED          = 73,
	SET_CROSSINPUTMETHOD           = 74,
	SET_DONOTDISTURB               = 75,
	SET_PUBLICPROFILE              = 76,
	SET_COLORBLIND_INTENSITY       = 77,
	SET_GYROAIMASSIST              = 78,
	SET_VGSTYPE                    = 79,
	SET_SCOREBOARDTYPE             = 80,
	SET_MAX                        = 81
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
	POS_MAX                        = 12
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
	EHTT_MAX                       = 5
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
	EHTCP_MAX                      = 11
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


// Enum TgClient.UIComponent_CommendationToastEntry.ToastSequence
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


// Enum TgClient.UIScene_UIBattlePass.UIBattlePassTab
enum class EUIBattlePassTab : uint8_t
{
	UIBP_Home                      = 0,
	UIBP_Challenges                = 1,
	UIBP_MAX                       = 2
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
	UIEOML_CHALLENGES              = 2,
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
	UIGM_NOTIFICATION              = 1,
	UIGM_SETTINGS                  = 2,
	UIGM_FACEBOOK                  = 3,
	UIGM_CREDITS                   = 4,
	UIGM_QUITGAME                  = 5,
	UIGM_MAX                       = 6
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
	HSP_Store                      = 3,
	HSP_Quests                     = 4,
	HSP_Profile                    = 5,
	HSP_Event                      = 6,
	HSP_MAX                        = 7
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
	UISS_MIXER                     = 3,
	UISS_BOUNTY                    = 4,
	UISS_ACCOUNT                   = 5,
	UISS_MAX                       = 6
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

// ScriptStruct TgClient.InputAction.InputKeyEvent
// 0x185B86B92C0
struct FInputKeyEvent
{
	unsigned char                                      UnknownData00[0x185B86B92C0];                             // 0x0000(0x185B86B92C0) MISSED OFFSET
};

// ScriptStruct TgClient.InputGroup.UIGroupObject
// 0x185B86BB480
struct FUIGroupObject
{
	unsigned char                                      UnknownData00[0x185B86BB480];                             // 0x0000(0x185B86BB480) MISSED OFFSET
};

// ScriptStruct TgClient.TgClientHUD.SceneInfo
// 0x185B86BDE80
struct FSceneInfo
{
	unsigned char                                      UnknownData00[0x185B86BDE80];                             // 0x0000(0x185B86BDE80) MISSED OFFSET
};

// ScriptStruct TgClient.TgClientHUD.MessageRedirect
// 0x185B59B0390
struct FMessageRedirect
{
	unsigned char                                      UnknownData00[0x185B59B0390];                             // 0x0000(0x185B59B0390) MISSED OFFSET
};

// ScriptStruct TgClient.TgDataObject.UIDataValue
// 0x185B59B0A50
struct FUIDataValue
{
	unsigned char                                      UnknownData00[0x185B59B0A50];                             // 0x0000(0x185B59B0A50) MISSED OFFSET
};

// ScriptStruct TgClient.TgData_EOM.UIMVPDATA
// 0x185B59B3690
struct FUIMVPDATA
{
	unsigned char                                      UnknownData00[0x185B59B3690];                             // 0x0000(0x185B59B3690) MISSED OFFSET
};

// ScriptStruct TgClient.TgData_EOM.AccoladeData
// 0x185B59B2490
struct FAccoladeData
{
	unsigned char                                      UnknownData00[0x185B59B2490];                             // 0x0000(0x185B59B2490) MISSED OFFSET
};

// ScriptStruct TgClient.TgDataChunk.DataField
// 0x185B59B7A10
struct FDataField
{
	unsigned char                                      UnknownData00[0x185B59B7A10];                             // 0x0000(0x185B59B7A10) MISSED OFFSET
};

// ScriptStruct TgClient.TgGameDC_Chat.QueueMessage
// 0x185B59BA7D0
struct FQueueMessage
{
	unsigned char                                      UnknownData00[0x185B59BA7D0];                             // 0x0000(0x185B59BA7D0) MISSED OFFSET
};

// ScriptStruct TgClient.TgGameDC_Chat.MessageToken
// 0x185B59BE490
struct FMessageToken
{
	unsigned char                                      UnknownData00[0x185B59BE490];                             // 0x0000(0x185B59BE490) MISSED OFFSET
};

// ScriptStruct TgClient.TgGfxScene.UIDisplayData
// 0x185B59CB750
struct FUIDisplayData
{
	unsigned char                                      UnknownData00[0x185B59CB750];                             // 0x0000(0x185B59CB750) MISSED OFFSET
};

// ScriptStruct TgClient.TgGfxScene.UIITEM_CLIP
// 0x185B59CD790
struct FUIITEM_CLIP
{
	unsigned char                                      UnknownData00[0x185B59CD790];                             // 0x0000(0x185B59CD790) MISSED OFFSET
};

// ScriptStruct TgClient.UILandingPanelManager.JsonFeatureData
// 0x185B59D9010
struct FJsonFeatureData
{
	unsigned char                                      UnknownData00[0x185B59D9010];                             // 0x0000(0x185B59D9010) MISSED OFFSET
};

// ScriptStruct TgClient.TgLobbyHUD.MapDetails
// 0x185B59D8110
struct FMapDetails
{
	unsigned char                                      UnknownData00[0x185B59D8110];                             // 0x0000(0x185B59D8110) MISSED OFFSET
};

// ScriptStruct TgClient.TgLobbyHUD.LobbyTransitionPlayer
// 0x185B59D6790
struct FLobbyTransitionPlayer
{
	unsigned char                                      UnknownData00[0x185B59D6790];                             // 0x0000(0x185B59D6790) MISSED OFFSET
};

// ScriptStruct TgClient.TgLobbyHUD.LobbyTransitionData
// 0x185B59D7990
struct FLobbyTransitionData
{
	unsigned char                                      UnknownData00[0x185B59D7990];                             // 0x0000(0x185B59D7990) MISSED OFFSET
};

// ScriptStruct TgClient.TgMiniMap.LayerIndex
// 0x185B59E0E10
struct FLayerIndex
{
	unsigned char                                      UnknownData00[0x185B59E0E10];                             // 0x0000(0x185B59E0E10) MISSED OFFSET
};

// ScriptStruct TgClient.TgMiniMap.MiniMapPingInfo
// 0x185B59DE350
struct FMiniMapPingInfo
{
	unsigned char                                      UnknownData00[0x185B59DE350];                             // 0x0000(0x185B59DE350) MISSED OFFSET
};

// ScriptStruct TgClient.TgMiniMap.FogMaskData
// 0x185B59DCCD0
struct FFogMaskData
{
	unsigned char                                      UnknownData00[0x185B59DCCD0];                             // 0x0000(0x185B59DCCD0) MISSED OFFSET
};

// ScriptStruct TgClient.TgMiniMap.MiniMapEntity
// 0x185B59DEF50
struct FMiniMapEntity
{
	unsigned char                                      UnknownData00[0x185B59DEF50];                             // 0x0000(0x185B59DEF50) MISSED OFFSET
};

// ScriptStruct TgClient.TgMiniMap.BuffMonsterMIC
// 0x185B59E2190
struct FBuffMonsterMIC
{
	unsigned char                                      UnknownData00[0x185B59E2190];                             // 0x0000(0x185B59E2190) MISSED OFFSET
};

// ScriptStruct TgClient.UIData_Quest.GoalRewardItem
// 0x185B59E1590
struct FGoalRewardItem
{
	unsigned char                                      UnknownData00[0x185B59E1590];                             // 0x0000(0x185B59E1590) MISSED OFFSET
};

// ScriptStruct TgClient.TgSetting.OptionData
// 0x185B59E4710
struct FOptionData
{
	unsigned char                                      UnknownData00[0x185B59E4710];                             // 0x0000(0x185B59E4710) MISSED OFFSET
};

// ScriptStruct TgClient.TgSettingsManager.TgKeyCommand
// 0x185B59E35D0
struct FTgKeyCommand
{
	unsigned char                                      UnknownData00[0x185B59E35D0];                             // 0x0000(0x185B59E35D0) MISSED OFFSET
};

// ScriptStruct TgClient.TgSettingsManager.TgKeyBind
// 0x185B59E44D0
struct FTgKeyBind
{
	unsigned char                                      UnknownData00[0x185B59E44D0];                             // 0x0000(0x185B59E44D0) MISSED OFFSET
};

// ScriptStruct TgClient.TgSettingsManager.TgSettingsSet
// 0x185B59E2910
struct FTgSettingsSet
{
	unsigned char                                      UnknownData00[0x185B59E2910];                             // 0x0000(0x185B59E2910) MISSED OFFSET
};

// ScriptStruct TgClient.TgSettingsManager.TgSettingPropMapping
// 0x185B59E38D0
struct FTgSettingPropMapping
{
	unsigned char                                      UnknownData00[0x185B59E38D0];                             // 0x0000(0x185B59E38D0) MISSED OFFSET
};

// ScriptStruct TgClient.TgStreamManager.GameStream
// 0x185B59E7650
struct FGameStream
{
	unsigned char                                      UnknownData00[0x185B59E7650];                             // 0x0000(0x185B59E7650) MISSED OFFSET
};

// ScriptStruct TgClient.UIAcademy.AcademyVideoButton
// 0x185B59EDAD0
struct FAcademyVideoButton
{
	unsigned char                                      UnknownData00[0x185B59EDAD0];                             // 0x0000(0x185B59EDAD0) MISSED OFFSET
};

// ScriptStruct TgClient.UIAchievementPopups.AchievementProgressData
// 0x185B59EDE90
struct FAchievementProgressData
{
	unsigned char                                      UnknownData00[0x185B59EDE90];                             // 0x0000(0x185B59EDE90) MISSED OFFSET
};

// ScriptStruct TgClient.UIScene_UIEOMLAcquisition.AcquiredItem
// 0x185B59EC210
struct FAcquiredItem
{
	unsigned char                                      UnknownData00[0x185B59EC210];                             // 0x0000(0x185B59EC210) MISSED OFFSET
};

// ScriptStruct TgClient.UIScene_UIAcquisition.UIAcquiredItem
// 0x185B59EFED0
struct FUIAcquiredItem
{
	unsigned char                                      UnknownData00[0x185B59EFED0];                             // 0x0000(0x185B59EFED0) MISSED OFFSET
};

// ScriptStruct TgClient.UIChatScene.ChannelData
// 0x185B9CABDF0
struct FChannelData
{
	unsigned char                                      UnknownData00[0x185B9CABDF0];                             // 0x0000(0x185B9CABDF0) MISSED OFFSET
};

// ScriptStruct TgClient.UIChatScene.ChatMessage
// 0x185B9CABEB0
struct FChatMessage
{
	unsigned char                                      UnknownData00[0x185B9CABEB0];                             // 0x0000(0x185B9CABEB0) MISSED OFFSET
};

// ScriptStruct TgClient.UIComponent_AcquisitionCarousel.AcquisitionCarouselItem
// 0x185B9CB2330
struct FAcquisitionCarouselItem
{
	unsigned char                                      UnknownData00[0x185B9CB2330];                             // 0x0000(0x185B9CB2330) MISSED OFFSET
};

// ScriptStruct TgClient.UIComponent_List.UICListEntry
// 0x185B9CC5BF0
struct FUICListEntry
{
	unsigned char                                      UnknownData00[0x185B9CC5BF0];                             // 0x0000(0x185B9CC5BF0) MISSED OFFSET
};

// ScriptStruct TgClient.UIComponent_List.SmoothScrollingAxis
// 0x185B9CCC430
struct FSmoothScrollingAxis
{
	unsigned char                                      UnknownData00[0x185B9CCC430];                             // 0x0000(0x185B9CCC430) MISSED OFFSET
};

// ScriptStruct TgClient.UIComponent_HealFeed.HealSource
// 0x185B9CD0E70
struct FHealSource
{
	unsigned char                                      UnknownData00[0x185B9CD0E70];                             // 0x0000(0x185B9CD0E70) MISSED OFFSET
};

// ScriptStruct TgClient.UIComponent_HealFeed.HealAccumulator
// 0x185B9CD1470
struct FHealAccumulator
{
	unsigned char                                      UnknownData00[0x185B9CD1470];                             // 0x0000(0x185B9CD1470) MISSED OFFSET
};

// ScriptStruct TgClient.UIComponent_HealthBar.BarTickTypes
// 0x185B9CD4770
struct FBarTickTypes
{
	unsigned char                                      UnknownData00[0x185B9CD4770];                             // 0x0000(0x185B9CD4770) MISSED OFFSET
};

// ScriptStruct TgClient.UIComponent_PopupManager.SceneData
// 0x185B98FEE30
struct FSceneData
{
	unsigned char                                      UnknownData00[0x185B98FEE30];                             // 0x0000(0x185B98FEE30) MISSED OFFSET
};

// ScriptStruct TgClient.UIComponent_RewardPanel.ProgressInfo
// 0x185B9903C30
struct FProgressInfo
{
	unsigned char                                      UnknownData00[0x185B9903C30];                             // 0x0000(0x185B9903C30) MISSED OFFSET
};

// ScriptStruct TgClient.UIData_MatchMember.MatchLobbyPlayerCustomize
// 0x185B991D430
struct FMatchLobbyPlayerCustomize
{
	unsigned char                                      UnknownData00[0x185B991D430];                             // 0x0000(0x185B991D430) MISSED OFFSET
};

// ScriptStruct TgClient.UIDataChatManager.ChannelChatData
// 0x185B992AAB0
struct FChannelChatData
{
	unsigned char                                      UnknownData00[0x185B992AAB0];                             // 0x0000(0x185B992AAB0) MISSED OFFSET
};

// ScriptStruct TgClient.UIDataGoals.ActivityGoal
// 0x185B992C730
struct FActivityGoal
{
	unsigned char                                      UnknownData00[0x185B992C730];                             // 0x0000(0x185B992C730) MISSED OFFSET
};

// ScriptStruct TgClient.UIDataGoals.ActivityGoalIds
// 0x185B992C430
struct FActivityGoalIds
{
	unsigned char                                      UnknownData00[0x185B992C430];                             // 0x0000(0x185B992C430) MISSED OFFSET
};

// ScriptStruct TgClient.UIDataLoadouts.PendingImportRequest
// 0x185B992FA30
struct FPendingImportRequest
{
	unsigned char                                      UnknownData00[0x185B992FA30];                             // 0x0000(0x185B992FA30) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudBinoculars.UIBinocArrowPositions
// 0x185B2B550E0
struct FUIBinocArrowPositions
{
	unsigned char                                      UnknownData00[0x185B2B550E0];                             // 0x0000(0x185B2B550E0) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudBurns.UIITEMRANK
// 0x185B2B56220
struct FUIITEMRANK
{
	unsigned char                                      UnknownData00[0x185B2B56220];                             // 0x0000(0x185B2B56220) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudBurns.UIITEMDATA
// 0x185B2B59460
struct FUIITEMDATA
{
	unsigned char                                      UnknownData00[0x185B2B59460];                             // 0x0000(0x185B2B59460) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudBurns.UIITEMGROUP
// 0x185B2B598E0
struct FUIITEMGROUP
{
	unsigned char                                      UnknownData00[0x185B2B598E0];                             // 0x0000(0x185B2B598E0) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudCards.UICardDisplayGroup
// 0x185B2B5B3E0
struct FUICardDisplayGroup
{
	unsigned char                                      UnknownData00[0x185B2B5B3E0];                             // 0x0000(0x185B2B5B3E0) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudCards.UICardDisplayEntry
// 0x185B2B5BDA0
struct FUICardDisplayEntry
{
	unsigned char                                      UnknownData00[0x185B2B5BDA0];                             // 0x0000(0x185B2B5BDA0) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudCenter.HudMarker
// 0x185B2B5B860
struct FHudMarker
{
	unsigned char                                      UnknownData00[0x185B2B5B860];                             // 0x0000(0x185B2B5B860) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudCenter.MessageClip
// 0x185B2B5A660
struct FMessageClip
{
	unsigned char                                      UnknownData00[0x185B2B5A660];                             // 0x0000(0x185B2B5A660) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudCenter.DamageInstance
// 0x185B2B62520
struct FDamageInstance
{
	unsigned char                                      UnknownData00[0x185B2B62520];                             // 0x0000(0x185B2B62520) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudCenter.HudProjectile
// 0x185B2B5E7A0
struct FHudProjectile
{
	unsigned char                                      UnknownData00[0x185B2B5E7A0];                             // 0x0000(0x185B2B5E7A0) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudCenter.CastingInfo
// 0x185B2B5F9A0
struct FCastingInfo
{
	unsigned char                                      UnknownData00[0x185B2B5F9A0];                             // 0x0000(0x185B2B5F9A0) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudCenter.HitMarkerInfo
// 0x185B2B60D20
struct FHitMarkerInfo
{
	unsigned char                                      UnknownData00[0x185B2B60D20];                             // 0x0000(0x185B2B60D20) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudCredits.UIRewardInfo
// 0x185B2B659A0
struct FUIRewardInfo
{
	unsigned char                                      UnknownData00[0x185B2B659A0];                             // 0x0000(0x185B2B659A0) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudDebuff.HudDebuffEffect
// 0x185B2B65220
struct FHudDebuffEffect
{
	unsigned char                                      UnknownData00[0x185B2B65220];                             // 0x0000(0x185B2B65220) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudTeam.TEAMPLAYER_INFO
// 0x185B2B67920
struct FTEAMPLAYER_INFO
{
	unsigned char                                      UnknownData00[0x185B2B67920];                             // 0x0000(0x185B2B67920) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudTeam.TEAMPLAYER_INFO_EXTENDED
// 0x185B2B6A320
struct FTEAMPLAYER_INFO_EXTENDED
{
	unsigned char                                      UnknownData00[0x185B2B6A320];                             // 0x0000(0x185B2B6A320) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudTeam.TEAMSTAT_INFO
// 0x185B2B6A860
struct FTEAMSTAT_INFO
{
	unsigned char                                      UnknownData00[0x185B2B6A860];                             // 0x0000(0x185B2B6A860) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudKillFeed.UIKILLFEED_DATA
// 0x185B2B6D260
struct FUIKILLFEED_DATA
{
	unsigned char                                      UnknownData00[0x185B2B6D260];                             // 0x0000(0x185B2B6D260) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudMinimap.UIPING_DATA
// 0x185B2B6D4A0
struct FUIPING_DATA
{
	unsigned char                                      UnknownData00[0x185B2B6D4A0];                             // 0x0000(0x185B2B6D4A0) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudMap.BGTEAM_PLAYER
// 0x185B2B6F420
struct FBGTEAM_PLAYER
{
	unsigned char                                      UnknownData00[0x185B2B6F420];                             // 0x0000(0x185B2B6F420) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudNotify.NotifyData
// 0x185B2B72DE0
struct FNotifyData
{
	unsigned char                                      UnknownData00[0x185B2B72DE0];                             // 0x0000(0x185B2B72DE0) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudScore.PayloadStatus
// 0x185B2B7C920
struct FPayloadStatus
{
	unsigned char                                      UnknownData00[0x185B2B7C920];                             // 0x0000(0x185B2B7C920) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudScoreboard.ScoreInfo
// 0x185B2B7EBA0
struct FScoreInfo
{
	unsigned char                                      UnknownData00[0x185B2B7EBA0];                             // 0x0000(0x185B2B7EBA0) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudSpectator.BotLifeData
// 0x185B2B820E0
struct FBotLifeData
{
	unsigned char                                      UnknownData00[0x185B2B820E0];                             // 0x0000(0x185B2B820E0) MISSED OFFSET
};

// ScriptStruct TgClient.UIHudWaypoint.WaypointObjective
// 0x185B2B84AE0
struct FWaypointObjective
{
	unsigned char                                      UnknownData00[0x185B2B84AE0];                             // 0x0000(0x185B2B84AE0) MISSED OFFSET
};

// ScriptStruct TgClient.UILandingPanelManager.JsonHomeFeatureData
// 0x185B2B89460
struct FJsonHomeFeatureData
{
	unsigned char                                      UnknownData00[0x185B2B89460];                             // 0x0000(0x185B2B89460) MISSED OFFSET
};

// ScriptStruct TgClient.UILobbyChat.ChannelCloseTimeOverride
// 0x185B2B8B860
struct FChannelCloseTimeOverride
{
	unsigned char                                      UnknownData00[0x185B2B8B860];                             // 0x0000(0x185B2B8B860) MISSED OFFSET
};

// ScriptStruct TgClient.UINotificationCenterJsonManager.TabInfo
// 0x185B2B4B4E0
struct FTabInfo
{
	unsigned char                                      UnknownData00[0x185B2B4B4E0];                             // 0x0000(0x185B2B4B4E0) MISSED OFFSET
};

// ScriptStruct TgClient.UIPatchNotesJsonManager.PatchNotesData
// 0x185B2B4DD60
struct FPatchNotesData
{
	unsigned char                                      UnknownData00[0x185B2B4DD60];                             // 0x0000(0x185B2B4DD60) MISSED OFFSET
};

// ScriptStruct TgClient.UIPatchNotesJsonManager.PatchVersionNumber
// 0x185B2B4B720
struct FPatchVersionNumber
{
	unsigned char                                      UnknownData00[0x185B2B4B720];                             // 0x0000(0x185B2B4B720) MISSED OFFSET
};

// ScriptStruct TgClient.UIProfile.UIAwardData
// 0x185B5E02660
struct FUIAwardData
{
	unsigned char                                      UnknownData00[0x185B5E02660];                             // 0x0000(0x185B5E02660) MISSED OFFSET
};

// ScriptStruct TgClient.UIProfile.UIGoalData
// 0x185B5E04D60
struct FUIGoalData
{
	unsigned char                                      UnknownData00[0x185B5E04D60];                             // 0x0000(0x185B5E04D60) MISSED OFFSET
};

// ScriptStruct TgClient.UIProfile.UIHistoryData
// 0x185B5E02720
struct FUIHistoryData
{
	unsigned char                                      UnknownData00[0x185B5E02720];                             // 0x0000(0x185B5E02720) MISSED OFFSET
};

// ScriptStruct TgClient.UIPurchaseGems.UIDurablePack
// 0x185B5E0BF60
struct FUIDurablePack
{
	unsigned char                                      UnknownData00[0x185B5E0BF60];                             // 0x0000(0x185B5E0BF60) MISSED OFFSET
};

// ScriptStruct TgClient.UIPurchaseGems.UIConsumablePack
// 0x185B5E0DBE0
struct FUIConsumablePack
{
	unsigned char                                      UnknownData00[0x185B5E0DBE0];                             // 0x0000(0x185B5E0DBE0) MISSED OFFSET
};

// ScriptStruct TgClient.UIScene.UIAnimData
// 0x185B5E0F320
struct FUIAnimData
{
	unsigned char                                      UnknownData00[0x185B5E0F320];                             // 0x0000(0x185B5E0F320) MISSED OFFSET
};

// ScriptStruct TgClient.UIScene.UIQueuedSounds
// 0x185B5E0FAA0
struct FUIQueuedSounds
{
	unsigned char                                      UnknownData00[0x185B5E0FAA0];                             // 0x0000(0x185B5E0FAA0) MISSED OFFSET
};

// ScriptStruct TgClient.UIScene_UIFooterGamepad.FooterOption
// 0x185B5E1D8A0
struct FFooterOption
{
	unsigned char                                      UnknownData00[0x185B5E1D8A0];                             // 0x0000(0x185B5E1D8A0) MISSED OFFSET
};

// ScriptStruct TgClient.UIScene_UIQuests.EmptyPanel
// 0x185B5E2CDE0
struct FEmptyPanel
{
	unsigned char                                      UnknownData00[0x185B5E2CDE0];                             // 0x0000(0x185B5E2CDE0) MISSED OFFSET
};

// ScriptStruct TgClient.UISettings.KeybindOption
// 0x185B5E35A20
struct FKeybindOption
{
	unsigned char                                      UnknownData00[0x185B5E35A20];                             // 0x0000(0x185B5E35A20) MISSED OFFSET
};

// ScriptStruct TgClient.UISettings.SettingOption
// 0x185B5E366E0
struct FSettingOption
{
	unsigned char                                      UnknownData00[0x185B5E366E0];                             // 0x0000(0x185B5E366E0) MISSED OFFSET
};

// ScriptStruct TgClient.UIWorldOverlay.QueuedDamageNumber
// 0x185B5E3D520
struct FQueuedDamageNumber
{
	unsigned char                                      UnknownData00[0x185B5E3D520];                             // 0x0000(0x185B5E3D520) MISSED OFFSET
};

// ScriptStruct TgClient.UIWorldOverlay.UITargetableOverlay
// 0x185B5E3A160
struct FUITargetableOverlay
{
	unsigned char                                      UnknownData00[0x185B5E3A160];                             // 0x0000(0x185B5E3A160) MISSED OFFSET
};

// ScriptStruct TgClient.UIWorldOverlay.UIPooledOverlayData
// 0x185B5E3D9A0
struct FUIPooledOverlayData
{
	unsigned char                                      UnknownData00[0x185B5E3D9A0];                             // 0x0000(0x185B5E3D9A0) MISSED OFFSET
};

// ScriptStruct TgClient.UIWorldOverlay.OverlayData
// 0x185B5E3B360
struct FOverlayData
{
	unsigned char                                      UnknownData00[0x185B5E3B360];                             // 0x0000(0x185B5E3B360) MISSED OFFSET
};

// ScriptStruct TgClient.UIWorldOverlay.UIDeployableOverlay
// 0x185B5E397A0
struct FUIDeployableOverlay
{
	unsigned char                                      UnknownData00[0x1EC];                                     // 0x0000(0x01EC) MISSED OFFSET
	unsigned long                                      ShowAllTeamAsParty : 1;                                   // 0x01EC(0x0004) (Config)
	unsigned long                                      m_bDamageReturnOnScaleIn : 1;                             // 0x01EC(0x0004)
	unsigned long                                      m_bBringToFrontProcessed : 1;                             // 0x01EC(0x0004)
	unsigned long                                      m_bSpectatorShowPlayerIcons : 1;                          // 0x01EC(0x0004)
	int                                                m_nDepth;                                                 // 0x01F0(0x0004)
	int                                                m_nCritCount;                                             // 0x01F4(0x0004)
	int                                                m_nLastValue;                                             // 0x01F8(0x0004)
	int                                                m_nLastTargetId;                                          // 0x01FC(0x0004)
	int                                                m_nDamageNumberType;                                      // 0x0200(0x0004)
	int                                                m_nMaxDamageTicksPerDevice;                               // 0x0204(0x0004)
	unsigned char                                      m_eLastTargetType;                                        // 0x0208(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0209(0x0003) MISSED OFFSET
	float                                              m_fDelta;                                                 // 0x020C(0x0004)
	float                                              m_fInterp;                                                // 0x0210(0x0004)
	float                                              m_fCritScaleInDuration;                                   // 0x0214(0x0004)
	float                                              m_fCritScaleMin;                                          // 0x0218(0x0004)
	float                                              m_fCritScaleMax;                                          // 0x021C(0x0004)
	float                                              m_fCritMaxWorldOffset;                                    // 0x0220(0x0004)
	float                                              m_fCritMaxInitialSpeed;                                   // 0x0224(0x0004)
	float                                              m_fCritGravityCoeff;                                      // 0x0228(0x0004)
	float                                              m_fCritVerticalOffset;                                    // 0x022C(0x0004)
	float                                              m_fCritTimer;                                             // 0x0230(0x0004)
	float                                              m_fDamageScaleInDuration;                                 // 0x0234(0x0004)
	float                                              m_fDamageSustainDuration;                                 // 0x0238(0x0004)
	float                                              m_fDamageInitialSpeedRandomness;                          // 0x023C(0x0004)
	float                                              m_fDamageScaleMin;                                        // 0x0240(0x0004)
	float                                              m_fDamageScaleMax;                                        // 0x0244(0x0004)
	float                                              m_fDamageMaxWorldOffset;                                  // 0x0248(0x0004)
	float                                              m_fDamageWorldOffsetConeAngle;                            // 0x024C(0x0004)
	float                                              m_fDamageMaxInitialSpeed;                                 // 0x0250(0x0004)
	float                                              m_fDamageGravityCoeff;                                    // 0x0254(0x0004)
	float                                              m_fDamageVerticalOffset;                                  // 0x0258(0x0004)
	float                                              m_fDamageTimer;                                           // 0x025C(0x0004)
	float                                              m_fHealingSpeed;                                          // 0x0260(0x0004)
	float                                              m_fHealingBloom;                                          // 0x0264(0x0004)
	float                                              m_fHealingTimer;                                          // 0x0268(0x0004)
	float                                              m_fResolutionModX;                                        // 0x026C(0x0004)
	float                                              m_fResolutionModY;                                        // 0x0270(0x0004)
	float                                              m_fDamageNumbersOffsetScale;                              // 0x0274(0x0004)
	TArray<struct FUIPooledOverlayData>                m_PooledCritData;                                         // 0x0278(0x0010) (NeedCtorLink)
	TArray<struct FUIPooledOverlayData>                m_PooledDamageData;                                       // 0x0288(0x0010) (NeedCtorLink)
	TArray<struct FUIPooledOverlayData>                m_PooledHealingData;                                      // 0x0298(0x0010) (NeedCtorLink)
	TArray<struct FOverlayData>                        m_CritData;                                               // 0x02A8(0x0010) (NeedCtorLink)
	TArray<struct FOverlayData>                        m_DamageData;                                             // 0x02B8(0x0010) (NeedCtorLink)
	TArray<struct FOverlayData>                        m_HealingData;                                            // 0x02C8(0x0010) (NeedCtorLink)
	TArray<struct FUIPlayerOverlay>                    m_PlayerOverlays;                                         // 0x02D8(0x0010) (NeedCtorLink)
	TArray<struct FUIDeployableOverlay>                m_DeployableOverlays;                                     // 0x02E8(0x0010) (NeedCtorLink)
	TArray<struct FUIDeployableOverlay>                m_DeployableOverlayPool;                                  // 0x02F8(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0308(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIWorldOverlay.m_nActiveDamageNumbers
	TArray<struct FQueuedDamageNumber>                 m_QueuedDamageNumbers;                                    // 0x0350(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      UnknownData03[0x185B5E39440];                             // 0x0360(0x185B5E39440) MISSED OFFSET
};

// ScriptStruct TgClient.UIWorldOverlay.UIPlayerOverlay
// 0x185B5E3A520
struct FUIPlayerOverlay
{
	unsigned char                                      UnknownData00[0x1EC];                                     // 0x0000(0x01EC) MISSED OFFSET
	unsigned long                                      ShowAllTeamAsParty : 1;                                   // 0x01EC(0x0004) (Config)
	unsigned long                                      m_bDamageReturnOnScaleIn : 1;                             // 0x01EC(0x0004)
	unsigned long                                      m_bBringToFrontProcessed : 1;                             // 0x01EC(0x0004)
	unsigned long                                      m_bSpectatorShowPlayerIcons : 1;                          // 0x01EC(0x0004)
	int                                                m_nDepth;                                                 // 0x01F0(0x0004)
	int                                                m_nCritCount;                                             // 0x01F4(0x0004)
	int                                                m_nLastValue;                                             // 0x01F8(0x0004)
	int                                                m_nLastTargetId;                                          // 0x01FC(0x0004)
	int                                                m_nDamageNumberType;                                      // 0x0200(0x0004)
	int                                                m_nMaxDamageTicksPerDevice;                               // 0x0204(0x0004)
	unsigned char                                      m_eLastTargetType;                                        // 0x0208(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0209(0x0003) MISSED OFFSET
	float                                              m_fDelta;                                                 // 0x020C(0x0004)
	float                                              m_fInterp;                                                // 0x0210(0x0004)
	float                                              m_fCritScaleInDuration;                                   // 0x0214(0x0004)
	float                                              m_fCritScaleMin;                                          // 0x0218(0x0004)
	float                                              m_fCritScaleMax;                                          // 0x021C(0x0004)
	float                                              m_fCritMaxWorldOffset;                                    // 0x0220(0x0004)
	float                                              m_fCritMaxInitialSpeed;                                   // 0x0224(0x0004)
	float                                              m_fCritGravityCoeff;                                      // 0x0228(0x0004)
	float                                              m_fCritVerticalOffset;                                    // 0x022C(0x0004)
	float                                              m_fCritTimer;                                             // 0x0230(0x0004)
	float                                              m_fDamageScaleInDuration;                                 // 0x0234(0x0004)
	float                                              m_fDamageSustainDuration;                                 // 0x0238(0x0004)
	float                                              m_fDamageInitialSpeedRandomness;                          // 0x023C(0x0004)
	float                                              m_fDamageScaleMin;                                        // 0x0240(0x0004)
	float                                              m_fDamageScaleMax;                                        // 0x0244(0x0004)
	float                                              m_fDamageMaxWorldOffset;                                  // 0x0248(0x0004)
	float                                              m_fDamageWorldOffsetConeAngle;                            // 0x024C(0x0004)
	float                                              m_fDamageMaxInitialSpeed;                                 // 0x0250(0x0004)
	float                                              m_fDamageGravityCoeff;                                    // 0x0254(0x0004)
	float                                              m_fDamageVerticalOffset;                                  // 0x0258(0x0004)
	float                                              m_fDamageTimer;                                           // 0x025C(0x0004)
	float                                              m_fHealingSpeed;                                          // 0x0260(0x0004)
	float                                              m_fHealingBloom;                                          // 0x0264(0x0004)
	float                                              m_fHealingTimer;                                          // 0x0268(0x0004)
	float                                              m_fResolutionModX;                                        // 0x026C(0x0004)
	float                                              m_fResolutionModY;                                        // 0x0270(0x0004)
	float                                              m_fDamageNumbersOffsetScale;                              // 0x0274(0x0004)
	TArray<struct FUIPooledOverlayData>                m_PooledCritData;                                         // 0x0278(0x0010) (NeedCtorLink)
	TArray<struct FUIPooledOverlayData>                m_PooledDamageData;                                       // 0x0288(0x0010) (NeedCtorLink)
	TArray<struct FUIPooledOverlayData>                m_PooledHealingData;                                      // 0x0298(0x0010) (NeedCtorLink)
	TArray<struct FOverlayData>                        m_CritData;                                               // 0x02A8(0x0010) (NeedCtorLink)
	TArray<struct FOverlayData>                        m_DamageData;                                             // 0x02B8(0x0010) (NeedCtorLink)
	TArray<struct FOverlayData>                        m_HealingData;                                            // 0x02C8(0x0010) (NeedCtorLink)
	TArray<struct FUIPlayerOverlay>                    m_PlayerOverlays;                                         // 0x02D8(0x0010) (NeedCtorLink)
	TArray<struct FUIDeployableOverlay>                m_DeployableOverlays;                                     // 0x02E8(0x0010) (NeedCtorLink)
	TArray<struct FUIDeployableOverlay>                m_DeployableOverlayPool;                                  // 0x02F8(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0308(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.UIWorldOverlay.m_nActiveDamageNumbers
	TArray<struct FQueuedDamageNumber>                 m_QueuedDamageNumbers;                                    // 0x0350(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      UnknownData03[0x185B5E3A1C0];                             // 0x0360(0x185B5E3A1C0) MISSED OFFSET
};

// ScriptStruct TgClient.UIComponent_AnimSet.UICompAnimSetAnim
// 0x185B8264780
struct FUICompAnimSetAnim
{
	unsigned char                                      UnknownData00[0x185B8264780];                             // 0x0000(0x185B8264780) MISSED OFFSET
};

// ScriptStruct TgClient.UIComponent_OptionEntryPaged.PagedEntry
// 0x185B8279D80
struct FPagedEntry
{
	unsigned char                                      UnknownData00[0x185B8279D80];                             // 0x0000(0x185B8279D80) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
