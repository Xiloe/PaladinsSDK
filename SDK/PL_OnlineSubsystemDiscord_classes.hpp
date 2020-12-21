#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_OnlineSubsystemDiscord_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemDiscord.OnlineGameInterfaceDiscord
// 0x0060 (0x03A8 - 0x0348)
class UOnlineGameInterfaceDiscord : public UOnlineGameInterfaceImpl
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0348(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemDiscord.OnlineGameInterfaceDiscord");
		return ptr;
	}

};


// Class OnlineSubsystemDiscord.OnlineSubsystemDiscord
// 0x07C8 (0x0A50 - 0x0288)
class UOnlineSubsystemDiscord : public UOnlineSubsystemCommonImpl
{
public:
	unsigned char                                      UnknownData00[0x7C8];                                     // 0x0288(0x07C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemDiscord.OnlineSubsystemDiscord");
		return ptr;
	}

};


// Class OnlineSubsystemDiscord.OnlineMarketplaceInterfaceDiscord
// 0x07F8 (0x0858 - 0x0060)
class UOnlineMarketplaceInterfaceDiscord : public UObject
{
public:
	unsigned char                                      UnknownData00[0x7F8];                                     // 0x0060(0x07F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemDiscord.OnlineMarketplaceInterfaceDiscord");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
