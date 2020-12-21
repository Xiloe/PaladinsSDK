#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_WinDrv_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WinDrv.FacebookWindows
// 0x0010 (0x00F0 - 0x00E0)
class UFacebookWindows : public UFacebookIntegration
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.FacebookWindows");
		return ptr;
	}

};


// Class WinDrv.HttpRequestWindows
// 0x0030 (0x00A0 - 0x0070)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0070(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpRequestWindows");
		return ptr;
	}

};


// Class WinDrv.HttpResponseWindows
// 0x0018 (0x0078 - 0x0060)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpResponseWindows");
		return ptr;
	}

};


// Class WinDrv.SwrveAnalyticsWindows
// 0x0048 (0x00E0 - 0x0098)
class USwrveAnalyticsWindows : public UAnalyticEventsBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0098(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.SwrveAnalyticsWindows");
		return ptr;
	}

};


// Class WinDrv.WindowsClient
// 0x0200 (0x0278 - 0x0078)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[0x1AC];                                     // 0x0078(0x01AC) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                         // 0x0224(0x0008) (Config)
	unsigned char                                      UnknownData01[0x38];                                      // 0x022C(0x0038) MISSED OFFSET
	int                                                AllowJoystickInput;                                       // 0x0264(0x0004) (Config)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0268(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.WindowsClient");
		return ptr;
	}

};


// Class WinDrv.XnaForceFeedbackManager
// 0x0004 (0x007C - 0x0078)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0078(0x0004) MISSED OFFSET

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
