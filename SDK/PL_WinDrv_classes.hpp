#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_WinDrv_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WinDrv.FacebookWindows
// 0x0000
class FacebookWindows
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.FacebookWindows");
		return ptr;
	}

};


// Class WinDrv.HttpRequestWindows
// 0x0000
class HttpRequestWindows
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpRequestWindows");
		return ptr;
	}

};


// Class WinDrv.HttpResponseWindows
// 0x0000
class HttpResponseWindows
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpResponseWindows");
		return ptr;
	}

};


// Class WinDrv.SwrveAnalyticsWindows
// 0x0000
class SwrveAnalyticsWindows
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.SwrveAnalyticsWindows");
		return ptr;
	}

};


// Class WinDrv.WindowsClient
// 0x185ABC2BBC0
class WindowsClient
{
public:
	unsigned char                                      UnknownData00[0x185ABC2BBC0];                             // 0x0000(0x185ABC2BBC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.WindowsClient");
		return ptr;
	}

};


// Class WinDrv.XnaForceFeedbackManager
// 0x0000
class XnaForceFeedbackManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
