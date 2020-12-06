#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_OnlineSubsystemEpic_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemEpic.OnlineGameInterfaceEpic
// 0x0000
class OnlineGameInterfaceEpic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEpic.OnlineGameInterfaceEpic");
		return ptr;
	}

};


// Class OnlineSubsystemEpic.OnlineSubsystemEpic
// 0x0000
class OnlineSubsystemEpic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEpic.OnlineSubsystemEpic");
		return ptr;
	}

};


// Class OnlineSubsystemEpic.OnlineMarketplaceInterfaceEpic
// 0x0000
class OnlineMarketplaceInterfaceEpic
{
public:

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
