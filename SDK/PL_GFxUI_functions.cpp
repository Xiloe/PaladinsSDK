// Paladins (4.1.3942.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_GFxUI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GFxUI.GFxFSCmdHandler.FSCommand
// (Iterator, Latent, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// class UGFxMoviePlayer*         Movie                          (Parm)
// class UGFxEvent_FSCommand*     Event                          (Parm)
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// struct FString                 Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxFSCmdHandler::FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxFSCmdHandler.FSCommand");

	UGFxFSCmdHandler_FSCommand_Params params;
	params.Movie = Movie;
	params.Event = Event;
	params.Cmd = Cmd;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// (Defined, Iterator, Latent, Net, Simulated, Exec, Native, Static)

void UGFxInteraction::STATIC_CloseAllMoviePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.CloseAllMoviePlayers");

	UGFxInteraction_CloseAllMoviePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// (Final, Defined, Latent, Net, Simulated, Exec, Native, Event)

void UGFxInteraction::NotifySplitscreenLayoutChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged");

	UGFxInteraction_NotifySplitscreenLayoutChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// (Final, Iterator, Net, Simulated, Exec, Native, Event)
// Parameters:
// int                            PlayerIndex                    (Parm)
// class ULocalPlayer*            RemovedPlayer                  (Parm)

void UGFxInteraction::NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifyPlayerRemoved");

	UGFxInteraction_NotifyPlayerRemoved_Params params;
	params.PlayerIndex = PlayerIndex;
	params.RemovedPlayer = RemovedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// (Iterator, Net, Simulated, Exec, Native, Event)
// Parameters:
// int                            PlayerIndex                    (Parm)
// class ULocalPlayer*            AddedPlayer                    (Parm)

void UGFxInteraction::NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifyPlayerAdded");

	UGFxInteraction_NotifyPlayerAdded_Params params;
	params.PlayerIndex = PlayerIndex;
	params.AddedPlayer = AddedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// (Iterator, Latent, PreOperator, Singular, Simulated, Exec, HasOptionalParms)

void UGFxInteraction::NotifyGameSessionEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifyGameSessionEnded");

	UGFxInteraction_NotifyGameSessionEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.GetFocusMovie
// (Final, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            ControllerId                   (Parm)
// class UGFxMoviePlayer*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxMoviePlayer* UGFxInteraction::STATIC_GetFocusMovie(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.GetFocusMovie");

	UGFxInteraction_GetFocusMovie_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// (Final, Defined, Iterator, Net, Event, Static)

void UGFxMoviePlayer::STATIC_UpdateSplitscreenLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout");

	UGFxMoviePlayer_UpdateSplitscreenLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// (Latent, Simulated, Exec, Native, Static)
// Parameters:
// bool                           bRemoveEffect                  (Parm)

