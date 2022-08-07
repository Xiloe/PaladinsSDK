#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Vivox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Vivox.VivoxOSSConnectors
// 0x0020 (0x0080 - 0x0060)
class UVivoxOSSConnectors : public UObject
{
public:
	class UOnlineSubsystem*                            m_OnlineSub;                                              // 0x0060(0x0008)
	TArray<class UVivoxClosure*>                       Closures;                                                 // 0x0068(0x0010) (NeedCtorLink)
	struct FPointer                                    m_VivoxInterface;                                         // 0x0078(0x0008) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vivox.VivoxOSSConnectors");
		return ptr;
	}


	void OnGameChatBlockedChanged(bool bIsActive);
	bool STATIC_IsGameChatBlocked();
	void STATIC_SignalGameChatStopping();
	void STATIC_SignalGameChatAttempting();
	void STATIC_OnPrivilegeCheckedForUsersByUniqueNetIds(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResultByUniqueNetId> Results);
	bool STATIC_CanCommunicateVoiceWithUsersByUniqueNetIds(TArray<struct FUniqueNetId> Users);
	bool STATIC_OnPrivilegeLevelChecked(int ChannelJoinCount, unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint);
	bool STATIC_CanCommunicateVoice(int ChannelJoinCount, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	void RemoveClosure(class UVivoxClosure* Closure);
	void STATIC_RegisterOnlineDelegates();
};


// Class Vivox.VivoxClosure
// 0x0010 (0x0070 - 0x0060)
class UVivoxClosure : public UObject
{
public:
	class UVivoxOSSConnectors*                         m_Connector;                                              // 0x0060(0x0008)
	class UOnlineSubsystem*                            m_OnlineSub;                                              // 0x0068(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vivox.VivoxClosure");
		return ptr;
	}


	void ClearOnlineDelegates();
	void STATIC_RegisterOnlineDelegates(class UOnlineSubsystem* OnlineSub);
	void Init(class UVivoxOSSConnectors* ParamConnector);
};


// Class Vivox.VivoxClosureOnPrivilegeLevelChecked
// 0x0004 (0x0074 - 0x0070)
class UVivoxClosureOnPrivilegeLevelChecked : public UVivoxClosure
{
public:
	int                                                m_ChannelJoinCount;                                       // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Vivox.VivoxClosureOnPrivilegeLevelChecked");
		return ptr;
	}


	void STATIC_OnPrivilegeLevelChecked(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint);
	void ClearOnlineDelegates();
	void STATIC_RegisterOnlineDelegates(class UOnlineSubsystem* OnlineSub);
	void InitClosure(int ChannelJoinCount, class UVivoxOSSConnectors* Connector);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
