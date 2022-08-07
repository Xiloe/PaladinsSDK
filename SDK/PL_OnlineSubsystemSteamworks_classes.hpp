#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_OnlineSubsystemSteamworks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0000 (0x0324 - 0x0324)
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x0060 (0x03A8 - 0x0348)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0348(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x094C (0x0BD4 - 0x0288)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	unsigned char                                      UnknownData00[0x94C];                                     // 0x0288(0x094C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0014 (0x023C - 0x0228)
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:
	unsigned long                                      bSteamSocketsOnly : 1;                                    // 0x0228(0x0004) (Config)
	unsigned char                                      UnknownData00[0x10];                                      // 0x022C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetDriverSteamworks");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000 (0xB130 - 0xB130)
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