void UGFxMoviePlayer::STATIC_ApplyPriorityVisibilityEffect(bool bRemoveEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect");

	UGFxMoviePlayer_ApplyPriorityVisibilityEffect_Params params;
	params.bRemoveEffect = bRemoveEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// (Final, Defined, Iterator, Simulated, Exec, Native, Static)
// Parameters:
// bool                           bRemoveEffect                  (Parm)

void UGFxMoviePlayer::STATIC_ApplyPriorityBlurEffect(bool bRemoveEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect");

	UGFxMoviePlayer_ApplyPriorityBlurEffect_Params params;
	params.bRemoveEffect = bRemoveEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// (Final, Latent, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// bool                           bRequestedBlurState            (Parm)
// bool                           bRequestedHiddenState          (Parm)

void UGFxMoviePlayer::ApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect");

	UGFxMoviePlayer_ApplyPriorityEffect_Params params;
	params.bRequestedBlurState = bRequestedBlurState;
	params.bRequestedHiddenState = bRequestedHiddenState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FName                   EventName                      (Parm)
// struct FName                   SoundThemeName                 (OptionalParm, Parm)

void UGFxMoviePlayer::STATIC_PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme");

	UGFxMoviePlayer_PlaySoundFromTheme_Params params;
	params.EventName = EventName;
	params.SoundThemeName = SoundThemeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnFocusLost
// (Defined, PreOperator, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// int                            LocalPlayerIndex               (Parm)

void UGFxMoviePlayer::OnFocusLost(int LocalPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnFocusLost");

	UGFxMoviePlayer_OnFocusLost_Params params;
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnFocusGained
// (Final, PreOperator, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// int                            LocalPlayerIndex               (Parm)

void UGFxMoviePlayer::OnFocusGained(int LocalPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnFocusGained");

	UGFxMoviePlayer_OnFocusGained_Params params;
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// (Final, PreOperator, Singular, Simulated, Native, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)

void UGFxMoviePlayer::STATIC_ConsoleCommand(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ConsoleCommand");

	UGFxMoviePlayer_ConsoleCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetPC
// (Defined, Iterator, Latent, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ReturnParm)

class APlayerController* UGFxMoviePlayer::GetPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetPC");

	UGFxMoviePlayer_GetPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetLP
// (Final, Iterator, Latent, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ReturnParm)

class ULocalPlayer* UGFxMoviePlayer::GetLP()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetLP");

	UGFxMoviePlayer_GetLP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// class ULocalPlayer*            LocPlay                        (OptionalParm, Parm)

void UGFxMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Init");

	UGFxMoviePlayer_Init_Params params;
	params.LocPlay = LocPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// (Final, Defined, Singular, Event, Static)
// Parameters:
// class UGFxObject*              WidgetToBind                   (Parm)
// struct FName                   Path                           (Parm)

void UGFxMoviePlayer::STATIC_SetWidgetPathBinding(class UGFxObject* WidgetToBind, const struct FName& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding");

	UGFxMoviePlayer_SetWidgetPathBinding_Params params;
	params.WidgetToBind = WidgetToBind;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// (Iterator, PreOperator, Singular, NetReliable, Native, HasOptionalParms)

void UGFxMoviePlayer::PostWidgetInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.PostWidgetInit");

	UGFxMoviePlayer_PostWidgetInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// (Latent, PreOperator, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.WidgetUnloaded");

	UGFxMoviePlayer_WidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.WidgetInitialized");

	UGFxMoviePlayer_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
// (Final, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 ClassName                      (Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::STATIC_ActionScriptConstructor(const struct FString& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptConstructor");

	UGFxMoviePlayer_ActionScriptConstructor_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::STATIC_ActionScriptObject(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptObject");

	UGFxMoviePlayer_ActionScriptObject_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptString
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxMoviePlayer::STATIC_ActionScriptString(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptString");

	UGFxMoviePlayer_ActionScriptString_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// (Defined, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxMoviePlayer::STATIC_ActionScriptFloat(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptFloat");

	UGFxMoviePlayer_ActionScriptFloat_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxMoviePlayer::STATIC_ActionScriptInt(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptInt");

	UGFxMoviePlayer_ActionScriptInt_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// (Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)

void UGFxMoviePlayer::STATIC_ActionScriptVoid(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptVoid");

	UGFxMoviePlayer_ActionScriptVoid_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Invoke
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 method                         (Parm, NeedCtorLink)
// TArray<struct FASValue>        args                           (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxMoviePlayer::STATIC_Invoke(const struct FString& method, TArray<struct FASValue> args)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Invoke");

	UGFxMoviePlayer_Invoke_Params params;
	params.method = method;
	params.args = args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// class UGFxObject*              Object                         (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)

void UGFxMoviePlayer::STATIC_ActionScriptSetFunction(class UGFxObject* Object, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction");

	UGFxMoviePlayer_ActionScriptSetFunction_Params params;
	params.Object = Object;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.CreateArray
// (PreOperator, Net, Simulated, Exec, Native, Static)
// Parameters:
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::STATIC_CreateArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.CreateArray");

	UGFxMoviePlayer_CreateArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.CreateObject
// (Defined, PreOperator, Net, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 ASClass                        (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// TArray<struct FASValue>        args                           (OptionalParm, Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::STATIC_CreateObject(const struct FString& ASClass, class UClass* Type, TArray<struct FASValue> args)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.CreateObject");

	UGFxMoviePlayer_CreateObject_Params params;
	params.ASClass = ASClass;
	params.Type = Type;
	params.args = args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// (Defined, Iterator, Latent, PreOperator, Event, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<struct FString>         Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::STATIC_SetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString> Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableStringArray");

	UGFxMoviePlayer_SetVariableStringArray_Params params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// (Latent, PreOperator, Event, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<float>                  Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::STATIC_SetVariableFloatArray(const struct FString& Path, int Index, TArray<float> Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableFloatArray");

	UGFxMoviePlayer_SetVariableFloatArray_Params params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// (Defined, Latent, PreOperator, Event, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<int>                    Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::STATIC_SetVariableIntArray(const struct FString& Path, int Index, TArray<int> Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableIntArray");

	UGFxMoviePlayer_SetVariableIntArray_Params params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableArray
// (Defined, Iterator, PreOperator, Event, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<struct FASValue>        Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::STATIC_SetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue> Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableArray");

	UGFxMoviePlayer_SetVariableArray_Params params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<struct FString>         Arg                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::STATIC_GetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString>* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableStringArray");

	UGFxMoviePlayer_GetVariableStringArray_Params params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// (Final, Latent, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<float>                  Arg                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::STATIC_GetVariableFloatArray(const struct FString& Path, int Index, TArray<float>* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableFloatArray");

	UGFxMoviePlayer_GetVariableFloatArray_Params params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// (Final, Defined, Latent, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<int>                    Arg                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::STATIC_GetVariableIntArray(const struct FString& Path, int Index, TArray<int>* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableIntArray");

	UGFxMoviePlayer_GetVariableIntArray_Params params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableArray
// (Final, Defined, Iterator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            Index                          (Parm)
// TArray<struct FASValue>        Arg                            (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::STATIC_GetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue>* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableArray");

	UGFxMoviePlayer_GetVariableArray_Params params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableObject
// (Iterator, Latent, PreOperator, Event, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UGFxObject*              Object                         (Parm)

void UGFxMoviePlayer::STATIC_SetVariableObject(const struct FString& Path, class UGFxObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableObject");

	UGFxMoviePlayer_SetVariableObject_Params params;
	params.Path = Path;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableString
// (Final, Iterator, Latent, PreOperator, Event, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FString                 S                              (Parm, NeedCtorLink)

void UGFxMoviePlayer::STATIC_SetVariableString(const struct FString& Path, const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableString");

	UGFxMoviePlayer_SetVariableString_Params params;
	params.Path = Path;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableInt
// (Final, Latent, PreOperator, Event, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            I                              (Parm)

void UGFxMoviePlayer::STATIC_SetVariableInt(const struct FString& Path, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableInt");

	UGFxMoviePlayer_SetVariableInt_Params params;
	params.Path = Path;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// (Final, Defined, Latent, PreOperator, Event, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// float                          F                              (Parm)

void UGFxMoviePlayer::STATIC_SetVariableNumber(const struct FString& Path, float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableNumber");

	UGFxMoviePlayer_SetVariableNumber_Params params;
	params.Path = Path;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableBool
// (Final, Defined, Iterator, PreOperator, Event, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// bool                           B                              (Parm)

void UGFxMoviePlayer::STATIC_SetVariableBool(const struct FString& Path, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableBool");

	UGFxMoviePlayer_SetVariableBool_Params params;
	params.Path = Path;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariable
// (Final, Iterator, PreOperator, Event, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FASValue                Arg                            (Parm, NeedCtorLink)

void UGFxMoviePlayer::STATIC_SetVariable(const struct FString& Path, const struct FASValue& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariable");

	UGFxMoviePlayer_SetVariable_Params params;
	params.Path = Path;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetAS3ClassObject
// (Final, Defined, Latent, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::STATIC_GetAS3ClassObject(const struct FString& Path, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetAS3ClassObject");

	UGFxMoviePlayer_GetAS3ClassObject_Params params;
	params.Path = Path;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableObject
// (Final, Iterator, Latent, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxMoviePlayer::STATIC_GetVariableObject(const struct FString& Path, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableObject");

	UGFxMoviePlayer_GetVariableObject_Params params;
	params.Path = Path;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableString
// (Defined, Iterator, Latent, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxMoviePlayer::STATIC_GetVariableString(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableString");

	UGFxMoviePlayer_GetVariableString_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableInt
// (Defined, Latent, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxMoviePlayer::STATIC_GetVariableInt(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableInt");

	UGFxMoviePlayer_GetVariableInt_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// (Iterator, Latent, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxMoviePlayer::STATIC_GetVariableNumber(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableNumber");

	UGFxMoviePlayer_GetVariableNumber_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableBool
// (Latent, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::STATIC_GetVariableBool(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableBool");

	UGFxMoviePlayer_GetVariableBool_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariable
// (Defined, Iterator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxMoviePlayer::STATIC_GetVariable(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariable");

	UGFxMoviePlayer_GetVariable_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// (Iterator, Latent, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxMoviePlayer::STATIC_GetAVMVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetAVMVersion");

	UGFxMoviePlayer_GetAVMVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ShouldBlockKey
// (Final, Iterator, PreOperator, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::ShouldBlockKey(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ShouldBlockKey");

	UGFxMoviePlayer_ShouldBlockKey_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// (Final, Defined, Latent, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.FilterButtonInput");

	UGFxMoviePlayer_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.NativeAllowButtonInput
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::STATIC_NativeAllowButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.NativeAllowButtonInput");

	UGFxMoviePlayer_NativeAllowButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// (Final, Defined, PreOperator, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           capturekeysonly                (Parm)

void UGFxMoviePlayer::STATIC_FlushPlayerInput(bool capturekeysonly)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.FlushPlayerInput");

	UGFxMoviePlayer_FlushPlayerInput_Params params;
	params.capturekeysonly = capturekeysonly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// (Iterator, Latent, Net, Simulated, Exec, Native, Static)

void UGFxMoviePlayer::STATIC_ClearFocusIgnoreKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys");

	UGFxMoviePlayer_ClearFocusIgnoreKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FName                   Key                            (Parm)

void UGFxMoviePlayer::STATIC_AddFocusIgnoreKey(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey");

	UGFxMoviePlayer_AddFocusIgnoreKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// (Final, Defined, Latent, Net, Simulated, Exec, Native, Static)

void UGFxMoviePlayer::STATIC_ClearCaptureKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ClearCaptureKeys");

	UGFxMoviePlayer_ClearCaptureKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FName                   Key                            (Parm)

void UGFxMoviePlayer::STATIC_AddCaptureKey(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.AddCaptureKey");

	UGFxMoviePlayer_AddCaptureKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// (Defined, Iterator, Latent, Event, Static)
// Parameters:
// bool                           bCanReceiveInput               (Parm)

void UGFxMoviePlayer::STATIC_SetMovieCanReceiveInput(bool bCanReceiveInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput");

	UGFxMoviePlayer_SetMovieCanReceiveInput_Params params;
	params.bCanReceiveInput = bCanReceiveInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// (Final, Iterator, Latent, Event, Static)
// Parameters:
// bool                           bCanReceiveFocus               (Parm)

void UGFxMoviePlayer::STATIC_SetMovieCanReceiveFocus(bool bCanReceiveFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus");

	UGFxMoviePlayer_SetMovieCanReceiveFocus_Params params;
	params.bCanReceiveFocus = bCanReceiveFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// (PreOperator, Event, Static)
// Parameters:
// struct FMatrix                 matPersp                       (Const, Parm, OutParm)

void UGFxMoviePlayer::STATIC_SetPerspective3D(struct FMatrix* matPersp)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetPerspective3D");

	UGFxMoviePlayer_SetPerspective3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (matPersp != nullptr)
		*matPersp = params.matPersp;
}


// Function GFxUI.GFxMoviePlayer.SetView3D
// (Final, Defined, Iterator, Latent, PreOperator, Event, Static)
// Parameters:
// struct FMatrix                 matView                        (Const, Parm, OutParm)

void UGFxMoviePlayer::STATIC_SetView3D(struct FMatrix* matView)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetView3D");

	UGFxMoviePlayer_SetView3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (matView != nullptr)
		*matView = params.matView;
}


// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// (Final, PreOperator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          x0                             (Parm, OutParm)
// float                          y0                             (Parm, OutParm)
// float                          X1                             (Parm, OutParm)
// float                          Y1                             (Parm, OutParm)

void UGFxMoviePlayer::STATIC_GetVisibleFrameRect(float* x0, float* y0, float* X1, float* Y1)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect");

	UGFxMoviePlayer_GetVisibleFrameRect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (x0 != nullptr)
		*x0 = params.x0;
	if (y0 != nullptr)
		*y0 = params.y0;
	if (X1 != nullptr)
		*X1 = params.X1;
	if (Y1 != nullptr)
		*Y1 = params.Y1;
}


// Function GFxUI.GFxMoviePlayer.SetAlignment
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// TEnumAsByte<EGFxAlign>         A                              (Parm)

void UGFxMoviePlayer::STATIC_SetAlignment(TEnumAsByte<EGFxAlign> A)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetAlignment");

	UGFxMoviePlayer_SetAlignment_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// (Final, Singular, Event, Static)
// Parameters:
// TEnumAsByte<EGFxScaleMode>     SM                             (Parm)

void UGFxMoviePlayer::STATIC_SetViewScaleMode(TEnumAsByte<EGFxScaleMode> SM)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetViewScaleMode");

	UGFxMoviePlayer_SetViewScaleMode_Params params;
	params.SM = SM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ViewportToScreen
// (Final, Iterator, Latent, Net, Event, Static)
// Parameters:
// int                            X                              (Parm)
// int                            Y                              (Parm)
// int                            xOut                           (Parm, OutParm)
// int                            yOut                           (Parm, OutParm)

void UGFxMoviePlayer::STATIC_ViewportToScreen(int X, int Y, int* xOut, int* yOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ViewportToScreen");

	UGFxMoviePlayer_ViewportToScreen_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (xOut != nullptr)
		*xOut = params.xOut;
	if (yOut != nullptr)
		*yOut = params.yOut;
}


// Function GFxUI.GFxMoviePlayer.ScreenToViewport
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            X                              (Parm)
// int                            Y                              (Parm)
// int                            xOut                           (Parm, OutParm)
// int                            yOut                           (Parm, OutParm)

void UGFxMoviePlayer::STATIC_ScreenToViewport(int X, int Y, int* xOut, int* yOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ScreenToViewport");

	UGFxMoviePlayer_ScreenToViewport_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (xOut != nullptr)
		*xOut = params.xOut;
	if (yOut != nullptr)
		*yOut = params.yOut;
}


// Function GFxUI.GFxMoviePlayer.GetViewport
// (PreOperator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            X                              (Parm, OutParm)
// int                            Y                              (Parm, OutParm)
// int                            Width                          (Parm, OutParm)
// int                            Height                         (Parm, OutParm)

void UGFxMoviePlayer::STATIC_GetViewport(int* X, int* Y, int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetViewport");

	UGFxMoviePlayer_GetViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}


// Function GFxUI.GFxMoviePlayer.SetViewport
// (Singular, Event, Static)
// Parameters:
// int                            X                              (Parm)
// int                            Y                              (Parm)
// int                            Width                          (Parm)
// int                            Height                         (Parm)

void UGFxMoviePlayer::STATIC_SetViewport(int X, int Y, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetViewport");

	UGFxMoviePlayer_SetViewport_Params params;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// (Defined, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// class UGameViewportClient*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameViewportClient* UGFxMoviePlayer::STATIC_GetGameViewportClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetGameViewportClient");

	UGFxMoviePlayer_GetGameViewportClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetPriority
// (Final, PreOperator, Event, Static)
// Parameters:
// unsigned char                  NewPriority                    (Parm)

void UGFxMoviePlayer::STATIC_SetPriority(unsigned char NewPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetPriority");

	UGFxMoviePlayer_SetPriority_Params params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// (Final, Defined, Iterator, Event, Static)
// Parameters:
// struct FString                 Resource                       (Parm, NeedCtorLink)
// class UTexture*                Texture                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::STATIC_SetExternalTexture(const struct FString& Resource, class UTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetExternalTexture");

	UGFxMoviePlayer_SetExternalTexture_Params params;
	params.Resource = Resource;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// (Defined, Iterator, Event, Static)
// Parameters:
// class UObject*                 H                              (Parm)

void UGFxMoviePlayer::STATIC_SetExternalInterface(class UObject* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetExternalInterface");

	UGFxMoviePlayer_SetExternalInterface_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetTimingMode
// (Iterator, PreOperator, Event, Static)
// Parameters:
// TEnumAsByte<EGFxTimingMode>    Mode                           (Parm)

void UGFxMoviePlayer::STATIC_SetTimingMode(TEnumAsByte<EGFxTimingMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetTimingMode");

	UGFxMoviePlayer_SetTimingMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// (Final, Defined, Iterator, Latent, Event, Static)
// Parameters:
// class USwfMovie*               Data                           (Parm)

void UGFxMoviePlayer::STATIC_SetMovieInfo(class USwfMovie* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetMovieInfo");

	UGFxMoviePlayer_SetMovieInfo_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// (Defined, Latent, Singular, NetReliable, Native, HasOptionalParms)

void UGFxMoviePlayer::ConditionalClearPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ConditionalClearPause");

	UGFxMoviePlayer_ConditionalClearPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnCleanup
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Native, HasOptionalParms)

void UGFxMoviePlayer::OnCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnCleanup");

	UGFxMoviePlayer_OnCleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnClose
// (PreOperator, Singular, NetReliable, Native, HasOptionalParms)

void UGFxMoviePlayer::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnClose");

	UGFxMoviePlayer_OnClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Close
// (Final, Iterator, Latent, Net, Simulated, Exec, Native, Static)
// Parameters:
// bool                           Unload                         (OptionalParm, Parm)

void UGFxMoviePlayer::STATIC_Close(bool Unload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Close");

	UGFxMoviePlayer_Close_Params params;
	params.Unload = Unload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetPause
// (Native, HasOptionalParms)
// Parameters:
// bool                           bPausePlayback                 (OptionalParm, Parm)

void UGFxMoviePlayer::SetPause(bool bPausePlayback)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetPause");

	UGFxMoviePlayer_SetPause_Params params;
	params.bPausePlayback = bPausePlayback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// (Final, Defined, PreOperator, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGFxMoviePlayer::OnPostAdvance(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnPostAdvance");

	UGFxMoviePlayer_OnPostAdvance_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PostAdvance
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGFxMoviePlayer::STATIC_PostAdvance(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.PostAdvance");

	UGFxMoviePlayer_PostAdvance_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Advance
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// float                          Time                           (Parm)

void UGFxMoviePlayer::STATIC_Advance(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Advance");

	UGFxMoviePlayer_Advance_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Start
// (Defined, Iterator, PreOperator, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMoviePlayer::Start(bool StartPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Start");

	UGFxMoviePlayer_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetFocused
// (Defined, Iterator, Latent, PreOperator, Net, Event, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::STATIC_GetFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetFocused");

	UGFxObject_GetFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetTextHeight
// (Iterator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetTextHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetTextHeight");

	UGFxObject_GetTextHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetTextWidth
// (Final, Iterator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetTextWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetTextWidth");

	UGFxObject_GetTextWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetYRotation
// (Final, Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetYRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetYRotation");

	UGFxObject_GetYRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetXRotation
// (Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetXRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetXRotation");

	UGFxObject_GetXRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetRotation
// (Iterator, Latent, PreOperator, NetReliable, Exec)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetRotation");

	UGFxObject_GetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetYScale
// (Latent, PreOperator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetYScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetYScale");

	UGFxObject_GetYScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetXScale
// (Final, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetXScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetXScale");

	UGFxObject_GetXScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetHeight
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetHeight");

	UGFxObject_GetHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetWidth
// (Defined, PreOperator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetWidth");

	UGFxObject_GetWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetAlpha
// (Defined, Latent, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetAlpha");

	UGFxObject_GetAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetY
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetY()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetY");

	UGFxObject_GetY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetX
// (Final, Defined, PreOperator, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetX");

	UGFxObject_GetX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetYRotation
// (Final, Latent, Singular, Event, Static)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::STATIC_SetYRotation(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetYRotation");

	UGFxObject_SetYRotation_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetXRotation
// (Defined, Iterator, Singular, Event, Static)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::STATIC_SetXRotation(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetXRotation");

	UGFxObject_SetXRotation_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetRotation
// (Defined, Latent, Singular, Net, Native, Event, Operator)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::SetRotation(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetRotation");

	UGFxObject_SetRotation_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisabled
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, HasOptionalParms)
// Parameters:
// bool                           bValue                         (Parm)

void UGFxObject::SetDisabled(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisabled");

	UGFxObject_SetDisabled_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetYScale
// (Defined, Latent, Singular, Event, Static)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::STATIC_SetYScale(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetYScale");

	UGFxObject_SetYScale_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetXScale
// (Final, Defined, Iterator, Singular, Event, Static)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::STATIC_SetXScale(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetXScale");

	UGFxObject_SetXScale_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetHeight
// (Defined, Latent, Event, Static)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::STATIC_SetHeight(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetHeight");

	UGFxObject_SetHeight_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetWidth
// (Iterator, Singular, Event, Static)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::STATIC_SetWidth(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetWidth");

	UGFxObject_SetWidth_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetAlpha
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::STATIC_SetAlpha(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetAlpha");

	UGFxObject_SetAlpha_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetY
// (Latent, Singular, Event, Static)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::STATIC_SetY(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetY");

	UGFxObject_SetY_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetX
// (Final, Iterator, Singular, Event, Static)
// Parameters:
// float                          fValue                         (Parm)

void UGFxObject::STATIC_SetX(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetX");

	UGFxObject_SetX_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.WidgetUnloaded
// (Latent, PreOperator, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.WidgetUnloaded");

	UGFxObject_WidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.WidgetInitialized
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.WidgetInitialized");

	UGFxObject_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ListChildren
// (Final, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Static)

void UGFxObject::STATIC_ListChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ListChildren");

	UGFxObject_ListChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.RemoveMovieClip
// (Defined, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 PathName                       (Parm, NeedCtorLink)

void UGFxObject::STATIC_RemoveMovieClip(const struct FString& PathName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.RemoveMovieClip");

	UGFxObject_RemoveMovieClip_Params params;
	params.PathName = PathName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.AttachMovie
// (Final, Iterator, Latent, PreOperator, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 symbolname                     (Parm, NeedCtorLink)
// struct FString                 instancename                   (Parm, NeedCtorLink)
// int                            Depth                          (OptionalParm, Parm)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::STATIC_AttachMovie(const struct FString& symbolname, const struct FString& instancename, int Depth, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.AttachMovie");

	UGFxObject_AttachMovie_Params params;
	params.symbolname = symbolname;
	params.instancename = instancename;
	params.Depth = Depth;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.CreateEmptyMovieClip
// (Final, PreOperator, Net, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 instancename                   (Parm, NeedCtorLink)
// int                            Depth                          (OptionalParm, Parm)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::STATIC_CreateEmptyMovieClip(const struct FString& instancename, int Depth, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.CreateEmptyMovieClip");

	UGFxObject_CreateEmptyMovieClip_Params params;
	params.instancename = instancename;
	params.Depth = Depth;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GotoAndStopI
// (Final, Defined, Singular, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            frame                          (Parm)

void UGFxObject::STATIC_GotoAndStopI(int frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndStopI");

	UGFxObject_GotoAndStopI_Params params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndStop
// (Defined, Singular, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 frame                          (Parm, NeedCtorLink)

void UGFxObject::STATIC_GotoAndStop(const struct FString& frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndStop");

	UGFxObject_GotoAndStop_Params params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndPlayI
// (Final, Singular, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            frame                          (Parm)

void UGFxObject::STATIC_GotoAndPlayI(int frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndPlayI");

	UGFxObject_GotoAndPlayI_Params params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndPlay
// (Singular, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 frame                          (Parm, NeedCtorLink)

void UGFxObject::STATIC_GotoAndPlay(const struct FString& frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndPlay");

	UGFxObject_GotoAndPlay_Params params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptArray
// (PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// TArray<class UGFxObject*>      ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class UGFxObject*> UGFxObject::STATIC_ActionScriptArray(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptArray");

	UGFxObject_ActionScriptArray_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptObject
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::STATIC_ActionScriptObject(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptObject");

	UGFxObject_ActionScriptObject_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptString
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 method                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::STATIC_ActionScriptString(const struct FString& method)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptString");

	UGFxObject_ActionScriptString_Params params;
	params.method = method;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptFloat
// (Defined, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 method                         (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_ActionScriptFloat(const struct FString& method)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptFloat");

	UGFxObject_ActionScriptFloat_Params params;
	params.method = method;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptInt
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 method                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxObject::STATIC_ActionScriptInt(const struct FString& method)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptInt");

	UGFxObject_ActionScriptInt_Params params;
	params.method = method;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptVoid
// (Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 method                         (Parm, NeedCtorLink)

void UGFxObject::STATIC_ActionScriptVoid(const struct FString& method)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptVoid");

	UGFxObject_ActionScriptVoid_Params params;
	params.method = method;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.Invoke
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// TArray<struct FASValue>        args                           (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxObject::STATIC_Invoke(const struct FString& Member, TArray<struct FASValue> args)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.Invoke");

	UGFxObject_Invoke_Params params;
	params.Member = Member;
	params.args = args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// class UGFxObject*              Target                         (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)

void UGFxObject::STATIC_ActionScriptSetFunctionOn(class UGFxObject* Target, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptSetFunctionOn");

	UGFxObject_ActionScriptSetFunctionOn_Params params;
	params.Target = Target;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptSetFunction
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)

void UGFxObject::STATIC_ActionScriptSetFunction(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptSetFunction");

	UGFxObject_ActionScriptSetFunction_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberString
// (Final, Event, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FString                 S                              (Parm, NeedCtorLink)

void UGFxObject::STATIC_SetElementMemberString(int Index, const struct FString& Member, const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberString");

	UGFxObject_SetElementMemberString_Params params;
	params.Index = Index;
	params.Member = Member;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberInt
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// int                            I                              (Parm)

void UGFxObject::STATIC_SetElementMemberInt(int Index, const struct FString& Member, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberInt");

	UGFxObject_SetElementMemberInt_Params params;
	params.Index = Index;
	params.Member = Member;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberFloat
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// float                          F                              (Parm)

void UGFxObject::STATIC_SetElementMemberFloat(int Index, const struct FString& Member, float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberFloat");

	UGFxObject_SetElementMemberFloat_Params params;
	params.Index = Index;
	params.Member = Member;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberBool
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           B                              (Parm)

void UGFxObject::STATIC_SetElementMemberBool(int Index, const struct FString& Member, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberBool");

	UGFxObject_SetElementMemberBool_Params params;
	params.Index = Index;
	params.Member = Member;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberObject
// (Event, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UGFxObject*              val                            (Parm)

void UGFxObject::STATIC_SetElementMemberObject(int Index, const struct FString& Member, class UGFxObject* val)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberObject");

	UGFxObject_SetElementMemberObject_Params params;
	params.Index = Index;
	params.Member = Member;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMember
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FASValue                Arg                            (Parm, NeedCtorLink)

void UGFxObject::STATIC_SetElementMember(int Index, const struct FString& Member, const struct FASValue& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMember");

	UGFxObject_SetElementMember_Params params;
	params.Index = Index;
	params.Member = Member;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementMemberString
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::STATIC_GetElementMemberString(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberString");

	UGFxObject_GetElementMemberString_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberInt
// (Final, Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxObject::STATIC_GetElementMemberInt(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberInt");

	UGFxObject_GetElementMemberInt_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberFloat
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetElementMemberFloat(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberFloat");

	UGFxObject_GetElementMemberFloat_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberBool
// (Final, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::STATIC_GetElementMemberBool(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberBool");

	UGFxObject_GetElementMemberBool_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberObject
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::STATIC_GetElementMemberObject(int Index, const struct FString& Member, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberObject");

	UGFxObject_GetElementMemberObject_Params params;
	params.Index = Index;
	params.Member = Member;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMember
// (Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxObject::STATIC_GetElementMember(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMember");

	UGFxObject_GetElementMember_Params params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetElementColorTransform
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FASColorTransform       cxform                         (Parm)

void UGFxObject::STATIC_SetElementColorTransform(int Index, const struct FASColorTransform& cxform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementColorTransform");

	UGFxObject_SetElementColorTransform_Params params;
	params.Index = Index;
	params.cxform = cxform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementPosition
// (Final, Defined, Event, Static)
// Parameters:
// int                            Index                          (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UGFxObject::STATIC_SetElementPosition(int Index, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementPosition");

	UGFxObject_SetElementPosition_Params params;
	params.Index = Index;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementVisible
// (Final, Iterator, Event, Static)
// Parameters:
// int                            Index                          (Parm)
// bool                           Visible                        (Parm)

void UGFxObject::STATIC_SetElementVisible(int Index, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementVisible");

	UGFxObject_SetElementVisible_Params params;
	params.Index = Index;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementDisplayMatrix
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FMatrix                 M                              (Parm)

void UGFxObject::STATIC_SetElementDisplayMatrix(int Index, const struct FMatrix& M)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementDisplayMatrix");

	UGFxObject_SetElementDisplayMatrix_Params params;
	params.Index = Index;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementDisplayInfo
// (Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FASDisplayInfo          D                              (Parm)

void UGFxObject::STATIC_SetElementDisplayInfo(int Index, const struct FASDisplayInfo& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementDisplayInfo");

	UGFxObject_SetElementDisplayInfo_Params params;
	params.Index = Index;
	params.D = D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementDisplayMatrix
// (Final, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UGFxObject::STATIC_GetElementDisplayMatrix(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementDisplayMatrix");

	UGFxObject_GetElementDisplayMatrix_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementDisplayInfo
// (Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FASDisplayInfo          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASDisplayInfo UGFxObject::STATIC_GetElementDisplayInfo(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementDisplayInfo");

	UGFxObject_GetElementDisplayInfo_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetElementString
// (Iterator, Event, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 S                              (Parm, NeedCtorLink)

void UGFxObject::STATIC_SetElementString(int Index, const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementString");

	UGFxObject_SetElementString_Params params;
	params.Index = Index;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementInt
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// int                            I                              (Parm)

void UGFxObject::STATIC_SetElementInt(int Index, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementInt");

	UGFxObject_SetElementInt_Params params;
	params.Index = Index;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementFloat
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// float                          F                              (Parm)

void UGFxObject::STATIC_SetElementFloat(int Index, float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementFloat");

	UGFxObject_SetElementFloat_Params params;
	params.Index = Index;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementBool
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// bool                           B                              (Parm)

void UGFxObject::STATIC_SetElementBool(int Index, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementBool");

	UGFxObject_SetElementBool_Params params;
	params.Index = Index;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementObject
// (Defined, Event, Static)
// Parameters:
// int                            Index                          (Parm)
// class UGFxObject*              val                            (Parm)

void UGFxObject::STATIC_SetElementObject(int Index, class UGFxObject* val)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementObject");

	UGFxObject_SetElementObject_Params params;
	params.Index = Index;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElement
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FASValue                Arg                            (Parm, NeedCtorLink)

void UGFxObject::STATIC_SetElement(int Index, const struct FASValue& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElement");

	UGFxObject_SetElement_Params params;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementString
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::STATIC_GetElementString(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementString");

	UGFxObject_GetElementString_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementInt
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxObject::STATIC_GetElementInt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementInt");

	UGFxObject_GetElementInt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementFloat
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::STATIC_GetElementFloat(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementFloat");

	UGFxObject_GetElementFloat_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementBool
// (Final, Defined, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::STATIC_GetElementBool(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementBool");

	UGFxObject_GetElementBool_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementObject
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::STATIC_GetElementObject(int Index, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementObject");

	UGFxObject_GetElementObject_Params params;
	params.Index = Index;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElement
// (Defined, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// int                            Index                          (Parm)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxObject::STATIC_GetElement(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElement");

	UGFxObject_GetElement_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetText
// (Final, Defined, PreOperator, Event, Static)
// Parameters:
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// class UTranslationContext*     InContext                      (OptionalParm, Parm)

void UGFxObject::STATIC_SetText(const struct FString& Text, class UTranslationContext* InContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetText");

	UGFxObject_SetText_Params params;
	params.Text = Text;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetText
// (Final, Defined, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::STATIC_GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetText");

	UGFxObject_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetForceHidden
// (Final, Singular, Net, Event, Static)
// Parameters:
// bool                           bForceHide                     (Parm)

void UGFxObject::STATIC_SetForceHidden(bool bForceHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetForceHidden");

	UGFxObject_SetForceHidden_Params params;
	params.bForceHide = bForceHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetVisible
// (Defined, Singular, Event, Static)
// Parameters:
// bool                           Visible                        (Parm)

void UGFxObject::STATIC_SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetVisible");

	UGFxObject_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayMatrix3D
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FMatrix                 M                              (Parm)

void UGFxObject::STATIC_SetDisplayMatrix3D(const struct FMatrix& M)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisplayMatrix3D");

	UGFxObject_SetDisplayMatrix3D_Params params;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayMatrix
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FMatrix                 M                              (Parm)

void UGFxObject::STATIC_SetDisplayMatrix(const struct FMatrix& M)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisplayMatrix");

	UGFxObject_SetDisplayMatrix_Params params;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetColorTransform
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FASColorTransform       cxform                         (Parm)

void UGFxObject::STATIC_SetColorTransform(const struct FASColorTransform& cxform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetColorTransform");

	UGFxObject_SetColorTransform_Params params;
	params.cxform = cxform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetPosition
// (Final, Defined, Iterator, Latent, PreOperator, Event, HasOptionalParms)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UGFxObject::SetPosition(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetPosition");

	UGFxObject_SetPosition_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayInfo
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FASDisplayInfo          D                              (Parm)
// bool                           bResetCache                    (OptionalParm, Parm)

void UGFxObject::STATIC_SetDisplayInfo(const struct FASDisplayInfo& D, bool bResetCache)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisplayInfo");

	UGFxObject_SetDisplayInfo_Params params;
	params.D = D;
	params.bResetCache = bResetCache;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetDisplayMatrix3D
// (Final, PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UGFxObject::STATIC_GetDisplayMatrix3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetDisplayMatrix3D");

	UGFxObject_GetDisplayMatrix3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetDisplayMatrix
// (PreOperator, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UGFxObject::STATIC_GetDisplayMatrix()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetDisplayMatrix");

	UGFxObject_GetDisplayMatrix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetColorTransform
// (Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// struct FASColorTransform       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASColorTransform UGFxObject::STATIC_GetColorTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetColorTransform");

	UGFxObject_GetColorTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetPosition
// (Final, Iterator, Singular, Net, Exec)
// Parameters:
// float                          X                              (Parm, OutParm)
// float                          Y                              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::GetPosition(float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetPosition");

	UGFxObject_GetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetDisplayInfo
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// struct FASDisplayInfo          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FASDisplayInfo UGFxObject::STATIC_GetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetDisplayInfo");

	UGFxObject_GetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.TranslateString
// (Final, Defined, Net, Event, Static)
// Parameters:
// struct FString                 StringToTranslate              (Parm, NeedCtorLink)
// class UTranslationContext*     InContext                      (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::STATIC_TranslateString(const struct FString& StringToTranslate, class UTranslationContext* InContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.TranslateString");

	UGFxObject_TranslateString_Params params;
	params.StringToTranslate = StringToTranslate;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetFunction
// (Final, Latent, Event, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UObject*                 context                        (Parm)
// struct FName                   fname                          (Parm)

void UGFxObject::STATIC_SetFunction(const struct FString& Member, class UObject* context, const struct FName& fname)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetFunction");

	UGFxObject_SetFunction_Params params;
	params.Member = Member;
	params.context = context;
	params.fname = fname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetObject
// (Defined, Latent, Singular, Native, Event, Operator)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UGFxObject*              val                            (Parm)

void UGFxObject::SetObject(const struct FString& Member, class UGFxObject* val)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetObject");

	UGFxObject_SetObject_Params params;
	params.Member = Member;
	params.val = val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetString
// (Defined, PreOperator, Event, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FString                 S                              (Parm, NeedCtorLink)
// class UTranslationContext*     InContext                      (OptionalParm, Parm)

void UGFxObject::STATIC_SetString(const struct FString& Member, const struct FString& S, class UTranslationContext* InContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetString");

	UGFxObject_SetString_Params params;
	params.Member = Member;
	params.S = S;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetInt
// (Final, Defined, Latent, Event, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// int                            I                              (Parm)

void UGFxObject::STATIC_SetInt(const struct FString& Member, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetInt");

	UGFxObject_SetInt_Params params;
	params.Member = Member;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetFloat
// (Latent, Event, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// float                          F                              (Parm)

void UGFxObject::STATIC_SetFloat(const struct FString& Member, float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetFloat");

	UGFxObject_SetFloat_Params params;
	params.Member = Member;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetBool
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           B                              (Parm)

void UGFxObject::STATIC_SetBool(const struct FString& Member, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetBool");

	UGFxObject_SetBool_Params params;
	params.Member = Member;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.Set
// (Final, Defined, Iterator, Net, Simulated, Exec, Event, Operator)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FASValue                Arg                            (Parm, NeedCtorLink)

void UGFxObject::Set(const struct FString& Member, const struct FASValue& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.Set");

	UGFxObject_Set_Params params;
	params.Member = Member;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetObject
// (Iterator, PreOperator, Singular, Exec)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// class UClass*                  Type                           (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UGFxObject::GetObject(const struct FString& Member, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetObject");

	UGFxObject_GetObject_Params params;
	params.Member = Member;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetString
// (Defined, Latent, Net, NetReliable, Exec)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxObject::GetString(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetString");

	UGFxObject_GetString_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetInt
// (Defined, Singular, Net, NetReliable, Simulated)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxObject::GetInt(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetInt");

	UGFxObject_GetInt_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetFloat
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGFxObject::GetFloat(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetFloat");

	UGFxObject_GetFloat_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetBool
// (Final, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           bIgnoreUndefined               (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxObject::STATIC_GetBool(const struct FString& Member, bool bIgnoreUndefined)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetBool");

	UGFxObject_GetBool_Params params;
	params.Member = Member;
	params.bIgnoreUndefined = bIgnoreUndefined;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.Get
// (Final, Latent, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FASValue UGFxObject::STATIC_Get(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.Get");

	UGFxObject_Get_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetColorMultiplier
// (PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          R                              (Parm)
// float                          G                              (Parm)
// float                          B                              (Parm)
// float                          A                              (OptionalParm, Parm)
// bool                           bMaintainAdditive              (OptionalParm, Parm)

void UGFxObject::STATIC_SetColorMultiplier(float R, float G, float B, float A, bool bMaintainAdditive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetColorMultiplier");

	UGFxObject_SetColorMultiplier_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;
	params.bMaintainAdditive = bMaintainAdditive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetColor
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// float                          R                              (Parm)
// float                          G                              (Parm)
// float                          B                              (Parm)
// float                          A                              (OptionalParm, Parm)
// bool                           bMaintainMultiplier            (OptionalParm, Parm)

void UGFxObject::STATIC_SetColor(float R, float G, float B, float A, bool bMaintainMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetColor");

	UGFxObject_SetColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;
	params.bMaintainMultiplier = bMaintainMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// (Final, Defined, Iterator, PreOperator, Simulated, Exec, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_CloseMovie::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject");

	UGFxAction_CloseMovie_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// (Final, Defined, Iterator, PreOperator, Simulated, Exec, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_GetVariable::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject");

	UGFxAction_GetVariable_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// (Final, Defined, Iterator, PreOperator, Simulated, Exec, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_Invoke::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject");

	UGFxAction_Invoke_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// (Final, Defined, Iterator, PreOperator, Simulated, Exec, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_OpenMovie::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject");

	UGFxAction_OpenMovie_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// (Final, Defined, Iterator, PreOperator, Simulated, Exec, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxAction_SetVariable::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject");

	UGFxAction_SetVariable_IsValidLevelSequenceObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// (Iterator, Latent, Singular, NetReliable, Native, HasOptionalParms)
// Parameters:
// class UGFxMoviePlayer*         Movie                          (Parm)
// class UGFxEvent_FSCommand*     Event                          (Parm)
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// struct FString                 Arg                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxFSCmdHandler_Kismet::FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand");

	UGFxFSCmdHandler_Kismet_FSCommand_Params params;
	params.Movie = Movie;
	params.Event = Event;
	params.Cmd = Cmd;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// (Latent, PreOperator, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Event                          (Parm, NeedCtorLink)

void UGFxClikWidget::STATIC_ASRemoveAllEventListeners(const struct FString& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners");

	UGFxClikWidget_ASRemoveAllEventListeners_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.AS3AddEventListener
// (Iterator, Latent, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Type                           (Parm, NeedCtorLink)
// class UGFxObject*              O                              (Parm)
// bool                           useCapture                     (OptionalParm, Parm)
// int                            listenerPriority               (OptionalParm, Parm)
// bool                           useWeakReference               (OptionalParm, Parm)

void UGFxClikWidget::STATIC_AS3AddEventListener(const struct FString& Type, class UGFxObject* O, bool useCapture, int listenerPriority, bool useWeakReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.AS3AddEventListener");

	UGFxClikWidget_AS3AddEventListener_Params params;
	params.Type = Type;
	params.O = O;
	params.useCapture = useCapture;
	params.listenerPriority = listenerPriority;
	params.useWeakReference = useWeakReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.ASAddEventListener
// (Iterator, PreOperator, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Type                           (Parm, NeedCtorLink)
// class UGFxObject*              O                              (Parm)
// struct FString                 func                           (Parm, NeedCtorLink)

void UGFxClikWidget::STATIC_ASAddEventListener(const struct FString& Type, class UGFxObject* O, const struct FString& func)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.ASAddEventListener");

	UGFxClikWidget_ASAddEventListener_Params params;
	params.Type = Type;
	params.O = O;
	params.func = func;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.SetListener
// (Iterator, Latent, Event, Static)
// Parameters:
// class UGFxObject*              O                              (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// struct FScriptDelegate         Listener                       (Parm, NeedCtorLink)

void UGFxClikWidget::STATIC_SetListener(class UGFxObject* O, const struct FString& Member, const struct FScriptDelegate& Listener)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.SetListener");

	UGFxClikWidget_SetListener_Params params;
	params.O = O;
	params.Member = Member;
	params.Listener = Listener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// (NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FName                   Typename                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxClikWidget::STATIC_GetEventStringFromTypename(const struct FName& Typename)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.GetEventStringFromTypename");

	UGFxClikWidget_GetEventStringFromTypename_Params params;
	params.Typename = Typename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// (Final, Singular, Net, NetReliable, Simulated, Exec, Native, Static)
// Parameters:
// struct FString                 Event                          (Parm, NeedCtorLink)

void UGFxClikWidget::STATIC_RemoveAllEventListeners(const struct FString& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.RemoveAllEventListeners");

	UGFxClikWidget_RemoveAllEventListeners_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.AddEventListener
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Static)
// Parameters:
// struct FName                   Type                           (Parm)
// struct FScriptDelegate         Listener                       (Parm, NeedCtorLink)
// bool                           useCapture                     (OptionalParm, Parm)
// int                            listenerPriority               (OptionalParm, Parm)
// bool                           useWeakReference               (OptionalParm, Parm)

void UGFxClikWidget::STATIC_AddEventListener(const struct FName& Type, const struct FScriptDelegate& Listener, bool useCapture, int listenerPriority, bool useWeakReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.AddEventListener");

	UGFxClikWidget_AddEventListener_Params params;
	params.Type = Type;
	params.Listener = Listener;
	params.useCapture = useCapture;
	params.listenerPriority = listenerPriority;
	params.useWeakReference = useWeakReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.EventListener
// (Defined, Iterator, PreOperator, Net, Simulated, Exec, Native, Static)
// Parameters:
// struct FEventData              Data                           (Parm, NeedCtorLink)

void UGFxClikWidget::STATIC_EventListener(const struct FEventData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.EventListener");

	UGFxClikWidget_EventListener_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
