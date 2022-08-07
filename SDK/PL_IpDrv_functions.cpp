// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_IpDrv_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IpDrv.InternetLink.ResolveFailed
// (Final, Iterator, PreOperator, Simulated, Exec, Native, HasOptionalParms)

void AInternetLink::ResolveFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.ResolveFailed");

	AInternetLink_ResolveFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.InternetLink.Resolved
// (Iterator, PreOperator, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FIpAddr                 Addr                           (Parm)

void AInternetLink::Resolved(const struct FIpAddr& Addr)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.Resolved");

	AInternetLink_Resolved_Params params;
	params.Addr = Addr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.InternetLink.GetLocalIP
// (PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FIpAddr                 Arg                            (Parm, OutParm)

void AInternetLink::GetLocalIP(struct FIpAddr* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.GetLocalIP");

	AInternetLink_GetLocalIP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;
}


// Function IpDrv.InternetLink.StringToIpAddr
// (Final, Latent, Singular, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)
// struct FIpAddr                 Addr                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AInternetLink::StringToIpAddr(const struct FString& Str, struct FIpAddr* Addr)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.StringToIpAddr");

	AInternetLink_StringToIpAddr_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Addr != nullptr)
		*Addr = params.Addr;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.IpAddrToString
// (Final, Defined, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FIpAddr                 Arg                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AInternetLink::IpAddrToString(const struct FIpAddr& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.IpAddrToString");

	AInternetLink_IpAddrToString_Params params;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.GetLastError
// (Final, Iterator, Latent, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AInternetLink::GetLastError()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.GetLastError");

	AInternetLink_GetLastError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.Resolve
// (Final, Iterator, Singular, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Domain                         (Parm, CoerceParm, NeedCtorLink)

void AInternetLink::Resolve(const struct FString& Domain)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.Resolve");

	AInternetLink_Resolve_Params params;
	params.Domain = Domain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.InternetLink.ParseURL
// (Final, Latent, Net, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 URL                            (Parm, CoerceParm, NeedCtorLink)
// struct FString                 Addr                           (Parm, OutParm, NeedCtorLink)
// int                            PortNum                        (Parm, OutParm)
// struct FString                 LevelName                      (Parm, OutParm, NeedCtorLink)
// struct FString                 EntryName                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AInternetLink::ParseURL(const struct FString& URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.ParseURL");

	AInternetLink_ParseURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Addr != nullptr)
		*Addr = params.Addr;
	if (PortNum != nullptr)
		*PortNum = params.PortNum;
	if (LevelName != nullptr)
		*LevelName = params.LevelName;
	if (EntryName != nullptr)
		*EntryName = params.EntryName;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.IsDataPending
// (Defined, Iterator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AInternetLink::IsDataPending()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.InternetLink.IsDataPending");

	AInternetLink_IsDataPending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.ReceivedBinary
// (PreOperator, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// int                            Count                          (Parm)
// unsigned char                  B                              (Parm)

void ATcpLink::ReceivedBinary(int Count, unsigned char B)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.ReceivedBinary");

	ATcpLink_ReceivedBinary_Params params;
	params.Count = Count;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.ReceivedLine
// (Final, PreOperator, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FString                 Line                           (Parm, NeedCtorLink)

void ATcpLink::ReceivedLine(const struct FString& Line)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.ReceivedLine");

	ATcpLink_ReceivedLine_Params params;
	params.Line = Line;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.ReceivedText
// (Defined, PreOperator, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)

void ATcpLink::ReceivedText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.ReceivedText");

	ATcpLink_ReceivedText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.Closed
// (PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)

void ATcpLink::Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.Closed");

	ATcpLink_Closed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.Opened
// (Final, Defined, Iterator, Latent, Simulated, Exec, Native, HasOptionalParms)

void ATcpLink::Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.Opened");

	ATcpLink_Opened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.Accepted
// (Final, Defined, Iterator, Latent, Net, NetReliable, Exec, Native, HasOptionalParms)

void ATcpLink::Accepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.Accepted");

	ATcpLink_Accepted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.ReadBinary
// (Final, Iterator, Latent, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// int                            Count                          (Parm)
// unsigned char                  B                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ATcpLink::ReadBinary(int Count, unsigned char* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.ReadBinary");

	ATcpLink_ReadBinary_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (B != nullptr)
		*B = params.B;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.ReadText
// (Iterator, PreOperator, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Str                            (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ATcpLink::ReadText(struct FString* Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.ReadText");

	ATcpLink_ReadText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Str != nullptr)
		*Str = params.Str;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.SendBinary
// (Iterator, Net, Simulated, Exec)
// Parameters:
// int                            Count                          (Parm)
// unsigned char                  B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ATcpLink::SendBinary(int Count, unsigned char B)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.SendBinary");

	ATcpLink_SendBinary_Params params;
	params.Count = Count;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.SendText
// (Final, Defined, Net, Simulated, Exec)
// Parameters:
// struct FString                 Str                            (Parm, CoerceParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ATcpLink::SendText(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.SendText");

	ATcpLink_SendText_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.IsConnected
// (Final, Iterator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATcpLink::IsConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.IsConnected");

	ATcpLink_IsConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.Close
// (Final, Iterator, Singular, NetReliable, Native, Event, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATcpLink::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.Close");

	ATcpLink_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.Open
// (Final, Singular, Net, NetReliable, Exec, Event, Operator)
// Parameters:
// struct FIpAddr                 Addr                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATcpLink::Open(const struct FIpAddr& Addr)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.Open");

	ATcpLink_Open_Params params;
	params.Addr = Addr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.Listen
// (Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Event, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATcpLink::Listen()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.Listen");

	ATcpLink_Listen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.BindPort
// (Iterator, Latent, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// int                            PortNum                        (OptionalParm, Parm)
// bool                           bUseNextAvailable              (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ATcpLink::BindPort(int PortNum, bool bUseNextAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TcpLink.BindPort");

	ATcpLink_BindPort_Params params;
	params.PortNum = PortNum;
	params.bUseNextAvailable = bUseNextAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServiceBase.GetUserAuthURL
// (Defined, Iterator, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UMcpServiceBase::GetUserAuthURL(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServiceBase.GetUserAuthURL");

	UMcpServiceBase_GetUserAuthURL_Params params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServiceBase.GetAppAccessURL
// (Final, Defined, Latent, PreOperator, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UMcpServiceBase::GetAppAccessURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServiceBase.GetAppAccessURL");

	UMcpServiceBase_GetAppAccessURL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServiceBase.GetBaseURL
// (Final, Iterator, Latent, PreOperator, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UMcpServiceBase::GetBaseURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServiceBase.GetBaseURL");

	UMcpServiceBase_GetBaseURL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServiceBase.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UMcpServiceBase::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServiceBase.Init");

	UMcpServiceBase_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// (Iterator, Singular, Net, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            UniqueId                       (Parm)
// class UOnlineMatchmakingStats* MMStats                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineEventsInterfaceMcp::UploadMatchmakingStats(const struct FUniqueNetId& UniqueId, class UOnlineMatchmakingStats* MMStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats");

	UOnlineEventsInterfaceMcp_UploadMatchmakingStats_Params params;
	params.UniqueId = UniqueId;
	params.MMStats = MMStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// (Final, Iterator, PreOperator, Native, Event, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            NumPlayers                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineEventsInterfaceMcp::UpdatePlaylistPopulation(int PlaylistId, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation");

	UOnlineEventsInterfaceMcp_UpdatePlaylistPopulation_Params params;
	params.PlaylistId = PlaylistId;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// (Final, Iterator, Latent, Singular, Native, Event, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            UniqueId                       (Parm)
// TArray<unsigned char>          Payload                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineEventsInterfaceMcp::UploadGameplayEventsData(const struct FUniqueNetId& UniqueId, TArray<unsigned char>* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData");

	UOnlineEventsInterfaceMcp_UploadGameplayEventsData_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Payload != nullptr)
		*Payload = params.Payload;

	return params.ReturnValue;
}


// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// (Defined, Iterator, Latent, Singular, Native, Event, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            UniqueId                       (Parm)
// struct FString                 PlayerNick                     (Parm, NeedCtorLink)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineEventsInterfaceMcp::UploadPlayerData(const struct FUniqueNetId& UniqueId, const struct FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData");

	UOnlineEventsInterfaceMcp_UploadPlayerData_Params params;
	params.UniqueId = UniqueId;
	params.PlayerNick = PlayerNick;
	params.ProfileSettings = ProfileSettings;
	params.PlayerStorage = PlayerStorage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EOnlineNewsType>   NewsType                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineNewsInterfaceMcp::STATIC_GetNews(unsigned char LocalUserNum, TEnumAsByte<EOnlineNewsType> NewsType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineNewsInterfaceMcp.GetNews");

	UOnlineNewsInterfaceMcp_GetNews_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewsType = NewsType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// (Final, Defined, Iterator, Singular, Net, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ReadGameNewsDelegate           (Parm, NeedCtorLink)

void UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate(const struct FScriptDelegate& ReadGameNewsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate");

	UOnlineNewsInterfaceMcp_ClearReadNewsCompletedDelegate_Params params;
	params.ReadGameNewsDelegate = ReadGameNewsDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// (Defined, PreOperator, Singular, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         ReadNewsDelegate               (Parm, NeedCtorLink)

void UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate(const struct FScriptDelegate& ReadNewsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate");

	UOnlineNewsInterfaceMcp_AddReadNewsCompletedDelegate_Params params;
	params.ReadNewsDelegate = ReadNewsDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// TEnumAsByte<EOnlineNewsType>   NewsType                       (Parm)

void UOnlineNewsInterfaceMcp::OnReadNewsCompleted(bool bWasSuccessful, TEnumAsByte<EOnlineNewsType> NewsType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted");

	UOnlineNewsInterfaceMcp_OnReadNewsCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.NewsType = NewsType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EOnlineNewsType>   NewsType                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineNewsInterfaceMcp::STATIC_ReadNews(unsigned char LocalUserNum, TEnumAsByte<EOnlineNewsType> NewsType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineNewsInterfaceMcp.ReadNews");

	UOnlineNewsInterfaceMcp_ReadNews_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewsType = NewsType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile
// (Defined, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineTitleFileDownloadBase::GetUrlForFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile");

	UOnlineTitleFileDownloadBase_GetUrlForFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate
// (Final, Defined, Latent, PreOperator, Singular, Net, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         RequestTitleFileListDelegate   (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadBase::ClearRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate");

	UOnlineTitleFileDownloadBase_ClearRequestTitleFileListCompleteDelegate_Params params;
	params.RequestTitleFileListDelegate = RequestTitleFileListDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate
// (Iterator, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         RequestTitleFileListDelegate   (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadBase::AddRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate");

	UOnlineTitleFileDownloadBase_AddRequestTitleFileListCompleteDelegate_Params params;
	params.RequestTitleFileListDelegate = RequestTitleFileListDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete
// (Defined, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// TArray<struct FString>         FilePaths                      (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadBase::OnRequestTitleFileListComplete(bool bWasSuccessful, TArray<struct FString> FilePaths)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete");

	UOnlineTitleFileDownloadBase_OnRequestTitleFileListComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.FilePaths = FilePaths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList
// (Latent, Simulated, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadBase::RequestTitleFileList()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList");

	UOnlineTitleFileDownloadBase_RequestTitleFileList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile
// (Defined, PreOperator, Native, Event, Operator)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadBase::ClearDownloadedFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile");

	UOnlineTitleFileDownloadBase_ClearDownloadedFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles
// (Final, Defined, PreOperator, Native, Event, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadBase::ClearDownloadedFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles");

	UOnlineTitleFileDownloadBase_ClearDownloadedFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState
// (Final, Latent, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineTitleFileDownloadBase::STATIC_GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState");

	UOnlineTitleFileDownloadBase_GetTitleFileState_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents
// (Defined, Iterator, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadBase::STATIC_GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents");

	UOnlineTitleFileDownloadBase_GetTitleFileContents_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate
// (PreOperator, Singular, Net, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadBase::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate");

	UOnlineTitleFileDownloadBase_ClearReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadBase::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate");

	UOnlineTitleFileDownloadBase_AddReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// struct FString                 FileToRead                     (Parm, NeedCtorLink)
// TEnumAsByte<EOnlineFileType>   FileType                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadBase::STATIC_ReadTitleFile(const struct FString& FileToRead, TEnumAsByte<EOnlineFileType> FileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile");

	UOnlineTitleFileDownloadBase_ReadTitleFile_Params params;
	params.FileToRead = FileToRead;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadBase::STATIC_OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete");

	UOnlineTitleFileDownloadBase_OnReadTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// (Defined, PreOperator, Native, Event, Operator)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile");

	UOnlineTitleFileDownloadMcp_ClearDownloadedFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// (Final, Defined, PreOperator, Native, Event, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles");

	UOnlineTitleFileDownloadMcp_ClearDownloadedFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// (Final, Latent, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineTitleFileDownloadMcp::STATIC_GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState");

	UOnlineTitleFileDownloadMcp_GetTitleFileState_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// (Defined, Iterator, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadMcp::STATIC_GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents");

	UOnlineTitleFileDownloadMcp_GetTitleFileContents_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// struct FString                 FileToRead                     (Parm, NeedCtorLink)
// TEnumAsByte<EOnlineFileType>   FileType                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadMcp::STATIC_ReadTitleFile(const struct FString& FileToRead, TEnumAsByte<EOnlineFileType> FileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile");

	UOnlineTitleFileDownloadMcp_ReadTitleFile_Params params;
	params.FileToRead = FileToRead;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile
// (Defined, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineTitleFileDownloadWeb::GetUrlForFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile");

	UOnlineTitleFileDownloadWeb_GetUrlForFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bDidSucceed                    (Parm)

void UOnlineTitleFileDownloadWeb::OnFileListReceived(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived");

	UOnlineTitleFileDownloadWeb_OnFileListReceived_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList
// (Latent, Simulated, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadWeb::RequestTitleFileList()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList");

	UOnlineTitleFileDownloadWeb_RequestTitleFileList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile
// (Defined, PreOperator, Native, Event, Operator)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadWeb::ClearDownloadedFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile");

	UOnlineTitleFileDownloadWeb_ClearDownloadedFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles
// (Final, Defined, PreOperator, Native, Event, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadWeb::ClearDownloadedFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles");

	UOnlineTitleFileDownloadWeb_ClearDownloadedFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState
// (Final, Latent, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineTitleFileDownloadWeb::STATIC_GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState");

	UOnlineTitleFileDownloadWeb_GetTitleFileState_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents
// (Defined, Iterator, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadWeb::STATIC_GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents");

	UOnlineTitleFileDownloadWeb_GetTitleFileContents_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates
// (Latent, Net, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bSuccess                       (Parm)
// struct FString                 FileRead                       (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadWeb::TriggerDelegates(bool bSuccess, const struct FString& FileRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates");

	UOnlineTitleFileDownloadWeb_TriggerDelegates_Params params;
	params.bSuccess = bSuccess;
	params.FileRead = FileRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bDidSucceed                    (Parm)

void UOnlineTitleFileDownloadWeb::OnFileDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete");

	UOnlineTitleFileDownloadWeb_OnFileDownloadComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// struct FString                 FileToRead                     (Parm, NeedCtorLink)
// TEnumAsByte<EOnlineFileType>   FileType                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadWeb::STATIC_ReadTitleFile(const struct FString& FileToRead, TEnumAsByte<EOnlineFileType> FileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile");

	UOnlineTitleFileDownloadWeb_ReadTitleFile_Params params;
	params.FileToRead = FileToRead;
	params.FileType = FileType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents
// (Iterator, PreOperator, Net, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// TEnumAsByte<EMcpFileCompressionType> FileCompressionType            (Parm)
// TArray<unsigned char>          CompressedFileContents         (Const, Parm, OutParm, NeedCtorLink)
// TArray<unsigned char>          UncompressedFileContents       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadWeb::UncompressTitleFileContents(TEnumAsByte<EMcpFileCompressionType> FileCompressionType, TArray<unsigned char>* CompressedFileContents, TArray<unsigned char>* UncompressedFileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents");

	UOnlineTitleFileDownloadWeb_UncompressTitleFileContents_Params params;
	params.FileCompressionType = FileCompressionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CompressedFileContents != nullptr)
		*CompressedFileContents = params.CompressedFileContents;
	if (UncompressedFileContents != nullptr)
		*UncompressedFileContents = params.UncompressedFileContents;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
// (Final, Defined, Iterator, Singular, Simulated, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTitleFileDownloadCache::STATIC_DeleteTitleFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.DeleteTitleFile");

	UTitleFileDownloadCache_DeleteTitleFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
// (Latent, Singular, Simulated, Static)
// Parameters:
// float                          MaxAgeSeconds                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTitleFileDownloadCache::STATIC_DeleteTitleFiles(float MaxAgeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles");

	UTitleFileDownloadCache_DeleteTitleFiles_Params params;
	params.MaxAgeSeconds = MaxAgeSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTitleFileDownloadCache::ClearCachedFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.ClearCachedFile");

	UTitleFileDownloadCache_ClearCachedFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTitleFileDownloadCache::ClearCachedFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.ClearCachedFiles");

	UTitleFileDownloadCache_ClearCachedFiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
// (Latent, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTitleFileDownloadCache::STATIC_GetTitleFileLogicalName(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName");

	UTitleFileDownloadCache_GetTitleFileLogicalName_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTitleFileDownloadCache::STATIC_GetTitleFileHash(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.GetTitleFileHash");

	UTitleFileDownloadCache_GetTitleFileHash_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
// (Final, Latent, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UTitleFileDownloadCache::STATIC_GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.GetTitleFileState");

	UTitleFileDownloadCache_GetTitleFileState_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
// (Defined, Iterator, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTitleFileDownloadCache::STATIC_GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.GetTitleFileContents");

	UTitleFileDownloadCache_GetTitleFileContents_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
// (Final, Iterator, Latent, PreOperator, Singular, Net, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         SaveCompleteDelegate           (Parm, NeedCtorLink)

void UTitleFileDownloadCache::ClearSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate");

	UTitleFileDownloadCache_ClearSaveTitleFileCompleteDelegate_Params params;
	params.SaveCompleteDelegate = SaveCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
// (Final, Latent, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         SaveCompleteDelegate           (Parm, NeedCtorLink)

void UTitleFileDownloadCache::AddSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate");

	UTitleFileDownloadCache_AddSaveTitleFileCompleteDelegate_Params params;
	params.SaveCompleteDelegate = SaveCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
// (Latent, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UTitleFileDownloadCache::OnSaveTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete");

	UTitleFileDownloadCache_OnSaveTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
// (Final, Defined, PreOperator, Net, Exec, HasOptionalParms)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 LogicalName                    (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTitleFileDownloadCache::SaveTitleFile(const struct FString& Filename, const struct FString& LogicalName, TArray<unsigned char> FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.SaveTitleFile");

	UTitleFileDownloadCache_SaveTitleFile_Params params;
	params.Filename = Filename;
	params.LogicalName = LogicalName;
	params.FileContents = FileContents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
// (PreOperator, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         LoadCompleteDelegate           (Parm, NeedCtorLink)

void UTitleFileDownloadCache::ClearLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate");

	UTitleFileDownloadCache_ClearLoadTitleFileCompleteDelegate_Params params;
	params.LoadCompleteDelegate = LoadCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
// (Final, Iterator, PreOperator, Singular, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         LoadCompleteDelegate           (Parm, NeedCtorLink)

void UTitleFileDownloadCache::AddLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate");

	UTitleFileDownloadCache_AddLoadTitleFileCompleteDelegate_Params params;
	params.LoadCompleteDelegate = LoadCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
// (PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UTitleFileDownloadCache::OnLoadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete");

	UTitleFileDownloadCache_OnLoadTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
// (Final, Defined, Net, NetReliable, Simulated, Operator, Static)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTitleFileDownloadCache::STATIC_LoadTitleFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.TitleFileDownloadCache.LoadTitleFile");

	UTitleFileDownloadCache_LoadTitleFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageBase.CacheMessageContents
// (Final, Latent, Singular, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// TArray<unsigned char>          MessageContents                (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 MessageId                      (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpMessageBase::CacheMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.CacheMessageContents");

	UMcpMessageBase_CacheMessageContents_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageContents != nullptr)
		*MessageContents = params.MessageContents;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageBase.CacheMessage
// (Latent, Singular, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FMcpMessage             Message                        (Parm, NeedCtorLink)

void UMcpMessageBase::CacheMessage(const struct FMcpMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.CacheMessage");

	UMcpMessageBase_CacheMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.GetMessageContents
// (Final, Iterator, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)
// TArray<unsigned char>          MessageContents                (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpMessageBase::GetMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.GetMessageContents");

	UMcpMessageBase_GetMessageContents_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageContents != nullptr)
		*MessageContents = params.MessageContents;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpMessageBase::OnQueryMessageContentsComplete(const struct FString& MessageId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete");

	UMcpMessageBase_OnQueryMessageContentsComplete_Params params;
	params.MessageId = MessageId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.QueryMessageContents
// (Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)

void UMcpMessageBase::QueryMessageContents(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.QueryMessageContents");

	UMcpMessageBase_QueryMessageContents_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.GetMessageList
// (Defined, Iterator, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ToUniqueUserId                 (Parm, NeedCtorLink)
// struct FMcpMessageList         MessageList                    (Parm, OutParm, NeedCtorLink)

void UMcpMessageBase::GetMessageList(const struct FString& ToUniqueUserId, struct FMcpMessageList* MessageList)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.GetMessageList");

	UMcpMessageBase_GetMessageList_Params params;
	params.ToUniqueUserId = ToUniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageList != nullptr)
		*MessageList = params.MessageList;
}


// Function IpDrv.McpMessageBase.OnQueryMessagesComplete
// (Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpMessageBase::OnQueryMessagesComplete(const struct FString& UserId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.OnQueryMessagesComplete");

	UMcpMessageBase_OnQueryMessagesComplete_Params params;
	params.UserId = UserId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.QueryMessages
// (Defined, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ToUniqueUserId                 (Parm, NeedCtorLink)
// struct FString                 TitleId                        (Parm, NeedCtorLink)

void UMcpMessageBase::QueryMessages(const struct FString& ToUniqueUserId, const struct FString& TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.QueryMessages");

	UMcpMessageBase_QueryMessages_Params params;
	params.ToUniqueUserId = ToUniqueUserId;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.OnDeleteMessageComplete
// (Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpMessageBase::OnDeleteMessageComplete(const struct FString& MessageId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.OnDeleteMessageComplete");

	UMcpMessageBase_OnDeleteMessageComplete_Params params;
	params.MessageId = MessageId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.DeleteMessage
// (Defined, Singular, Simulated, Static)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)

void UMcpMessageBase::STATIC_DeleteMessage(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.DeleteMessage");

	UMcpMessageBase_DeleteMessage_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.OnCreateMessageComplete
// (Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FMcpMessage             Message                        (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpMessageBase::OnCreateMessageComplete(const struct FMcpMessage& Message, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.OnCreateMessageComplete");

	UMcpMessageBase_OnCreateMessageComplete_Params params;
	params.Message = Message;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageBase.CreateMessage
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FString>         ToUniqueUserIds                (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 FromUniqueUserId               (Parm, NeedCtorLink)
// struct FString                 FromFriendlyName               (Parm, NeedCtorLink)
// struct FString                 MessageType                    (Parm, NeedCtorLink)
// struct FString                 TitleId                        (Parm, NeedCtorLink)
// struct FString                 PushMessage                    (Parm, NeedCtorLink)
// struct FString                 ValidUntil                     (Parm, NeedCtorLink)
// TArray<unsigned char>          MessageContents                (Const, Parm, OutParm, NeedCtorLink)

void UMcpMessageBase::CreateMessage(const struct FString& FromUniqueUserId, const struct FString& FromFriendlyName, const struct FString& MessageType, const struct FString& TitleId, const struct FString& PushMessage, const struct FString& ValidUntil, TArray<struct FString>* ToUniqueUserIds, TArray<unsigned char>* MessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.CreateMessage");

	UMcpMessageBase_CreateMessage_Params params;
	params.FromUniqueUserId = FromUniqueUserId;
	params.FromFriendlyName = FromFriendlyName;
	params.MessageType = MessageType;
	params.TitleId = TitleId;
	params.PushMessage = PushMessage;
	params.ValidUntil = ValidUntil;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToUniqueUserIds != nullptr)
		*ToUniqueUserIds = params.ToUniqueUserIds;
	if (MessageContents != nullptr)
		*MessageContents = params.MessageContents;
}


// Function IpDrv.McpMessageBase.CreateInstance
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// class UMcpMessageBase*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UMcpMessageBase* UMcpMessageBase::CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageBase.CreateInstance");

	UMcpMessageBase_CreateInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageManager.CacheMessageContents
// (Final, Latent, Singular, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// TArray<unsigned char>          MessageContents                (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 MessageId                      (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpMessageManager::CacheMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.CacheMessageContents");

	UMcpMessageManager_CacheMessageContents_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageContents != nullptr)
		*MessageContents = params.MessageContents;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageManager.GetMessageById
// (Iterator, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)
// struct FMcpMessage             Message                        (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpMessageManager::GetMessageById(const struct FString& MessageId, struct FMcpMessage* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.GetMessageById");

	UMcpMessageManager_GetMessageById_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageManager.CacheMessage
// (Latent, Singular, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FMcpMessage             Message                        (Parm, NeedCtorLink)

void UMcpMessageManager::CacheMessage(const struct FMcpMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.CacheMessage");

	UMcpMessageManager_CacheMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.GetMessageContents
// (Final, Iterator, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)
// TArray<unsigned char>          MessageContents                (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpMessageManager::GetMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.GetMessageContents");

	UMcpMessageManager_GetMessageContents_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageContents != nullptr)
		*MessageContents = params.MessageContents;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete
// (Final, Iterator, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  HttpResponse                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpMessageManager::OnQueryMessageContentsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete");

	UMcpMessageManager_OnQueryMessageContentsRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.QueryMessageContents
// (Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)

void UMcpMessageManager::QueryMessageContents(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.QueryMessageContents");

	UMcpMessageManager_QueryMessageContents_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.GetMessageList
// (Defined, Iterator, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ToUniqueUserId                 (Parm, NeedCtorLink)
// struct FMcpMessageList         MessageList                    (Parm, OutParm, NeedCtorLink)

void UMcpMessageManager::GetMessageList(const struct FString& ToUniqueUserId, struct FMcpMessageList* MessageList)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.GetMessageList");

	UMcpMessageManager_GetMessageList_Params params;
	params.ToUniqueUserId = ToUniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageList != nullptr)
		*MessageList = params.MessageList;
}


// Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete
// (Defined, Iterator, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  HttpResponse                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpMessageManager::OnQueryMessagesRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete");

	UMcpMessageManager_OnQueryMessagesRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.QueryMessages
// (Defined, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ToUniqueUserId                 (Parm, NeedCtorLink)
// struct FString                 TitleId                        (Parm, NeedCtorLink)

void UMcpMessageManager::QueryMessages(const struct FString& ToUniqueUserId, const struct FString& TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.QueryMessages");

	UMcpMessageManager_QueryMessages_Params params;
	params.ToUniqueUserId = ToUniqueUserId;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  HttpResponse                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpMessageManager::OnDeleteMessageRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete");

	UMcpMessageManager_OnDeleteMessageRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.DeleteMessage
// (Defined, Singular, Simulated, Static)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)

void UMcpMessageManager::STATIC_DeleteMessage(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.DeleteMessage");

	UMcpMessageManager_DeleteMessage_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   CreateMessageRequest           (Parm)
// class UHttpResponseInterface*  HttpResponse                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpMessageManager::OnCreateMessageRequestComplete(class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete");

	UMcpMessageManager_OnCreateMessageRequestComplete_Params params;
	params.CreateMessageRequest = CreateMessageRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpMessageManager.CreateMessage
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FString>         ToUniqueUserIds                (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 FromUniqueUserId               (Parm, NeedCtorLink)
// struct FString                 FromFriendlyName               (Parm, NeedCtorLink)
// struct FString                 MessageType                    (Parm, NeedCtorLink)
// struct FString                 TitleId                        (Parm, NeedCtorLink)
// struct FString                 PushMessage                    (Parm, NeedCtorLink)
// struct FString                 ValidUntil                     (Parm, NeedCtorLink)
// TArray<unsigned char>          MessageContents                (Const, Parm, OutParm, NeedCtorLink)

void UMcpMessageManager::CreateMessage(const struct FString& FromUniqueUserId, const struct FString& FromFriendlyName, const struct FString& MessageType, const struct FString& TitleId, const struct FString& PushMessage, const struct FString& ValidUntil, TArray<struct FString>* ToUniqueUserIds, TArray<unsigned char>* MessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.CreateMessage");

	UMcpMessageManager_CreateMessage_Params params;
	params.FromUniqueUserId = FromUniqueUserId;
	params.FromFriendlyName = FromFriendlyName;
	params.MessageType = MessageType;
	params.TitleId = TitleId;
	params.PushMessage = PushMessage;
	params.ValidUntil = ValidUntil;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToUniqueUserIds != nullptr)
		*ToUniqueUserIds = params.ToUniqueUserIds;
	if (MessageContents != nullptr)
		*MessageContents = params.MessageContents;
}


// Function IpDrv.McpMessageManager.FinishedAsyncUncompression
// (Defined, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// TArray<unsigned char>          UncompressedMessageContents    (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 MessageId                      (Parm, NeedCtorLink)

void UMcpMessageManager::FinishedAsyncUncompression(bool bWasSuccessful, const struct FString& MessageId, TArray<unsigned char>* UncompressedMessageContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.FinishedAsyncUncompression");

	UMcpMessageManager_FinishedAsyncUncompression_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UncompressedMessageContents != nullptr)
		*UncompressedMessageContents = params.UncompressedMessageContents;
}


// Function IpDrv.McpMessageManager.StartAsyncUncompression
// (Iterator, Latent, PreOperator, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)
// TEnumAsByte<EMcpMessageCompressionType> MessageCompressionType         (Parm)
// TArray<unsigned char>          MessageContent                 (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpMessageManager::StartAsyncUncompression(const struct FString& MessageId, TEnumAsByte<EMcpMessageCompressionType> MessageCompressionType, TArray<unsigned char>* MessageContent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.StartAsyncUncompression");

	UMcpMessageManager_StartAsyncUncompression_Params params;
	params.MessageId = MessageId;
	params.MessageCompressionType = MessageCompressionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageContent != nullptr)
		*MessageContent = params.MessageContent;

	return params.ReturnValue;
}


// Function IpDrv.McpMessageManager.StartAsyncCompression
// (Final, Defined, Latent, PreOperator, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// TEnumAsByte<EMcpMessageCompressionType> MessageCompressionType         (Parm)
// TArray<unsigned char>          MessageContent                 (Const, Parm, OutParm, NeedCtorLink)
// class UHttpRequestInterface*   Request                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpMessageManager::StartAsyncCompression(TEnumAsByte<EMcpMessageCompressionType> MessageCompressionType, class UHttpRequestInterface* Request, TArray<unsigned char>* MessageContent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpMessageManager.StartAsyncCompression");

	UMcpMessageManager_StartAsyncCompression_Params params;
	params.MessageCompressionType = MessageCompressionType;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageContent != nullptr)
		*MessageContent = params.MessageContent;

	return params.ReturnValue;
}


// Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates
// (Defined, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)

void UMcpUserCloudFileDownload::ClearAllDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates");

	UMcpUserCloudFileDownload_ClearAllDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate
// (Iterator, Latent, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate");

	UMcpUserCloudFileDownload_ClearDeleteUserFileCompleteDelegate_Params params;
	params.DeleteUserFileCompleteDelegate = DeleteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate
// (Net, Native, Event)
// Parameters:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate");

	UMcpUserCloudFileDownload_AddDeleteUserFileCompleteDelegate_Params params;
	params.DeleteUserFileCompleteDelegate = DeleteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::CallDeleteUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates");

	UMcpUserCloudFileDownload_CallDeleteUserFileCompleteDelegates_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::STATIC_OnDeleteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete");

	UMcpUserCloudFileDownload_OnDeleteUserFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestDeleteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete");

	UMcpUserCloudFileDownload_OnHTTPRequestDeleteUserFileComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.DeleteUserFile
// (Final, Latent, Singular, Simulated, Static)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           bShouldCloudDelete             (Parm)
// bool                           bShouldLocallyDelete           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpUserCloudFileDownload::STATIC_DeleteUserFile(const struct FString& UserId, const struct FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.DeleteUserFile");

	UMcpUserCloudFileDownload_DeleteUserFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;
	params.bShouldCloudDelete = bShouldCloudDelete;
	params.bShouldLocallyDelete = bShouldLocallyDelete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate
// (Final, Defined, Latent, PreOperator, NetReliable, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate");

	UMcpUserCloudFileDownload_ClearWriteUserFileCompleteDelegate_Params params;
	params.WriteUserFileCompleteDelegate = WriteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate");

	UMcpUserCloudFileDownload_AddWriteUserFileCompleteDelegate_Params params;
	params.WriteUserFileCompleteDelegate = WriteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::CallWriteUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates");

	UMcpUserCloudFileDownload_CallWriteUserFileCompleteDelegates_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete
// (Defined, Iterator, Exec, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::STATIC_OnWriteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete");

	UMcpUserCloudFileDownload_OnWriteUserFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestWriteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete");

	UMcpUserCloudFileDownload_OnHTTPRequestWriteUserFileComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest
// (Latent, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// int                            UserIdx                        (Parm, OutParm)
// int                            FileIdx                        (Parm, OutParm)

void UMcpUserCloudFileDownload::GetUserFileIndexForRequest(class UHttpRequestInterface* Request, int* UserIdx, int* FileIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest");

	UMcpUserCloudFileDownload_GetUserFileIndexForRequest_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserIdx != nullptr)
		*UserIdx = params.UserIdx;
	if (FileIdx != nullptr)
		*FileIdx = params.FileIdx;
}


// Function IpDrv.McpUserCloudFileDownload.WriteUserFile
// (Final, Latent, PreOperator, Singular, Exec, Native, Event, HasOptionalParms)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpUserCloudFileDownload::WriteUserFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.WriteUserFile");

	UMcpUserCloudFileDownload_WriteUserFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate
// (Final, PreOperator, Singular, Net, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate");

	UMcpUserCloudFileDownload_ClearReadUserFileCompleteDelegate_Params params;
	params.ReadUserFileCompleteDelegate = ReadUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate
// (Iterator, Latent, PreOperator, Singular, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate");

	UMcpUserCloudFileDownload_AddReadUserFileCompleteDelegate_Params params;
	params.ReadUserFileCompleteDelegate = ReadUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::CallReadUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates");

	UMcpUserCloudFileDownload_CallReadUserFileCompleteDelegates_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::STATIC_OnReadUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete");

	UMcpUserCloudFileDownload_OnReadUserFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestReadUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete");

	UMcpUserCloudFileDownload_OnHTTPRequestReadUserFileComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.ReadUserFile
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpUserCloudFileDownload::STATIC_ReadUserFile(const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ReadUserFile");

	UMcpUserCloudFileDownload_ReadUserFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserCloudFileDownload.GetUserFileList
// (Final, Singular, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (Parm, OutParm, NeedCtorLink)

void UMcpUserCloudFileDownload::STATIC_GetUserFileList(const struct FString& UserId, TArray<struct FEmsFile>* UserFiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.GetUserFileList");

	UMcpUserCloudFileDownload_GetUserFileList_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserFiles != nullptr)
		*UserFiles = params.UserFiles;
}


// Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate
// (Final, Iterator, PreOperator, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate");

	UMcpUserCloudFileDownload_ClearEnumerateUserFileCompleteDelegate_Params params;
	params.EnumerateUserFileCompleteDelegate = EnumerateUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate
// (Latent, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate");

	UMcpUserCloudFileDownload_AddEnumerateUserFileCompleteDelegate_Params params;
	params.EnumerateUserFileCompleteDelegate = EnumerateUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates
// (Iterator, Latent, Singular, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::CallEnumerateUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates");

	UMcpUserCloudFileDownload_CallEnumerateUserFileCompleteDelegates_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete
// (PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UserId                         (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::STATIC_OnEnumerateUserFilesComplete(bool bWasSuccessful, const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete");

	UMcpUserCloudFileDownload_OnEnumerateUserFilesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserCloudFileDownload::OnHTTPRequestEnumerateUserFilesComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete");

	UMcpUserCloudFileDownload_OnHTTPRequestEnumerateUserFilesComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Native, Static)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)

