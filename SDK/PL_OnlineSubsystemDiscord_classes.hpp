#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_OnlineSubsystemDiscord_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemDiscord.OnlineGameInterfaceDiscord
// 0x0000
class OnlineGameInterfaceDiscord
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemDiscord.OnlineGameInterfaceDiscord");
		return ptr;
	}

};


// Class OnlineSubsystemDiscord.OnlineSubsystemDiscord
// 0x0000
class OnlineSubsystemDiscord
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemDiscord.OnlineSubsystemDiscord");
		return ptr;
	}

};


// Class OnlineSubsystemDiscord.OnlineMarketplaceInterfaceDiscord
// 0x0000
class OnlineMarketplaceInterfaceDiscord
{
public:

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
