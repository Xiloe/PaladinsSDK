#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Basic.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GFxUI.SwfMovie.FlashTextureRescale
enum class EFlashTextureRescale : uint8_t
{
	FlashTextureScale_High         = 0,
	FlashTextureScale_Low          = 1,
	FlashTextureScale_NextLow      = 2,
	FlashTextureScale_Mult4        = 3,
	FlashTextureScale_None         = 4,
	FlashTextureScale_MAX          = 5
};


// Enum GFxUI.GFxMoviePlayer.ASType
enum class EASType : uint8_t
{
	AS_Undefined                   = 0,
	AS_Null                        = 1,
	AS_Number                      = 2,
	AS_Int                         = 3,
	AS_String                      = 4,
	AS_Boolean                     = 5,
	AS_MAX                         = 6
};


// Enum GFxUI.GFxMoviePlayer.GFxAlign
enum class EGFxAlign : uint8_t
{
	Align_Center                   = 0,
	Align_TopCenter                = 1,
	Align_BottomCenter             = 2,
	Align_CenterLeft               = 3,
	Align_CenterRight              = 4,
	Align_TopLeft                  = 5,
	Align_TopRight                 = 6,
	Align_BottomLeft               = 7,
	Align_BottomRight              = 8,
	Align_MAX                      = 9
};


// Enum GFxUI.GFxMoviePlayer.GFxScaleMode
enum class EGFxScaleMode : uint8_t
{
	SM_NoScale                     = 0,
	SM_ShowAll                     = 1,
	SM_ExactFit                    = 2,
	SM_NoBorder                    = 3,
	SM_MAX                         = 4
};


// Enum GFxUI.GFxMoviePlayer.GFxTimingMode
enum class EGFxTimingMode : uint8_t
{
	TM_Game                        = 0,
	TM_Real                        = 1,
	TM_MAX                         = 2
};


// Enum GFxUI.GFxMoviePlayer.GFxRenderTextureMode
enum class EGFxRenderTextureMode : uint8_t
{
	RTM_Opaque                     = 0,
	RTM_Alpha                      = 1,
	RTM_AlphaComposite             = 2,
	RTM_MAX                        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GFxUI.GFxMoviePlayer.SoundThemeBinding
// 0x185ABCA5C50
struct FSoundThemeBinding
{
	unsigned char                                      UnknownData00[0x185ABCA5C50];                             // 0x0000(0x185ABCA5C50) MISSED OFFSET
};

// ScriptStruct GFxUI.GFxMoviePlayer.ASValue
// 0x185ABCA9B50
struct FASValue
{
	unsigned char                                      UnknownData00[0x185ABCA9B50];                             // 0x0000(0x185ABCA9B50) MISSED OFFSET
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxStoredViewportParams
// 0x185ABCA5410
struct FGFxStoredViewportParams
{
	unsigned char                                      UnknownData00[0x185ABCA5410];                             // 0x0000(0x185ABCA5410) MISSED OFFSET
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxWidgetBinding
// 0x185ABCA5B90
struct FGFxWidgetBinding
{
	unsigned char                                      UnknownData00[0x185ABCA5B90];                             // 0x0000(0x185ABCA5B90) MISSED OFFSET
};

// ScriptStruct GFxUI.GFxMoviePlayer.ExternalTexture
// 0x185ABC31380
struct FExternalTexture
{
	unsigned char                                      UnknownData00[0x185ABC31380];                             // 0x0000(0x185ABC31380) MISSED OFFSET
};

// ScriptStruct GFxUI.GFxObject.ASDisplayInfo
// 0x185B62040B0
struct FASDisplayInfo
{
	unsigned char                                      UnknownData00[0x185B62040B0];                             // 0x0000(0x185B62040B0) MISSED OFFSET
};

// ScriptStruct GFxUI.GFxObject.ASColorTransform
// 0x185B6202F70
struct FASColorTransform
{
	unsigned char                                      UnknownData00[0x185B6202F70];                             // 0x0000(0x185B6202F70) MISSED OFFSET
};

// ScriptStruct GFxUI.GFxClikWidget.EventData
// 0x185B620D5F0
struct FEventData
{
	unsigned char                                      UnknownData00[0x185B620D5F0];                             // 0x0000(0x185B620D5F0) MISSED OFFSET
};

// ScriptStruct GFxUI.GFxEngine.GCReference
// 0x185B620CAB0
struct FGCReference
{
	unsigned char                                      UnknownData00[0x185B620CAB0];                             // 0x0000(0x185B620CAB0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