void UMcpUserCloudFileDownload::STATIC_EnumerateUserFiles(const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles");

	UMcpUserCloudFileDownload_EnumerateUserFiles_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserCloudFileDownload.ClearFile
// (Final, Defined, Iterator, PreOperator, Native, Event, Operator)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpUserCloudFileDownload::ClearFile(const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearFile");

	UMcpUserCloudFileDownload_ClearFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserCloudFileDownload.ClearFiles
// (Latent, PreOperator, Native, Event, Operator)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpUserCloudFileDownload::ClearFiles(const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.ClearFiles");

	UMcpUserCloudFileDownload_ClearFiles_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserCloudFileDownload.GetFileContents
// (Final, Iterator, NetReliable, Exec, Event, Static)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpUserCloudFileDownload::STATIC_GetFileContents(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserCloudFileDownload.GetFileContents");

	UMcpUserCloudFileDownload_GetFileContents_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeacon.DestroyBeacon
// (Final, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)

void UMeshBeacon::DestroyBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeacon.DestroyBeacon");

	UMeshBeacon_DestroyBeacon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// (Defined, Iterator, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bSuccess                       (Parm)
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconClient::SendHostNewGameSessionResponse(bool bSuccess, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse");

	UMeshBeaconClient_SendHostNewGameSessionResponse_Params params;
	params.bSuccess = bSuccess;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// TArray<struct FPlayerMember>   Players                        (Const, Parm, OutParm, NeedCtorLink)

void UMeshBeaconClient::OnCreateNewSessionRequestReceived(const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived");

	UMeshBeaconClient_OnCreateNewSessionRequestReceived_Params params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// (Final, Defined, Latent, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Const, Parm, OutParm)

void UMeshBeaconClient::OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.OnTravelRequestReceived");

	UMeshBeaconClient_OnTravelRequestReceived_Params params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;
}


// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// TEnumAsByte<EMeshBeaconBandwidthTestType> TestType                       (Parm)
// TEnumAsByte<EMeshBeaconBandwidthTestResult> TestResult                     (Parm)
// struct FConnectionBandwidthStats BandwidthStats                 (Const, Parm, OutParm)

void UMeshBeaconClient::OnReceivedBandwidthTestResults(TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, TEnumAsByte<EMeshBeaconBandwidthTestResult> TestResult, struct FConnectionBandwidthStats* BandwidthStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults");

	UMeshBeaconClient_OnReceivedBandwidthTestResults_Params params;
	params.TestType = TestType;
	params.TestResult = TestResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BandwidthStats != nullptr)
		*BandwidthStats = params.BandwidthStats;
}


// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// TEnumAsByte<EMeshBeaconBandwidthTestType> TestType                       (Parm)

void UMeshBeaconClient::OnReceivedBandwidthTestRequest(TEnumAsByte<EMeshBeaconBandwidthTestType> TestType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest");

	UMeshBeaconClient_OnReceivedBandwidthTestRequest_Params params;
	params.TestType = TestType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// TEnumAsByte<EMeshBeaconConnectionResult> ConnectionResult               (Parm)

void UMeshBeaconClient::OnConnectionRequestResult(TEnumAsByte<EMeshBeaconConnectionResult> ConnectionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.OnConnectionRequestResult");

	UMeshBeaconClient_OnConnectionRequestResult_Params params;
	params.ConnectionResult = ConnectionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// (Defined, Latent, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// TEnumAsByte<EMeshBeaconBandwidthTestType> TestType                       (Parm)
// int                            TestBufferSize                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconClient::BeginBandwidthTest(TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, int TestBufferSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.BeginBandwidthTest");

	UMeshBeaconClient_BeginBandwidthTest_Params params;
	params.TestType = TestType;
	params.TestBufferSize = TestBufferSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconClient.RequestConnection
// (Defined, Iterator, PreOperator, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FOnlineGameSearchResult DesiredHost                    (Const, Parm, OutParm)
// struct FClientConnectionRequest ClientRequest                  (Const, Parm, OutParm, NeedCtorLink)
// bool                           bRegisterSecureAddress         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconClient::RequestConnection(bool bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.RequestConnection");

	UMeshBeaconClient_RequestConnection_Params params;
	params.bRegisterSecureAddress = bRegisterSecureAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredHost != nullptr)
		*DesiredHost = params.DesiredHost;
	if (ClientRequest != nullptr)
		*ClientRequest = params.ClientRequest;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconClient.DestroyBeacon
// (Final, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)

void UMeshBeaconClient::DestroyBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconClient.DestroyBeacon");

	UMeshBeaconClient_DestroyBeacon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// (Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bSucceeded                     (Parm)
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Const, Parm, OutParm)

void UMeshBeaconHost::OnReceivedClientCreateNewSessionResult(bool bSucceeded, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult");

	UMeshBeaconHost_OnReceivedClientCreateNewSessionResult_Params params;
	params.bSucceeded = bSucceeded;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;
}


// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// (Final, Iterator, PreOperator, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Parm)
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// TArray<struct FPlayerMember>   Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconHost::RequestClientCreateNewSession(const struct FUniqueNetId& PlayerNetId, const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession");

	UMeshBeaconHost_RequestClientCreateNewSession_Params params;
	params.PlayerNetId = PlayerNetId;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// (Final, Defined, PreOperator, Singular, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Const, Parm, OutParm)

void UMeshBeaconHost::TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.TellClientsToTravel");

	UMeshBeaconHost_TellClientsToTravel_Params params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;
}


// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)

void UMeshBeaconHost::OnAllPendingPlayersConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected");

	UMeshBeaconHost_OnAllPendingPlayersConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// (Final, Latent, Singular, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconHost::AllPlayersConnected(TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.AllPlayersConnected");

	UMeshBeaconHost_AllPlayersConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// (Defined, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMeshBeaconHost::GetConnectionIndexForPlayer(const struct FUniqueNetId& PlayerNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer");

	UMeshBeaconHost_GetConnectionIndexForPlayer_Params params;
	params.PlayerNetId = PlayerNetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// (PreOperator, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)

void UMeshBeaconHost::SetPendingPlayerConnections(TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections");

	UMeshBeaconHost_SetPendingPlayerConnections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// (Final, Iterator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Parm)
// TEnumAsByte<EMeshBeaconBandwidthTestType> TestType                       (Parm)
// TEnumAsByte<EMeshBeaconBandwidthTestResult> TestResult                     (Parm)
// struct FConnectionBandwidthStats BandwidthStats                 (Const, Parm, OutParm)

void UMeshBeaconHost::OnFinishedBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, TEnumAsByte<EMeshBeaconBandwidthTestResult> TestResult, struct FConnectionBandwidthStats* BandwidthStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest");

	UMeshBeaconHost_OnFinishedBandwidthTest_Params params;
	params.PlayerNetId = PlayerNetId;
	params.TestType = TestType;
	params.TestResult = TestResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BandwidthStats != nullptr)
		*BandwidthStats = params.BandwidthStats;
}


// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// (Final, Latent, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Parm)
// TEnumAsByte<EMeshBeaconBandwidthTestType> TestType                       (Parm)

void UMeshBeaconHost::OnStartedBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EMeshBeaconBandwidthTestType> TestType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest");

	UMeshBeaconHost_OnStartedBandwidthTest_Params params;
	params.PlayerNetId = PlayerNetId;
	params.TestType = TestType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FClientMeshBeaconConnection NewClientConnection            (Const, Parm, OutParm, NeedCtorLink)

void UMeshBeaconHost::OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection* NewClientConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest");

	UMeshBeaconHost_OnReceivedClientConnectionRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewClientConnection != nullptr)
		*NewClientConnection = params.NewClientConnection;
}


// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// (Latent, Singular, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// bool                           bEnabled                       (Parm)

void UMeshBeaconHost::AllowBandwidthTesting(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.AllowBandwidthTesting");

	UMeshBeaconHost_AllowBandwidthTesting_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// (Defined, PreOperator, Singular, NetReliable, Simulated, Operator, HasOptionalParms)

void UMeshBeaconHost::CancelPendingBandwidthTests()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests");

	UMeshBeaconHost_CancelPendingBandwidthTests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// (Defined, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconHost::HasPendingBandwidthTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest");

	UMeshBeaconHost_HasPendingBandwidthTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// (PreOperator, Singular, NetReliable, Simulated, Operator, HasOptionalParms)

void UMeshBeaconHost::CancelInProgressBandwidthTests()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests");

	UMeshBeaconHost_CancelInProgressBandwidthTests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// (Final, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconHost::HasInProgressBandwidthTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest");

	UMeshBeaconHost_HasInProgressBandwidthTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// (Iterator, PreOperator, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Parm)
// TEnumAsByte<EMeshBeaconBandwidthTestType> TestType                       (Parm)
// int                            TestBufferSize                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconHost::RequestClientBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, int TestBufferSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest");

	UMeshBeaconHost_RequestClientBandwidthTest_Params params;
	params.PlayerNetId = PlayerNetId;
	params.TestType = TestType;
	params.TestBufferSize = TestBufferSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.DestroyBeacon
// (Final, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)

void UMeshBeaconHost::DestroyBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.DestroyBeacon");

	UMeshBeaconHost_DestroyBeacon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.InitHostBeacon
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            InOwningPlayerId               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconHost::InitHostBeacon(const struct FUniqueNetId& InOwningPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.MeshBeaconHost.InitHostBeacon");

	UMeshBeaconHost_InitHostBeacon_Params params;
	params.InOwningPlayerId = InOwningPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    OutRegisteredPlayers           (Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* OutRegisteredPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers");

	UOnlineSubsystemCommonImpl_GetRegisteredPlayers_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRegisteredPlayers != nullptr)
		*OutRegisteredPlayers = params.OutRegisteredPlayers;
}


// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// (Latent, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemCommonImpl::IsPlayerInSession(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession");

	UOnlineSubsystemCommonImpl_IsPlayerInSession_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// (Iterator, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// int                            UserIndex                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemCommonImpl::GetPlayerNicknameFromIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex");

	UOnlineSubsystemCommonImpl_GetPlayerNicknameFromIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Event, Static)
// Parameters:
// struct FIpAddr                 OutServerIP                    (Parm, OutParm)
// int                            OutServerPort                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::STATIC_GetServerAddr(struct FIpAddr* OutServerIP, int* OutServerPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr");

	UOnlineAuthInterfaceImpl_GetServerAddr_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutServerIP != nullptr)
		*OutServerIP = params.OutServerIP;
	if (OutServerPort != nullptr)
		*OutServerPort = params.OutServerPort;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
// (NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// struct FUniqueNetId            OutServerUID                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::STATIC_GetServerUniqueId(struct FUniqueNetId* OutServerUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId");

	UOnlineAuthInterfaceImpl_GetServerUniqueId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutServerUID != nullptr)
		*OutServerUID = params.OutServerUID;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// (Defined, Iterator, Latent, Net, Simulated, Exec, Native, Static)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)
// struct FLocalAuthSession       OutSessionInfo                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::STATIC_FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession");

	UOnlineAuthInterfaceImpl_FindLocalServerAuthSession_Params params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// (Latent, Singular, Net, Simulated, Exec, Native, Static)
// Parameters:
// class UPlayer*                 ServerConnection               (Parm)
// struct FAuthSession            OutSessionInfo                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::STATIC_FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession");

	UOnlineAuthInterfaceImpl_FindServerAuthSession_Params params;
	params.ServerConnection = ServerConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// (Iterator, Latent, Net, Simulated, Exec, Native, Static)
// Parameters:
// class UPlayer*                 ServerConnection               (Parm)
// struct FLocalAuthSession       OutSessionInfo                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::STATIC_FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession");

	UOnlineAuthInterfaceImpl_FindLocalClientAuthSession_Params params;
	params.ServerConnection = ServerConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// (Final, Defined, PreOperator, Singular, Simulated, Exec, Native, Static)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)
// struct FAuthSession            OutSessionInfo                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::STATIC_FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession");

	UOnlineAuthInterfaceImpl_FindClientAuthSession_Params params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
// (Final, Defined, Iterator, PreOperator, Net, Simulated, Native, Event)
// Parameters:
// struct FLocalAuthSession       OutSessionInfo                 (Parm, OutParm)

void UOnlineAuthInterfaceImpl::AllLocalServerAuthSessions(struct FLocalAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions");

	UOnlineAuthInterfaceImpl_AllLocalServerAuthSessions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
// (PreOperator, Singular, Net, Simulated, Native, Event)
// Parameters:
// struct FAuthSession            OutSessionInfo                 (Parm, OutParm)

void UOnlineAuthInterfaceImpl::AllServerAuthSessions(struct FAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions");

	UOnlineAuthInterfaceImpl_AllServerAuthSessions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
// (Defined, Iterator, PreOperator, Net, Simulated, Native, Event)
// Parameters:
// struct FLocalAuthSession       OutSessionInfo                 (Parm, OutParm)

void UOnlineAuthInterfaceImpl::AllLocalClientAuthSessions(struct FLocalAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions");

	UOnlineAuthInterfaceImpl_AllLocalClientAuthSessions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
// (Final, Defined, Iterator, Latent, Net, Simulated, Native, Event)
// Parameters:
// struct FAuthSession            OutSessionInfo                 (Parm, OutParm)

void UOnlineAuthInterfaceImpl::AllClientAuthSessions(struct FAuthSession* OutSessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions");

	UOnlineAuthInterfaceImpl_AllClientAuthSessions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSessionInfo != nullptr)
		*OutSessionInfo = params.OutSessionInfo;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
// (Iterator, PreOperator, Singular, NetReliable, Native, Static)

void UOnlineAuthInterfaceImpl::STATIC_EndAllRemoteServerAuthSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions");

	UOnlineAuthInterfaceImpl_EndAllRemoteServerAuthSessions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
// (Defined, PreOperator, Singular, NetReliable, Native, Static)

void UOnlineAuthInterfaceImpl::STATIC_EndAllLocalServerAuthSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions");

	UOnlineAuthInterfaceImpl_EndAllLocalServerAuthSessions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
// (PreOperator, Net, NetReliable, Native, Static)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// struct FIpAddr                 ServerIP                       (Parm)

void UOnlineAuthInterfaceImpl::STATIC_EndRemoteServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession");

	UOnlineAuthInterfaceImpl_EndRemoteServerAuthSession_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Native, Static)
// Parameters:
// struct FUniqueNetId            ClientUID                      (Parm)
// struct FIpAddr                 ClientIP                       (Parm)

void UOnlineAuthInterfaceImpl::STATIC_EndLocalServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession");

	UOnlineAuthInterfaceImpl_EndLocalServerAuthSession_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
// (Final, Latent, PreOperator, Net, NetReliable, Native, Event, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// struct FIpAddr                 ServerIP                       (Parm)
// int                            AuthTicketUID                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession");

	UOnlineAuthInterfaceImpl_VerifyServerAuthSession_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
// (Iterator, Net, NetReliable, Exec, Native, Event, Operator)
// Parameters:
// struct FUniqueNetId            ClientUID                      (Parm)
// struct FIpAddr                 ClientIP                       (Parm)
// int                            ClientPort                     (Parm)
// int                            OutAuthTicketUID               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::CreateServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int* OutAuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession");

	UOnlineAuthInterfaceImpl_CreateServerAuthSession_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.ClientPort = ClientPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAuthTicketUID != nullptr)
		*OutAuthTicketUID = params.OutAuthTicketUID;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
// (Final, Defined, PreOperator, Singular, NetReliable, Native, Static)

void UOnlineAuthInterfaceImpl::STATIC_EndAllRemoteClientAuthSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions");

	UOnlineAuthInterfaceImpl_EndAllRemoteClientAuthSessions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
// (Final, PreOperator, Singular, NetReliable, Native, Static)

void UOnlineAuthInterfaceImpl::STATIC_EndAllLocalClientAuthSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions");

	UOnlineAuthInterfaceImpl_EndAllLocalClientAuthSessions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
// (Final, Defined, Iterator, Latent, Net, NetReliable, Native, Static)
// Parameters:
// struct FUniqueNetId            ClientUID                      (Parm)
// struct FIpAddr                 ClientIP                       (Parm)

void UOnlineAuthInterfaceImpl::STATIC_EndRemoteClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession");

	UOnlineAuthInterfaceImpl_EndRemoteClientAuthSession_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Native, Static)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// struct FIpAddr                 ServerIP                       (Parm)
