#pragma once

// Paladins (5.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_GFxUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GFxUI.GFxEngine
// 0x0024 (0x0084 - 0x0060)
class UGFxEngine : public UObject
{
public:
	TArray<struct FGCReference>                        GCReferences;                                             // 0x0060(0x0010) (Transient, NeedCtorLink)
	int                                                RefCount;                                                 // 0x0070(0x0004) (Transient)
	TArray<struct FName>                               ForceGarbageCollectUponReleaseTextures;                   // 0x0074(0x0010) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxEngine");
		return ptr;
	}

};


// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x0060 - 0x0060)
class UGFxFSCmdHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxFSCmdHandler");
		return ptr;
	}


	bool FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg);
};


// Class GFxUI.GFxInteraction
// 0x000C (0x00BC - 0x00B0)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x00B0(0x0008) (Const, Native, NoExport)
	unsigned long                                      bFakeMobileTouches : 1;                                   // 0x00B8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxInteraction");
		return ptr;
	}


	void STATIC_CloseAllMoviePlayers();
	void STATIC_NotifySplitscreenLayoutChanged();
	void STATIC_NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void STATIC_NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer);
	void NotifyGameSessionEnded();
	class UGFxMoviePlayer* STATIC_GetFocusMovie(int ControllerId);
};


// Class GFxUI.GFxMoviePlayer
// 0x0198 (0x01F8 - 0x0060)
class UGFxMoviePlayer : public UObject
{
public:
	struct FPointer                                    pMovie;                                                   // 0x0060(0x0008) (Const, Native, Transient)
	struct FPointer                                    pCaptureKeys;                                             // 0x0068(0x0008) (Const, Native, Transient)
	struct FPointer                                    pFocusIgnoreKeys;                                         // 0x0070(0x0008) (Const, Native, Transient)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0078(0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUClasses
	unsigned char                                      UnknownData01[0x48];                                      // 0x00C0(0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUObjects
	int                                                NextASUObject;                                            // 0x0108(0x0004) (Const, Transient)
	class USwfMovie*                                   MovieInfo;                                                // 0x010C(0x0008)
	unsigned long                                      bMovieIsOpen : 1;                                         // 0x0114(0x0004) (Const)
	unsigned long                                      bDisplayWithHudOff : 1;                                   // 0x0114(0x0004)
	unsigned long                                      bEnableGammaCorrection : 1;                               // 0x0114(0x0004)
	unsigned long                                      bWidgetsInitializedThisFrame : 1;                         // 0x0114(0x0004) (Const, Transient)
	unsigned long                                      bLogUnhandedWidgetInitializations : 1;                    // 0x0114(0x0004)
	unsigned long                                      bAllowInput : 1;                                          // 0x0114(0x0004)
	unsigned long                                      bAllowFocus : 1;                                          // 0x0114(0x0004)
	unsigned long                                      bAutoPlay : 1;                                            // 0x0114(0x0004)
	unsigned long                                      bPauseGameWhileActive : 1;                                // 0x0114(0x0004)
	unsigned long                                      bDisableWorldRendering : 1;                               // 0x0114(0x0004)
	unsigned long                                      bCaptureWorldRendering : 1;                               // 0x0114(0x0004)
	unsigned long                                      bCloseOnLevelChange : 1;                                  // 0x0114(0x0004)
	unsigned long                                      bOnlyOwnerFocusable : 1;                                  // 0x0114(0x0004)
	unsigned long                                      bForceFullViewport : 1;                                   // 0x0114(0x0004)
	unsigned long                                      bDiscardNonOwnerInput : 1;                                // 0x0114(0x0004)
	unsigned long                                      bCaptureInput : 1;                                        // 0x0114(0x0004)
	unsigned long                                      bCaptureMouseInput : 1;                                   // 0x0114(0x0004)
	unsigned long                                      bIgnoreMouseInput : 1;                                    // 0x0114(0x0004)
	unsigned long                                      bIsSplitscreenLayoutModified : 1;                         // 0x0114(0x0004) (Transient)
	unsigned long                                      bShowHardwareMouseCursor : 1;                             // 0x0114(0x0004)
	unsigned long                                      bBlurLesserMovies : 1;                                    // 0x0114(0x0004)
	unsigned long                                      bHideLesserMovies : 1;                                    // 0x0114(0x0004)
	unsigned long                                      bIsPriorityBlurred : 1;                                   // 0x0114(0x0004)
	unsigned long                                      bIsPriorityHidden : 1;                                    // 0x0114(0x0004)
	unsigned long                                      bIgnoreVisibilityEffect : 1;                              // 0x0114(0x0004)
	unsigned long                                      bIgnoreBlurEffect : 1;                                    // 0x0114(0x0004)
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x0118(0x0008) (Edit)
	int                                                LocalPlayerOwnerIndex;                                    // 0x0120(0x0004) (Transient)
	class UObject*                                     ExternalInterface;                                        // 0x0124(0x0008)
	TArray<struct FName>                               CaptureKeys;                                              // 0x012C(0x0010) (NeedCtorLink)
	TArray<struct FName>                               FocusIgnoreKeys;                                          // 0x013C(0x0010) (NeedCtorLink)
	TArray<struct FExternalTexture>                    ExternalTextures;                                         // 0x014C(0x0010) (NeedCtorLink)
	TArray<struct FSoundThemeBinding>                  SoundThemes;                                              // 0x015C(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EGFxTimingMode>                        TimingMode;                                               // 0x016C(0x0001)
	TEnumAsByte<EGFxRenderTextureMode>                 RenderTextureMode;                                        // 0x016D(0x0001)
	unsigned char                                      Priority;                                                 // 0x016E(0x0001)
	unsigned char                                      UnknownData02[0x1];                                       // 0x016F(0x0001) MISSED OFFSET
	TArray<struct FGFxWidgetBinding>                   WidgetBindings;                                           // 0x0170(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0180(0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.WidgetPathBindings
	class UGFxObject*                                  SplitscreenLayoutObject;                                  // 0x01C8(0x0008) (Transient)
	int                                                SplitscreenLayoutYAdjust;                                 // 0x01D0(0x0004) (Config)
	struct FGFxStoredViewportParams                    m_StoredViewportParams;                                   // 0x01D4(0x0014)
	struct FScriptDelegate                             __OnPostAdvance__Delegate;                                // 0x01E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01E8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxMoviePlayer");
		return ptr;
	}


	void STATIC_UpdateSplitscreenLayout();
	void STATIC_ApplyPriorityVisibilityEffect(bool bRemoveEffect);
	void STATIC_ApplyPriorityBlurEffect(bool bRemoveEffect);
	void ApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState);
	void STATIC_PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName);
	void OnFocusLost(int LocalPlayerIndex);
	void OnFocusGained(int LocalPlayerIndex);
	void ConsoleCommand(const struct FString& Command);
	class APlayerController* GetPC();
	class ULocalPlayer* GetLP();
	void Init(class ULocalPlayer* LocPlay);
	void STATIC_SetWidgetPathBinding(class UGFxObject* WidgetToBind, const struct FName& Path);
	void PostWidgetInit();
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	class UGFxObject* STATIC_ActionScriptConstructor(const struct FString& ClassName);
	class UGFxObject* STATIC_ActionScriptObject(const struct FString& Path);
	struct FString STATIC_ActionScriptString(const struct FString& Path);
	float STATIC_ActionScriptFloat(const struct FString& Path);
	int STATIC_ActionScriptInt(const struct FString& Path);
	void STATIC_ActionScriptVoid(const struct FString& Path);
	struct FASValue STATIC_Invoke(const struct FString& method, TArray<struct FASValue> args);
	void STATIC_ActionScriptSetFunction(class UGFxObject* Object, const struct FString& Member);
	class UGFxObject* STATIC_CreateArray();
	class UGFxObject* STATIC_CreateObject(const struct FString& ASClass, class UClass* Type, TArray<struct FASValue> args);
	bool STATIC_SetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString> Arg);
	bool STATIC_SetVariableFloatArray(const struct FString& Path, int Index, TArray<float> Arg);
	bool STATIC_SetVariableIntArray(const struct FString& Path, int Index, TArray<int> Arg);
	bool STATIC_SetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue> Arg);
	bool STATIC_GetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString>* Arg);
	bool STATIC_GetVariableFloatArray(const struct FString& Path, int Index, TArray<float>* Arg);
	bool STATIC_GetVariableIntArray(const struct FString& Path, int Index, TArray<int>* Arg);
	bool STATIC_GetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue>* Arg);
	void STATIC_SetVariableObject(const struct FString& Path, class UGFxObject* Object);
	void STATIC_SetVariableString(const struct FString& Path, const struct FString& S);
	void STATIC_SetVariableInt(const struct FString& Path, int I);
	void STATIC_SetVariableNumber(const struct FString& Path, float F);
	void STATIC_SetVariableBool(const struct FString& Path, bool B);
	void STATIC_SetVariable(const struct FString& Path, const struct FASValue& Arg);
	class UGFxObject* STATIC_GetAS3ClassObject(const struct FString& Path, class UClass* Type);
	class UGFxObject* STATIC_GetVariableObject(const struct FString& Path, class UClass* Type);
	struct FString STATIC_GetVariableString(const struct FString& Path);
	int STATIC_GetVariableInt(const struct FString& Path);
	float STATIC_GetVariableNumber(const struct FString& Path);
	bool STATIC_GetVariableBool(const struct FString& Path);
	struct FASValue STATIC_GetVariable(const struct FString& Path);
	int STATIC_GetAVMVersion();
	bool ShouldBlockKey(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	bool STATIC_NativeAllowButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	void FlushPlayerInput(bool capturekeysonly);
	void STATIC_ClearFocusIgnoreKeys();
	void STATIC_AddFocusIgnoreKey(const struct FName& Key);
	void STATIC_ClearCaptureKeys();
	void STATIC_AddCaptureKey(const struct FName& Key);
	void STATIC_SetMovieCanReceiveInput(bool bCanReceiveInput);
	void STATIC_SetMovieCanReceiveFocus(bool bCanReceiveFocus);
	void STATIC_SetPerspective3D(struct FMatrix* matPersp);
	void STATIC_SetView3D(struct FMatrix* matView);
	void STATIC_GetVisibleFrameRect(float* x0, float* y0, float* X1, float* Y1);
	void STATIC_SetAlignment(TEnumAsByte<EGFxAlign> A);
	void STATIC_SetViewScaleMode(TEnumAsByte<EGFxScaleMode> SM);
	void STATIC_ViewportToScreen(int X, int Y, int* xOut, int* yOut);
	void STATIC_ScreenToViewport(int X, int Y, int* xOut, int* yOut);
	void STATIC_GetViewport(int* X, int* Y, int* Width, int* Height);
	void STATIC_SetViewport(int X, int Y, int Width, int Height);
	class UGameViewportClient* STATIC_GetGameViewportClient();
	void STATIC_SetPriority(unsigned char NewPriority);
	bool STATIC_SetExternalTexture(const struct FString& Resource, class UTexture* Texture);
	void STATIC_SetExternalInterface(class UObject* H);
	void STATIC_SetTimingMode(TEnumAsByte<EGFxTimingMode> Mode);
	void STATIC_SetMovieInfo(class USwfMovie* Data);
	void ConditionalClearPause();
	void OnCleanup();
	void OnClose();
	void STATIC_Close(bool Unload);
	void SetPause(bool bPausePlayback);
	void OnPostAdvance(float DeltaTime);
	void STATIC_PostAdvance(float DeltaTime);
	void STATIC_Advance(float Time);
	bool Start(bool StartPaused);
};


