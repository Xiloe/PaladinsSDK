#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_OnlineSubsystemEpic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemEpic.OnlineGameInterfaceEpic
// 0x0060 (0x03A8 - 0x0348)
class UOnlineGameInterfaceEpic : public UOnlineGameInterfaceImpl
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0348(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEpic.OnlineGameInterfaceEpic");
		return ptr;
	}

};


// Class OnlineSubsystemEpic.OnlineSubsystemEpic
// 0x07B8 (0x0A40 - 0x0288)
class UOnlineSubsystemEpic : public UOnlineSubsystemCommonImpl
{
public:
	unsigned char                                      UnknownData00[0x7B8];                                     // 0x0288(0x07B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEpic.OnlineSubsystemEpic");
		return ptr;
	}

};


// Class OnlineSubsystemEpic.OnlineMarketplaceInterfaceEpic
// 0x00C8 (0x0128 - 0x0060)
class UOnlineMarketplaceInterfaceEpic : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0060(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEpic.OnlineMarketplaceInterfaceEpic");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