// int                            ServerPort                     (Parm)

void UOnlineAuthInterfaceImpl::STATIC_EndLocalClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession");

	UOnlineAuthInterfaceImpl_EndLocalClientAuthSession_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.ServerPort = ServerPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
// (Final, Iterator, PreOperator, Net, NetReliable, Native, Event, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            ClientUID                      (Parm)
// struct FIpAddr                 ClientIP                       (Parm)
// int                            ClientPort                     (Parm)
// int                            AuthTicketUID                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession");

	UOnlineAuthInterfaceImpl_VerifyClientAuthSession_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.ClientPort = ClientPort;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
// (Final, PreOperator, Singular, NetReliable, Exec, Native, Event, Operator)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// struct FIpAddr                 ServerIP                       (Parm)
// int                            ServerPort                     (Parm)
// bool                           bSecure                        (Parm)
// int                            OutAuthTicketUID               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::CreateClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure, int* OutAuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession");

	UOnlineAuthInterfaceImpl_CreateClientAuthSession_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.ServerPort = ServerPort;
	params.bSecure = bSecure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAuthTicketUID != nullptr)
		*OutAuthTicketUID = params.OutAuthTicketUID;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
// (Final, Defined, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::SendServerAuthRetryRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest");

	UOnlineAuthInterfaceImpl_SendServerAuthRetryRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
// (Latent, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::SendClientAuthEndSessionRequest(class UPlayer* ClientConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest");

	UOnlineAuthInterfaceImpl_SendClientAuthEndSessionRequest_Params params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
// (Defined, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)
// int                            AuthTicketUID                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::SendServerAuthResponse(class UPlayer* ClientConnection, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse");

	UOnlineAuthInterfaceImpl_SendServerAuthResponse_Params params;
	params.ClientConnection = ClientConnection;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
// (Defined, Latent, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// int                            AuthTicketUID                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::SendClientAuthResponse(int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse");

	UOnlineAuthInterfaceImpl_SendClientAuthResponse_Params params;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
// (Final, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::SendServerAuthRequest(const struct FUniqueNetId& ServerUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest");

	UOnlineAuthInterfaceImpl_SendServerAuthRequest_Params params;
	params.ServerUID = ServerUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
// (Final, Latent, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)
// struct FUniqueNetId            ClientUID                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest");

	UOnlineAuthInterfaceImpl_SendClientAuthRequest_Params params;
	params.ClientConnection = ClientConnection;
	params.ClientUID = ClientUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// (Final, Defined, NetReliable, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate");

	UOnlineAuthInterfaceImpl_ClearServerConnectionCloseDelegate_Params params;
	params.ServerConnectionCloseDelegate = ServerConnectionCloseDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// (Final, PreOperator, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate");

	UOnlineAuthInterfaceImpl_AddServerConnectionCloseDelegate_Params params;
	params.ServerConnectionCloseDelegate = ServerConnectionCloseDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
// (Latent, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// class UPlayer*                 ServerConnection               (Parm)