// Class GFxUI.GFxObject
// 0x00A4 (0x0104 - 0x0060)
class UGFxObject : public UObject
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x0060(0x0008) (Const, Native, NoExport)
	int                                                Value[0xC];                                               // 0x0068(0x0004) (Const, Native)
	int                                                m_nIndex;                                                 // 0x0098(0x0004)
	int                                                m_nFunction;                                              // 0x009C(0x0004)
	unsigned long                                      m_bMuteSound : 1;                                         // 0x00A0(0x0004)
	unsigned long                                      m_bUseCachedDisplayInfo : 1;                              // 0x00A0(0x0004)
	unsigned long                                      m_bForceHidden : 1;                                       // 0x00A0(0x0004)
	unsigned long                                      m_bWantsVisible : 1;                                      // 0x00A0(0x0004)
	unsigned long                                      m_bHasCallbacksBound : 1;                                 // 0x00A0(0x0004)
	float                                              m_fAnimSize;                                              // 0x00A4(0x0004)
	float                                              m_fOrigX;                                                 // 0x00A8(0x0004)
	float                                              m_fOrigY;                                                 // 0x00AC(0x0004)
	float                                              m_fOrigWidth;                                             // 0x00B0(0x0004)
	float                                              m_fOrigHeight;                                            // 0x00B4(0x0004)
	float                                              m_fOrigScaleX;                                            // 0x00B8(0x0004)
	float                                              m_fOrigScaleY;                                            // 0x00BC(0x0004)
	struct FName                                       m_DebugName;                                              // 0x00C0(0x0008)
	struct FASDisplayInfo                              m_CachedDisplayInfo;                                      // 0x00C8(0x002C)
	TArray<struct FGFxWidgetBinding>                   SubWidgetBindings;                                        // 0x00F4(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxObject");
		return ptr;
	}


	bool STATIC_GetFocused();
	float STATIC_GetTextHeight();
	float STATIC_GetTextWidth();
	float STATIC_GetYRotation();
	float STATIC_GetXRotation();
	float GetRotation();
	float STATIC_GetYScale();
	float STATIC_GetXScale();
	float GetHeight();
	float STATIC_GetWidth();
	float STATIC_GetAlpha();
	float STATIC_GetY();
	float STATIC_GetX();
	void STATIC_SetYRotation(float fValue);
	void STATIC_SetXRotation(float fValue);
	void STATIC_SetRotation(float fValue);
	void SetDisabled(bool bValue);
	void STATIC_SetYScale(float fValue);
	void STATIC_SetXScale(float fValue);
	void STATIC_SetHeight(float fValue);
	void STATIC_SetWidth(float fValue);
	void STATIC_SetAlpha(float fValue);
	void STATIC_SetY(float fValue);
	void STATIC_SetX(float fValue);
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void STATIC_ListChildren();
	void STATIC_RemoveMovieClip(const struct FString& PathName);
	class UGFxObject* STATIC_AttachMovie(const struct FString& symbolname, const struct FString& instancename, int Depth, class UClass* Type);
	class UGFxObject* STATIC_CreateEmptyMovieClip(const struct FString& instancename, int Depth, class UClass* Type);
	void STATIC_GotoAndStopI(int frame);
	void STATIC_GotoAndStop(const struct FString& frame);
	void STATIC_GotoAndPlayI(int frame);
	void STATIC_GotoAndPlay(const struct FString& frame);
	TArray<class UGFxObject*> STATIC_ActionScriptArray(const struct FString& Path);
	class UGFxObject* STATIC_ActionScriptObject(const struct FString& Path);
	struct FString STATIC_ActionScriptString(const struct FString& method);
	float STATIC_ActionScriptFloat(const struct FString& method);
	int STATIC_ActionScriptInt(const struct FString& method);
	void STATIC_ActionScriptVoid(const struct FString& method);
	struct FASValue STATIC_Invoke(const struct FString& Member, TArray<struct FASValue> args);
	void STATIC_ActionScriptSetFunctionOn(class UGFxObject* Target, const struct FString& Member);
	void STATIC_ActionScriptSetFunction(const struct FString& Member);
	void STATIC_SetElementMemberString(int Index, const struct FString& Member, const struct FString& S);
	void STATIC_SetElementMemberInt(int Index, const struct FString& Member, int I);
	void STATIC_SetElementMemberFloat(int Index, const struct FString& Member, float F);
	void STATIC_SetElementMemberBool(int Index, const struct FString& Member, bool B);
	void STATIC_SetElementMemberObject(int Index, const struct FString& Member, class UGFxObject* val);
	void STATIC_SetElementMember(int Index, const struct FString& Member, const struct FASValue& Arg);
	struct FString STATIC_GetElementMemberString(int Index, const struct FString& Member);
	int STATIC_GetElementMemberInt(int Index, const struct FString& Member);
	float STATIC_GetElementMemberFloat(int Index, const struct FString& Member);
	bool STATIC_GetElementMemberBool(int Index, const struct FString& Member);
	class UGFxObject* STATIC_GetElementMemberObject(int Index, const struct FString& Member, class UClass* Type);
	struct FASValue STATIC_GetElementMember(int Index, const struct FString& Member);
	void STATIC_SetElementColorTransform(int Index, const struct FASColorTransform& cxform);
	void STATIC_SetElementPosition(int Index, float X, float Y);
	void STATIC_SetElementVisible(int Index, bool Visible);
	void STATIC_SetElementDisplayMatrix(int Index, const struct FMatrix& M);
	void STATIC_SetElementDisplayInfo(int Index, const struct FASDisplayInfo& D);
	struct FMatrix STATIC_GetElementDisplayMatrix(int Index);
	struct FASDisplayInfo STATIC_GetElementDisplayInfo(int Index);
	void STATIC_SetElementString(int Index, const struct FString& S);
	void STATIC_SetElementInt(int Index, int I);
	void STATIC_SetElementFloat(int Index, float F);
	void STATIC_SetElementBool(int Index, bool B);
	void STATIC_SetElementObject(int Index, class UGFxObject* val);
	void STATIC_SetElement(int Index, const struct FASValue& Arg);
	struct FString STATIC_GetElementString(int Index);
	int STATIC_GetElementInt(int Index);
	float STATIC_GetElementFloat(int Index);
	bool STATIC_GetElementBool(int Index);
	class UGFxObject* STATIC_GetElementObject(int Index, class UClass* Type);
	struct FASValue STATIC_GetElement(int Index);
	void STATIC_SetText(const struct FString& Text, class UTranslationContext* InContext);
	struct FString STATIC_GetText();
	void STATIC_SetForceHidden(bool bForceHide);
	void STATIC_SetVisible(bool Visible);
	void STATIC_SetDisplayMatrix3D(const struct FMatrix& M);
	void STATIC_SetDisplayMatrix(const struct FMatrix& M);
	void STATIC_SetColorTransform(const struct FASColorTransform& cxform);
	void SetPosition(float X, float Y);
	void STATIC_SetDisplayInfo(const struct FASDisplayInfo& D, bool bResetCache);
	struct FMatrix STATIC_GetDisplayMatrix3D();
	struct FMatrix STATIC_GetDisplayMatrix();
	struct FASColorTransform STATIC_GetColorTransform();
	bool GetPosition(float* X, float* Y);
	struct FASDisplayInfo STATIC_GetDisplayInfo();
	struct FString STATIC_TranslateString(const struct FString& StringToTranslate, class UTranslationContext* InContext);
	void STATIC_SetFunction(const struct FString& Member, class UObject* context, const struct FName& fname);
	void STATIC_SetObject(const struct FString& Member, class UGFxObject* val);
	void STATIC_SetString(const struct FString& Member, const struct FString& S, class UTranslationContext* InContext);
	void STATIC_SetInt(const struct FString& Member, int I);
	void STATIC_SetFloat(const struct FString& Member, float F);
	void STATIC_SetBool(const struct FString& Member, bool B);
	void STATIC_Set(const struct FString& Member, const struct FASValue& Arg);
	class UGFxObject* GetObject(const struct FString& Member, class UClass* Type);
	struct FString GetString(const struct FString& Member);
	int GetInt(const struct FString& Member);
	float GetFloat(const struct FString& Member);
	bool STATIC_GetBool(const struct FString& Member, bool bIgnoreUndefined);
	struct FASValue STATIC_Get(const struct FString& Member);
	void STATIC_SetColorMultiplier(float R, float G, float B, float A, bool bMaintainAdditive);
	void STATIC_SetColor(float R, float G, float B, float A, bool bMaintainMultiplier);
};


