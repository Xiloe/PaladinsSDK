// Paladins (4.1.3942.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_AkAudio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AkAudio.AkAmbientSound.StopPlayback
// (Iterator, Latent, Singular, NetReliable, Exec, Native, Operator, Static)

void AAkAmbientSound::STATIC_StopPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StopPlayback");

	AAkAmbientSound_StopPlayback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSound.StartPlayback
// (Defined, Latent, Singular, NetReliable, Exec, Native, Operator, Static)

void AAkAmbientSound::STATIC_StartPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StartPlayback");

	AAkAmbientSound_StartPlayback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