void UOnlineAuthInterfaceImpl::OnServerConnectionClose(class UPlayer* ServerConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose");

	UOnlineAuthInterfaceImpl_OnServerConnectionClose_Params params;
	params.ServerConnection = ServerConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// (Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate");

	UOnlineAuthInterfaceImpl_ClearClientConnectionCloseDelegate_Params params;
	params.ClientConnectionCloseDelegate = ClientConnectionCloseDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// (PreOperator, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate");

	UOnlineAuthInterfaceImpl_AddClientConnectionCloseDelegate_Params params;
	params.ClientConnectionCloseDelegate = ClientConnectionCloseDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
// (Iterator, Latent, Singular, Net, Simulated, Native, HasOptionalParms)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)

void UOnlineAuthInterfaceImpl::OnClientConnectionClose(class UPlayer* ClientConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose");

	UOnlineAuthInterfaceImpl_OnClientConnectionClose_Params params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
// (Defined, NetReliable, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate");

	UOnlineAuthInterfaceImpl_ClearServerAuthRetryRequestDelegate_Params params;
	params.ServerAuthRetryRequestDelegate = ServerAuthRetryRequestDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
// (PreOperator, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate");

	UOnlineAuthInterfaceImpl_AddServerAuthRetryRequestDelegate_Params params;
	params.ServerAuthRetryRequestDelegate = ServerAuthRetryRequestDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
// (Final, Defined, Iterator, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthRetryRequest(class UPlayer* ClientConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest");

	UOnlineAuthInterfaceImpl_OnServerAuthRetryRequest_Params params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate");

	UOnlineAuthInterfaceImpl_ClearClientAuthEndSessionRequestDelegate_Params params;
	params.ClientAuthEndSessionRequestDelegate = ClientAuthEndSessionRequestDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
// (Final, Iterator, Latent, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate");

	UOnlineAuthInterfaceImpl_AddClientAuthEndSessionRequestDelegate_Params params;
	params.ClientAuthEndSessionRequestDelegate = ClientAuthEndSessionRequestDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
// (Final, Latent, Singular, Net, Simulated, Native, HasOptionalParms)
// Parameters:
// class UPlayer*                 ServerConnection               (Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthEndSessionRequest(class UPlayer* ServerConnection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest");

	UOnlineAuthInterfaceImpl_OnClientAuthEndSessionRequest_Params params;
	params.ServerConnection = ServerConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ServerAuthCompleteDelegate     (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate");

	UOnlineAuthInterfaceImpl_ClearServerAuthCompleteDelegate_Params params;
	params.ServerAuthCompleteDelegate = ServerAuthCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
// (Final, Iterator, Latent, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         ServerAuthCompleteDelegate     (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate");

	UOnlineAuthInterfaceImpl_AddServerAuthCompleteDelegate_Params params;
	params.ServerAuthCompleteDelegate = ServerAuthCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
// (Iterator, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           bSuccess                       (Parm)
// struct FUniqueNetId            ServerUID                      (Parm)
// class UPlayer*                 ServerConnection               (Parm)
// struct FString                 ExtraInfo                      (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnServerAuthComplete(bool bSuccess, const struct FUniqueNetId& ServerUID, class UPlayer* ServerConnection, const struct FString& ExtraInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete");

	UOnlineAuthInterfaceImpl_OnServerAuthComplete_Params params;
	params.bSuccess = bSuccess;
	params.ServerUID = ServerUID;
	params.ServerConnection = ServerConnection;
	params.ExtraInfo = ExtraInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FScriptDelegate         ClientAuthCompleteDelegate     (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate");

	UOnlineAuthInterfaceImpl_ClearClientAuthCompleteDelegate_Params params;
	params.ClientAuthCompleteDelegate = ClientAuthCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
// (Iterator, Latent, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         ClientAuthCompleteDelegate     (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate");

	UOnlineAuthInterfaceImpl_AddClientAuthCompleteDelegate_Params params;
	params.ClientAuthCompleteDelegate = ClientAuthCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
// (Latent, Singular, Net, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           bSuccess                       (Parm)
// struct FUniqueNetId            ClientUID                      (Parm)
// class UPlayer*                 ClientConnection               (Parm)
// struct FString                 ExtraInfo                      (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::OnClientAuthComplete(bool bSuccess, const struct FUniqueNetId& ClientUID, class UPlayer* ClientConnection, const struct FString& ExtraInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete");

	UOnlineAuthInterfaceImpl_OnClientAuthComplete_Params params;
	params.bSuccess = bSuccess;
	params.ClientUID = ClientUID;
	params.ClientConnection = ClientConnection;
	params.ExtraInfo = ExtraInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
// (Final, NetReliable, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ServerAuthResponseDelegate     (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate");

	UOnlineAuthInterfaceImpl_ClearServerAuthResponseDelegate_Params params;
	params.ServerAuthResponseDelegate = ServerAuthResponseDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
// (Final, Defined, Iterator, Latent, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         ServerAuthResponseDelegate     (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate");

	UOnlineAuthInterfaceImpl_AddServerAuthResponseDelegate_Params params;
	params.ServerAuthResponseDelegate = ServerAuthResponseDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
// (Defined, Iterator, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// struct FIpAddr                 ServerIP                       (Parm)
// int                            AuthTicketUID                  (Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthResponse(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse");

	UOnlineAuthInterfaceImpl_OnServerAuthResponse_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FScriptDelegate         ClientAuthResponseDelegate     (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate");

	UOnlineAuthInterfaceImpl_ClearClientAuthResponseDelegate_Params params;
	params.ClientAuthResponseDelegate = ClientAuthResponseDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
// (Final, Defined, Iterator, Latent, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         ClientAuthResponseDelegate     (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate");

	UOnlineAuthInterfaceImpl_AddClientAuthResponseDelegate_Params params;
	params.ClientAuthResponseDelegate = ClientAuthResponseDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
// (Final, Defined, Latent, Singular, Net, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            ClientUID                      (Parm)
// struct FIpAddr                 ClientIP                       (Parm)
// int                            AuthTicketUID                  (Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthResponse(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse");

	UOnlineAuthInterfaceImpl_OnClientAuthResponse_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
// (NetReliable, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         ServerAuthRequestDelegate      (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate");

	UOnlineAuthInterfaceImpl_ClearServerAuthRequestDelegate_Params params;
	params.ServerAuthRequestDelegate = ServerAuthRequestDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
// (Defined, Iterator, Latent, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         ServerAuthRequestDelegate      (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate");

	UOnlineAuthInterfaceImpl_AddServerAuthRequestDelegate_Params params;
	params.ServerAuthRequestDelegate = ServerAuthRequestDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
// (Final, Iterator, NetReliable, Simulated, Native, HasOptionalParms)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)
// struct FUniqueNetId            ClientUID                      (Parm)
// struct FIpAddr                 ClientIP                       (Parm)
// int                            ClientPort                     (Parm)

void UOnlineAuthInterfaceImpl::OnServerAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest");

	UOnlineAuthInterfaceImpl_OnServerAuthRequest_Params params;
	params.ClientConnection = ClientConnection;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.ClientPort = ClientPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FScriptDelegate         ClientAuthRequestDelegate      (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate");

	UOnlineAuthInterfaceImpl_ClearClientAuthRequestDelegate_Params params;
	params.ClientAuthRequestDelegate = ClientAuthRequestDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
// (Defined, Iterator, Latent, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         ClientAuthRequestDelegate      (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate");

	UOnlineAuthInterfaceImpl_AddClientAuthRequestDelegate_Params params;
	params.ClientAuthRequestDelegate = ClientAuthRequestDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
// (Defined, Latent, Singular, Net, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// struct FIpAddr                 ServerIP                       (Parm)
// int                            ServerPort                     (Parm)
// bool                           bSecure                        (Parm)

void UOnlineAuthInterfaceImpl::OnClientAuthRequest(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest");

	UOnlineAuthInterfaceImpl_OnClientAuthRequest_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.ServerPort = ServerPort;
	params.bSecure = bSecure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// (Final, Latent, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FScriptDelegate         AuthReadyDelegate              (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate");

	UOnlineAuthInterfaceImpl_ClearAuthReadyDelegate_Params params;
	params.AuthReadyDelegate = AuthReadyDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// (Final, Iterator, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         AuthReadyDelegate              (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate");

	UOnlineAuthInterfaceImpl_AddAuthReadyDelegate_Params params;
	params.AuthReadyDelegate = AuthReadyDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
// (Final, Iterator, Singular, Net, Simulated, Native, HasOptionalParms)

void UOnlineAuthInterfaceImpl::OnAuthReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady");

	UOnlineAuthInterfaceImpl_OnAuthReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
// (Defined, Singular, NetReliable, Simulated, Exec, Native, Event, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::STATIC_IsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineAuthInterfaceImpl.IsReady");

	UOnlineAuthInterfaceImpl_IsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearGetUserConnectionInfoCompleteDelegate
// (Latent, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         GetUserConnectionInfoCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGetUserConnectionInfoCompleteDelegate(const struct FScriptDelegate& GetUserConnectionInfoCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearGetUserConnectionInfoCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearGetUserConnectionInfoCompleteDelegate_Params params;
	params.GetUserConnectionInfoCompleteDelegate = GetUserConnectionInfoCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddGetUserConnectionInfoCompleteDelegate
// (Final, Iterator, Latent, PreOperator, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         GetUserConnectionInfoCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGetUserConnectionInfoCompleteDelegate(const struct FScriptDelegate& GetUserConnectionInfoCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddGetUserConnectionInfoCompleteDelegate");

	UOnlineGameInterfaceImpl_AddGetUserConnectionInfoCompleteDelegate_Params params;
	params.GetUserConnectionInfoCompleteDelegate = GetUserConnectionInfoCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnGetUserConnectionInfoComplete
// (Final, Defined, Latent, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// TArray<struct FSessionMemberInfo> OutMemberInfo                  (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnGetUserConnectionInfoComplete(TArray<struct FSessionMemberInfo> OutMemberInfo, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnGetUserConnectionInfoComplete");

	UOnlineGameInterfaceImpl_OnGetUserConnectionInfoComplete_Params params;
	params.OutMemberInfo = OutMemberInfo;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetUserConnectionInfoAsync
// (Singular, Net, NetReliable, Simulated, Exec, Event, Static)
// Parameters:
// TArray<struct FString>         UserNames                      (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_GetUserConnectionInfoAsync(TArray<struct FString> UserNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetUserConnectionInfoAsync");

	UOnlineGameInterfaceImpl_GetUserConnectionInfoAsync_Params params;
	params.UserNames = UserNames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearGetSessionMemberInfoCompleteDelegate
// (Defined, Iterator, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         GetSessionMemberInfoCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGetSessionMemberInfoCompleteDelegate(const struct FScriptDelegate& GetSessionMemberInfoCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearGetSessionMemberInfoCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearGetSessionMemberInfoCompleteDelegate_Params params;
	params.GetSessionMemberInfoCompleteDelegate = GetSessionMemberInfoCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddGetSessionMemberInfoCompleteDelegate
// (Final, Defined, Latent, PreOperator, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         GetSessionMemberInfoCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGetSessionMemberInfoCompleteDelegate(const struct FScriptDelegate& GetSessionMemberInfoCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddGetSessionMemberInfoCompleteDelegate");

	UOnlineGameInterfaceImpl_AddGetSessionMemberInfoCompleteDelegate_Params params;
	params.GetSessionMemberInfoCompleteDelegate = GetSessionMemberInfoCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnGetSessionMemberInfoComplete
// (Defined, Latent, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// TArray<struct FSessionMemberInfo> OutMemberInfo                  (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnGetSessionMemberInfoComplete(TArray<struct FSessionMemberInfo> OutMemberInfo, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnGetSessionMemberInfoComplete");

	UOnlineGameInterfaceImpl_OnGetSessionMemberInfoComplete_Params params;
	params.OutMemberInfo = OutMemberInfo;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetCurrentSessionMemberInfo
// (Defined, Latent, PreOperator, Net, Exec, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FSessionMemberInfo> OutMemberInfo                  (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_GetCurrentSessionMemberInfo(const struct FName& SessionName, TArray<struct FSessionMemberInfo>* OutMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetCurrentSessionMemberInfo");

	UOnlineGameInterfaceImpl_GetCurrentSessionMemberInfo_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMemberInfo != nullptr)
		*OutMemberInfo = params.OutMemberInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetCurrentSessionMemberInfoAsync
// (Final, Defined, Latent, PreOperator, Net, Exec, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_GetCurrentSessionMemberInfoAsync(unsigned char LocalUserNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetCurrentSessionMemberInfoAsync");

	UOnlineGameInterfaceImpl_GetCurrentSessionMemberInfoAsync_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.RunBandwidthTest
// (Final, Latent, PreOperator, Exec, HasOptionalParms)

void UOnlineGameInterfaceImpl::RunBandwidthTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.RunBandwidthTest");

	UOnlineGameInterfaceImpl_RunBandwidthTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.IsAllowedToNetworkHost
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Native, Event, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_IsAllowedToNetworkHost()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.IsAllowedToNetworkHost");

	UOnlineGameInterfaceImpl_IsAllowedToNetworkHost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearGetRoomIdFromTitleServiceDelegate
// (Final, Iterator, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGetRoomIdFromTitleServiceDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearGetRoomIdFromTitleServiceDelegate");

	UOnlineGameInterfaceImpl_ClearGetRoomIdFromTitleServiceDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddGetRoomIdFromTitleServiceDelegate
// (Defined, Latent, PreOperator, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGetRoomIdFromTitleServiceDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddGetRoomIdFromTitleServiceDelegate");

	UOnlineGameInterfaceImpl_AddGetRoomIdFromTitleServiceDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetRoomIdFromSessionId
// (PreOperator, Singular, Net, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 SessionId                      (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::STATIC_GetRoomIdFromSessionId(const struct FString& SessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetRoomIdFromSessionId");

	UOnlineGameInterfaceImpl_GetRoomIdFromSessionId_Params params;
	params.SessionId = SessionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetRoomIdFromTitleService
// (Final, PreOperator, Singular, Net, Simulated, Exec, Event, Static)
// Parameters:
// struct FQWord                  DataId                         (Parm)

void UOnlineGameInterfaceImpl::STATIC_GetRoomIdFromTitleService(const struct FQWord& DataId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetRoomIdFromTitleService");

	UOnlineGameInterfaceImpl_GetRoomIdFromTitleService_Params params;
	params.DataId = DataId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnGetRoomIdFromTitleService
// (Final, Latent, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FQWord                  RoomId                         (Parm)

void UOnlineGameInterfaceImpl::OnGetRoomIdFromTitleService(const struct FQWord& RoomId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnGetRoomIdFromTitleService");

	UOnlineGameInterfaceImpl_OnGetRoomIdFromTitleService_Params params;
	params.RoomId = RoomId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetRoomId
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Event, Static)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineGameInterfaceImpl::STATIC_GetRoomId()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetRoomId");

	UOnlineGameInterfaceImpl_GetRoomId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.SendPlayerList
// (Final, Defined, Latent, PreOperator, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// TArray<class APlayerReplicationInfo*> Players                        (Const, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::SendPlayerList(TArray<class APlayerReplicationInfo*> Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.SendPlayerList");

	UOnlineGameInterfaceImpl_SendPlayerList_Params params;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearGetNumberOfCurrentPlayersCompleteDelegate
// (Iterator, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearGetNumberOfCurrentPlayersCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearGetNumberOfCurrentPlayersCompleteDelegate_Params params;
	params.GetNumberOfCurrentPlayersCompleteDelegate = GetNumberOfCurrentPlayersCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddGetNumberOfCurrentPlayersCompleteDelegate
// (Final, Latent, PreOperator, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddGetNumberOfCurrentPlayersCompleteDelegate");

	UOnlineGameInterfaceImpl_AddGetNumberOfCurrentPlayersCompleteDelegate_Params params;
	params.GetNumberOfCurrentPlayersCompleteDelegate = GetNumberOfCurrentPlayersCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnGetNumberOfCurrentPlayersComplete
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// int                            TotalPlayers                   (Parm)

void UOnlineGameInterfaceImpl::STATIC_OnGetNumberOfCurrentPlayersComplete(int TotalPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnGetNumberOfCurrentPlayersComplete");

	UOnlineGameInterfaceImpl_OnGetNumberOfCurrentPlayersComplete_Params params;
	params.TotalPlayers = TotalPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetNumberOfCurrentPlayersCached
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Event, Static)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineGameInterfaceImpl::STATIC_GetNumberOfCurrentPlayersCached()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetNumberOfCurrentPlayersCached");

	UOnlineGameInterfaceImpl_GetNumberOfCurrentPlayersCached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetNumberOfCurrentPlayers
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Event, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_GetNumberOfCurrentPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetNumberOfCurrentPlayers");

	UOnlineGameInterfaceImpl_GetNumberOfCurrentPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// (Final, Iterator, PreOperator, Net, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         QosStatusChangedDelegate       (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate");

	UOnlineGameInterfaceImpl_ClearQosStatusChangedDelegate_Params params;
	params.QosStatusChangedDelegate = QosStatusChangedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// (Defined, Iterator, Latent, PreOperator, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         QosStatusChangedDelegate       (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate");

	UOnlineGameInterfaceImpl_AddQosStatusChangedDelegate_Params params;
	params.QosStatusChangedDelegate = QosStatusChangedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// int                            NumComplete                    (Parm)
// int                            NumTotal                       (Parm)

void UOnlineGameInterfaceImpl::OnQosStatusChanged(int NumComplete, int NumTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged");

	UOnlineGameInterfaceImpl_OnQosStatusChanged_Params params;
	params.NumComplete = NumComplete;
	params.NumTotal = NumTotal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// (Iterator, Latent, NetReliable, Simulated, Exec, Operator)
// Parameters:
// unsigned char                  SearchingPlayerNum             (Parm)
// class UOnlineGameSearch*       SearchSettings                 (Parm)
// unsigned char                  PlatformSpecificInfo           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch");

	UOnlineGameInterfaceImpl_BindPlatformSpecificSessionToSearch_Params params;
	params.SearchingPlayerNum = SearchingPlayerNum;
	params.SearchSettings = SearchSettings;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// (Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_ReadPlatformSpecificSessionInfoBySessionName(const struct FName& SessionName, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName");

	UOnlineGameInterfaceImpl_ReadPlatformSpecificSessionInfoBySessionName_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// struct FOnlineGameSearchResult DesiredGame                    (Const, Parm, OutParm)
// unsigned char                  PlatformSpecificInfo           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo");

	UOnlineGameInterfaceImpl_ReadPlatformSpecificSessionInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;
	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// (Defined, Latent, Singular, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// int                            StartAt                        (Parm)
// int                            NumberToQuery                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData");

	UOnlineGameInterfaceImpl_QueryNonAdvertisedData_Params params;
	params.StartAt = StartAt;
	params.NumberToQuery = NumberToQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// (Final, Defined, Latent, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearJoinMigratedOnlineGameCompleteDelegate_Params params;
	params.JoinMigratedOnlineGameCompleteDelegate = JoinMigratedOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// (Final, PreOperator, Singular, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddJoinMigratedOnlineGameCompleteDelegate_Params params;
	params.JoinMigratedOnlineGameCompleteDelegate = JoinMigratedOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnJoinMigratedOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnJoinMigratedOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  PlayerNum                      (Parm)
// struct FName                   SessionName                    (Parm)
// struct FOnlineGameSearchResult DesiredGame                    (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_JoinMigratedOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame");

	UOnlineGameInterfaceImpl_JoinMigratedOnlineGame_Params params;
	params.PlayerNum = PlayerNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// (Final, Defined, Latent, PreOperator, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearMigrateOnlineGameCompleteDelegate_Params params;
	params.MigrateOnlineGameCompleteDelegate = MigrateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// (Final, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddMigrateOnlineGameCompleteDelegate_Params params;
	params.MigrateOnlineGameCompleteDelegate = MigrateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnMigrateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnMigrateOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// (Final, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// unsigned char                  HostingPlayerNum               (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_MigrateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame");

	UOnlineGameInterfaceImpl_MigrateOnlineGame_Params params;
	params.HostingPlayerNum = HostingPlayerNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// (Defined, PreOperator, Singular, Net, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         RecalculateSkillRatingGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearRecalculateSkillRatingCompleteDelegate_Params params;
	params.RecalculateSkillRatingGameCompleteDelegate = RecalculateSkillRatingGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         RecalculateSkillRatingCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate");

	UOnlineGameInterfaceImpl_AddRecalculateSkillRatingCompleteDelegate_Params params;
	params.RecalculateSkillRatingCompleteDelegate = RecalculateSkillRatingCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnRecalculateSkillRatingComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete");

	UOnlineGameInterfaceImpl_OnRecalculateSkillRatingComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// (Final, Defined, Latent, PreOperator, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::RecalculateSkillRating(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating");

	UOnlineGameInterfaceImpl_RecalculateSkillRating_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// (Final, Defined, Singular, NetReliable, Simulated, Exec, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite");

	UOnlineGameInterfaceImpl_AcceptGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// (Final, Singular, Native, Event, Operator)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate");

	UOnlineGameInterfaceImpl_ClearGameInviteAcceptedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// (Defined, Iterator, PreOperator, Net, Native, Event)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate");

	UOnlineGameInterfaceImpl_AddGameInviteAcceptedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// (Defined, Iterator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FOnlineGameSearchResult InviteResult                   (Const, Parm, OutParm)

void UOnlineGameInterfaceImpl::OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted");

	UOnlineGameInterfaceImpl_OnGameInviteAccepted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InviteResult != nullptr)
		*InviteResult = params.InviteResult;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// (Final, Defined, Iterator, Exec, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FOnlineArbitrationRegistrant> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FOnlineArbitrationRegistrant> UOnlineGameInterfaceImpl::STATIC_GetArbitratedPlayers(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers");

	UOnlineGameInterfaceImpl_GetArbitratedPlayers_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearArbitrationRegistrationCompleteDelegate_Params params;
	params.ArbitrationRegistrationCompleteDelegate = ArbitrationRegistrationCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// (Iterator, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate");

	UOnlineGameInterfaceImpl_AddArbitrationRegistrationCompleteDelegate_Params params;
	params.ArbitrationRegistrationCompleteDelegate = ArbitrationRegistrationCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// (Latent, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete");

	UOnlineGameInterfaceImpl_OnArbitrationRegistrationComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// (Defined, Iterator, Singular, Net, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::RegisterForArbitration(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration");

	UOnlineGameInterfaceImpl_RegisterForArbitration_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// (Iterator, PreOperator, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearEndOnlineGameCompleteDelegate_Params params;
	params.EndOnlineGameCompleteDelegate = EndOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// (Final, Defined, Iterator, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddEndOnlineGameCompleteDelegate_Params params;
	params.EndOnlineGameCompleteDelegate = EndOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// (Final, Defined, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnEndOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// (Final, Defined, Net, NetReliable, Native, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_EndOnlineGame(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame");

	UOnlineGameInterfaceImpl_EndOnlineGame_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// (Final, Defined, Latent, NetReliable, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearStartOnlineGameCompleteDelegate_Params params;
	params.StartOnlineGameCompleteDelegate = StartOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// (Iterator, Latent, PreOperator, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddStartOnlineGameCompleteDelegate_Params params;
	params.StartOnlineGameCompleteDelegate = StartOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// (Defined, Latent, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnStartOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// (Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::StartOnlineGame(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame");

	UOnlineGameInterfaceImpl_StartOnlineGame_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.RetrieveGameSettingsForIP
// (Latent, PreOperator, Net, Simulated, HasOptionalParms)
// Parameters:
// struct FString                 IPAddress                      (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::RetrieveGameSettingsForIP(const struct FString& IPAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.RetrieveGameSettingsForIP");

	UOnlineGameInterfaceImpl_RetrieveGameSettingsForIP_Params params;
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearOnRetrieveGameSettingsForIPDelegate
// (Net, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         RetrieveIPDelegate             (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearOnRetrieveGameSettingsForIPDelegate(const struct FScriptDelegate& RetrieveIPDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearOnRetrieveGameSettingsForIPDelegate");

	UOnlineGameInterfaceImpl_ClearOnRetrieveGameSettingsForIPDelegate_Params params;
	params.RetrieveIPDelegate = RetrieveIPDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddOnRetrieveGameSettingsForIPDelegate
// (Defined, Latent, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         NewRetrieveIPDelegate          (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddOnRetrieveGameSettingsForIPDelegate(const struct FScriptDelegate& NewRetrieveIPDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddOnRetrieveGameSettingsForIPDelegate");

	UOnlineGameInterfaceImpl_AddOnRetrieveGameSettingsForIPDelegate_Params params;
	params.NewRetrieveIPDelegate = NewRetrieveIPDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnRetrievedGameSettingsForIP
// (Final, Defined, Iterator, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bSuccessful                    (Parm)
// struct FOnlineGameSearchResult ConnectResult                  (Const, Parm, OutParm)

void UOnlineGameInterfaceImpl::OnRetrievedGameSettingsForIP(bool bSuccessful, struct FOnlineGameSearchResult* ConnectResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnRetrievedGameSettingsForIP");

	UOnlineGameInterfaceImpl_OnRetrievedGameSettingsForIP_Params params;
	params.bSuccessful = bSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConnectResult != nullptr)
		*ConnectResult = params.ConnectResult;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// (Final, PreOperator, NetReliable, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// (Latent, Singular, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate");

	UOnlineGameInterfaceImpl_AddUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// (Iterator, Latent, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete");

	UOnlineGameInterfaceImpl_OnUnregisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::UnregisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers");

	UOnlineGameInterfaceImpl_UnregisterPlayers_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// (Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer");

	UOnlineGameInterfaceImpl_UnregisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// (Defined, Latent, PreOperator, Singular, Net, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// (Final, Defined, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate");

	UOnlineGameInterfaceImpl_AddRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// (Final, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete");

	UOnlineGameInterfaceImpl_OnRegisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// (Defined, Iterator, Latent, Singular, Net, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::RegisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers");

	UOnlineGameInterfaceImpl_RegisterPlayers_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// (Final, Defined, Latent, Singular, Net, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasInvited                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer");

	UOnlineGameInterfaceImpl_RegisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasInvited = bWasInvited;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// (Final, Defined, Latent, Singular, Net, Simulated, Exec, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 ConnectInfo                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString");

	UOnlineGameInterfaceImpl_GetResolvedConnectString_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConnectInfo != nullptr)
		*ConnectInfo = params.ConnectInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearQuerySessionsForUserCompleteDelegate
// (Final, Defined, Iterator, PreOperator, Net, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         QuerySessionsForUserCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearQuerySessionsForUserCompleteDelegate(const struct FScriptDelegate& QuerySessionsForUserCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearQuerySessionsForUserCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearQuerySessionsForUserCompleteDelegate_Params params;
	params.QuerySessionsForUserCompleteDelegate = QuerySessionsForUserCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddQuerySessionsForUserCompleteDelegate
// (Singular, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         QuerySessionsForUserCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddQuerySessionsForUserCompleteDelegate(const struct FScriptDelegate& QuerySessionsForUserCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddQuerySessionsForUserCompleteDelegate");

	UOnlineGameInterfaceImpl_AddQuerySessionsForUserCompleteDelegate_Params params;
	params.QuerySessionsForUserCompleteDelegate = QuerySessionsForUserCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnQuerySessionsForUserComplete
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnQuerySessionsForUserComplete(unsigned char LocalPlayerNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnQuerySessionsForUserComplete");

	UOnlineGameInterfaceImpl_OnQuerySessionsForUserComplete_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.QuerySessionsByKeyword
// (Iterator, Latent, Singular, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm)
// struct FString                 Keyword                        (Parm, NeedCtorLink)
// class UOnlineGameSearch*       SearchSettings                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_QuerySessionsByKeyword(unsigned char LocalPlayerNum, const struct FString& Keyword, class UOnlineGameSearch* SearchSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.QuerySessionsByKeyword");

	UOnlineGameInterfaceImpl_QuerySessionsByKeyword_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.Keyword = Keyword;
	params.SearchSettings = SearchSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.QuerySessionsForUser
// (Final, Iterator, Latent, Singular, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_QuerySessionsForUser(unsigned char LocalPlayerNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.QuerySessionsForUser");

	UOnlineGameInterfaceImpl_QuerySessionsForUser_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.LeaveAllOnlineSessions
// (Defined, Singular, Net, NetReliable, Operator, Static)
// Parameters:
// bool                           bClearSessionIfHost            (OptionalParm, Parm)

void UOnlineGameInterfaceImpl::STATIC_LeaveAllOnlineSessions(bool bClearSessionIfHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.LeaveAllOnlineSessions");

	UOnlineGameInterfaceImpl_LeaveAllOnlineSessions_Params params;
	params.bClearSessionIfHost = bClearSessionIfHost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.LeaveOnlineSession
// (Final, Defined, Singular, Net, NetReliable, Operator, Static)
// Parameters:
// unsigned char                  LocalPlayerNum                 (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           bClearSessionIfHost            (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_LeaveOnlineSession(unsigned char LocalPlayerNum, const struct FName& SessionName, bool bClearSessionIfHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.LeaveOnlineSession");

	UOnlineGameInterfaceImpl_LeaveOnlineSession_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.SessionName = SessionName;
	params.bClearSessionIfHost = bClearSessionIfHost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearMatchStatusChangedDelegate
// (Final, Latent, PreOperator, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         MatchStatusChangedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearMatchStatusChangedDelegate(const struct FScriptDelegate& MatchStatusChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearMatchStatusChangedDelegate");

	UOnlineGameInterfaceImpl_ClearMatchStatusChangedDelegate_Params params;
	params.MatchStatusChangedDelegate = MatchStatusChangedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddMatchStatusChangedDelegate
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         MatchStatusChangedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddMatchStatusChangedDelegate(const struct FScriptDelegate& MatchStatusChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddMatchStatusChangedDelegate");

	UOnlineGameInterfaceImpl_AddMatchStatusChangedDelegate_Params params;
	params.MatchStatusChangedDelegate = MatchStatusChangedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnMatchStatusChanged
// (Defined, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// unsigned char                  Status                         (Parm)

void UOnlineGameInterfaceImpl::OnMatchStatusChanged(const struct FName& SessionName, unsigned char Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnMatchStatusChanged");

	UOnlineGameInterfaceImpl_OnMatchStatusChanged_Params params;
	params.SessionName = SessionName;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate
// (Defined, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         GamePlayersChangedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGamePlayersChangedDelegate(const struct FScriptDelegate& GamePlayersChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate");

	UOnlineGameInterfaceImpl_ClearGamePlayersChangedDelegate_Params params;
	params.GamePlayersChangedDelegate = GamePlayersChangedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate
// (Final, Defined, Iterator, PreOperator, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         GamePlayersChangedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGamePlayersChangedDelegate(const struct FScriptDelegate& GamePlayersChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate");

	UOnlineGameInterfaceImpl_AddGamePlayersChangedDelegate_Params params;
	params.GamePlayersChangedDelegate = GamePlayersChangedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged
// (Final, Defined, Iterator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Players                        (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::OnGamePlayersChanged(const struct FName& SessionName, TArray<struct FUniqueNetId> Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged");

	UOnlineGameInterfaceImpl_OnGamePlayersChanged_Params params;
	params.SessionName = SessionName;
	params.Players = Players;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearAcceptPendingGameSessionCompleteDelegate
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FScriptDelegate         AcceptPendingGameSessionCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearAcceptPendingGameSessionCompleteDelegate(const struct FScriptDelegate& AcceptPendingGameSessionCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearAcceptPendingGameSessionCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearAcceptPendingGameSessionCompleteDelegate_Params params;
	params.AcceptPendingGameSessionCompleteDelegate = AcceptPendingGameSessionCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddAcceptPendingGameSessionCompleteDelegate
// (Final, Iterator, Latent, PreOperator, Native, Event)
// Parameters:
// struct FScriptDelegate         AcceptPendingGameSessionCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddAcceptPendingGameSessionCompleteDelegate(const struct FScriptDelegate& AcceptPendingGameSessionCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddAcceptPendingGameSessionCompleteDelegate");

	UOnlineGameInterfaceImpl_AddAcceptPendingGameSessionCompleteDelegate_Params params;
	params.AcceptPendingGameSessionCompleteDelegate = AcceptPendingGameSessionCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnAcceptPendingGameSessionComplete
// (Final, Iterator, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnAcceptPendingGameSessionComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnAcceptPendingGameSessionComplete");

	UOnlineGameInterfaceImpl_OnAcceptPendingGameSessionComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AcceptPendingGameSession
// (Iterator, Singular, NetReliable, Simulated, Exec, Event)
// Parameters:
// struct FName                   SessionName                    (Parm)

void UOnlineGameInterfaceImpl::AcceptPendingGameSession(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AcceptPendingGameSession");

	UOnlineGameInterfaceImpl_AcceptPendingGameSession_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearGameSessionReadyDelegate
// (Final, Defined, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         GameSessionReadyDelegate       (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGameSessionReadyDelegate(const struct FScriptDelegate& GameSessionReadyDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearGameSessionReadyDelegate");

	UOnlineGameInterfaceImpl_ClearGameSessionReadyDelegate_Params params;
	params.GameSessionReadyDelegate = GameSessionReadyDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddGameSessionReadyDelegate
// (Latent, PreOperator, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         GameSessionReadyDelegate       (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGameSessionReadyDelegate(const struct FScriptDelegate& GameSessionReadyDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddGameSessionReadyDelegate");

	UOnlineGameInterfaceImpl_AddGameSessionReadyDelegate_Params params;
	params.GameSessionReadyDelegate = GameSessionReadyDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnGameSessionReady
// (Latent, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)

void UOnlineGameInterfaceImpl::OnGameSessionReady(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnGameSessionReady");

	UOnlineGameInterfaceImpl_OnGameSessionReady_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateSessionPropertiesCompleteDelegate
// (Iterator, PreOperator, NetReliable, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         UpdateSessionPropertiesCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUpdateSessionPropertiesCompleteDelegate(const struct FScriptDelegate& UpdateSessionPropertiesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateSessionPropertiesCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearUpdateSessionPropertiesCompleteDelegate_Params params;
	params.UpdateSessionPropertiesCompleteDelegate = UpdateSessionPropertiesCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateSessionPropertiesCompleteDelegate
// (Final, Defined, Latent, Singular, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         UpdateSessionPropertiesCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUpdateSessionPropertiesCompleteDelegate(const struct FScriptDelegate& UpdateSessionPropertiesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddUpdateSessionPropertiesCompleteDelegate");

	UOnlineGameInterfaceImpl_AddUpdateSessionPropertiesCompleteDelegate_Params params;
	params.UpdateSessionPropertiesCompleteDelegate = UpdateSessionPropertiesCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateSessionPropertiesComplete
// (Defined, Iterator, Latent, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnUpdateSessionPropertiesComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnUpdateSessionPropertiesComplete");

	UOnlineGameInterfaceImpl_OnUpdateSessionPropertiesComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.UpdateSessionProperties
// (Final, Defined, Latent, PreOperator, Native, Event, HasOptionalParms)
// Parameters:
// unsigned char                  ScoutingUserNum                (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::UpdateSessionProperties(unsigned char ScoutingUserNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.UpdateSessionProperties");

	UOnlineGameInterfaceImpl_UpdateSessionProperties_Params params;
	params.ScoutingUserNum = ScoutingUserNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.DeleteCustomMemberProperty
// (Final, Defined, Latent, PreOperator, Simulated, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 PropertyName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_DeleteCustomMemberProperty(const struct FName& SessionName, const struct FString& PropertyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.DeleteCustomMemberProperty");

	UOnlineGameInterfaceImpl_DeleteCustomMemberProperty_Params params;
	params.SessionName = SessionName;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.SetCustomMemberProperty
// (Final, Defined, Latent, Net, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 PropertyName                   (Parm, NeedCtorLink)
// struct FString                 PropertyValue                  (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::SetCustomMemberProperty(const struct FName& SessionName, const struct FString& PropertyName, const struct FString& PropertyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.SetCustomMemberProperty");

	UOnlineGameInterfaceImpl_SetCustomMemberProperty_Params params;
	params.SessionName = SessionName;
	params.PropertyName = PropertyName;
	params.PropertyValue = PropertyValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.DeleteCustomSessionProperty
// (Iterator, Latent, PreOperator, Simulated, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 PropertyName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_DeleteCustomSessionProperty(const struct FName& SessionName, const struct FString& PropertyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.DeleteCustomSessionProperty");

	UOnlineGameInterfaceImpl_DeleteCustomSessionProperty_Params params;
	params.SessionName = SessionName;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.SetCustomSessionProperty
// (Iterator, Latent, Net, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 PropertyName                   (Parm, NeedCtorLink)
// struct FString                 PropertyValue                  (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::SetCustomSessionProperty(const struct FName& SessionName, const struct FString& PropertyName, const struct FString& PropertyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.SetCustomSessionProperty");

	UOnlineGameInterfaceImpl_SetCustomSessionProperty_Params params;
	params.SessionName = SessionName;
	params.PropertyName = PropertyName;
	params.PropertyValue = PropertyValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearMultiplayerSessionChangeDelegate
// (Iterator, Latent, PreOperator, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         MultiplayerSessionChangeDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearMultiplayerSessionChangeDelegate(const struct FScriptDelegate& MultiplayerSessionChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearMultiplayerSessionChangeDelegate");

	UOnlineGameInterfaceImpl_ClearMultiplayerSessionChangeDelegate_Params params;
	params.MultiplayerSessionChangeDelegate = MultiplayerSessionChangeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddMultiplayerSessionChangeDelegate
// (Final, Defined, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         MultiplayerSessionChangeDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddMultiplayerSessionChangeDelegate(const struct FScriptDelegate& MultiplayerSessionChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddMultiplayerSessionChangeDelegate");

	UOnlineGameInterfaceImpl_AddMultiplayerSessionChangeDelegate_Params params;
	params.MultiplayerSessionChangeDelegate = MultiplayerSessionChangeDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnMultiplayerSessionChange
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FSessionUpdateInfo      SessionChanges                 (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::OnMultiplayerSessionChange(const struct FName& SessionName, const struct FSessionUpdateInfo& SessionChanges)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnMultiplayerSessionChange");

	UOnlineGameInterfaceImpl_OnMultiplayerSessionChange_Params params;
	params.SessionName = SessionName;
	params.SessionChanges = SessionChanges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearAddSessionMemberCompleteDelegate
// (Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FScriptDelegate         AddSessionMemberCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearAddSessionMemberCompleteDelegate(const struct FScriptDelegate& AddSessionMemberCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearAddSessionMemberCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearAddSessionMemberCompleteDelegate_Params params;
	params.AddSessionMemberCompleteDelegate = AddSessionMemberCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddAddSessionMemberCompleteDelegate
// (Final, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         AddSessionMemberCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddAddSessionMemberCompleteDelegate(const struct FScriptDelegate& AddSessionMemberCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddAddSessionMemberCompleteDelegate");

	UOnlineGameInterfaceImpl_AddAddSessionMemberCompleteDelegate_Params params;
	params.AddSessionMemberCompleteDelegate = AddSessionMemberCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnAddSessionMemberComplete
// (Defined, Iterator, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnAddSessionMemberComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnAddSessionMemberComplete");

	UOnlineGameInterfaceImpl_OnAddSessionMemberComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddSessionMembers
// (Final, Iterator, PreOperator, Net, NetReliable, Native, Event)
// Parameters:
// unsigned char                  ScoutingPlayerNum              (Parm)
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Members                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::AddSessionMembers(unsigned char ScoutingPlayerNum, const struct FName& SessionName, TArray<struct FUniqueNetId> Members)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddSessionMembers");

	UOnlineGameInterfaceImpl_AddSessionMembers_Params params;
	params.ScoutingPlayerNum = ScoutingPlayerNum;
	params.SessionName = SessionName;
	params.Members = Members;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddSessionMember
// (Defined, PreOperator, Net, NetReliable, Native, Event)
// Parameters:
// unsigned char                  ScoutingPlayerNum              (Parm)
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            Member                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::AddSessionMember(unsigned char ScoutingPlayerNum, const struct FName& SessionName, const struct FUniqueNetId& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddSessionMember");

	UOnlineGameInterfaceImpl_AddSessionMember_Params params;
	params.ScoutingPlayerNum = ScoutingPlayerNum;
	params.SessionName = SessionName;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddSessionMemberByString
// (Final, Defined, PreOperator, Net, NetReliable, Native, Event)
// Parameters:
// unsigned char                  ScoutingPlayerNum              (Parm)
// struct FName                   SessionName                    (Parm)
// struct FString                 Member                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::AddSessionMemberByString(unsigned char ScoutingPlayerNum, const struct FName& SessionName, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddSessionMemberByString");

	UOnlineGameInterfaceImpl_AddSessionMemberByString_Params params;
	params.ScoutingPlayerNum = ScoutingPlayerNum;
	params.SessionName = SessionName;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineSessionWithTemplate
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  ScoutingPlayerNum              (Parm)
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     NewGameSettings                (Parm)
// struct FString                 TemplateName                   (Parm, NeedCtorLink)
// struct FString                 SessionKeyword                 (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::CreateOnlineSessionWithTemplate(unsigned char ScoutingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings, const struct FString& TemplateName, const struct FString& SessionKeyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineSessionWithTemplate");

	UOnlineGameInterfaceImpl_CreateOnlineSessionWithTemplate_Params params;
	params.ScoutingPlayerNum = ScoutingPlayerNum;
	params.SessionName = SessionName;
	params.NewGameSettings = NewGameSettings;
	params.TemplateName = TemplateName;
	params.SessionKeyword = SessionKeyword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.InitiatedSessionSearch
// (Final, Defined, Iterator, Latent, PreOperator, Exec, Native, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_InitiatedSessionSearch(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.InitiatedSessionSearch");

	UOnlineGameInterfaceImpl_InitiatedSessionSearch_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.IsHostOfSession
// (Final, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_IsHostOfSession(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.IsHostOfSession");

	UOnlineGameInterfaceImpl_IsHostOfSession_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearMatchmakeOnlineGameWithPartyCompleteDelegate
// (Latent, PreOperator, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         MatchmakeOnlineGameWithPartyCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearMatchmakeOnlineGameWithPartyCompleteDelegate(const struct FScriptDelegate& MatchmakeOnlineGameWithPartyCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearMatchmakeOnlineGameWithPartyCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearMatchmakeOnlineGameWithPartyCompleteDelegate_Params params;
	params.MatchmakeOnlineGameWithPartyCompleteDelegate = MatchmakeOnlineGameWithPartyCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddMatchmakeOnlineGameWithPartyCompleteDelegate
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         MatchmakeOnlineGameWithPartyCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddMatchmakeOnlineGameWithPartyCompleteDelegate(const struct FScriptDelegate& MatchmakeOnlineGameWithPartyCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddMatchmakeOnlineGameWithPartyCompleteDelegate");

	UOnlineGameInterfaceImpl_AddMatchmakeOnlineGameWithPartyCompleteDelegate_Params params;
	params.MatchmakeOnlineGameWithPartyCompleteDelegate = MatchmakeOnlineGameWithPartyCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnMatchmakeOnlineGameWithPartyComplete
// (Final, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnMatchmakeOnlineGameWithPartyComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnMatchmakeOnlineGameWithPartyComplete");

	UOnlineGameInterfaceImpl_OnMatchmakeOnlineGameWithPartyComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.MatchmakeOnlineGameWithParty
// (Final, Net, Simulated, Exec, Operator, Static)
// Parameters:
// unsigned char                  ScoutingPlayerNum              (Parm)
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     NewGameSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_MatchmakeOnlineGameWithParty(unsigned char ScoutingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.MatchmakeOnlineGameWithParty");

	UOnlineGameInterfaceImpl_MatchmakeOnlineGameWithParty_Params params;
	params.ScoutingPlayerNum = ScoutingPlayerNum;
	params.SessionName = SessionName;
	params.NewGameSettings = NewGameSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameWithPartyCompleteDelegate
// (Defined, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         CreateOnlineGameWithPartyCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameWithPartyCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameWithPartyCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameWithPartyCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearCreateOnlineGameWithPartyCompleteDelegate_Params params;
	params.CreateOnlineGameWithPartyCompleteDelegate = CreateOnlineGameWithPartyCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameWithPartyCompleteDelegate
// (Final, Defined, Latent, PreOperator, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         CreateOnlineGameWithPartyCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCreateOnlineGameWithPartyCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameWithPartyCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameWithPartyCompleteDelegate");

	UOnlineGameInterfaceImpl_AddCreateOnlineGameWithPartyCompleteDelegate_Params params;
	params.CreateOnlineGameWithPartyCompleteDelegate = CreateOnlineGameWithPartyCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameWithPartyComplete
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnCreateOnlineGameWithPartyComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameWithPartyComplete");

	UOnlineGameInterfaceImpl_OnCreateOnlineGameWithPartyComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGameWithParty
// (Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  ScoutingPlayerNum              (Parm)
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     NewGameSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::CreateOnlineGameWithParty(unsigned char ScoutingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGameWithParty");

	UOnlineGameInterfaceImpl_CreateOnlineGameWithParty_Params params;
	params.ScoutingPlayerNum = ScoutingPlayerNum;
	params.SessionName = SessionName;
	params.NewGameSettings = NewGameSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// (Iterator, Latent, Singular, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearJoinOnlineGameCompleteDelegate_Params params;
	params.JoinOnlineGameCompleteDelegate = JoinOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// (Defined, PreOperator, Singular, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddJoinOnlineGameCompleteDelegate_Params params;
	params.JoinOnlineGameCompleteDelegate = JoinOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnJoinOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.IsCurrentRoomOwner
// (Final, Defined, PreOperator, Net, Simulated, Exec, Native, Event, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_IsCurrentRoomOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.IsCurrentRoomOwner");

	UOnlineGameInterfaceImpl_IsCurrentRoomOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.SetRankedReadyStatus
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// bool                           bReady                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::SetRankedReadyStatus(bool bReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.SetRankedReadyStatus");

	UOnlineGameInterfaceImpl_SetRankedReadyStatus_Params params;
	params.bReady = bReady;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.IsJoinOperationInProgress
// (Final, Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_IsJoinOperationInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.IsJoinOperationInProgress");

	UOnlineGameInterfaceImpl_IsJoinOperationInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGameByMatchingParams
// (Defined, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static)
// Parameters:
// struct FQWord                  RoomId                         (Parm)
// class UOnlineGameSettings*     JoinedGameSettings             (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_JoinOnlineGameByMatchingParams(const struct FQWord& RoomId, class UOnlineGameSettings** JoinedGameSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGameByMatchingParams");

	UOnlineGameInterfaceImpl_JoinOnlineGameByMatchingParams_Params params;
	params.RoomId = RoomId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JoinedGameSettings != nullptr)
		*JoinedGameSettings = params.JoinedGameSettings;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnMapChangeComplete
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Event, Operator, Static)

void UOnlineGameInterfaceImpl::STATIC_OnMapChangeComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnMapChangeComplete");

	UOnlineGameInterfaceImpl_OnMapChangeComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnMapChangePending
// (NetReliable, Simulated, Event, Operator, Static)

void UOnlineGameInterfaceImpl::STATIC_OnMapChangePending()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnMapChangePending");

	UOnlineGameInterfaceImpl_OnMapChangePending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGameBySessionHandle
// (Final, Defined, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  PlayerNum                      (Parm)
// struct FName                   SessionName                    (Parm)
// struct FString                 InSessionGuid                  (Const, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_JoinOnlineGameBySessionHandle(unsigned char PlayerNum, const struct FName& SessionName, const struct FString& InSessionGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGameBySessionHandle");

	UOnlineGameInterfaceImpl_JoinOnlineGameBySessionHandle_Params params;
	params.PlayerNum = PlayerNum;
	params.SessionName = SessionName;
	params.InSessionGuid = InSessionGuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// (Final, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static)
// Parameters:
// unsigned char                  PlayerNum                      (Parm)
// struct FName                   SessionName                    (Parm)
// struct FOnlineGameSearchResult DesiredGame                    (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_JoinOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame");

	UOnlineGameInterfaceImpl_JoinOnlineGame_Params params;
	params.PlayerNum = PlayerNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// (Final, Defined, Iterator, Singular, Net, NetReliable, Event, Static)
// Parameters:
// class UOnlineGameSearch*       Search                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_FreeSearchResults(class UOnlineGameSearch* Search)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults");

	UOnlineGameInterfaceImpl_FreeSearchResults_Params params;
	params.Search = Search;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, Operator)
// Parameters:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearCancelFindOnlineGamesCompleteDelegate_Params params;
	params.CancelFindOnlineGamesCompleteDelegate = CancelFindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// (Final, Latent, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate");

	UOnlineGameInterfaceImpl_AddCancelFindOnlineGamesCompleteDelegate_Params params;
	params.CancelFindOnlineGamesCompleteDelegate = CancelFindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete");

	UOnlineGameInterfaceImpl_OnCancelFindOnlineGamesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// (Final, Latent, Singular, Net, NetReliable, Exec, Event, Operator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::CancelFindOnlineGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames");

	UOnlineGameInterfaceImpl_CancelFindOnlineGames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// (Defined, Latent, PreOperator, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearFindOnlineGamesCompleteDelegate_Params params;
	params.FindOnlineGamesCompleteDelegate = FindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// (Final, Iterator, Latent, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate");

	UOnlineGameInterfaceImpl_AddFindOnlineGamesCompleteDelegate_Params params;
	params.FindOnlineGamesCompleteDelegate = FindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// (Final, Defined, PreOperator, Net, Simulated, Exec, Native, Static)
// Parameters:
// unsigned char                  SearchingPlayerNum             (Parm)
// class UOnlineGameSearch*       SearchSettings                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames");

	UOnlineGameInterfaceImpl_FindOnlineGames_Params params;
	params.SearchingPlayerNum = SearchingPlayerNum;
	params.SearchSettings = SearchSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// (Final, Iterator, Latent, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearDestroyOnlineGameCompleteDelegate_Params params;
	params.DestroyOnlineGameCompleteDelegate = DestroyOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// (Final, Net, Native, Event)
// Parameters:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddDestroyOnlineGameCompleteDelegate_Params params;
	params.DestroyOnlineGameCompleteDelegate = DestroyOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// (Defined, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnDestroyOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// (Iterator, Latent, Singular, Net, Simulated, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::STATIC_DestroyOnlineGame(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame");

	UOnlineGameInterfaceImpl_DestroyOnlineGame_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// (Final, Defined, PreOperator, NetReliable, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearUpdateOnlineGameCompleteDelegate_Params params;
	params.UpdateOnlineGameCompleteDelegate = UpdateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// (Defined, Latent, Singular, Net, NetReliable, Native, Event)
// Parameters:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddUpdateOnlineGameCompleteDelegate_Params params;
	params.UpdateOnlineGameCompleteDelegate = UpdateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// (Final, Iterator, Latent, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnUpdateOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// (PreOperator, Native, Event, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (Parm)
// bool                           bShouldRefreshOnlineData       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame");

	UOnlineGameInterfaceImpl_UpdateOnlineGame_Params params;
	params.SessionName = SessionName;
	params.UpdatedGameSettings = UpdatedGameSettings;
	params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// (Final, Native, Event, Operator)
// Parameters:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearCreateOnlineGameCompleteDelegate_Params params;
	params.CreateOnlineGameCompleteDelegate = CreateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// (Defined, Latent, PreOperator, Singular, Native, Event)
// Parameters:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddCreateOnlineGameCompleteDelegate_Params params;
	params.CreateOnlineGameCompleteDelegate = CreateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnCreateOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// (Defined, Latent, PreOperator, Singular, NetReliable, Exec, Native, Event, Operator)
// Parameters:
// unsigned char                  HostingPlayerNum               (Parm)
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     NewGameSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::CreateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame");

	UOnlineGameInterfaceImpl_CreateOnlineGame_Params params;
	params.HostingPlayerNum = HostingPlayerNum;
	params.SessionName = SessionName;
	params.NewGameSettings = NewGameSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// (Defined, Singular, NetReliable, Exec, Event, Static)
// Parameters:
// class UOnlineGameSearch*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameSearch* UOnlineGameInterfaceImpl::STATIC_GetGameSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch");

	UOnlineGameInterfaceImpl_GetGameSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// (Iterator, Singular, NetReliable, Exec, Event, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameSettings* UOnlineGameInterfaceImpl::STATIC_GetGameSettings(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings");

	UOnlineGameInterfaceImpl_GetGameSettings_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// (Iterator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete");

	UOnlineGameInterfaceImpl_OnFindOnlineGamesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWebHelper.SaveImageToTempDir
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Filename                       (Const, Parm, NeedCtorLink)
// TArray<unsigned char>          ImageData                      (Const, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineImageDownloaderWebHelper::SaveImageToTempDir(const struct FString& Filename, TArray<unsigned char> ImageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWebHelper.SaveImageToTempDir");

	UOnlineImageDownloaderWebHelper_SaveImageToTempDir_Params params;
	params.Filename = Filename;
	params.ImageData = ImageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineImageDownloaderWebHelper.LoadImageFromTempDir
// (Iterator, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Filename                       (Const, Parm, NeedCtorLink)
// TArray<unsigned char>          ImageData                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineImageDownloaderWebHelper::LoadImageFromTempDir(const struct FString& Filename, TArray<unsigned char>* ImageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWebHelper.LoadImageFromTempDir");

	UOnlineImageDownloaderWebHelper_LoadImageFromTempDir_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImageData != nullptr)
		*ImageData = params.ImageData;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// (Final, Defined, Net, Native, Operator, HasOptionalParms)
// Parameters:
// TArray<unsigned char>          Data                           (Const, Parm, OutParm, NeedCtorLink)

void UOnlinePlaylistManager::ParseDataCenterId(TArray<unsigned char>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.ParseDataCenterId");

	UOnlinePlaylistManager_ParseDataCenterId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// (Defined, Iterator, Latent, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlinePlaylistManager::OnReadDataCenterIdComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete");

	UOnlinePlaylistManager_OnReadDataCenterIdComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// (Defined, Iterator, Latent, Singular, NetReliable, Native, Operator, HasOptionalParms)

void UOnlinePlaylistManager::ReadDataCenterId()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.ReadDataCenterId");

	UOnlinePlaylistManager_ReadDataCenterId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// (Defined, Iterator, PreOperator, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// int                            NumPlayers                     (Parm)

void UOnlinePlaylistManager::SendPlaylistPopulationUpdate(int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate");

	UOnlinePlaylistManager_SendPlaylistPopulationUpdate_Params params;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            WorldwideTotal                 (Parm, OutParm)
// int                            RegionTotal                    (Parm, OutParm)

void UOnlinePlaylistManager::GetPopulationInfoFromPlaylist(int PlaylistId, int* WorldwideTotal, int* RegionTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist");

	UOnlinePlaylistManager_GetPopulationInfoFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldwideTotal != nullptr)
		*WorldwideTotal = params.WorldwideTotal;
	if (RegionTotal != nullptr)
		*RegionTotal = params.RegionTotal;
}


// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// (Final, Defined, Iterator, Net, Native, Operator, HasOptionalParms)
// Parameters:
// TArray<unsigned char>          Data                           (Const, Parm, OutParm, NeedCtorLink)

void UOnlinePlaylistManager::ParsePlaylistPopulationData(TArray<unsigned char>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData");

	UOnlinePlaylistManager_ParsePlaylistPopulationData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)

void UOnlinePlaylistManager::OnPlaylistPopulationDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated");

	UOnlinePlaylistManager_OnPlaylistPopulationDataUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// (Final, Defined, Iterator, Latent, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlinePlaylistManager::OnReadPlaylistPopulationComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete");

	UOnlinePlaylistManager_OnReadPlaylistPopulationComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// (Final, PreOperator, Singular, NetReliable, Native, Operator, HasOptionalParms)

void UOnlinePlaylistManager::ReadPlaylistPopulation()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation");

	UOnlinePlaylistManager_ReadPlaylistPopulation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.Reset
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native, HasOptionalParms)

void UOnlinePlaylistManager::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.Reset");

	UOnlinePlaylistManager_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// (Final, Defined, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// TArray<int>                    ContentIds                     (Parm, OutParm, NeedCtorLink)

void UOnlinePlaylistManager::GetContentIdsFromPlaylist(int PlaylistId, TArray<int>* ContentIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist");

	UOnlinePlaylistManager_GetContentIdsFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentIds != nullptr)
		*ContentIds = params.ContentIds;
}


// Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist
// (Iterator, Latent, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// class UClass*                  SourceInventory                (Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* UOnlinePlaylistManager::GetInventorySwapFromPlaylist(int PlaylistId, class UClass* SourceInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist");

	UOnlinePlaylistManager_GetInventorySwapFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;
	params.SourceInventory = SourceInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// (Final, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// TArray<struct FName>           MapCycle                       (Parm, OutParm, NeedCtorLink)

void UOnlinePlaylistManager::GetMapCycleFromPlaylist(int PlaylistId, TArray<struct FName>* MapCycle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist");

	UOnlinePlaylistManager_GetMapCycleFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapCycle != nullptr)
		*MapCycle = params.MapCycle;
}


// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// (Final, Defined, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlinePlaylistManager::GetUrlFromPlaylist(int PlaylistId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist");

	UOnlinePlaylistManager_GetUrlFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.GetMatchType
// (Defined, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePlaylistManager::GetMatchType(int PlaylistId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetMatchType");

	UOnlinePlaylistManager_GetMatchType_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// (Final, Latent, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlaylistManager::IsPlaylistArbitrated(int PlaylistId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated");

	UOnlinePlaylistManager_IsPlaylistArbitrated_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            LoadBalanceId                  (Parm, OutParm)

void UOnlinePlaylistManager::GetLoadBalanceIdFromPlaylist(int PlaylistId, int* LoadBalanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist");

	UOnlinePlaylistManager_GetLoadBalanceIdFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadBalanceId != nullptr)
		*LoadBalanceId = params.LoadBalanceId;
}


// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// (Final, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            TeamSize                       (Parm, OutParm)
// int                            TeamCount                      (Parm, OutParm)
// int                            MaxPartySize                   (Parm, OutParm)

void UOnlinePlaylistManager::GetTeamInfoFromPlaylist(int PlaylistId, int* TeamSize, int* TeamCount, int* MaxPartySize)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist");

	UOnlinePlaylistManager_GetTeamInfoFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamSize != nullptr)
		*TeamSize = params.TeamSize;
	if (TeamCount != nullptr)
		*TeamCount = params.TeamCount;
	if (MaxPartySize != nullptr)
		*MaxPartySize = params.MaxPartySize;
}


// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// (Final, Defined, Iterator, PreOperator, Singular, Net, Native, Operator, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlaylistManager::PlaylistSupportsDedicatedServers(int PlaylistId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers");

	UOnlinePlaylistManager_PlaylistSupportsDedicatedServers_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlaylistManager::HasAnyGameSettings(int PlaylistId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings");

	UOnlinePlaylistManager_HasAnyGameSettings_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// (Iterator, Singular, NetReliable, Exec, Event, Static)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            GameSettingsId                 (Parm)
// class UOnlineGameSettings*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameSettings* UOnlinePlaylistManager::STATIC_GetGameSettings(int PlaylistId, int GameSettingsId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.GetGameSettings");

	UOnlinePlaylistManager_GetGameSettings_Params params;
	params.PlaylistId = PlaylistId;
	params.GameSettingsId = GameSettingsId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// (Iterator, Latent, NetReliable, Exec, Operator, HasOptionalParms)

void UOnlinePlaylistManager::FinalizePlaylistObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects");

	UOnlinePlaylistManager_FinalizePlaylistObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlinePlaylistManager::STATIC_OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete");

	UOnlinePlaylistManager_OnReadTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// (Defined, PreOperator, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlaylistManager::ShouldRefreshPlaylists()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists");

	UOnlinePlaylistManager_ShouldRefreshPlaylists_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// (Final, Latent, Singular, Exec, Operator, HasOptionalParms)

void UOnlinePlaylistManager::DetermineFilesToDownload()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload");

	UOnlinePlaylistManager_DetermineFilesToDownload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// (Final, Defined, PreOperator, Singular, Exec, Operator, HasOptionalParms)

void UOnlinePlaylistManager::DownloadPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.DownloadPlaylist");

	UOnlinePlaylistManager_DownloadPlaylist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlinePlaylistManager::OnReadPlaylistComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete");

	UOnlinePlaylistManager_OnReadPlaylistComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeacon.OnDestroyComplete
// (Final, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)

void UPartyBeacon::OnDestroyComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeacon.OnDestroyComplete");

	UPartyBeacon_OnDestroyComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeacon.DestroyBeacon
// (Final, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)

void UPartyBeacon::DestroyBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeacon.DestroyBeacon");

	UPartyBeacon_DestroyBeacon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.DestroyBeacon
// (Final, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)

void UPartyBeaconClient::DestroyBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.DestroyBeacon");

	UPartyBeaconClient_DestroyBeacon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.CancelReservation
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            CancellingPartyLeader          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconClient::CancelReservation(const struct FUniqueNetId& CancellingPartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.CancelReservation");

	UPartyBeaconClient_CancelReservation_Params params;
	params.CancellingPartyLeader = CancellingPartyLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FOnlineGameSearchResult DesiredHost                    (Const, Parm, OutParm)
// struct FUniqueNetId            RequestingPartyLeader          (Parm)
// TArray<struct FPlayerReservation> PlayersToAdd                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconClient::RequestReservationUpdate(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* PlayersToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.RequestReservationUpdate");

	UPartyBeaconClient_RequestReservationUpdate_Params params;
	params.RequestingPartyLeader = RequestingPartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredHost != nullptr)
		*DesiredHost = params.DesiredHost;
	if (PlayersToAdd != nullptr)
		*PlayersToAdd = params.PlayersToAdd;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconClient.RequestReservation
// (Defined, Latent, PreOperator, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FOnlineGameSearchResult DesiredHost                    (Const, Parm, OutParm)
// struct FUniqueNetId            RequestingPartyLeader          (Parm)
// TArray<struct FPlayerReservation> Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconClient::RequestReservation(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.RequestReservation");

	UPartyBeaconClient_RequestReservation_Params params;
	params.RequestingPartyLeader = RequestingPartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredHost != nullptr)
		*DesiredHost = params.DesiredHost;
	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// (Iterator, Latent, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)

void UPartyBeaconClient::OnHostHasCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.OnHostHasCancelled");

	UPartyBeaconClient_OnHostHasCancelled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.OnHostIsReady
// (Final, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)

void UPartyBeaconClient::OnHostIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.OnHostIsReady");

	UPartyBeaconClient_OnHostIsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// (Final, Defined, Latent, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Parm)

void UPartyBeaconClient::OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.OnTravelRequestReceived");

	UPartyBeaconClient_OnTravelRequestReceived_Params params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// (Iterator, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// int                            ReservationRemaining           (Parm)

void UPartyBeaconClient::OnReservationCountUpdated(int ReservationRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.OnReservationCountUpdated");

	UPartyBeaconClient_OnReservationCountUpdated_Params params;
	params.ReservationRemaining = ReservationRemaining;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// (Final, Iterator, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// TEnumAsByte<EPartyReservationResult> ReservationResult              (Parm)

void UPartyBeaconClient::OnReservationRequestComplete(TEnumAsByte<EPartyReservationResult> ReservationResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconClient.OnReservationRequestComplete");

	UPartyBeaconClient_OnReservationRequestComplete_Params params;
	params.ReservationResult = ReservationResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// (Final, Defined, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPartyBeaconHost::GetMaxAvailableTeamSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize");

	UPartyBeaconHost_GetMaxAvailableTeamSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FUniqueNetId>    PartyLeaders                   (Parm, OutParm, NeedCtorLink)

void UPartyBeaconHost::GetPartyLeaders(TArray<struct FUniqueNetId>* PartyLeaders)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.GetPartyLeaders");

	UPartyBeaconHost_GetPartyLeaders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyLeaders != nullptr)
		*PartyLeaders = params.PartyLeaders;
}


// Function IpDrv.PartyBeaconHost.GetPlayers
// (Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Parm, OutParm, NeedCtorLink)

void UPartyBeaconHost::GetPlayers(TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.GetPlayers");

	UPartyBeaconHost_GetPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// (Defined, Latent, Singular, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// class UOnlineGameSearch*       Search                         (Parm)

void UPartyBeaconHost::AppendReservationSkillsToSearch(class UOnlineGameSearch* Search)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch");

	UPartyBeaconHost_AppendReservationSkillsToSearch_Params params;
	params.Search = Search;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.UnregisterParty
// (Final, Defined, Iterator, PreOperator, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (Parm)

void UPartyBeaconHost::UnregisterParty(const struct FUniqueNetId& PartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.UnregisterParty");

	UPartyBeaconHost_UnregisterParty_Params params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// (Latent, PreOperator, Simulated, Exec, Native, HasOptionalParms)

void UPartyBeaconHost::UnregisterPartyMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.UnregisterPartyMembers");

	UPartyBeaconHost_UnregisterPartyMembers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// (Final, Defined, PreOperator, Simulated, Exec, Native, HasOptionalParms)

void UPartyBeaconHost::RegisterPartyMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.RegisterPartyMembers");

	UPartyBeaconHost_RegisterPartyMembers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.AreReservationsFull
// (Defined, PreOperator, Singular, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconHost::AreReservationsFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.AreReservationsFull");

	UPartyBeaconHost_AreReservationsFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// (Final, PreOperator, Singular, Simulated, Native, Operator, HasOptionalParms)

void UPartyBeaconHost::TellClientsHostHasCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled");

	UPartyBeaconHost_TellClientsHostHasCancelled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// (Defined, PreOperator, Singular, Simulated, Native, Operator, HasOptionalParms)

void UPartyBeaconHost::TellClientsHostIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.TellClientsHostIsReady");

	UPartyBeaconHost_TellClientsHostIsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// (Final, Defined, PreOperator, Singular, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Parm)

void UPartyBeaconHost::TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.TellClientsToTravel");

	UPartyBeaconHost_TellClientsToTravel_Params params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.DestroyBeacon
// (Final, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)

void UPartyBeaconHost::DestroyBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.DestroyBeacon");

	UPartyBeaconHost_DestroyBeacon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// (Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (Parm)

void UPartyBeaconHost::OnClientCancellationReceived(const struct FUniqueNetId& PartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.OnClientCancellationReceived");

	UPartyBeaconHost_OnClientCancellationReceived_Params params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.OnReservationsFull
// (Defined, Iterator, Simulated, Exec, Native, HasOptionalParms)

void UPartyBeaconHost::OnReservationsFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.OnReservationsFull");

	UPartyBeaconHost_OnReservationsFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.OnReservationChange
// (Final, Defined, Simulated, Exec, Native, HasOptionalParms)

void UPartyBeaconHost::OnReservationChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.OnReservationChange");

	UPartyBeaconHost_OnReservationChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// (Iterator, Latent, PreOperator, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bMaintainParty                 (Parm)

void UPartyBeaconHost::HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.HandlePlayerLogout");

	UPartyBeaconHost_HandlePlayerLogout_Params params;
	params.PlayerID = PlayerID;
	params.bMaintainParty = bMaintainParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.GetExistingReservation
// (Iterator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (Const, Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPartyBeaconHost::GetExistingReservation(struct FUniqueNetId* PartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.GetExistingReservation");

	UPartyBeaconHost_GetExistingReservation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyLeader != nullptr)
		*PartyLeader = params.PartyLeader;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// (Final, Singular, Net, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (Parm)
// TArray<struct FPlayerReservation> PlayerMembers                  (Const, Parm, OutParm, NeedCtorLink)
// TEnumAsByte<EPartyReservationResult> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPartyReservationResult> UPartyBeaconHost::UpdatePartyReservationEntry(const struct FUniqueNetId& PartyLeader, TArray<struct FPlayerReservation>* PlayerMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry");

	UPartyBeaconHost_UpdatePartyReservationEntry_Params params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerMembers != nullptr)
		*PlayerMembers = params.PlayerMembers;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// (Final, Iterator, Singular, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (Parm)
// TArray<struct FPlayerReservation> PlayerMembers                  (Const, Parm, OutParm, NeedCtorLink)
// int                            TeamNum                        (Parm)
// bool                           bIsHost                        (Parm)
// TEnumAsByte<EPartyReservationResult> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EPartyReservationResult> UPartyBeaconHost::AddPartyReservationEntry(const struct FUniqueNetId& PartyLeader, int TeamNum, bool bIsHost, TArray<struct FPlayerReservation>* PlayerMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.AddPartyReservationEntry");

	UPartyBeaconHost_AddPartyReservationEntry_Params params;
	params.PartyLeader = PartyLeader;
	params.TeamNum = TeamNum;
	params.bIsHost = bIsHost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerMembers != nullptr)
		*PlayerMembers = params.PlayerMembers;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.InitHostBeacon
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            InNumTeams                     (Parm)
// int                            InNumPlayersPerTeam            (Parm)
// int                            InNumReservations              (Parm)
// struct FName                   InSessionName                  (Parm)
// int                            InForceTeamNum                 (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconHost::InitHostBeacon(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, const struct FName& InSessionName, int InForceTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.InitHostBeacon");

	UPartyBeaconHost_InitHostBeacon_Params params;
	params.InNumTeams = InNumTeams;
	params.InNumPlayersPerTeam = InNumPlayersPerTeam;
	params.InNumReservations = InNumReservations;
	params.InSessionName = InSessionName;
	params.InForceTeamNum = InForceTeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// (Final, Defined, Iterator, Latent, Net, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bPause                         (Parm)

void UPartyBeaconHost::PauseReservationRequests(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.PartyBeaconHost.PauseReservationRequests");

	UPartyBeaconHost_PauseReservationRequests_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.GetHexDigit
// (Latent, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 D                              (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UWebRequest::GetHexDigit(const struct FString& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetHexDigit");

	UWebRequest_GetHexDigit_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.DecodeFormData
// (Final, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Data                           (Parm, NeedCtorLink)
// int                            MaxValueLength                 (OptionalParm, Parm)
// int                            MaxLineLength                  (OptionalParm, Parm)

void UWebRequest::DecodeFormData(const struct FString& Data, int MaxValueLength, int MaxLineLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.DecodeFormData");

	UWebRequest_DecodeFormData_Params params;
	params.Data = Data;
	params.MaxValueLength = MaxValueLength;
	params.MaxLineLength = MaxLineLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.ProcessHeaderString
// (Final, Defined, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void UWebRequest::ProcessHeaderString(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.ProcessHeaderString");

	UWebRequest_ProcessHeaderString_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.Dump
// (Final, Iterator, PreOperator, Singular, Exec, Operator, HasOptionalParms)

void UWebRequest::Dump()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.Dump");

	UWebRequest_Dump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.GetVariables
// (Final, Iterator, Latent, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FString>         varNames                       (Parm, OutParm, NeedCtorLink)

void UWebRequest::GetVariables(TArray<struct FString>* varNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetVariables");

	UWebRequest_GetVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (varNames != nullptr)
		*varNames = params.varNames;
}


// Function IpDrv.WebRequest.GetVariableNumber
// (Final, Defined, Iterator, Latent, Operator, HasOptionalParms)
// Parameters:
// struct FString                 VariableName                   (Parm, NeedCtorLink)
// int                            Number                         (Parm)
// struct FString                 DefaultValue                   (OptionalParm, Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebRequest::GetVariableNumber(const struct FString& VariableName, int Number, const struct FString& DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetVariableNumber");

	UWebRequest_GetVariableNumber_Params params;
	params.VariableName = VariableName;
	params.Number = Number;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.GetVariableCount
// (Iterator, Latent, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 VariableName                   (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UWebRequest::GetVariableCount(const struct FString& VariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetVariableCount");

	UWebRequest_GetVariableCount_Params params;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.GetVariable
// (Final, Latent, Operator, HasOptionalParms)
// Parameters:
// struct FString                 VariableName                   (Parm, NeedCtorLink)
// struct FString                 DefaultValue                   (OptionalParm, Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebRequest::GetVariable(const struct FString& VariableName, const struct FString& DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetVariable");

	UWebRequest_GetVariable_Params params;
	params.VariableName = VariableName;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.AddVariable
// (Final, Defined, Iterator, Singular, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 VariableName                   (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, CoerceParm, NeedCtorLink)

void UWebRequest::AddVariable(const struct FString& VariableName, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.AddVariable");

	UWebRequest_AddVariable_Params params;
	params.VariableName = VariableName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.GetHeaders
// (Final, PreOperator, Singular, NetReliable, Exec, Event, Static)
// Parameters:
// TArray<struct FString>         Headers                        (Parm, OutParm, NeedCtorLink)

void UWebRequest::STATIC_GetHeaders(TArray<struct FString>* Headers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetHeaders");

	UWebRequest_GetHeaders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Headers != nullptr)
		*Headers = params.Headers;
}


// Function IpDrv.WebRequest.GetHeader
// (PreOperator, Singular, NetReliable, Exec, Event, Static)
// Parameters:
// struct FString                 HeaderName                     (Parm, NeedCtorLink)
// struct FString                 DefaultValue                   (OptionalParm, Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebRequest::STATIC_GetHeader(const struct FString& HeaderName, const struct FString& DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.GetHeader");

	UWebRequest_GetHeader_Params params;
	params.HeaderName = HeaderName;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.AddHeader
// (Final, Singular, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 HeaderName                     (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, CoerceParm, NeedCtorLink)

void UWebRequest::AddHeader(const struct FString& HeaderName, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.AddHeader");

	UWebRequest_AddHeader_Params params;
	params.HeaderName = HeaderName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.EncodeBase64
// (Final, Latent, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Decoded                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebRequest::EncodeBase64(const struct FString& Decoded)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.EncodeBase64");

	UWebRequest_EncodeBase64_Params params;
	params.Decoded = Decoded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.DecodeBase64
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Encoded                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebRequest::DecodeBase64(const struct FString& Encoded)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebRequest.DecodeBase64");

	UWebRequest_DecodeBase64_Params params;
	params.Encoded = Encoded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.SentResponse
// (Latent, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebResponse::SentResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SentResponse");

	UWebResponse_SentResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.SentText
// (PreOperator, Net, Simulated, Exec, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebResponse::SentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SentText");

	UWebResponse_SentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.Redirect
// (Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void UWebResponse::Redirect(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.Redirect");

	UWebResponse_Redirect_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.SendStandardHeaders
// (Final, Defined, Iterator, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ContentType                    (OptionalParm, Parm, NeedCtorLink)
// bool                           bCache                         (OptionalParm, Parm)

void UWebResponse::SendStandardHeaders(const struct FString& ContentType, bool bCache)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SendStandardHeaders");

	UWebResponse_SendStandardHeaders_Params params;
	params.ContentType = ContentType;
	params.bCache = bCache;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.HTTPError
// (Final, Latent, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            ErrorNum                       (Parm)
// struct FString                 Data                           (OptionalParm, Parm, NeedCtorLink)

void UWebResponse::HTTPError(int ErrorNum, const struct FString& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.HTTPError");

	UWebResponse_HTTPError_Params params;
	params.ErrorNum = ErrorNum;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.SendHeaders
// (Final, Iterator, Simulated, Native, Operator, HasOptionalParms)

void UWebResponse::SendHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SendHeaders");

	UWebResponse_SendHeaders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.AddHeader
// (Final, Singular, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Header                         (Parm, NeedCtorLink)
// bool                           bReplace                       (OptionalParm, Parm)

void UWebResponse::AddHeader(const struct FString& Header, bool bReplace)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.AddHeader");

	UWebResponse_AddHeader_Params params;
	params.Header = Header;
	params.bReplace = bReplace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.HTTPHeader
// (Defined, Latent, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Header                         (Parm, NeedCtorLink)

void UWebResponse::HTTPHeader(const struct FString& Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.HTTPHeader");

	UWebResponse_HTTPHeader_Params params;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.HttpResponse
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Header                         (Parm, NeedCtorLink)

void UWebResponse::HttpResponse(const struct FString& Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.HttpResponse");

	UWebResponse_HttpResponse_Params params;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.FailAuthentication
// (Iterator, Latent, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Realm                          (Parm, NeedCtorLink)

void UWebResponse::FailAuthentication(const struct FString& Realm)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.FailAuthentication");

	UWebResponse_FailAuthentication_Params params;
	params.Realm = Realm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.SendCachedFile
// (Final, Defined, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 ContentType                    (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebResponse::SendCachedFile(const struct FString& Filename, const struct FString& ContentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SendCachedFile");

	UWebResponse_SendCachedFile_Params params;
	params.Filename = Filename;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.SendBinary
// (Iterator, Net, Simulated, Exec)
// Parameters:
// int                            Count                          (Parm)
// unsigned char                  B                              (Parm)

void UWebResponse::SendBinary(int Count, unsigned char B)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SendBinary");

	UWebResponse_SendBinary_Params params;
	params.Count = Count;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.SendText
// (Final, Defined, Net, Simulated, Exec)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// bool                           bNoCRLF                        (OptionalParm, Parm)

void UWebResponse::SendText(const struct FString& Text, bool bNoCRLF)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.SendText");

	UWebResponse_SendText_Params params;
	params.Text = Text;
	params.bNoCRLF = bNoCRLF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.Dump
// (Final, Iterator, PreOperator, Singular, Exec, Operator, HasOptionalParms)

void UWebResponse::Dump()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.Dump");

	UWebResponse_Dump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.GetHTTPExpiration
// (Final, Latent, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            OffsetSeconds                  (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebResponse::GetHTTPExpiration(int OffsetSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.GetHTTPExpiration");

	UWebResponse_GetHTTPExpiration_Params params;
	params.OffsetSeconds = OffsetSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.LoadParsedUHTM
// (Final, Iterator, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebResponse::LoadParsedUHTM(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.LoadParsedUHTM");

	UWebResponse_LoadParsedUHTM_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.IncludeBinaryFile
// (Defined, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebResponse::IncludeBinaryFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.IncludeBinaryFile");

	UWebResponse_IncludeBinaryFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.IncludeUHTM
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebResponse::IncludeUHTM(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.IncludeUHTM");

	UWebResponse_IncludeUHTM_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.ClearSubst
// (Final, Iterator, Net, NetReliable, Simulated, Operator, HasOptionalParms)

void UWebResponse::ClearSubst()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.ClearSubst");

	UWebResponse_ClearSubst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.Subst
// (Defined, Latent, Singular, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Variable                       (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, CoerceParm, NeedCtorLink)
// bool                           bClear                         (OptionalParm, Parm)

void UWebResponse::Subst(const struct FString& Variable, const struct FString& Value, bool bClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.Subst");

	UWebResponse_Subst_Params params;
	params.Variable = Variable;
	params.Value = Value;
	params.bClear = bClear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.FileExists
// (Iterator, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebResponse::FileExists(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebResponse.FileExists");

	UWebResponse_FileExists_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// (Final, Defined, PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDataStore_OnlinePlaylists::GetMatchTypeForPlaylistId(int PlaylistId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId");

	UUIDataStore_OnlinePlaylists_GetMatchTypeForPlaylistId_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// (Final, Latent, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FName                   ProviderTag                    (Parm)
// int                            PlaylistId                     (Parm)
// int                            ProviderIndex                  (OptionalParm, Parm, OutParm)
// class UOnlinePlaylistProvider* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlinePlaylistProvider* UUIDataStore_OnlinePlaylists::GetOnlinePlaylistProvider(const struct FName& ProviderTag, int PlaylistId, int* ProviderIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider");

	UUIDataStore_OnlinePlaylists_GetOnlinePlaylistProvider_Params params;
	params.ProviderTag = ProviderTag;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProviderIndex != nullptr)
		*ProviderIndex = params.ProviderIndex;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FName                   ProviderTag                    (Parm)
// int                            ProviderIndex                  (Parm)
// class UUIResourceDataProvider* out_Provider                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDataStore_OnlinePlaylists::GetPlaylistProvider(const struct FName& ProviderTag, int ProviderIndex, class UUIResourceDataProvider** out_Provider)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider");

	UUIDataStore_OnlinePlaylists_GetPlaylistProvider_Params params;
	params.ProviderTag = ProviderTag;
	params.ProviderIndex = ProviderIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Provider != nullptr)
		*out_Provider = params.out_Provider;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// (Iterator, Latent, Singular, Net, Simulated, Exec, Event, Static)
// Parameters:
// struct FName                   ProviderTag                    (Parm)
// TArray<class UUIResourceDataProvider*> out_Providers                  (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDataStore_OnlinePlaylists::STATIC_GetResourceProviders(const struct FName& ProviderTag, TArray<class UUIResourceDataProvider*>* out_Providers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders");

	UUIDataStore_OnlinePlaylists_GetResourceProviders_Params params;
	params.ProviderTag = ProviderTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Providers != nullptr)
		*out_Providers = params.out_Providers;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UUIDataStore_OnlinePlaylists::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.UIDataStore_OnlinePlaylists.Init");

	UUIDataStore_OnlinePlaylists_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.PostQuery
// (Final, Defined, Latent, PreOperator, Singular, Net, Native, Operator, HasOptionalParms)
// Parameters:
// class UWebRequest*             Request                        (Parm)
// class UWebResponse*            Response                       (Parm)

void UWebApplication::PostQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebApplication.PostQuery");

	UWebApplication_PostQuery_Params params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.Query
// (Final, Defined, Iterator, Singular, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// class UWebRequest*             Request                        (Parm)
// class UWebResponse*            Response                       (Parm)

void UWebApplication::STATIC_Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebApplication.Query");

	UWebApplication_Query_Params params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.PreQuery
// (Iterator, Latent, PreOperator, Singular, Net, Native, Operator, HasOptionalParms)
// Parameters:
// class UWebRequest*             Request                        (Parm)
// class UWebResponse*            Response                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebApplication::PreQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebApplication.PreQuery");

	UWebApplication_PreQuery_Params params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebApplication.CleanupApp
// (Final, Net, NetReliable, Simulated, Operator, HasOptionalParms)

void UWebApplication::CleanupApp()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebApplication.CleanupApp");

	UWebApplication_CleanupApp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.Cleanup
// (Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Event, Operator)

void UWebApplication::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebApplication.Cleanup");

	UWebApplication_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UWebApplication::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebApplication.Init");

	UWebApplication_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebServer.GetApplication
// (Iterator, Latent, PreOperator, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 URI                            (Parm, NeedCtorLink)
// struct FString                 SubURI                         (Parm, OutParm, NeedCtorLink)
// class UWebApplication*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UWebApplication* AWebServer::GetApplication(const struct FString& URI, struct FString* SubURI)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebServer.GetApplication");

	AWebServer_GetApplication_Params params;
	params.URI = URI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubURI != nullptr)
		*SubURI = params.SubURI;

	return params.ReturnValue;
}


// Function IpDrv.WebServer.LostChild
// (Defined, Iterator, Latent, Singular, Simulated)
// Parameters:
// class AActor*                  C                              (Parm)

void AWebServer::LostChild(class AActor* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebServer.LostChild");

	AWebServer_LostChild_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebServer.GainedChild
// (Final, Iterator, Latent, Singular, Simulated)
// Parameters:
// class AActor*                  C                              (Parm)

void AWebServer::GainedChild(class AActor* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebServer.GainedChild");

	AWebServer_GainedChild_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebServer.Destroyed
// (Iterator, Latent, Singular, Simulated)

void AWebServer::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebServer.Destroyed");

	AWebServer_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebServer.PostBeginPlay
// (Final, Latent, Net, Simulated)

void AWebServer::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebServer.PostBeginPlay");

	AWebServer_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.HelloWeb.Query
// (Final, Defined, Iterator, Singular, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// class UWebRequest*             Request                        (Parm)
// class UWebResponse*            Response                       (Parm)

void UHelloWeb::STATIC_Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HelloWeb.Query");

	UHelloWeb_Query_Params params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.HelloWeb.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UHelloWeb::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.HelloWeb.Init");

	UHelloWeb_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.ImageServer.Query
// (Final, Defined, Iterator, Singular, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// class UWebRequest*             Request                        (Parm)
// class UWebResponse*            Response                       (Parm)

void UImageServer::STATIC_Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.ImageServer.Query");

	UImageServer_Query_Params params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpServiceConfig.GetUserAuthTicket
// (Final, Iterator, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UMcpServiceConfig::GetUserAuthTicket(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServiceConfig.GetUserAuthTicket");

	UMcpServiceConfig_GetUserAuthTicket_Params params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpClashMobBase.UpdateChallengeUserReward
// (Iterator, Latent, PreOperator, Net, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// int                            UserReward                     (Parm)

void UMcpClashMobBase::UpdateChallengeUserReward(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, int UserReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.UpdateChallengeUserReward");

	UMcpClashMobBase_UpdateChallengeUserReward_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.UserReward = UserReward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete
// (Defined, Iterator, Latent, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpClashMobBase::OnUpdateChallengeUserRewardComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete");

	UMcpClashMobBase_OnUpdateChallengeUserRewardComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress
// (Final, Defined, Latent, PreOperator, Net, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// bool                           bDidComplete                   (Parm)
// int                            GoalProgress                   (Parm)

void UMcpClashMobBase::UpdateChallengeUserProgress(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, bool bDidComplete, int GoalProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress");

	UMcpClashMobBase_UpdateChallengeUserProgress_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.bDidComplete = bDidComplete;
	params.GoalProgress = GoalProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete
// (Iterator, Latent, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpClashMobBase::OnUpdateChallengeUserProgressComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete");

	UMcpClashMobBase_OnUpdateChallengeUserProgressComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.GetChallengeUserStatus
// (Final, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus         (Parm, OutParm, NeedCtorLink)

void UMcpClashMobBase::GetChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.GetChallengeUserStatus");

	UMcpClashMobBase_GetChallengeUserStatus_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChallengeUserStatus != nullptr)
		*OutChallengeUserStatus = params.OutChallengeUserStatus;
}


// Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus
// (Final, Iterator, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// TArray<struct FString>         UserIdsToRead                  (Const, Parm, OutParm, NeedCtorLink)

void UMcpClashMobBase::QueryChallengeMultiUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, TArray<struct FString>* UserIdsToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus");

	UMcpClashMobBase_QueryChallengeMultiUserStatus_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserIdsToRead != nullptr)
		*UserIdsToRead = params.UserIdsToRead;
}


// Function IpDrv.McpClashMobBase.QueryChallengeUserStatus
// (Defined, Iterator, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)

void UMcpClashMobBase::QueryChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.QueryChallengeUserStatus");

	UMcpClashMobBase_QueryChallengeUserStatus_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete
// (Final, Defined, Latent, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpClashMobBase::OnQueryChallengeUserStatusComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete");

	UMcpClashMobBase_OnQueryChallengeUserStatusComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.AcceptChallenge
// (Final, Defined, Iterator, PreOperator, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)

void UMcpClashMobBase::AcceptChallenge(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.AcceptChallenge");

	UMcpClashMobBase_AcceptChallenge_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpClashMobBase::OnAcceptChallengeComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete");

	UMcpClashMobBase_OnAcceptChallengeComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile
// (Iterator, Latent, PreOperator, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 DLName                         (Parm, NeedCtorLink)

void UMcpClashMobBase::DeleteCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile");

	UMcpClashMobBase_DeleteCachedChallengeFile_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.ClearCachedChallengeFile
// (Final, Defined, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 DLName                         (Parm, NeedCtorLink)

void UMcpClashMobBase::ClearCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.ClearCachedChallengeFile");

	UMcpClashMobBase_ClearCachedChallengeFile_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.GetChallengeFileContents
// (Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 DLName                         (Parm, NeedCtorLink)
// TArray<unsigned char>          OutFileContents                (Parm, OutParm, NeedCtorLink)

void UMcpClashMobBase::GetChallengeFileContents(const struct FString& UniqueChallengeId, const struct FString& DLName, TArray<unsigned char>* OutFileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.GetChallengeFileContents");

	UMcpClashMobBase_GetChallengeFileContents_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFileContents != nullptr)
		*OutFileContents = params.OutFileContents;
}


// Function IpDrv.McpClashMobBase.DownloadChallengeFile
// (Final, Defined, Iterator, Latent, Singular, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 DLName                         (Parm, NeedCtorLink)

void UMcpClashMobBase::DownloadChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.DownloadChallengeFile");

	UMcpClashMobBase_DownloadChallengeFile_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.GetChallengeFileList
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// TArray<struct FMcpClashMobChallengeFile> OutChallengeFiles              (Parm, OutParm, NeedCtorLink)

void UMcpClashMobBase::GetChallengeFileList(const struct FString& UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>* OutChallengeFiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.GetChallengeFileList");

	UMcpClashMobBase_GetChallengeFileList_Params params;
	params.UniqueChallengeId = UniqueChallengeId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChallengeFiles != nullptr)
		*OutChallengeFiles = params.OutChallengeFiles;
}


// Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 DLName                         (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpClashMobBase::OnDownloadChallengeFileComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& DLName, const struct FString& Filename, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete");

	UMcpClashMobBase_OnDownloadChallengeFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;
	params.Filename = Filename;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.GetChallengeList
// (Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FMcpClashMobChallengeEvent> OutChallengeEvents             (Parm, OutParm, NeedCtorLink)

void UMcpClashMobBase::GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>* OutChallengeEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.GetChallengeList");

	UMcpClashMobBase_GetChallengeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChallengeEvents != nullptr)
		*OutChallengeEvents = params.OutChallengeEvents;
}


// Function IpDrv.McpClashMobBase.QueryChallengeList
// (Iterator, PreOperator, NetReliable, Native, Operator, HasOptionalParms)

void UMcpClashMobBase::QueryChallengeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.QueryChallengeList");

	UMcpClashMobBase_QueryChallengeList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete
// (Final, Defined, Iterator, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpClashMobBase::OnQueryChallengeListComplete(bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete");

	UMcpClashMobBase_OnQueryChallengeListComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobBase.CreateInstance
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// class UMcpClashMobBase*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UMcpClashMobBase* UMcpClashMobBase::CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobBase.CreateInstance");

	UMcpClashMobBase_CreateInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpClashMobFileDownload.GetUrlForFile
// (Defined, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UMcpClashMobFileDownload::GetUrlForFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobFileDownload.GetUrlForFile");

	UMcpClashMobFileDownload_GetUrlForFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete
// (Final, Defined, Iterator, Latent, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpClashMobManager::OnUpdateChallengeUserRewardHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete");

	UMcpClashMobManager_OnUpdateChallengeUserRewardHTTPRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.UpdateChallengeUserReward
// (Iterator, Latent, PreOperator, Net, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// int                            UserReward                     (Parm)

void UMcpClashMobManager::UpdateChallengeUserReward(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, int UserReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.UpdateChallengeUserReward");

	UMcpClashMobManager_UpdateChallengeUserReward_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.UserReward = UserReward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete
// (Final, Iterator, Latent, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpClashMobManager::OnUpdateChallengeUserProgressHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete");

	UMcpClashMobManager_OnUpdateChallengeUserProgressHTTPRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress
// (Final, Defined, Latent, PreOperator, Net, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// bool                           bDidComplete                   (Parm)
// int                            GoalProgress                   (Parm)

void UMcpClashMobManager::UpdateChallengeUserProgress(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, bool bDidComplete, int GoalProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress");

	UMcpClashMobManager_UpdateChallengeUserProgress_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;
	params.bDidComplete = bDidComplete;
	params.GoalProgress = GoalProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.GetChallengeUserStatus
// (Final, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus         (Parm, OutParm, NeedCtorLink)

void UMcpClashMobManager::GetChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.GetChallengeUserStatus");

	UMcpClashMobManager_GetChallengeUserStatus_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChallengeUserStatus != nullptr)
		*OutChallengeUserStatus = params.OutChallengeUserStatus;
}


// Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete
// (Final, Latent, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpClashMobManager::OnQueryChallengeMultiStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete");

	UMcpClashMobManager_OnQueryChallengeMultiStatusHTTPRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus
// (Final, Iterator, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// TArray<struct FString>         UserIdsToRead                  (Const, Parm, OutParm, NeedCtorLink)

void UMcpClashMobManager::QueryChallengeMultiUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, TArray<struct FString>* UserIdsToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus");

	UMcpClashMobManager_QueryChallengeMultiUserStatus_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserIdsToRead != nullptr)
		*UserIdsToRead = params.UserIdsToRead;
}


// Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete
// (Defined, Latent, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpClashMobManager::OnQueryChallengeStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete");

	UMcpClashMobManager_OnQueryChallengeStatusHTTPRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.QueryChallengeUserStatus
// (Defined, Iterator, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)

void UMcpClashMobManager::QueryChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.QueryChallengeUserStatus");

	UMcpClashMobManager_QueryChallengeUserStatus_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpClashMobManager::OnAcceptChallengeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete");

	UMcpClashMobManager_OnAcceptChallengeHTTPRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.AcceptChallenge
// (Final, Defined, Iterator, PreOperator, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)

void UMcpClashMobManager::AcceptChallenge(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.AcceptChallenge");

	UMcpClashMobManager_AcceptChallenge_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile
// (Iterator, Latent, PreOperator, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 DLName                         (Parm, NeedCtorLink)

void UMcpClashMobManager::DeleteCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile");

	UMcpClashMobManager_DeleteCachedChallengeFile_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.ClearCachedChallengeFile
// (Final, Defined, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 DLName                         (Parm, NeedCtorLink)

void UMcpClashMobManager::ClearCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.ClearCachedChallengeFile");

	UMcpClashMobManager_ClearCachedChallengeFile_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.GetChallengeFileContents
// (Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 DLName                         (Parm, NeedCtorLink)
// TArray<unsigned char>          OutFileContents                (Parm, OutParm, NeedCtorLink)

void UMcpClashMobManager::GetChallengeFileContents(const struct FString& UniqueChallengeId, const struct FString& DLName, TArray<unsigned char>* OutFileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.GetChallengeFileContents");

	UMcpClashMobManager_GetChallengeFileContents_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFileContents != nullptr)
		*OutFileContents = params.OutFileContents;
}


// Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 DLName                         (Parm, NeedCtorLink)

void UMcpClashMobManager::OnDownloadMcpFileComplete(bool bWasSuccessful, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete");

	UMcpClashMobManager_OnDownloadMcpFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete
// (Final, Defined, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 DLName                         (Parm, NeedCtorLink)

void UMcpClashMobManager::OnLoadCachedFileComplete(bool bWasSuccessful, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete");

	UMcpClashMobManager_OnLoadCachedFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.DownloadChallengeFile
// (Final, Defined, Iterator, Latent, Singular, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// struct FString                 DLName                         (Parm, NeedCtorLink)

void UMcpClashMobManager::DownloadChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.DownloadChallengeFile");

	UMcpClashMobManager_DownloadChallengeFile_Params params;
	params.UniqueChallengeId = UniqueChallengeId;
	params.DLName = DLName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.GetChallengeFileList
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueChallengeId              (Parm, NeedCtorLink)
// TArray<struct FMcpClashMobChallengeFile> OutChallengeFiles              (Parm, OutParm, NeedCtorLink)

void UMcpClashMobManager::GetChallengeFileList(const struct FString& UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>* OutChallengeFiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.GetChallengeFileList");

	UMcpClashMobManager_GetChallengeFileList_Params params;
	params.UniqueChallengeId = UniqueChallengeId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChallengeFiles != nullptr)
		*OutChallengeFiles = params.OutChallengeFiles;
}


// Function IpDrv.McpClashMobManager.GetChallengeList
// (Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FMcpClashMobChallengeEvent> OutChallengeEvents             (Parm, OutParm, NeedCtorLink)

void UMcpClashMobManager::GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>* OutChallengeEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.GetChallengeList");

	UMcpClashMobManager_GetChallengeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChallengeEvents != nullptr)
		*OutChallengeEvents = params.OutChallengeEvents;
}


// Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete
// (Latent, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpClashMobManager::OnQueryChallengeListHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete");

	UMcpClashMobManager_OnQueryChallengeListHTTPRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.QueryChallengeList
// (Iterator, PreOperator, NetReliable, Native, Operator, HasOptionalParms)

void UMcpClashMobManager::QueryChallengeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.QueryChallengeList");

	UMcpClashMobManager_QueryChallengeList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpClashMobManager.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UMcpClashMobManager::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpClashMobManager.Init");

	UMcpClashMobManager_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpGroupsBase::OnAcceptGroupInviteComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete");

	UMcpGroupsBase_OnAcceptGroupInviteComplete_Params params;
	params.GroupID = GroupID;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.AcceptGroupInvite
// (Final, Latent, PreOperator, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// bool                           bShouldAccept                  (Parm)

void UMcpGroupsBase::AcceptGroupInvite(const struct FString& UniqueUserId, const struct FString& GroupID, bool bShouldAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.AcceptGroupInvite");

	UMcpGroupsBase_AcceptGroupInvite_Params params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;
	params.bShouldAccept = bShouldAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.GetGroupInviteList
// (Final, Iterator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FMcpGroupList           InviteList                     (Parm, OutParm, NeedCtorLink)

void UMcpGroupsBase::GetGroupInviteList(const struct FString& UserId, struct FMcpGroupList* InviteList)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.GetGroupInviteList");

	UMcpGroupsBase_GetGroupInviteList_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InviteList != nullptr)
		*InviteList = params.InviteList;
}


// Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete
// (Iterator, Latent, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupInvitesComplete(bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete");

	UMcpGroupsBase_OnQueryGroupInvitesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.QueryGroupInvites
// (Final, Defined, Iterator, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)

void UMcpGroupsBase::QueryGroupInvites(const struct FString& UniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.QueryGroupInvites");

	UMcpGroupsBase_QueryGroupInvites_Params params;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete
// (Latent, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 RequesterId                    (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpGroupsBase::OnDeleteAllGroupsComplete(const struct FString& RequesterId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete");

	UMcpGroupsBase_OnDeleteAllGroupsComplete_Params params;
	params.RequesterId = RequesterId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.DeleteAllGroups
// (Defined, Latent, PreOperator, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 OwnerId                        (Parm, NeedCtorLink)

void UMcpGroupsBase::DeleteAllGroups(const struct FString& OwnerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.DeleteAllGroups");

	UMcpGroupsBase_DeleteAllGroups_Params params;
	params.OwnerId = OwnerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete
// (Latent, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpGroupsBase::OnRemoveGroupMembersComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete");

	UMcpGroupsBase_OnRemoveGroupMembersComplete_Params params;
	params.GroupID = GroupID;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.RemoveGroupMembers
// (Final, Defined, Latent, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 OwnerId                        (Parm, NeedCtorLink)
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// TArray<struct FString>         MemberIds                      (Const, Parm, OutParm, NeedCtorLink)

void UMcpGroupsBase::RemoveGroupMembers(const struct FString& OwnerId, const struct FString& GroupID, TArray<struct FString>* MemberIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.RemoveGroupMembers");

	UMcpGroupsBase_RemoveGroupMembers_Params params;
	params.OwnerId = OwnerId;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberIds != nullptr)
		*MemberIds = params.MemberIds;
}


// Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpGroupsBase::OnAddGroupMembersComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete");

	UMcpGroupsBase_OnAddGroupMembersComplete_Params params;
	params.GroupID = GroupID;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.AddGroupMembers
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 OwnerId                        (Parm, NeedCtorLink)
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// TArray<struct FString>         MemberIds                      (Const, Parm, OutParm, NeedCtorLink)
// bool                           bRequiresAcceptance            (Parm)

void UMcpGroupsBase::AddGroupMembers(const struct FString& OwnerId, const struct FString& GroupID, bool bRequiresAcceptance, TArray<struct FString>* MemberIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.AddGroupMembers");

	UMcpGroupsBase_AddGroupMembers_Params params;
	params.OwnerId = OwnerId;
	params.GroupID = GroupID;
	params.bRequiresAcceptance = bRequiresAcceptance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberIds != nullptr)
		*MemberIds = params.MemberIds;
}


// Function IpDrv.McpGroupsBase.GetGroupMembers
// (Final, Defined, Iterator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// TArray<struct FMcpGroupMember> GroupMembers                   (Parm, OutParm, NeedCtorLink)

void UMcpGroupsBase::GetGroupMembers(const struct FString& GroupID, TArray<struct FMcpGroupMember>* GroupMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.GetGroupMembers");

	UMcpGroupsBase_GetGroupMembers_Params params;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroupMembers != nullptr)
		*GroupMembers = params.GroupMembers;
}


// Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete
// (Final, Iterator, Latent, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupMembersComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete");

	UMcpGroupsBase_OnQueryGroupMembersComplete_Params params;
	params.GroupID = GroupID;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.QueryGroupMembers
// (Latent, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 GroupID                        (Parm, NeedCtorLink)

void UMcpGroupsBase::QueryGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.QueryGroupMembers");

	UMcpGroupsBase_QueryGroupMembers_Params params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.GetGroupList
// (Defined, Iterator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FMcpGroupList           GroupList                      (Parm, OutParm, NeedCtorLink)

void UMcpGroupsBase::GetGroupList(const struct FString& UserId, struct FMcpGroupList* GroupList)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.GetGroupList");

	UMcpGroupsBase_GetGroupList_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroupList != nullptr)
		*GroupList = params.GroupList;
}


// Function IpDrv.McpGroupsBase.OnQueryGroupsComplete
// (Final, Defined, Iterator, Latent, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpGroupsBase::OnQueryGroupsComplete(const struct FString& UserId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnQueryGroupsComplete");

	UMcpGroupsBase_OnQueryGroupsComplete_Params params;
	params.UserId = UserId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.QueryGroups
// (Defined, Latent, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 RequesterId                    (Parm, NeedCtorLink)

void UMcpGroupsBase::QueryGroups(const struct FString& RequesterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.QueryGroups");

	UMcpGroupsBase_QueryGroups_Params params;
	params.RequesterId = RequesterId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.OnDeleteGroupComplete
// (Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpGroupsBase::OnDeleteGroupComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnDeleteGroupComplete");

	UMcpGroupsBase_OnDeleteGroupComplete_Params params;
	params.GroupID = GroupID;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.DeleteGroup
// (Defined, Iterator, Latent, NetReliable, Simulated, Native, Event, HasOptionalParms)
// Parameters:
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 GroupID                        (Parm, NeedCtorLink)

void UMcpGroupsBase::DeleteGroup(const struct FString& UniqueUserId, const struct FString& GroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.DeleteGroup");

	UMcpGroupsBase_DeleteGroup_Params params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.OnCreateGroupComplete
// (Final, Defined, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FMcpGroup               Group                          (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpGroupsBase::OnCreateGroupComplete(const struct FMcpGroup& Group, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.OnCreateGroupComplete");

	UMcpGroupsBase_OnCreateGroupComplete_Params params;
	params.Group = Group;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.CreateGroup
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 OwnerId                        (Parm, NeedCtorLink)
// struct FString                 GroupName                      (Parm, NeedCtorLink)

void UMcpGroupsBase::CreateGroup(const struct FString& OwnerId, const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.CreateGroup");

	UMcpGroupsBase_CreateGroup_Params params;
	params.OwnerId = OwnerId;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsBase.CreateInstance
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// class UMcpGroupsBase*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UMcpGroupsBase* UMcpGroupsBase::CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsBase.CreateInstance");

	UMcpGroupsBase_CreateInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpGroupsManager.CacheGroupMember
// (Final, Defined, Iterator, Singular, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 MemberId                       (Parm, NeedCtorLink)
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// TEnumAsByte<EMcpGroupAcceptState> AcceptState                    (Parm)

void UMcpGroupsManager::CacheGroupMember(const struct FString& MemberId, const struct FString& GroupID, TEnumAsByte<EMcpGroupAcceptState> AcceptState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.CacheGroupMember");

	UMcpGroupsManager_CacheGroupMember_Params params;
	params.MemberId = MemberId;
	params.GroupID = GroupID;
	params.AcceptState = AcceptState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.CacheGroup
// (Defined, Iterator, Singular, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 RequesterId                    (Parm, NeedCtorLink)
// struct FMcpGroup               Group                          (Parm, NeedCtorLink)

void UMcpGroupsManager::CacheGroup(const struct FString& RequesterId, const struct FMcpGroup& Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.CacheGroup");

	UMcpGroupsManager_CacheGroup_Params params;
	params.RequesterId = RequesterId;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  HttpResponse                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpGroupsManager::OnAcceptGroupInviteRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete");

	UMcpGroupsManager_OnAcceptGroupInviteRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.AcceptGroupInvite
// (Final, Latent, PreOperator, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// bool                           bShouldAccept                  (Parm)

void UMcpGroupsManager::AcceptGroupInvite(const struct FString& UniqueUserId, const struct FString& GroupID, bool bShouldAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.AcceptGroupInvite");

	UMcpGroupsManager_AcceptGroupInvite_Params params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;
	params.bShouldAccept = bShouldAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete
// (Final, Latent, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  HttpResponse                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpGroupsManager::OnDeleteAllGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete");

	UMcpGroupsManager_OnDeleteAllGroupsRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.DeleteAllGroups
// (Defined, Latent, PreOperator, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)

void UMcpGroupsManager::DeleteAllGroups(const struct FString& UniqueUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.DeleteAllGroups");

	UMcpGroupsManager_DeleteAllGroups_Params params;
	params.UniqueUserId = UniqueUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete
// (Final, Latent, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  HttpResponse                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpGroupsManager::OnRemoveGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete");

	UMcpGroupsManager_OnRemoveGroupMembersRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.RemoveGroupMembers
// (Final, Defined, Latent, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// TArray<struct FString>         MemberIds                      (Const, Parm, OutParm, NeedCtorLink)

void UMcpGroupsManager::RemoveGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID, TArray<struct FString>* MemberIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.RemoveGroupMembers");

	UMcpGroupsManager_RemoveGroupMembers_Params params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberIds != nullptr)
		*MemberIds = params.MemberIds;
}


// Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  HttpResponse                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpGroupsManager::OnAddGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete");

	UMcpGroupsManager_OnAddGroupMembersRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.AddGroupMembers
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// TArray<struct FString>         MemberIds                      (Const, Parm, OutParm, NeedCtorLink)
// bool                           bRequiresAcceptance            (Parm)

void UMcpGroupsManager::AddGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID, bool bRequiresAcceptance, TArray<struct FString>* MemberIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.AddGroupMembers");

	UMcpGroupsManager_AddGroupMembers_Params params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;
	params.bRequiresAcceptance = bRequiresAcceptance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberIds != nullptr)
		*MemberIds = params.MemberIds;
}


// Function IpDrv.McpGroupsManager.GetGroupMembers
// (Final, Defined, Iterator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 GroupID                        (Parm, NeedCtorLink)
// TArray<struct FMcpGroupMember> GroupMembers                   (Parm, OutParm, NeedCtorLink)

void UMcpGroupsManager::GetGroupMembers(const struct FString& GroupID, TArray<struct FMcpGroupMember>* GroupMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.GetGroupMembers");

	UMcpGroupsManager_GetGroupMembers_Params params;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroupMembers != nullptr)
		*GroupMembers = params.GroupMembers;
}


// Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete
// (Defined, Iterator, Latent, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  HttpResponse                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpGroupsManager::OnQueryGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete");

	UMcpGroupsManager_OnQueryGroupMembersRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.QueryGroupMembers
// (Latent, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 GroupID                        (Parm, NeedCtorLink)

void UMcpGroupsManager::QueryGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.QueryGroupMembers");

	UMcpGroupsManager_QueryGroupMembers_Params params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.GetGroupList
// (Defined, Iterator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FMcpGroupList           GroupList                      (Parm, OutParm, NeedCtorLink)

void UMcpGroupsManager::GetGroupList(const struct FString& UserId, struct FMcpGroupList* GroupList)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.GetGroupList");

	UMcpGroupsManager_GetGroupList_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroupList != nullptr)
		*GroupList = params.GroupList;
}


// Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete
// (PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  HttpResponse                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpGroupsManager::OnQueryGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete");

	UMcpGroupsManager_OnQueryGroupsRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.QueryGroups
// (Defined, Latent, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 RequesterId                    (Parm, NeedCtorLink)

void UMcpGroupsManager::QueryGroups(const struct FString& RequesterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.QueryGroups");

	UMcpGroupsManager_QueryGroups_Params params;
	params.RequesterId = RequesterId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  HttpResponse                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpGroupsManager::OnDeleteGroupRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete");

	UMcpGroupsManager_OnDeleteGroupRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.DeleteGroup
// (Defined, Iterator, Latent, NetReliable, Simulated, Native, Event, HasOptionalParms)
// Parameters:
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 GroupID                        (Parm, NeedCtorLink)

void UMcpGroupsManager::DeleteGroup(const struct FString& UniqueUserId, const struct FString& GroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.DeleteGroup");

	UMcpGroupsManager_DeleteGroup_Params params;
	params.UniqueUserId = UniqueUserId;
	params.GroupID = GroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete
// (Iterator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   CreateGroupRequest             (Parm)
// class UHttpResponseInterface*  HttpResponse                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpGroupsManager::OnCreateGroupRequestComplete(class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete");

	UMcpGroupsManager_OnCreateGroupRequestComplete_Params params;
	params.CreateGroupRequest = CreateGroupRequest;
	params.HttpResponse = HttpResponse;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpGroupsManager.CreateGroup
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UniqueUserId                   (Parm, NeedCtorLink)
// struct FString                 GroupName                      (Parm, NeedCtorLink)

void UMcpGroupsManager::CreateGroup(const struct FString& UniqueUserId, const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpGroupsManager.CreateGroup");

	UMcpGroupsManager_CreateGroup_Params params;
	params.UniqueUserId = UniqueUserId;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpIdMappingBase.GetIdMappings
// (Defined, Latent, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ExternalType                   (Parm, NeedCtorLink)
// TArray<struct FMcpIdMapping>   IDMappings                     (Parm, OutParm, NeedCtorLink)

void UMcpIdMappingBase::GetIdMappings(const struct FString& ExternalType, TArray<struct FMcpIdMapping>* IDMappings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingBase.GetIdMappings");

	UMcpIdMappingBase_GetIdMappings_Params params;
	params.ExternalType = ExternalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IDMappings != nullptr)
		*IDMappings = params.IDMappings;
}


// Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete
// (Final, Defined, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ExternalType                   (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpIdMappingBase::OnQueryMappingsComplete(const struct FString& ExternalType, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete");

	UMcpIdMappingBase_OnQueryMappingsComplete_Params params;
	params.ExternalType = ExternalType;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpIdMappingBase.QueryMappings
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FString>         ExternalIds                    (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 ExternalType                   (Parm, NeedCtorLink)

void UMcpIdMappingBase::QueryMappings(const struct FString& ExternalType, TArray<struct FString>* ExternalIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingBase.QueryMappings");

	UMcpIdMappingBase_QueryMappings_Params params;
	params.ExternalType = ExternalType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExternalIds != nullptr)
		*ExternalIds = params.ExternalIds;
}


// Function IpDrv.McpIdMappingBase.OnAddMappingComplete
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 ExternalId                     (Parm, NeedCtorLink)
// struct FString                 ExternalType                   (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpIdMappingBase::OnAddMappingComplete(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingBase.OnAddMappingComplete");

	UMcpIdMappingBase_OnAddMappingComplete_Params params;
	params.McpId = McpId;
	params.ExternalId = ExternalId;
	params.ExternalType = ExternalType;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpIdMappingBase.AddMapping
// (Defined, Singular, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 ExternalId                     (Parm, NeedCtorLink)
// struct FString                 ExternalType                   (Parm, NeedCtorLink)

void UMcpIdMappingBase::AddMapping(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingBase.AddMapping");

	UMcpIdMappingBase_AddMapping_Params params;
	params.McpId = McpId;
	params.ExternalId = ExternalId;
	params.ExternalType = ExternalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpIdMappingBase.CreateInstance
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// class UMcpIdMappingBase*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UMcpIdMappingBase* UMcpIdMappingBase::CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingBase.CreateInstance");

	UMcpIdMappingBase_CreateInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpIdMappingManager.GetIdMappings
// (Defined, Latent, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ExternalType                   (Parm, NeedCtorLink)
// TArray<struct FMcpIdMapping>   IDMappings                     (Parm, OutParm, NeedCtorLink)

void UMcpIdMappingManager::GetIdMappings(const struct FString& ExternalType, TArray<struct FMcpIdMapping>* IDMappings)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingManager.GetIdMappings");

	UMcpIdMappingManager_GetIdMappings_Params params;
	params.ExternalType = ExternalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IDMappings != nullptr)
		*IDMappings = params.IDMappings;
}


// Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete
// (Iterator, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpIdMappingManager::OnQueryMappingsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete");

	UMcpIdMappingManager_OnQueryMappingsRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpIdMappingManager.QueryMappings
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FString>         ExternalIds                    (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 ExternalType                   (Parm, NeedCtorLink)

void UMcpIdMappingManager::QueryMappings(const struct FString& ExternalType, TArray<struct FString>* ExternalIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingManager.QueryMappings");

	UMcpIdMappingManager_QueryMappings_Params params;
	params.ExternalType = ExternalType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExternalIds != nullptr)
		*ExternalIds = params.ExternalIds;
}


// Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete
// (Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpIdMappingManager::OnAddMappingRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete");

	UMcpIdMappingManager_OnAddMappingRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpIdMappingManager.AddMapping
// (Defined, Singular, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 ExternalId                     (Parm, NeedCtorLink)
// struct FString                 ExternalType                   (Parm, NeedCtorLink)

void UMcpIdMappingManager::AddMapping(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpIdMappingManager.AddMapping");

	UMcpIdMappingManager_AddMapping_Params params;
	params.McpId = McpId;
	params.ExternalId = ExternalId;
	params.ExternalType = ExternalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// struct FName                   ValueId                        (Parm)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpManagedValueManagerBase::OnDeleteValueComplete(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete");

	UMcpManagedValueManagerBase_OnDeleteValueComplete_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.DeleteValue
// (Iterator, Singular, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// struct FName                   ValueId                        (Parm)

void UMcpManagedValueManagerBase::DeleteValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.DeleteValue");

	UMcpManagedValueManagerBase_DeleteValue_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete
// (PreOperator, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// struct FName                   ValueId                        (Parm)
// int                            Value                          (Parm)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpManagedValueManagerBase::OnUpdateValueComplete(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete");

	UMcpManagedValueManagerBase_OnUpdateValueComplete_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;
	params.Value = Value;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.UpdateValue
// (Defined, Singular, Net, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// struct FName                   ValueId                        (Parm)
// int                            Value                          (Parm)

void UMcpManagedValueManagerBase::UpdateValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.UpdateValue");

	UMcpManagedValueManagerBase_UpdateValue_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.GetValue
// (Defined, Latent, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// struct FName                   ValueId                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMcpManagedValueManagerBase::GetValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.GetValue");

	UMcpManagedValueManagerBase_GetValue_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpManagedValueManagerBase.GetValues
// (Final, Defined, Latent, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// TArray<struct FManagedValue>   ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FManagedValue> UMcpManagedValueManagerBase::GetValues(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.GetValues");

	UMcpManagedValueManagerBase_GetValues_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete
// (Singular, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpManagedValueManagerBase::OnReadSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlot, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete");

	UMcpManagedValueManagerBase_OnReadSaveSlotComplete_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot
// (Defined, PreOperator, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)

void UMcpManagedValueManagerBase::ReadSaveSlot(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot");

	UMcpManagedValueManagerBase_ReadSaveSlot_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpManagedValueManagerBase::OnCreateSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlot, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete");

	UMcpManagedValueManagerBase_OnCreateSaveSlotComplete_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)

void UMcpManagedValueManagerBase::CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot");

	UMcpManagedValueManagerBase_CreateSaveSlot_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManagerBase.CreateInstance
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// class UMcpManagedValueManagerBase* ReturnValue                    (Parm, OutParm, ReturnParm)

class UMcpManagedValueManagerBase* UMcpManagedValueManagerBase::CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManagerBase.CreateInstance");

	UMcpManagedValueManagerBase_CreateInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpManagedValueManager::OnDeleteValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete");

	UMcpManagedValueManager_OnDeleteValueRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.DeleteValue
// (Iterator, Singular, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// struct FName                   ValueId                        (Parm)

void UMcpManagedValueManager::DeleteValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.DeleteValue");

	UMcpManagedValueManager_DeleteValue_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete
// (Final, PreOperator, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpManagedValueManager::OnUpdateValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete");

	UMcpManagedValueManager_OnUpdateValueRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.UpdateValue
// (Defined, Singular, Net, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// struct FName                   ValueId                        (Parm)
// int                            Value                          (Parm)

void UMcpManagedValueManager::UpdateValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.UpdateValue");

	UMcpManagedValueManager_UpdateValue_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.GetValue
// (Defined, Latent, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// struct FName                   ValueId                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMcpManagedValueManager::GetValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.GetValue");

	UMcpManagedValueManager_GetValue_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.ValueId = ValueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpManagedValueManager.GetValues
// (Final, Defined, Latent, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// TArray<struct FManagedValue>   ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FManagedValue> UMcpManagedValueManager::GetValues(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.GetValues");

	UMcpManagedValueManager_GetValues_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete
// (Final, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpManagedValueManager::OnReadSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete");

	UMcpManagedValueManager_OnReadSaveSlotRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.ReadSaveSlot
// (Defined, PreOperator, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)

void UMcpManagedValueManager::ReadSaveSlot(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.ReadSaveSlot");

	UMcpManagedValueManager_ReadSaveSlot_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot
// (Defined, Latent, Net, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// struct FString                 JsonPayload                    (Parm, NeedCtorLink)

void UMcpManagedValueManager::ParseValuesForSaveSlot(const struct FString& McpId, const struct FString& SaveSlot, const struct FString& JsonPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot");

	UMcpManagedValueManager_ParseValuesForSaveSlot_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;
	params.JsonPayload = JsonPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.FindSaveSlotIndex
// (Final, Defined, Iterator, Latent, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMcpManagedValueManager::FindSaveSlotIndex(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.FindSaveSlotIndex");

	UMcpManagedValueManager_FindSaveSlotIndex_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpManagedValueManager::OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete");

	UMcpManagedValueManager_OnCreateSaveSlotRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpManagedValueManager.CreateSaveSlot
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlot                       (Parm, NeedCtorLink)

void UMcpManagedValueManager::CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpManagedValueManager.CreateSaveSlot");

	UMcpManagedValueManager_CreateSaveSlot_Params params;
	params.McpId = McpId;
	params.SaveSlot = SaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpServerTimeBase.GetLastServerTime
// (Defined, Iterator, Latent, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UMcpServerTimeBase::GetLastServerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeBase.GetLastServerTime");

	UMcpServerTimeBase_GetLastServerTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete
// (Final, Latent, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 DateTimeStr                    (Parm, NeedCtorLink)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpServerTimeBase::OnQueryServerTimeComplete(bool bWasSuccessful, const struct FString& DateTimeStr, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete");

	UMcpServerTimeBase_OnQueryServerTimeComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.DateTimeStr = DateTimeStr;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpServerTimeBase.QueryServerTime
// (Final, Iterator, Singular, NetReliable, Native, Operator, HasOptionalParms)

void UMcpServerTimeBase::QueryServerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeBase.QueryServerTime");

	UMcpServerTimeBase_QueryServerTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpServerTimeBase.CreateInstance
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// class UMcpServerTimeBase*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UMcpServerTimeBase* UMcpServerTimeBase::CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeBase.CreateInstance");

	UMcpServerTimeBase_CreateInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServerTimeManager.GetLastServerTime
// (Defined, Iterator, Latent, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UMcpServerTimeManager::GetLastServerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeManager.GetLastServerTime");

	UMcpServerTimeManager_GetLastServerTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete
// (Defined, Latent, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpServerTimeManager::OnQueryServerTimeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete");

	UMcpServerTimeManager_OnQueryServerTimeHTTPRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpServerTimeManager.QueryServerTime
// (Final, Iterator, Singular, NetReliable, Native, Operator, HasOptionalParms)

void UMcpServerTimeManager::QueryServerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpServerTimeManager.QueryServerTime");

	UMcpServerTimeManager_QueryServerTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnRecordIapComplete
// (Defined, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserInventoryBase::OnRecordIapComplete(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnRecordIapComplete");

	UMcpUserInventoryBase_OnRecordIapComplete_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.UpdatedItemIds = UpdatedItemIds;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.RecordIap
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 Receipt                        (Parm, NeedCtorLink)

void UMcpUserInventoryBase::RecordIap(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& Receipt)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.RecordIap");

	UMcpUserInventoryBase_RecordIap_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.Receipt = Receipt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 InstanceItemId                 (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserInventoryBase::OnDeleteItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete");

	UMcpUserInventoryBase_OnDeleteItemComplete_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.DeleteItem
// (Defined, Iterator, Latent, PreOperator, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 InstanceItemId                 (Parm, NeedCtorLink)
// int                            StoreVersion                   (Parm)

void UMcpUserInventoryBase::DeleteItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int StoreVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.DeleteItem");

	UMcpUserInventoryBase_DeleteItem_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete
// (Final, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 InstanceItemId                 (Parm, NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserInventoryBase::OnConsumeItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete");

	UMcpUserInventoryBase_OnConsumeItemComplete_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.UpdatedItemIds = UpdatedItemIds;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.ConsumeItem
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 InstanceItemId                 (Parm, NeedCtorLink)
// int                            Quantity                       (Parm)
// int                            StoreVersion                   (Parm)

void UMcpUserInventoryBase::ConsumeItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.ConsumeItem");

	UMcpUserInventoryBase_ConsumeItem_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnEarnItemComplete
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 GlobalItemId                   (Parm, NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserInventoryBase::OnEarnItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnEarnItemComplete");

	UMcpUserInventoryBase_OnEarnItemComplete_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.GlobalItemId = GlobalItemId;
	params.UpdatedItemIds = UpdatedItemIds;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.EarnItem
// (Defined, Iterator, PreOperator, Singular, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 GlobalItemId                   (Parm, NeedCtorLink)
// int                            Quantity                       (Parm)
// int                            StoreVersion                   (Parm)

void UMcpUserInventoryBase::EarnItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, int Quantity, int StoreVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.EarnItem");

	UMcpUserInventoryBase_EarnItem_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.GlobalItemId = GlobalItemId;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnSellItemComplete
// (Defined, Latent, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 InstanceItemId                 (Parm, NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserInventoryBase::OnSellItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnSellItemComplete");

	UMcpUserInventoryBase_OnSellItemComplete_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.UpdatedItemIds = UpdatedItemIds;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.SellItem
// (Defined, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 InstanceItemId                 (Parm, NeedCtorLink)
// int                            Quantity                       (Parm)
// int                            StoreVersion                   (Parm)
// TArray<struct FMcpInventoryItemContainer> ExpectedResultItems            (Const, OptionalParm, Parm, OutParm, NeedCtorLink)

void UMcpUserInventoryBase::SellItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion, TArray<struct FMcpInventoryItemContainer>* ExpectedResultItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.SellItem");

	UMcpUserInventoryBase_SellItem_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpectedResultItems != nullptr)
		*ExpectedResultItems = params.ExpectedResultItems;
}


// Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete
// (Final, Iterator, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 GlobalItemId                   (Parm, NeedCtorLink)
// TArray<struct FString>         UpdatedItemIds                 (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserInventoryBase::OnPurchaseItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete");

	UMcpUserInventoryBase_OnPurchaseItemComplete_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.GlobalItemId = GlobalItemId;
	params.UpdatedItemIds = UpdatedItemIds;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.PurchaseItem
// (Final, Defined, Iterator, Latent, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 GlobalItemId                   (Parm, NeedCtorLink)
// TArray<struct FString>         PurchaseItemIds                (Parm, NeedCtorLink)
// int                            Quantity                       (Parm)
// int                            StoreVersion                   (Parm)
// float                          Scalar                         (Parm)

void UMcpUserInventoryBase::PurchaseItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> PurchaseItemIds, int Quantity, int StoreVersion, float Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.PurchaseItem");

	UMcpUserInventoryBase_PurchaseItem_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.GlobalItemId = GlobalItemId;
	params.PurchaseItemIds = PurchaseItemIds;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;
	params.Scalar = Scalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.GetInventoryItem
// (Final, Defined, Latent, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 InstanceItemId                 (Parm, NeedCtorLink)
// struct FMcpInventoryItem       OutInventoryItem               (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpUserInventoryBase::GetInventoryItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, struct FMcpInventoryItem* OutInventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.GetInventoryItem");

	UMcpUserInventoryBase_GetInventoryItem_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInventoryItem != nullptr)
		*OutInventoryItem = params.OutInventoryItem;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryBase.GetInventoryItems
// (Net, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// TArray<struct FMcpInventoryItem> OutInventoryItems              (Parm, OutParm, NeedCtorLink)

void UMcpUserInventoryBase::GetInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FMcpInventoryItem>* OutInventoryItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.GetInventoryItems");

	UMcpUserInventoryBase_GetInventoryItems_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInventoryItems != nullptr)
		*OutInventoryItems = params.OutInventoryItems;
}


// Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete
// (Final, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserInventoryBase::OnQueryInventoryItemsComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete");

	UMcpUserInventoryBase_OnQueryInventoryItemsComplete_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.QueryInventoryItems
// (Iterator, Latent, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)

void UMcpUserInventoryBase::QueryInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.QueryInventoryItems");

	UMcpUserInventoryBase_QueryInventoryItems_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete
// (Final, Defined, Iterator, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserInventoryBase::OnQuerySaveSlotListComplete(const struct FString& McpId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete");

	UMcpUserInventoryBase_OnQuerySaveSlotListComplete_Params params;
	params.McpId = McpId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.GetSaveSlotList
// (Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UMcpUserInventoryBase::GetSaveSlotList(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.GetSaveSlotList");

	UMcpUserInventoryBase_GetSaveSlotList_Params params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryBase.QuerySaveSlotList
// (Iterator, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)

void UMcpUserInventoryBase::QuerySaveSlotList(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.QuerySaveSlotList");

	UMcpUserInventoryBase_QuerySaveSlotList_Params params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserInventoryBase::OnDeleteSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete");

	UMcpUserInventoryBase_OnDeleteSaveSlotComplete_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.DeleteSaveSlot
// (Singular, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)

void UMcpUserInventoryBase::DeleteSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.DeleteSaveSlot");

	UMcpUserInventoryBase_DeleteSaveSlot_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserInventoryBase::OnCreateSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete");

	UMcpUserInventoryBase_OnCreateSaveSlotComplete_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.CreateSaveSlot
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 ParentSaveSlotId               (OptionalParm, Parm, NeedCtorLink)

void UMcpUserInventoryBase::CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ParentSaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.CreateSaveSlot");

	UMcpUserInventoryBase_CreateSaveSlot_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.ParentSaveSlotId = ParentSaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryBase.CreateInstance
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// class UMcpUserInventoryBase*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UMcpUserInventoryBase* UMcpUserInventoryBase::CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryBase.CreateInstance");

	UMcpUserInventoryBase_CreateInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete
// (Final, Defined, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserInventoryManager::OnRecordIapRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete");

	UMcpUserInventoryManager_OnRecordIapRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.RecordIap
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 Receipt                        (Parm, NeedCtorLink)

void UMcpUserInventoryManager::RecordIap(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& Receipt)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.RecordIap");

	UMcpUserInventoryManager_RecordIap_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.Receipt = Receipt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserInventoryManager::OnDeleteItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete");

	UMcpUserInventoryManager_OnDeleteItemRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.DeleteItem
// (Defined, Iterator, Latent, PreOperator, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 InstanceItemId                 (Parm, NeedCtorLink)
// int                            StoreVersion                   (Parm)

void UMcpUserInventoryManager::DeleteItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int StoreVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.DeleteItem");

	UMcpUserInventoryManager_DeleteItem_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete
// (Defined, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserInventoryManager::OnConsumeItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete");

	UMcpUserInventoryManager_OnConsumeItemRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.ConsumeItem
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 InstanceItemId                 (Parm, NeedCtorLink)
// int                            Quantity                       (Parm)
// int                            StoreVersion                   (Parm)

void UMcpUserInventoryManager::ConsumeItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.ConsumeItem");

	UMcpUserInventoryManager_ConsumeItem_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete
// (Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserInventoryManager::OnEarnItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete");

	UMcpUserInventoryManager_OnEarnItemRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.EarnItem
// (Defined, Iterator, PreOperator, Singular, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 GlobalItemId                   (Parm, NeedCtorLink)
// int                            Quantity                       (Parm)
// int                            StoreVersion                   (Parm)

void UMcpUserInventoryManager::EarnItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, int Quantity, int StoreVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.EarnItem");

	UMcpUserInventoryManager_EarnItem_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.GlobalItemId = GlobalItemId;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete
// (Final, Defined, Latent, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserInventoryManager::OnSellItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete");

	UMcpUserInventoryManager_OnSellItemRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.SellItem
// (Defined, Simulated, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 InstanceItemId                 (Parm, NeedCtorLink)
// int                            Quantity                       (Parm)
// int                            StoreVersion                   (Parm)
// TArray<struct FMcpInventoryItemContainer> ExpectedResultItems            (Const, OptionalParm, Parm, OutParm, NeedCtorLink)

void UMcpUserInventoryManager::SellItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion, TArray<struct FMcpInventoryItemContainer>* ExpectedResultItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.SellItem");

	UMcpUserInventoryManager_SellItem_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpectedResultItems != nullptr)
		*ExpectedResultItems = params.ExpectedResultItems;
}


// Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete
// (Defined, Iterator, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserInventoryManager::OnPurchaseItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete");

	UMcpUserInventoryManager_OnPurchaseItemRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.PurchaseItem
// (Final, Defined, Iterator, Latent, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 GlobalItemId                   (Parm, NeedCtorLink)
// TArray<struct FString>         PurchaseItemIds                (Parm, NeedCtorLink)
// int                            Quantity                       (Parm)
// int                            StoreVersion                   (Parm)
// float                          Scalar                         (Parm)

void UMcpUserInventoryManager::PurchaseItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> PurchaseItemIds, int Quantity, int StoreVersion, float Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.PurchaseItem");

	UMcpUserInventoryManager_PurchaseItem_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.GlobalItemId = GlobalItemId;
	params.PurchaseItemIds = PurchaseItemIds;
	params.Quantity = Quantity;
	params.StoreVersion = StoreVersion;
	params.Scalar = Scalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.FindItemRequest
// (Final, Iterator, Latent, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 ItemId                         (Parm, NeedCtorLink)
// TArray<struct FInventoryItemRequestState> InItemRequests                 (Const, Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMcpUserInventoryManager::FindItemRequest(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ItemId, TArray<struct FInventoryItemRequestState>* InItemRequests)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.FindItemRequest");

	UMcpUserInventoryManager_FindItemRequest_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InItemRequests != nullptr)
		*InItemRequests = params.InItemRequests;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest
// (PreOperator, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> InSaveSlotRequests             (Const, Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMcpUserInventoryManager::FindSaveSlotRequest(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState>* InSaveSlotRequests)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest");

	UMcpUserInventoryManager_FindSaveSlotRequest_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSaveSlotRequests != nullptr)
		*InSaveSlotRequests = params.InSaveSlotRequests;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex
// (Final, Defined, Iterator, Latent, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMcpUserInventoryManager::FindSaveSlotIndex(const struct FString& McpId, const struct FString& SaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex");

	UMcpUserInventoryManager_FindSaveSlotIndex_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.ParseSaveSlotList
// (Latent, Net, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 JsonPayload                    (Parm, NeedCtorLink)

void UMcpUserInventoryManager::ParseSaveSlotList(const struct FString& McpId, const struct FString& JsonPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.ParseSaveSlotList");

	UMcpUserInventoryManager_ParseSaveSlotList_Params params;
	params.McpId = McpId;
	params.JsonPayload = JsonPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot
// (Defined, Iterator, Net, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 JsonPayload                    (Parm, NeedCtorLink)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UMcpUserInventoryManager::ParseInventoryForSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& JsonPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot");

	UMcpUserInventoryManager_ParseInventoryForSaveSlot_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.JsonPayload = JsonPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.GetInventoryItem
// (Final, Defined, Latent, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 InstanceItemId                 (Parm, NeedCtorLink)
// struct FMcpInventoryItem       OutInventoryItem               (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpUserInventoryManager::GetInventoryItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, struct FMcpInventoryItem* OutInventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.GetInventoryItem");

	UMcpUserInventoryManager_GetInventoryItem_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.InstanceItemId = InstanceItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInventoryItem != nullptr)
		*OutInventoryItem = params.OutInventoryItem;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.GetInventoryItems