// Class GFxUI.GFxRawData
// 0x0040 (0x00A0 - 0x0060)
class UGFxRawData : public UObject
{
public:
	TArray<unsigned char>                              RawData;                                                  // 0x0060(0x0010) (Const, NeedCtorLink)
	TArray<struct FString>                             ReferencedSwfs;                                           // 0x0070(0x0010) (Edit, EditConst, NeedCtorLink)
	TArray<class UObject*>                             References;                                               // 0x0080(0x0010) (Edit, EditConst, NeedCtorLink)
	TArray<class UObject*>                             UserReferences;                                           // 0x0090(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxRawData");
		return ptr;
	}

};


// Class GFxUI.SwfMovie
// 0x0024 (0x00C4 - 0x00A0)
class USwfMovie : public UGFxRawData
{
public:
	unsigned long                                      bUsesFontlib : 1;                                         // 0x00A0(0x0004) (Edit)
	unsigned long                                      bSetSRGBOnImportedTextures : 1;                           // 0x00A0(0x0004) (Edit, EditConst)
	unsigned long                                      bPackTextures : 1;                                        // 0x00A0(0x0004) (Edit)
	unsigned long                                      bForceSquarePacking : 1;                                  // 0x00A0(0x0004) (Edit)
	unsigned long                                      bUseStreamableTextures : 1;                               // 0x00A0(0x0004) (Edit)
	int                                                PackTextureSize;                                          // 0x00A4(0x0004) (Edit)
	TEnumAsByte<EFlashTextureRescale>                  TextureRescale;                                           // 0x00A8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	struct FString                                     TextureFormat;                                            // 0x00AC(0x0010) (Edit, EditConst, NeedCtorLink)
	int                                                RTTextures;                                               // 0x00BC(0x0004)
	int                                                RTVideoTextures;                                          // 0x00C0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.SwfMovie");
		return ptr;
	}

};


