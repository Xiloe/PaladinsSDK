#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_AkAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0008 (0x00A4 - 0x009C)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                             // 0x009C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSound");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x000C (0x0294 - 0x0288)
class AAkAmbientSound : public AKeypoint
{
public:
	unsigned long                                      bAutoPlay : 1;                                            // 0x0288(0x0004)
	unsigned long                                      StopWhenOwnerIsDestroyed : 1;                             // 0x0288(0x0004) (Edit)
	unsigned long                                      bIsPlaying : 1;                                           // 0x0288(0x0004) (Transient)
	class UAkEvent*                                    PlayEvent;                                                // 0x028C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}


	void StopPlayback();
	void StartPlayback();
};


// Class AkAudio.AkComponent
// 0x0017 (0x009C - 0x0085)
class UAkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0088(0x0008) (Edit)
	class UAkEvent*                                    AutoPlayEvent;                                            // 0x0090(0x0008)
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                              // 0x0098(0x0004)
	unsigned long                                      bRegisteredWithWwise : 1;                                 // 0x0098(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkEvent
// 0x0010 (0x00B0 - 0x00A0)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	TArray<struct FAkEventTrackKey>                    AkEvents;                                                 // 0x00A0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkRTPC
// 0x0010 (0x00C8 - 0x00B8)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x00B8(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x0064 - 0x0060)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkRTPC");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x0108 - 0x0108)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkClearBanks");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkLoadBank
// 0x0010 (0x0130 - 0x0120)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	unsigned long                                      Async : 1;                                                // 0x0120(0x0004) (Edit)
	unsigned long                                      bWaitingCallback : 1;                                     // 0x0120(0x0004) (Transient)
	class UAkBank*                                     Bank;                                                     // 0x0124(0x0008) (Edit)
	int                                                Signal;                                                   // 0x012C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkLoadBank");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPostEvent
// 0x000C (0x012C - 0x0120)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	int                                                Signal;                                                   // 0x0120(0x0004) (Transient)
	class UAkEvent*                                    Event;                                                    // 0x0124(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostEvent");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPostTrigger
// 0x0010 (0x0118 - 0x0108)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                                  // 0x0108(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostTrigger");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0018 (0x0138 - 0x0120)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                                    // 0x0120(0x0010) (Edit, NeedCtorLink)
	float                                              Value;                                                    // 0x0130(0x0004) (Edit)
	unsigned long                                      Running : 1;                                              // 0x0134(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetRTPCValue");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetState
// 0x0020 (0x0128 - 0x0108)
class USeqAct_AkSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                               // 0x0108(0x0010) (Edit, NeedCtorLink)
	struct FString                                     State;                                                    // 0x0118(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetState");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetSwitch
// 0x0020 (0x0128 - 0x0108)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                              // 0x0108(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Switch;                                                   // 0x0118(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetSwitch");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x0108 - 0x0108)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStartAmbientSound");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x0108 - 0x0108)
class USeqAct_AkStopAll : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStopAll");
		return ptr;
	}

};


// Class AkAudio.AkAudioDevice
// 0x0018 (0x0080 - 0x0068)
class UAkAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioDevice");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