// (Net, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// TArray<struct FMcpInventoryItem> OutInventoryItems              (Parm, OutParm, NeedCtorLink)

void UMcpUserInventoryManager::GetInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FMcpInventoryItem>* OutInventoryItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.GetInventoryItems");

	UMcpUserInventoryManager_GetInventoryItems_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInventoryItems != nullptr)
		*OutInventoryItems = params.OutInventoryItems;
}


// Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete
// (Defined, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserInventoryManager::OnQueryInventoryItemsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete");

	UMcpUserInventoryManager_OnQueryInventoryItemsRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.QueryInventoryItems
// (Iterator, Latent, PreOperator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)

void UMcpUserInventoryManager::QueryInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.QueryInventoryItems");

	UMcpUserInventoryManager_QueryInventoryItems_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.GetSaveSlotList
// (Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UMcpUserInventoryManager::GetSaveSlotList(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.GetSaveSlotList");

	UMcpUserInventoryManager_GetSaveSlotList_Params params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete
// (Latent, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserInventoryManager::OnQuerySaveSlotListRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete");

	UMcpUserInventoryManager_OnQuerySaveSlotListRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.QuerySaveSlotList
// (Iterator, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)

void UMcpUserInventoryManager::QuerySaveSlotList(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.QuerySaveSlotList");

	UMcpUserInventoryManager_QuerySaveSlotList_Params params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete
// (PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserInventoryManager::OnDeleteSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete");

	UMcpUserInventoryManager_OnDeleteSaveSlotRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.DeleteSaveSlot
// (Singular, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)

void UMcpUserInventoryManager::DeleteSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.DeleteSaveSlot");

	UMcpUserInventoryManager_DeleteSaveSlot_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserInventoryManager::OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete");

	UMcpUserInventoryManager_OnCreateSaveSlotRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserInventoryManager.CreateSaveSlot
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 SaveSlotId                     (Parm, NeedCtorLink)
// struct FString                 ParentSaveSlotId               (OptionalParm, Parm, NeedCtorLink)

void UMcpUserInventoryManager::CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ParentSaveSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserInventoryManager.CreateSaveSlot");

	UMcpUserInventoryManager_CreateSaveSlot_Params params;
	params.McpId = McpId;
	params.SaveSlotId = SaveSlotId;
	params.ParentSaveSlotId = ParentSaveSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.OnDeleteUserComplete
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserManagerBase::OnDeleteUserComplete(bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.OnDeleteUserComplete");

	UMcpUserManagerBase_OnDeleteUserComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.DeleteUser
// (Final, Singular, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)

void UMcpUserManagerBase::DeleteUser(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.DeleteUser");

	UMcpUserManagerBase_DeleteUser_Params params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.GetUser
// (Iterator, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FMcpUserStatus          User                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMcpUserManagerBase::GetUser(const struct FString& McpId, struct FMcpUserStatus* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.GetUser");

	UMcpUserManagerBase_GetUser_Params params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (User != nullptr)
		*User = params.User;

	return params.ReturnValue;
}


// Function IpDrv.McpUserManagerBase.GetUsers
// (Final, Latent, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FMcpUserStatus>  Users                          (Parm, OutParm, NeedCtorLink)

void UMcpUserManagerBase::GetUsers(TArray<struct FMcpUserStatus>* Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.GetUsers");

	UMcpUserManagerBase_GetUsers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Users != nullptr)
		*Users = params.Users;
}


// Function IpDrv.McpUserManagerBase.OnQueryUsersComplete
// (Iterator, Latent, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserManagerBase::OnQueryUsersComplete(bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.OnQueryUsersComplete");

	UMcpUserManagerBase_OnQueryUsersComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.QueryUsers
// (Final, Defined, Iterator, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FString>         McpIds                         (Const, Parm, OutParm, NeedCtorLink)

void UMcpUserManagerBase::QueryUsers(TArray<struct FString>* McpIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.QueryUsers");

	UMcpUserManagerBase_QueryUsers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (McpIds != nullptr)
		*McpIds = params.McpIds;
}


// Function IpDrv.McpUserManagerBase.QueryUser
// (Defined, Iterator, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// bool                           bShouldUpdateLastActive        (OptionalParm, Parm)

void UMcpUserManagerBase::QueryUser(const struct FString& McpId, bool bShouldUpdateLastActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.QueryUser");

	UMcpUserManagerBase_QueryUser_Params params;
	params.McpId = McpId;
	params.bShouldUpdateLastActive = bShouldUpdateLastActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.OnRegisterUserComplete
// (Iterator, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// struct FString                 UDID                           (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Error                          (Parm, NeedCtorLink)

void UMcpUserManagerBase::OnRegisterUserComplete(const struct FString& McpId, const struct FString& UDID, bool bWasSuccessful, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.OnRegisterUserComplete");

	UMcpUserManagerBase_OnRegisterUserComplete_Params params;
	params.McpId = McpId;
	params.UDID = UDID;
	params.bWasSuccessful = bWasSuccessful;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.RegisterUserFacebook
// (Final, Iterator, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 FacebookId                     (Parm, NeedCtorLink)
// struct FString                 FacebookAuthToken              (Parm, NeedCtorLink)
// struct FString                 UDID                           (Parm, NeedCtorLink)
// struct FString                 ExistingMcpAuth                (OptionalParm, Parm, NeedCtorLink)

void UMcpUserManagerBase::RegisterUserFacebook(const struct FString& FacebookId, const struct FString& FacebookAuthToken, const struct FString& UDID, const struct FString& ExistingMcpAuth)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.RegisterUserFacebook");

	UMcpUserManagerBase_RegisterUserFacebook_Params params;
	params.FacebookId = FacebookId;
	params.FacebookAuthToken = FacebookAuthToken;
	params.UDID = UDID;
	params.ExistingMcpAuth = ExistingMcpAuth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.RegisterUserEmail
// (Final, Defined, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Email                          (Parm, NeedCtorLink)
// struct FString                 PasswordHash                   (Parm, NeedCtorLink)
// struct FString                 UDID                           (Parm, NeedCtorLink)
// struct FString                 ExistingMcpAuth                (OptionalParm, Parm, NeedCtorLink)

void UMcpUserManagerBase::RegisterUserEmail(const struct FString& Email, const struct FString& PasswordHash, const struct FString& UDID, const struct FString& ExistingMcpAuth)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.RegisterUserEmail");

	UMcpUserManagerBase_RegisterUserEmail_Params params;
	params.Email = Email;
	params.PasswordHash = PasswordHash;
	params.UDID = UDID;
	params.ExistingMcpAuth = ExistingMcpAuth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.RegisterUserGenerated
// (Defined, Iterator, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UDID                           (Parm, NeedCtorLink)
// struct FString                 ExistingMcpAuth                (OptionalParm, Parm, NeedCtorLink)

void UMcpUserManagerBase::RegisterUserGenerated(const struct FString& UDID, const struct FString& ExistingMcpAuth)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.RegisterUserGenerated");

	UMcpUserManagerBase_RegisterUserGenerated_Params params;
	params.UDID = UDID;
	params.ExistingMcpAuth = ExistingMcpAuth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManagerBase.CreateInstance
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// class UMcpUserManagerBase*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UMcpUserManagerBase* UMcpUserManagerBase::CreateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManagerBase.CreateInstance");

	UMcpUserManagerBase_CreateInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.McpUserManager.OnDeleteUserRequestComplete
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserManager::OnDeleteUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.OnDeleteUserRequestComplete");

	UMcpUserManager_OnDeleteUserRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.DeleteUser
// (Final, Singular, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)

void UMcpUserManager::DeleteUser(const struct FString& McpId)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.DeleteUser");

	UMcpUserManager_DeleteUser_Params params;
	params.McpId = McpId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.GetUsers
// (Final, Latent, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FMcpUserStatus>  Users                          (Parm, OutParm, NeedCtorLink)

void UMcpUserManager::GetUsers(TArray<struct FMcpUserStatus>* Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.GetUsers");

	UMcpUserManager_GetUsers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Users != nullptr)
		*Users = params.Users;
}


// Function IpDrv.McpUserManager.OnQueryUsersRequestComplete
// (Final, Iterator, Latent, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserManager::OnQueryUsersRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.OnQueryUsersRequestComplete");

	UMcpUserManager_OnQueryUsersRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.QueryUsers
// (Final, Defined, Iterator, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FString>         McpIds                         (Const, Parm, OutParm, NeedCtorLink)

void UMcpUserManager::QueryUsers(TArray<struct FString>* McpIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.QueryUsers");

	UMcpUserManager_QueryUsers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (McpIds != nullptr)
		*McpIds = params.McpIds;
}


// Function IpDrv.McpUserManager.OnQueryUserRequestComplete
// (Final, Defined, Latent, PreOperator, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserManager::OnQueryUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.OnQueryUserRequestComplete");

	UMcpUserManager_OnQueryUserRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.QueryUser
// (Defined, Iterator, Singular, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 McpId                          (Parm, NeedCtorLink)
// bool                           bShouldUpdateLastActive        (OptionalParm, Parm)

void UMcpUserManager::QueryUser(const struct FString& McpId, bool bShouldUpdateLastActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.QueryUser");

	UMcpUserManager_QueryUser_Params params;
	params.McpId = McpId;
	params.bShouldUpdateLastActive = bShouldUpdateLastActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.OnRegisterUserFacebookRequestComplete
// (Defined, Iterator, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserManager::OnRegisterUserFacebookRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.OnRegisterUserFacebookRequestComplete");

	UMcpUserManager_OnRegisterUserFacebookRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.RegisterUserFacebook
// (Final, Iterator, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 FacebookId                     (Parm, NeedCtorLink)
// struct FString                 FacebookAuthToken              (Parm, NeedCtorLink)
// struct FString                 UDID                           (Parm, NeedCtorLink)
// struct FString                 ExistingMcpAuth                (OptionalParm, Parm, NeedCtorLink)

void UMcpUserManager::RegisterUserFacebook(const struct FString& FacebookId, const struct FString& FacebookAuthToken, const struct FString& UDID, const struct FString& ExistingMcpAuth)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.RegisterUserFacebook");

	UMcpUserManager_RegisterUserFacebook_Params params;
	params.FacebookId = FacebookId;
	params.FacebookAuthToken = FacebookAuthToken;
	params.UDID = UDID;
	params.ExistingMcpAuth = ExistingMcpAuth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.OnRegisterUserEmailRequestComplete
// (Final, Iterator, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserManager::OnRegisterUserEmailRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.OnRegisterUserEmailRequestComplete");

	UMcpUserManager_OnRegisterUserEmailRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.RegisterUserEmail
// (Final, Defined, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Email                          (Parm, NeedCtorLink)
// struct FString                 PasswordHash                   (Parm, NeedCtorLink)
// struct FString                 UDID                           (Parm, NeedCtorLink)
// struct FString                 ExistingMcpAuth                (OptionalParm, Parm, NeedCtorLink)

void UMcpUserManager::RegisterUserEmail(const struct FString& Email, const struct FString& PasswordHash, const struct FString& UDID, const struct FString& ExistingMcpAuth)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.RegisterUserEmail");

	UMcpUserManager_RegisterUserEmail_Params params;
	params.Email = Email;
	params.PasswordHash = PasswordHash;
	params.UDID = UDID;
	params.ExistingMcpAuth = ExistingMcpAuth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.OnRegisterUserRequestComplete
// (Final, Defined, Iterator, Singular, Native, Operator, HasOptionalParms)
// Parameters:
// class UHttpRequestInterface*   Request                        (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UMcpUserManager::OnRegisterUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.OnRegisterUserRequestComplete");

	UMcpUserManager_OnRegisterUserRequestComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.McpUserManager.RegisterUserGenerated
// (Defined, Iterator, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 UDID                           (Parm, NeedCtorLink)
// struct FString                 ExistingMcpAuth                (OptionalParm, Parm, NeedCtorLink)

void UMcpUserManager::RegisterUserGenerated(const struct FString& UDID, const struct FString& ExistingMcpAuth)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.McpUserManager.RegisterUserGenerated");

	UMcpUserManager_RegisterUserGenerated_Params params;
	params.UDID = UDID;
	params.ExistingMcpAuth = ExistingMcpAuth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
// (Final, Defined, Singular, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UOnlineImageDownloaderWeb::DebugDraw(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.DebugDraw");

	UOnlineImageDownloaderWeb_DebugDraw_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
// (Final, Iterator, PreOperator, Singular, Simulated, Event, Operator, Static)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bDidSucceed                    (Parm)

void UOnlineImageDownloaderWeb::STATIC_OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete");

	UOnlineImageDownloaderWeb_OnDownloadComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
// (Defined, PreOperator, Singular, Exec, Operator, HasOptionalParms)

void UOnlineImageDownloaderWeb::DownloadNextImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage");

	UOnlineImageDownloaderWeb_DownloadNextImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
// (Defined, Net, NetReliable, Simulated, Operator, HasOptionalParms)

void UOnlineImageDownloaderWeb::ClearAllDownloads()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads");

	UOnlineImageDownloaderWeb_ClearAllDownloads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads
// (Iterator, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FString>         URLs                           (Parm, NeedCtorLink)

void UOnlineImageDownloaderWeb::ClearDownloads(TArray<struct FString> URLs)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads");

	UOnlineImageDownloaderWeb_ClearDownloads_Params params;
	params.URLs = URLs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineImageDownloaderWeb::GetNumPendingDownloads()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads");

	UOnlineImageDownloaderWeb_GetNumPendingDownloads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
// (Final, Latent, PreOperator, Net, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// TArray<struct FString>         URLs                           (Parm, NeedCtorLink)

void UOnlineImageDownloaderWeb::RequestOnlineImages(TArray<struct FString> URLs)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages");

	UOnlineImageDownloaderWeb_RequestOnlineImages_Params params;
	params.URLs = URLs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineImageDownloaderWeb.GetOpenDownloadImagesSlot
// (Defined, Latent, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineImageDownloaderWeb::GetOpenDownloadImagesSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.GetOpenDownloadImagesSlot");

	UOnlineImageDownloaderWeb_GetOpenDownloadImagesSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
// (Latent, PreOperator, Singular, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UOnlineImageDownloaderWeb::GetOnlineImageTexture(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture");

	UOnlineImageDownloaderWeb_GetOnlineImageTexture_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded
// (Iterator, Native, Operator, HasOptionalParms)
// Parameters:
// struct FOnlineImageDownload    CachedEntry                    (Parm, NeedCtorLink)

void UOnlineImageDownloaderWeb::OnOnlineImageDownloaded(const struct FOnlineImageDownload& CachedEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded");

	UOnlineImageDownloaderWeb_OnOnlineImageDownloaded_Params params;
	params.CachedEntry = CachedEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.IsHanging
// (Final, Defined, Iterator, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWebConnection::IsHanging()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.IsHanging");

	AWebConnection_IsHanging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebConnection.Cleanup
// (Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Event, Operator)

void AWebConnection::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.Cleanup");

	AWebConnection_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.CheckRawBytes
// (Net, NetReliable, Simulated, Operator, HasOptionalParms)

void AWebConnection::CheckRawBytes()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.CheckRawBytes");

	AWebConnection_CheckRawBytes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.EndOfHeaders
// (Final, Iterator, Latent, Net, Exec, Operator, HasOptionalParms)

void AWebConnection::EndOfHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.EndOfHeaders");

	AWebConnection_EndOfHeaders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.CreateResponseObject
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Operator, HasOptionalParms)

void AWebConnection::CreateResponseObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.CreateResponseObject");

	AWebConnection_CreateResponseObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ProcessPost
// (Iterator, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AWebConnection::ProcessPost(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.ProcessPost");

	AWebConnection_ProcessPost_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ProcessGet
// (Final, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AWebConnection::ProcessGet(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.ProcessGet");

	AWebConnection_ProcessGet_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ProcessHead
// (Defined, NetReliable, Native, Operator, HasOptionalParms)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AWebConnection::ProcessHead(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.ProcessHead");

	AWebConnection_ProcessHead_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ReceivedLine
// (Final, PreOperator, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AWebConnection::ReceivedLine(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.ReceivedLine");

	AWebConnection_ReceivedLine_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ReceivedText
// (Defined, PreOperator, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)

void AWebConnection::ReceivedText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.ReceivedText");

	AWebConnection_ReceivedText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.Timer
// (Defined, Latent, PreOperator, Singular, NetReliable, Native)

void AWebConnection::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.Timer");

	AWebConnection_Timer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.Closed
// (PreOperator, Net, NetReliable, Exec, Native, HasOptionalParms)

void AWebConnection::Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.Closed");

	AWebConnection_Closed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.Accepted
// (Final, Defined, Iterator, Latent, Net, NetReliable, Exec, Native, HasOptionalParms)

void AWebConnection::Accepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function IpDrv.WebConnection.Accepted");

	AWebConnection_Accepted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