// Class GFxUI.FlashMovie
// 0x0000 (0x00C4 - 0x00C4)
class UFlashMovie : public USwfMovie
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.FlashMovie");
		return ptr;
	}

};


// Class GFxUI.GFxAction_CloseMovie
// 0x000C (0x0114 - 0x0108)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0108(0x0008)
	unsigned long                                      bUnload : 1;                                              // 0x0110(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_CloseMovie");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_GetVariable
// 0x0018 (0x0120 - 0x0108)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0108(0x0008)
	struct FString                                     Variable;                                                 // 0x0110(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_GetVariable");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_Invoke
// 0x0028 (0x0130 - 0x0108)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0108(0x0008)
	struct FString                                     MethodName;                                               // 0x0110(0x0010) (Edit, NeedCtorLink)
	TArray<struct FASValue>                            Arguments;                                                // 0x0120(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_Invoke");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_OpenMovie
// 0x0048 (0x0150 - 0x0108)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class USwfMovie*                                   Movie;                                                    // 0x0108(0x0008) (Edit)
	class UClass*                                      MoviePlayerClass;                                         // 0x0110(0x0008) (Edit)
	class UGFxMoviePlayer*                             MoviePlayer;                                              // 0x0118(0x0008)
	unsigned long                                      bTakeFocus : 1;                                           // 0x0120(0x0004) (Edit)
	unsigned long                                      bCaptureInput : 1;                                        // 0x0120(0x0004) (Edit)
	unsigned long                                      bStartPaused : 1;                                         // 0x0120(0x0004) (Edit)
	unsigned long                                      bEnableGammaCorrection : 1;                               // 0x0120(0x0004)
	unsigned long                                      bDisplayWithHudOff : 1;                                   // 0x0120(0x0004) (Edit)
	TEnumAsByte<EGFxRenderTextureMode>                 RenderTextureMode;                                        // 0x0124(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x0128(0x0008) (Edit)
	TArray<struct FName>                               CaptureKeys;                                              // 0x0130(0x0010) (Edit, NeedCtorLink)
	TArray<struct FName>                               FocusIgnoreKeys;                                          // 0x0140(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_OpenMovie");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0018 (0x0120 - 0x0108)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0108(0x0008)
	TArray<struct FName>                               CaptureKeys;                                              // 0x0110(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_SetCaptureKeys");
		return ptr;
	}

};


