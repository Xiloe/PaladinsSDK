#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_OnlineSubsystemSteamworks_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0000
class OnlineAuthInterfaceSteamworks
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x0000
class OnlineGameInterfaceSteamworks
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x0000
class OnlineSubsystemSteamworks
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x185ABC2A9C0
class IpNetDriverSteamworks
{
public:
	unsigned char                                      UnknownData00[0x185ABC2A9C0];                             // 0x0000(0x185ABC2A9C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetDriverSteamworks");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000
class IpNetConnectionSteamworks
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