// Class GFxUI.GFxAction_SetVariable
// 0x0018 (0x0120 - 0x0108)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x0108(0x0008)
	struct FString                                     Variable;                                                 // 0x0110(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_SetVariable");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxEvent_FSCommand
// 0x0020 (0x0148 - 0x0128)
class UGFxEvent_FSCommand : public USequenceEvent
{
public:
	class USwfMovie*                                   Movie;                                                    // 0x0128(0x0008) (Edit)
	struct FString                                     FSCommand;                                                // 0x0130(0x0010) (Edit, NeedCtorLink)
	class UGFxFSCmdHandler_Kismet*                     Handler;                                                  // 0x0140(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxEvent_FSCommand");
		return ptr;
	}

};


// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0000 (0x0060 - 0x0060)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxFSCmdHandler_Kismet");
		return ptr;
	}


	bool FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg);
};


// Class GFxUI.GFxClikWidget
// 0x0010 (0x0114 - 0x0104)
class UGFxClikWidget : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                                // 0x0104(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxClikWidget");
		return ptr;
	}


	void STATIC_ASRemoveAllEventListeners(const struct FString& Event);
	void STATIC_AS3AddEventListener(const struct FString& Type, class UGFxObject* O, bool useCapture, int listenerPriority, bool useWeakReference);
	void STATIC_ASAddEventListener(const struct FString& Type, class UGFxObject* O, const struct FString& func);
	void STATIC_SetListener(class UGFxObject* O, const struct FString& Member, const struct FScriptDelegate& Listener);
	struct FString STATIC_GetEventStringFromTypename(const struct FName& Typename);
	void STATIC_RemoveAllEventListeners(const struct FString& Event);
	void STATIC_AddEventListener(const struct FName& Type, const struct FScriptDelegate& Listener, bool useCapture, int listenerPriority, bool useWeakReference);
	void STATIC_EventListener(const struct FEventData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
