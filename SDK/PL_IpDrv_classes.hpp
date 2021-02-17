#pragma once

// Paladins (4.1.3942.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_IpDrv_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x006C - 0x0060)
class UClientBeaconAddressResolver : public UObject
{
public:
	int                                                BeaconPort;                                               // 0x0060(0x0004)
	struct FName                                       BeaconName;                                               // 0x0064(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.ClientBeaconAddressResolver");
		return ptr;
	}

};


// Class IpDrv.HTTPDownload
// 0x0138 (0x0BDC - 0x0AA4)
class UHTTPDownload : public UDownload
{
public:
	struct FString                                     ProxyServerHost;                                          // 0x0AA4(0x0010) (Config, NeedCtorLink)
	int                                                ProxyServerPort;                                          // 0x0AB4(0x0004) (Config)
	unsigned long                                      MaxRedirection : 1;                                       // 0x0AB8(0x0004) (Config)
	float                                              ConnectionTimeout;                                        // 0x0ABC(0x0004) (Config)
	unsigned char                                      UnknownData00[0x11C];                                     // 0x0AC0(0x011C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HTTPDownload");
		return ptr;
	}

};


// Class IpDrv.InternetLink
// 0x0024 (0x02A4 - 0x0280)
class AInternetLink : public AInfo
{
public:
	TEnumAsByte<ELinkMode>                             LinkMode;                                                 // 0x0280(0x0001)
	TEnumAsByte<ELineMode>                             InLineMode;                                               // 0x0281(0x0001)
	TEnumAsByte<ELineMode>                             OutLineMode;                                              // 0x0282(0x0001)
	TEnumAsByte<EReceiveMode>                          ReceiveMode;                                              // 0x0283(0x0001)
	struct FPointer                                    Socket;                                                   // 0x0284(0x0008) (Const)
	int                                                Port;                                                     // 0x028C(0x0004) (Const)
	struct FPointer                                    RemoteSocket;                                             // 0x0290(0x0008) (Const)
	struct FPointer                                    PrivateResolveInfo;                                       // 0x0298(0x0008) (Const, Native)
	int                                                DataPending;                                              // 0x02A0(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.InternetLink");
		return ptr;
	}


	void ResolveFailed();
	void Resolved(const struct FIpAddr& Addr);
	void STATIC_GetLocalIP(struct FIpAddr* Arg);
	bool STATIC_StringToIpAddr(const struct FString& Str, struct FIpAddr* Addr);
	struct FString STATIC_IpAddrToString(const struct FIpAddr& Arg);
	int STATIC_GetLastError();
	void STATIC_Resolve(const struct FString& Domain);
	bool STATIC_ParseURL(const struct FString& URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName);
	bool STATIC_IsDataPending();
};


// Class IpDrv.TcpLink
// 0x0040 (0x02E4 - 0x02A4)
class ATcpLink : public AInternetLink
{
public:
	TEnumAsByte<ELinkState>                            LinkState;                                                // 0x02A4(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET
	struct FIpAddr                                     RemoteAddr;                                               // 0x02A8(0x0014)
	class UClass*                                      AcceptClass;                                              // 0x02BC(0x0008)
	TArray<unsigned char>                              SendFIFO;                                                 // 0x02C4(0x0010) (Const, NeedCtorLink)
	struct FString                                     RecvBuf;                                                  // 0x02D4(0x0010) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpLink");
		return ptr;
	}


	void ReceivedBinary(int Count, unsigned char B);
	void ReceivedLine(const struct FString& Line);
	void ReceivedText(const struct FString& Text);
	void Closed();
	void Opened();
	void Accepted();
	int STATIC_ReadBinary(int Count, unsigned char* B);
	int STATIC_ReadText(struct FString* Str);
	int SendBinary(int Count, unsigned char B);
	int SendText(const struct FString& Str);
	bool STATIC_IsConnected();
	bool STATIC_Close();
	bool Open(const struct FIpAddr& Addr);
	bool STATIC_Listen();
	int STATIC_BindPort(int PortNum, bool bUseNextAvailable);
};


// Class IpDrv.McpServiceBase
// 0x0018 (0x0078 - 0x0060)
class UMcpServiceBase : public UObject
{
public:
	struct FString                                     McpConfigClassName;                                       // 0x0060(0x0010) (Config, NeedCtorLink)
	class UMcpServiceConfig*                           McpConfig;                                                // 0x0070(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpServiceBase");
		return ptr;
	}


	struct FString STATIC_GetUserAuthURL(const struct FString& McpId);
	struct FString STATIC_GetAppAccessURL();
	struct FString STATIC_GetBaseURL();
	void Init();
};


// Class IpDrv.MCPBase
// 0x0008 (0x0080 - 0x0078)
class UMCPBase : public UMcpServiceBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0078(0x0008) (Const, Native, NoExport)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MCPBase");
		return ptr;
	}

};


// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0034 (0x00B4 - 0x0080)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FEventUploadConfig>                  EventUploadConfigs;                                       // 0x0080(0x0010) (Const, Config, NeedCtorLink)
	TArray<struct FPointer>                            MCPEventPostObjects;                                      // 0x0090(0x0010) (Const, Native)
	TArray<TEnumAsByte<EEventUploadType>>              DisabledUploadTypes;                                      // 0x00A0(0x0010) (Config, NeedCtorLink)
	unsigned long                                      bBinaryStats : 1;                                         // 0x00B0(0x0004) (Const, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineEventsInterfaceMcp");
		return ptr;
	}


	bool STATIC_UploadMatchmakingStats(const struct FUniqueNetId& UniqueId, class UOnlineMatchmakingStats* MMStats);
	bool STATIC_UpdatePlaylistPopulation(int PlaylistId, int NumPlayers);
	bool STATIC_UploadGameplayEventsData(const struct FUniqueNetId& UniqueId, TArray<unsigned char>* Payload);
	bool STATIC_UploadPlayerData(const struct FUniqueNetId& UniqueId, const struct FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage);
};


// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0034 (0x00B4 - 0x0080)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FNewsCacheEntry>                     NewsItems;                                                // 0x0080(0x0010) (Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadNewsDelegates;                                        // 0x0090(0x0010) (NeedCtorLink)
	unsigned long                                      bNeedsTicking : 1;                                        // 0x00A0(0x0004) (Transient)
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;                          // 0x00A4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineNewsInterfaceMcp");
		return ptr;
	}


	struct FString GetNews(unsigned char LocalUserNum, TEnumAsByte<EOnlineNewsType> NewsType);
	void STATIC_ClearReadNewsCompletedDelegate(const struct FScriptDelegate& ReadGameNewsDelegate);
	void STATIC_AddReadNewsCompletedDelegate(const struct FScriptDelegate& ReadNewsDelegate);
	void OnReadNewsCompleted(bool bWasSuccessful, TEnumAsByte<EOnlineNewsType> NewsType);
	bool ReadNews(unsigned char LocalUserNum, TEnumAsByte<EOnlineNewsType> NewsType);
};


// Class IpDrv.OnlineTitleFileDownloadBase
// 0x0084 (0x0104 - 0x0080)
class UOnlineTitleFileDownloadBase : public UMCPBase
{
public:
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                           // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RequestTitleFileListCompleteDelegates;                    // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     BaseUrl;                                                  // 0x00A0(0x0010) (Config, NeedCtorLink)
	struct FString                                     RequestFileListURL;                                       // 0x00B0(0x0010) (Config, NeedCtorLink)
	struct FString                                     RequestFileURL;                                           // 0x00C0(0x0010) (Config, NeedCtorLink)
	float                                              TimeOut;                                                  // 0x00D0(0x0004) (Config)
	TArray<struct FFileNameToURLMapping>               FilesToUrls;                                              // 0x00D4(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                      // 0x00E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRequestTitleFileListComplete__Delegate;               // 0x00F4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadBase");
		return ptr;
	}


	struct FString STATIC_GetUrlForFile(const struct FString& Filename);
	void STATIC_ClearRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate);
	void STATIC_AddRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate);
	void OnRequestTitleFileListComplete(bool bWasSuccessful, TArray<struct FString> FilePaths);
	bool RequestTitleFileList();
	bool STATIC_ClearDownloadedFile(const struct FString& Filename);
	bool STATIC_ClearDownloadedFiles();
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void STATIC_ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void STATIC_AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(const struct FString& FileToRead, TEnumAsByte<EOnlineFileType> FileType);
	void STATIC_OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
};


// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x0014 (0x0118 - 0x0104)
class UOnlineTitleFileDownloadMcp : public UOnlineTitleFileDownloadBase
{
public:
	TArray<struct FTitleFileMcp>                       TitleFiles;                                               // 0x0104(0x0010) (NeedCtorLink)
	int                                                DownloadCount;                                            // 0x0114(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadMcp");
		return ptr;
	}


	bool STATIC_ClearDownloadedFile(const struct FString& Filename);
	bool STATIC_ClearDownloadedFiles();
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	bool ReadTitleFile(const struct FString& FileToRead, TEnumAsByte<EOnlineFileType> FileType);
};


// Class IpDrv.OnlineTitleFileDownloadWeb
// 0x0010 (0x0114 - 0x0104)
class UOnlineTitleFileDownloadWeb : public UOnlineTitleFileDownloadBase
{
public:
	TArray<struct FTitleFileWeb>                       TitleFiles;                                               // 0x0104(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadWeb");
		return ptr;
	}


	struct FString STATIC_GetUrlForFile(const struct FString& Filename);
	void STATIC_OnFileListReceived(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	bool RequestTitleFileList();
	bool STATIC_ClearDownloadedFile(const struct FString& Filename);
	bool STATIC_ClearDownloadedFiles();
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void STATIC_TriggerDelegates(bool bSuccess, const struct FString& FileRead);
	void STATIC_OnFileDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	bool ReadTitleFile(const struct FString& FileToRead, TEnumAsByte<EOnlineFileType> FileType);
	bool STATIC_UncompressTitleFileContents(TEnumAsByte<EMcpFileCompressionType> FileCompressionType, TArray<unsigned char>* CompressedFileContents, TArray<unsigned char>* UncompressedFileContents);
};


// Class IpDrv.TitleFileDownloadCache
// 0x0050 (0x00D0 - 0x0080)
class UTitleFileDownloadCache : public UMCPBase
{
public:
	TArray<struct FTitleFileCacheEntry>                TitleFiles;                                               // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoadCompleteDelegates;                                    // 0x0090(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SaveCompleteDelegates;                                    // 0x00A0(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoadTitleFileComplete__Delegate;                      // 0x00B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSaveTitleFileComplete__Delegate;                      // 0x00C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TitleFileDownloadCache");
		return ptr;
	}


	bool STATIC_DeleteTitleFile(const struct FString& Filename);
	bool STATIC_DeleteTitleFiles(float MaxAgeSeconds);
	bool STATIC_ClearCachedFile(const struct FString& Filename);
	bool STATIC_ClearCachedFiles();
	struct FString GetTitleFileLogicalName(const struct FString& Filename);
	struct FString GetTitleFileHash(const struct FString& Filename);
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void STATIC_ClearSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate);
	void STATIC_AddSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate);
	void OnSaveTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	bool SaveTitleFile(const struct FString& Filename, const struct FString& LogicalName, TArray<unsigned char> FileContents);
	void STATIC_ClearLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate);
	void STATIC_AddLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate);
	void OnLoadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	bool LoadTitleFile(const struct FString& Filename);
};


// Class IpDrv.McpMessageBase
// 0x0074 (0x00EC - 0x0078)
class UMcpMessageBase : public UMcpServiceBase
{
public:
	struct FString                                     McpMessageManagerClassName;                               // 0x0078(0x0010) (Config, NeedCtorLink)
	TEnumAsByte<EMcpMessageCompressionType>            CompressionType;                                          // 0x0088(0x0001) (Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	TArray<struct FMcpMessageContents>                 MessageContentsList;                                      // 0x008C(0x0010) (NeedCtorLink)
	TArray<struct FMcpMessageList>                     MessageLists;                                             // 0x009C(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateMessageComplete__Delegate;                      // 0x00AC(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteMessageComplete__Delegate;                      // 0x00BC(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00BC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryMessagesComplete__Delegate;                      // 0x00CC(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00CC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryMessageContentsComplete__Delegate;               // 0x00DC(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00DC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpMessageBase");
		return ptr;
	}


	bool STATIC_CacheMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents);
	void STATIC_CacheMessage(const struct FMcpMessage& Message);
	bool STATIC_GetMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents);
	void OnQueryMessageContentsComplete(const struct FString& MessageId, bool bWasSuccessful, const struct FString& Error);
	void STATIC_QueryMessageContents(const struct FString& MessageId);
	void STATIC_GetMessageList(const struct FString& ToUniqueUserId, struct FMcpMessageList* MessageList);
	void OnQueryMessagesComplete(const struct FString& UserId, bool bWasSuccessful, const struct FString& Error);
	void STATIC_QueryMessages(const struct FString& ToUniqueUserId, const struct FString& TitleId);
	void OnDeleteMessageComplete(const struct FString& MessageId, bool bWasSuccessful, const struct FString& Error);
	void STATIC_DeleteMessage(const struct FString& MessageId);
	void OnCreateMessageComplete(const struct FMcpMessage& Message, bool bWasSuccessful, const struct FString& Error);
	void STATIC_CreateMessage(const struct FString& FromUniqueUserId, const struct FString& FromFriendlyName, const struct FString& MessageType, const struct FString& TitleId, const struct FString& PushMessage, const struct FString& ValidUntil, TArray<struct FString>* ToUniqueUserIds, TArray<unsigned char>* MessageContents);
	class UMcpMessageBase* STATIC_CreateInstance();
};


// Class IpDrv.McpMessageManager
// 0x0078 (0x0164 - 0x00EC)
class UMcpMessageManager : public UMcpMessageBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x00EC(0x0008) (Const, Native, NoExport)
	struct FString                                     CreateMessageUrl;                                         // 0x00F4(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteMessageUrl;                                         // 0x0104(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryMessagesUrl;                                         // 0x0114(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryMessageContentsUrl;                                  // 0x0124(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteAllMessagesUrl;                                     // 0x0134(0x0010) (Config, NeedCtorLink)
	TArray<struct FMcpCompressMessageRequest>          CompressMessageRequests;                                  // 0x0144(0x0010) (Native)
	TArray<struct FMcpUncompressMessageRequest>        UncompressMessageRequests;                                // 0x0154(0x0010) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpMessageManager");
		return ptr;
	}


	bool STATIC_CacheMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents);
	bool STATIC_GetMessageById(const struct FString& MessageId, struct FMcpMessage* Message);
	void STATIC_CacheMessage(const struct FMcpMessage& Message);
	bool STATIC_GetMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents);
	void STATIC_OnQueryMessageContentsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void STATIC_QueryMessageContents(const struct FString& MessageId);
	void STATIC_GetMessageList(const struct FString& ToUniqueUserId, struct FMcpMessageList* MessageList);
	void STATIC_OnQueryMessagesRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void STATIC_QueryMessages(const struct FString& ToUniqueUserId, const struct FString& TitleId);
	void STATIC_OnDeleteMessageRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void STATIC_DeleteMessage(const struct FString& MessageId);
	void STATIC_OnCreateMessageRequestComplete(class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void STATIC_CreateMessage(const struct FString& FromUniqueUserId, const struct FString& FromFriendlyName, const struct FString& MessageType, const struct FString& TitleId, const struct FString& PushMessage, const struct FString& ValidUntil, TArray<struct FString>* ToUniqueUserIds, TArray<unsigned char>* MessageContents);
	void FinishedAsyncUncompression(bool bWasSuccessful, const struct FString& MessageId, TArray<unsigned char>* UncompressedMessageContents);
	bool STATIC_StartAsyncUncompression(const struct FString& MessageId, TEnumAsByte<EMcpMessageCompressionType> MessageCompressionType, TArray<unsigned char>* MessageContent);
	bool STATIC_StartAsyncCompression(TEnumAsByte<EMcpMessageCompressionType> MessageCompressionType, class UHttpRequestInterface* Request, TArray<unsigned char>* MessageContent);
};


// Class IpDrv.McpUserCloudFileDownload
// 0x00D0 (0x0148 - 0x0078)
class UMcpUserCloudFileDownload : public UMcpServiceBase
{
public:
	struct FString                                     EnumerateCloudFilesUrl;                                   // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FString                                     ReadCloudFileUrl;                                         // 0x0088(0x0010) (Config, NeedCtorLink)
	struct FString                                     WriteCloudFileUrl;                                        // 0x0098(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteCloudFileUrl;                                       // 0x00A8(0x0010) (Config, NeedCtorLink)
	TArray<struct FMcpUserCloudFilesEntry>             UserCloudFileRequests;                                    // 0x00B8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     EnumerateUserFilesCompleteDelegates;                      // 0x00C8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                            // 0x00D8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                           // 0x00E8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;                          // 0x00F8(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;                 // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0108(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;                       // 0x0118(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0118(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;                      // 0x0128(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0128(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;                     // 0x0138(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0138(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserCloudFileDownload");
		return ptr;
	}


	void STATIC_ClearAllDelegates();
	void STATIC_ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void STATIC_AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void STATIC_CallDeleteUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void STATIC_OnDeleteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void STATIC_OnHTTPRequestDeleteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	bool STATIC_DeleteUserFile(const struct FString& UserId, const struct FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void STATIC_ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void STATIC_AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void STATIC_CallWriteUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void STATIC_OnWriteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void STATIC_OnHTTPRequestWriteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_GetUserFileIndexForRequest(class UHttpRequestInterface* Request, int* UserIdx, int* FileIdx);
	bool STATIC_WriteUserFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	void STATIC_ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void STATIC_AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void STATIC_CallReadUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void STATIC_OnReadUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void STATIC_OnHTTPRequestReadUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	bool ReadUserFile(const struct FString& UserId, const struct FString& Filename);
	void GetUserFileList(const struct FString& UserId, TArray<struct FEmsFile>* UserFiles);
	void STATIC_ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void STATIC_AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void STATIC_CallEnumerateUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId);
	void STATIC_OnEnumerateUserFilesComplete(bool bWasSuccessful, const struct FString& UserId);
	void STATIC_OnHTTPRequestEnumerateUserFilesComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_EnumerateUserFiles(const struct FString& UserId);
	bool STATIC_ClearFile(const struct FString& UserId, const struct FString& Filename);
	bool STATIC_ClearFiles(const struct FString& UserId);
	bool GetFileContents(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
};


// Class IpDrv.MeshBeacon
// 0x0044 (0x00A4 - 0x0060)
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0060(0x0008) (Const, Native, NoExport)
	int                                                MeshBeaconPort;                                           // 0x0068(0x0004) (Config)
	struct FPointer                                    Socket;                                                   // 0x006C(0x0008) (Native, Transient)
	unsigned long                                      bIsInTick : 1;                                            // 0x0074(0x0004) (Transient)
	unsigned long                                      bWantsDeferredDestroy : 1;                                // 0x0074(0x0004) (Transient)
	unsigned long                                      bShouldTick : 1;                                          // 0x0074(0x0004)
	float                                              HeartbeatTimeout;                                         // 0x0078(0x0004) (Config)
	float                                              ElapsedHeartbeatTime;                                     // 0x007C(0x0004)
	struct FName                                       BeaconName;                                               // 0x0080(0x0008)
	int                                                SocketSendBufferSize;                                     // 0x0088(0x0004) (Config)
	int                                                SocketReceiveBufferSize;                                  // 0x008C(0x0004) (Config)
	int                                                MaxBandwidthTestBufferSize;                               // 0x0090(0x0004) (Config)
	int                                                MinBandwidthTestBufferSize;                               // 0x0094(0x0004) (Config)
	float                                              MaxBandwidthTestSendTime;                                 // 0x0098(0x0004) (Config)
	float                                              MaxBandwidthTestReceiveTime;                              // 0x009C(0x0004) (Config)
	int                                                MaxBandwidthHistoryEntries;                               // 0x00A0(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeacon");
		return ptr;
	}


	void DestroyBeacon();
};


// Class IpDrv.MeshBeaconClient
// 0x00CC (0x0170 - 0x00A4)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                                       // 0x00A4(0x0010) (Const)
	struct FClientConnectionRequest                    ClientPendingRequest;                                     // 0x00B4(0x0028) (Const, NeedCtorLink)
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                                     // 0x00DC(0x0014)
	TEnumAsByte<EMeshBeaconClientState>                ClientBeaconState;                                        // 0x00F0(0x0001)
	TEnumAsByte<EMeshBeaconPacketType>                 ClientBeaconRequestType;                                  // 0x00F1(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	float                                              ConnectionRequestTimeout;                                 // 0x00F4(0x0004) (Config)
	float                                              ConnectionRequestElapsedTime;                             // 0x00F8(0x0004)
	struct FString                                     ResolverClassName;                                        // 0x00FC(0x0010) (Config, NeedCtorLink)
	class UClass*                                      ResolverClass;                                            // 0x010C(0x0008)
	class UClientBeaconAddressResolver*                Resolver;                                                 // 0x0114(0x0008)
	unsigned long                                      bUsingRegisteredAddr : 1;                                 // 0x011C(0x0004) (Transient)
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;                    // 0x0120(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0120(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;               // 0x0130(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0130(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;               // 0x0140(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0140(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;                      // 0x0150(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0150(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate;            // 0x0160(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0160(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeaconClient");
		return ptr;
	}


	bool STATIC_SendHostNewGameSessionResponse(bool bSuccess, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnCreateNewSessionRequestReceived(const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players);
	void OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnReceivedBandwidthTestResults(TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, TEnumAsByte<EMeshBeaconBandwidthTestResult> TestResult, struct FConnectionBandwidthStats* BandwidthStats);
	void OnReceivedBandwidthTestRequest(TEnumAsByte<EMeshBeaconBandwidthTestType> TestType);
	void OnConnectionRequestResult(TEnumAsByte<EMeshBeaconConnectionResult> ConnectionResult);
	bool STATIC_BeginBandwidthTest(TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, int TestBufferSize);
	bool STATIC_RequestConnection(bool bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest);
	void DestroyBeacon();
};


// Class IpDrv.MeshBeaconHost
// 0x0080 (0x0124 - 0x00A4)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	TArray<struct FClientMeshBeaconConnection>         ClientConnections;                                        // 0x00A4(0x0010) (Const, NeedCtorLink)
	TArray<struct FUniqueNetId>                        PendingPlayerConnections;                                 // 0x00B4(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                OwningPlayerId;                                           // 0x00C4(0x0008) (Const)
	unsigned long                                      bAllowBandwidthTesting : 1;                               // 0x00CC(0x0004)
	int                                                ConnectionBacklog;                                        // 0x00D0(0x0004) (Config)
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate;            // 0x00D4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;                       // 0x00E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;                      // 0x00F4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00F4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;                 // 0x0104(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0104(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;       // 0x0114(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0114(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeaconHost");
		return ptr;
	}


	void OnReceivedClientCreateNewSessionResult(bool bSucceeded, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	bool STATIC_RequestClientCreateNewSession(const struct FUniqueNetId& PlayerNetId, const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players);
	void STATIC_TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnAllPendingPlayersConnected();
	bool STATIC_AllPlayersConnected(TArray<struct FUniqueNetId>* Players);
	int STATIC_GetConnectionIndexForPlayer(const struct FUniqueNetId& PlayerNetId);
	void STATIC_SetPendingPlayerConnections(TArray<struct FUniqueNetId>* Players);
	void OnFinishedBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, TEnumAsByte<EMeshBeaconBandwidthTestResult> TestResult, struct FConnectionBandwidthStats* BandwidthStats);
	void OnStartedBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EMeshBeaconBandwidthTestType> TestType);
	void OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection* NewClientConnection);
	void STATIC_AllowBandwidthTesting(bool bEnabled);
	void STATIC_CancelPendingBandwidthTests();
	bool STATIC_HasPendingBandwidthTest();
	void STATIC_CancelInProgressBandwidthTests();
	bool STATIC_HasInProgressBandwidthTest();
	bool STATIC_RequestClientBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, int TestBufferSize);
	void DestroyBeacon();
	bool STATIC_InitHostBeacon(const struct FUniqueNetId& InOwningPlayerId);
};


// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0024 (0x0288 - 0x0264)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                              // 0x0264(0x0008) (Const, Native, Transient)
	int                                                MaxLocalTalkers;                                          // 0x026C(0x0004) (Config)
	int                                                MaxRemoteTalkers;                                         // 0x0270(0x0004) (Config)
	unsigned long                                      bIsUsingSpeechRecognition : 1;                            // 0x0274(0x0004) (Config)
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                                        // 0x0278(0x0008)
	class UOnlineAuthInterfaceImpl*                    AuthInterfaceImpl;                                        // 0x0280(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		return ptr;
	}


	void STATIC_GetRegisteredPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* OutRegisteredPlayers);
	bool STATIC_IsPlayerInSession(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
};


// Class IpDrv.OnlineAuthInterfaceImpl
// 0x02C4 (0x0324 - 0x0060)
class UOnlineAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineAuthInterface;                             // 0x0060(0x0008) (Const, Native, NoExport)
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                          // 0x0068(0x0008)
	unsigned long                                      bAuthReady : 1;                                           // 0x0070(0x0004) (Const)
	struct FSparseArray_Mirror                         ClientAuthSessions;                                       // 0x0074(0x0038) (Const, Native)
	struct FSparseArray_Mirror                         ServerAuthSessions;                                       // 0x00AC(0x0038) (Const, Native)
	struct FSparseArray_Mirror                         PeerAuthSessions;                                         // 0x00E4(0x0038) (Const, Native)
	struct FSparseArray_Mirror                         LocalClientAuthSessions;                                  // 0x011C(0x0038) (Const, Native)
	struct FSparseArray_Mirror                         LocalServerAuthSessions;                                  // 0x0154(0x0038) (Const, Native)
	struct FSparseArray_Mirror                         LocalPeerAuthSessions;                                    // 0x018C(0x0038) (Const, Native)
	TArray<struct FScriptDelegate>                     AuthReadyDelegates;                                       // 0x01C4(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthRequestDelegates;                               // 0x01D4(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthRequestDelegates;                               // 0x01E4(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthResponseDelegates;                              // 0x01F4(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthResponseDelegates;                              // 0x0204(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthCompleteDelegates;                              // 0x0214(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthCompleteDelegates;                              // 0x0224(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthEndSessionRequestDelegates;                     // 0x0234(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthRetryRequestDelegates;                          // 0x0244(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientConnectionCloseDelegates;                           // 0x0254(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerConnectionCloseDelegates;                           // 0x0264(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnAuthReady__Delegate;                                  // 0x0274(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0274(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnClientAuthRequest__Delegate;                          // 0x0284(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0284(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnServerAuthRequest__Delegate;                          // 0x0294(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0294(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnClientAuthResponse__Delegate;                         // 0x02A4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnServerAuthResponse__Delegate;                         // 0x02B4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02B4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnClientAuthComplete__Delegate;                         // 0x02C4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData05[0x4];                                       // 0x02C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnServerAuthComplete__Delegate;                         // 0x02D4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData06[0x4];                                       // 0x02D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnClientAuthEndSessionRequest__Delegate;                // 0x02E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData07[0x4];                                       // 0x02E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnServerAuthRetryRequest__Delegate;                     // 0x02F4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData08[0x4];                                       // 0x02F4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnClientConnectionClose__Delegate;                      // 0x0304(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0304(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnServerConnectionClose__Delegate;                      // 0x0314(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0314(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineAuthInterfaceImpl");
		return ptr;
	}


	bool GetServerAddr(struct FIpAddr* OutServerIP, int* OutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId* OutServerUID);
	bool STATIC_FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession* OutSessionInfo);
	bool STATIC_FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession* OutSessionInfo);
	bool STATIC_FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession* OutSessionInfo);
	bool STATIC_FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession* OutSessionInfo);
	void STATIC_AllLocalServerAuthSessions(struct FLocalAuthSession* OutSessionInfo);
	void STATIC_AllServerAuthSessions(struct FAuthSession* OutSessionInfo);
	void STATIC_AllLocalClientAuthSessions(struct FLocalAuthSession* OutSessionInfo);
	void STATIC_AllClientAuthSessions(struct FAuthSession* OutSessionInfo);
	void STATIC_EndAllRemoteServerAuthSessions();
	void STATIC_EndAllLocalServerAuthSessions();
	void STATIC_EndRemoteServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP);
	void STATIC_EndLocalServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP);
	bool STATIC_VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID);
	bool STATIC_CreateServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int* OutAuthTicketUID);
	void STATIC_EndAllRemoteClientAuthSessions();
	void STATIC_EndAllLocalClientAuthSessions();
	void STATIC_EndRemoteClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP);
	void STATIC_EndLocalClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort);
	bool STATIC_VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int AuthTicketUID);
	bool STATIC_CreateClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure, int* OutAuthTicketUID);
	bool SendServerAuthRetryRequest();
	bool SendClientAuthEndSessionRequest(class UPlayer* ClientConnection);
	bool SendServerAuthResponse(class UPlayer* ClientConnection, int AuthTicketUID);
	bool SendClientAuthResponse(int AuthTicketUID);
	bool SendServerAuthRequest(const struct FUniqueNetId& ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID);
	void STATIC_ClearServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void STATIC_AddServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void OnServerConnectionClose(class UPlayer* ServerConnection);
	void STATIC_ClearClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void STATIC_AddClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void OnClientConnectionClose(class UPlayer* ClientConnection);
	void STATIC_ClearServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate);
	void STATIC_AddServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate);
	void OnServerAuthRetryRequest(class UPlayer* ClientConnection);
	void STATIC_ClearClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate);
	void STATIC_AddClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate);
	void OnClientAuthEndSessionRequest(class UPlayer* ServerConnection);
	void STATIC_ClearServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate);
	void STATIC_AddServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate);
	void OnServerAuthComplete(bool bSuccess, const struct FUniqueNetId& ServerUID, class UPlayer* ServerConnection, const struct FString& ExtraInfo);
	void STATIC_ClearClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate);
	void STATIC_AddClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate);
	void OnClientAuthComplete(bool bSuccess, const struct FUniqueNetId& ClientUID, class UPlayer* ClientConnection, const struct FString& ExtraInfo);
	void STATIC_ClearServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate);
	void STATIC_AddServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate);
	void OnServerAuthResponse(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID);
	void STATIC_ClearClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate);
	void STATIC_AddClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate);
	void OnClientAuthResponse(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int AuthTicketUID);
	void STATIC_ClearServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate);
	void STATIC_AddServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate);
	void OnServerAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort);
	void STATIC_ClearClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate);
	void STATIC_AddClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate);
	void OnClientAuthRequest(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure);
	void STATIC_ClearAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void STATIC_AddAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void OnAuthReady();
	bool IsReady();
};


// Class IpDrv.OnlineGameInterfaceImpl
// 0x02E8 (0x0348 - 0x0060)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                          // 0x0060(0x0008)
	class UOnlineGameSettings*                         GameSettings;                                             // 0x0068(0x0008) (Const)
	class UOnlineGameSearch*                           GameSearch;                                               // 0x0070(0x0008) (Const)
	TArray<struct FScriptDelegate>                     CreateOnlineGameCompleteDelegates;                        // 0x0078(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UpdateOnlineGameCompleteDelegates;                        // 0x0088(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DestroyOnlineGameCompleteDelegates;                       // 0x0098(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinOnlineGameCompleteDelegates;                          // 0x00A8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MigrateOnlineGameCompleteDelegates;                       // 0x00B8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinMigratedOnlineGameCompleteDelegates;                  // 0x00C8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RecalculateSkillRatingCompleteDelegates;                  // 0x00D8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     StartOnlineGameCompleteDelegates;                         // 0x00E8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     EndOnlineGameCompleteDelegates;                           // 0x00F8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindOnlineGamesCompleteDelegates;                         // 0x0108(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     CancelFindOnlineGamesCompleteDelegates;                   // 0x0118(0x0010) (NeedCtorLink)
	TEnumAsByte<ELanBeaconState>                       LanBeaconState;                                           // 0x0128(0x0001) (Const)
	unsigned char                                      LanNonce[0x8];                                            // 0x0129(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                LanAnnouncePort;                                          // 0x0134(0x0004) (Const, Config)
	int                                                LanGameUniqueId;                                          // 0x0138(0x0004) (Const, Config)
	int                                                LanPacketPlatformMask;                                    // 0x013C(0x0004) (Const, Config)
	float                                              LanQueryTimeLeft;                                         // 0x0140(0x0004)
	float                                              LanQueryTimeout;                                          // 0x0144(0x0004) (Config)
	struct FPointer                                    LanBeacon;                                                // 0x0148(0x0008) (Const, Native, Transient)
	struct FPointer                                    SessionInfo;                                              // 0x0150(0x0008) (Const, Native, Transient)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;                    // 0x0158(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0158(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;                   // 0x0168(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0168(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;                   // 0x0178(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0178(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;                  // 0x0188(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0188(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;              // 0x0198(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0198(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;                     // 0x01A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData06[0x4];                                       // 0x01A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCreateOnlineGameWithPartyComplete__Delegate;          // 0x01B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData07[0x4];                                       // 0x01B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnMatchmakeOnlineGameWithPartyComplete__Delegate;       // 0x01C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData08[0x4];                                       // 0x01C8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAddSessionMemberComplete__Delegate;                   // 0x01D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData09[0x4];                                       // 0x01D8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnMultiplayerSessionChange__Delegate;                   // 0x01E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData10[0x4];                                       // 0x01E8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUpdateSessionPropertiesComplete__Delegate;            // 0x01F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData11[0x4];                                       // 0x01F8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGameSessionReady__Delegate;                           // 0x0208(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0208(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAcceptPendingGameSessionComplete__Delegate;           // 0x0218(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0218(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGamePlayersChanged__Delegate;                         // 0x0228(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0228(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnMatchStatusChanged__Delegate;                         // 0x0238(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0238(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQuerySessionsForUserComplete__Delegate;               // 0x0248(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0248(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x0258(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0258(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x0268(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0268(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRetrievedGameSettingsForIP__Delegate;                 // 0x0278(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0278(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;                    // 0x0288(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0288(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;                      // 0x0298(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0298(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;            // 0x02A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData22[0x4];                                       // 0x02A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                         // 0x02B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData23[0x4];                                       // 0x02B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;             // 0x02C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData24[0x4];                                       // 0x02C8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;                  // 0x02D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData25[0x4];                                       // 0x02D8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;             // 0x02E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData26[0x4];                                       // 0x02E8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                           // 0x02F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData27[0x4];                                       // 0x02F8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;          // 0x0308(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData28[0x4];                                       // 0x0308(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGetRoomIdFromTitleService__Delegate;                  // 0x0318(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData29[0x4];                                       // 0x0318(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGetSessionMemberInfoComplete__Delegate;               // 0x0328(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData30[0x4];                                       // 0x0328(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGetUserConnectionInfoComplete__Delegate;              // 0x0338(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData31[0x4];                                       // 0x0338(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineGameInterfaceImpl");
		return ptr;
	}


	void STATIC_ClearGetUserConnectionInfoCompleteDelegate(const struct FScriptDelegate& GetUserConnectionInfoCompleteDelegate);
	void STATIC_AddGetUserConnectionInfoCompleteDelegate(const struct FScriptDelegate& GetUserConnectionInfoCompleteDelegate);
	void OnGetUserConnectionInfoComplete(TArray<struct FSessionMemberInfo> OutMemberInfo, bool bWasSuccessful);
	bool GetUserConnectionInfoAsync(TArray<struct FString> UserNames);
	void STATIC_ClearGetSessionMemberInfoCompleteDelegate(const struct FScriptDelegate& GetSessionMemberInfoCompleteDelegate);
	void STATIC_AddGetSessionMemberInfoCompleteDelegate(const struct FScriptDelegate& GetSessionMemberInfoCompleteDelegate);
	void OnGetSessionMemberInfoComplete(TArray<struct FSessionMemberInfo> OutMemberInfo, bool bWasSuccessful);
	bool GetCurrentSessionMemberInfo(const struct FName& SessionName, TArray<struct FSessionMemberInfo>* OutMemberInfo);
	bool GetCurrentSessionMemberInfoAsync(unsigned char LocalUserNum, const struct FName& SessionName);
	void RunBandwidthTest();
	bool IsAllowedToNetworkHost();
	void STATIC_ClearGetRoomIdFromTitleServiceDelegate(const struct FScriptDelegate& InDelegate);
	void STATIC_AddGetRoomIdFromTitleServiceDelegate(const struct FScriptDelegate& InDelegate);
	void GetRoomIdFromSessionId(const struct FString& SessionId);
	void GetRoomIdFromTitleService(const struct FQWord& DataId);
	void OnGetRoomIdFromTitleService(const struct FQWord& RoomId);
	struct FString GetRoomId();
	bool SendPlayerList(TArray<class APlayerReplicationInfo*> Players);
	void STATIC_ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void STATIC_AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void STATIC_OnGetNumberOfCurrentPlayersComplete(int TotalPlayers);
	int GetNumberOfCurrentPlayersCached();
	bool GetNumberOfCurrentPlayers();
	void STATIC_ClearQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void STATIC_AddQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void OnQosStatusChanged(int NumComplete, int NumTotal);
	bool STATIC_BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfoBySessionName(const struct FName& SessionName, unsigned char* PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	void STATIC_ClearJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void STATIC_AddJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void OnJoinMigratedOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool JoinMigratedOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame);
	void STATIC_ClearMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void STATIC_AddMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void OnMigrateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool MigrateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName);
	void STATIC_ClearRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingGameCompleteDelegate);
	void STATIC_AddRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingCompleteDelegate);
	void OnRecalculateSkillRatingComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool RecalculateSkillRating(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool STATIC_AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName);
	void STATIC_ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void STATIC_AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult);
	TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers(const struct FName& SessionName);
	void STATIC_ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void STATIC_AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool RegisterForArbitration(const struct FName& SessionName);
	void STATIC_ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void STATIC_AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool STATIC_EndOnlineGame(const struct FName& SessionName);
	void STATIC_ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void STATIC_AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool StartOnlineGame(const struct FName& SessionName);
	void RetrieveGameSettingsForIP(const struct FString& IPAddress);
	void STATIC_ClearOnRetrieveGameSettingsForIPDelegate(const struct FScriptDelegate& RetrieveIPDelegate);
	void STATIC_AddOnRetrieveGameSettingsForIPDelegate(const struct FScriptDelegate& NewRetrieveIPDelegate);
	void OnRetrievedGameSettingsForIP(bool bSuccessful, struct FOnlineGameSearchResult* ConnectResult);
	void STATIC_ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void STATIC_AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool STATIC_UnregisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool STATIC_UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	void STATIC_ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void STATIC_AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo);
	void STATIC_ClearQuerySessionsForUserCompleteDelegate(const struct FScriptDelegate& QuerySessionsForUserCompleteDelegate);
	void STATIC_AddQuerySessionsForUserCompleteDelegate(const struct FScriptDelegate& QuerySessionsForUserCompleteDelegate);
	void OnQuerySessionsForUserComplete(unsigned char LocalPlayerNum, bool bWasSuccessful);
	bool QuerySessionsByKeyword(unsigned char LocalPlayerNum, const struct FString& Keyword, class UOnlineGameSearch* SearchSettings);
	bool QuerySessionsForUser(unsigned char LocalPlayerNum);
	void LeaveAllOnlineSessions(bool bClearSessionIfHost);
	bool LeaveOnlineSession(unsigned char LocalPlayerNum, const struct FName& SessionName, bool bClearSessionIfHost);
	void STATIC_ClearMatchStatusChangedDelegate(const struct FScriptDelegate& MatchStatusChangedDelegate);
	void STATIC_AddMatchStatusChangedDelegate(const struct FScriptDelegate& MatchStatusChangedDelegate);
	void OnMatchStatusChanged(const struct FName& SessionName, unsigned char Status);
	void STATIC_ClearGamePlayersChangedDelegate(const struct FScriptDelegate& GamePlayersChangedDelegate);
	void STATIC_AddGamePlayersChangedDelegate(const struct FScriptDelegate& GamePlayersChangedDelegate);
	void OnGamePlayersChanged(const struct FName& SessionName, TArray<struct FUniqueNetId> Players);
	void STATIC_ClearAcceptPendingGameSessionCompleteDelegate(const struct FScriptDelegate& AcceptPendingGameSessionCompleteDelegate);
	void STATIC_AddAcceptPendingGameSessionCompleteDelegate(const struct FScriptDelegate& AcceptPendingGameSessionCompleteDelegate);
	void OnAcceptPendingGameSessionComplete(const struct FName& SessionName, bool bWasSuccessful);
	void STATIC_AcceptPendingGameSession(const struct FName& SessionName);
	void STATIC_ClearGameSessionReadyDelegate(const struct FScriptDelegate& GameSessionReadyDelegate);
	void STATIC_AddGameSessionReadyDelegate(const struct FScriptDelegate& GameSessionReadyDelegate);
	void OnGameSessionReady(const struct FName& SessionName);
	void STATIC_ClearUpdateSessionPropertiesCompleteDelegate(const struct FScriptDelegate& UpdateSessionPropertiesCompleteDelegate);
	void STATIC_AddUpdateSessionPropertiesCompleteDelegate(const struct FScriptDelegate& UpdateSessionPropertiesCompleteDelegate);
	void OnUpdateSessionPropertiesComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool STATIC_UpdateSessionProperties(unsigned char ScoutingUserNum, const struct FName& SessionName);
	bool STATIC_DeleteCustomMemberProperty(const struct FName& SessionName, const struct FString& PropertyName);
	bool SetCustomMemberProperty(const struct FName& SessionName, const struct FString& PropertyName, const struct FString& PropertyValue);
	bool STATIC_DeleteCustomSessionProperty(const struct FName& SessionName, const struct FString& PropertyName);
	bool SetCustomSessionProperty(const struct FName& SessionName, const struct FString& PropertyName, const struct FString& PropertyValue);
	void STATIC_ClearMultiplayerSessionChangeDelegate(const struct FScriptDelegate& MultiplayerSessionChangeDelegate);
	void STATIC_AddMultiplayerSessionChangeDelegate(const struct FScriptDelegate& MultiplayerSessionChangeDelegate);
	void OnMultiplayerSessionChange(const struct FName& SessionName, const struct FSessionUpdateInfo& SessionChanges);
	void STATIC_ClearAddSessionMemberCompleteDelegate(const struct FScriptDelegate& AddSessionMemberCompleteDelegate);
	void STATIC_AddAddSessionMemberCompleteDelegate(const struct FScriptDelegate& AddSessionMemberCompleteDelegate);
	void OnAddSessionMemberComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool STATIC_AddSessionMembers(unsigned char ScoutingPlayerNum, const struct FName& SessionName, TArray<struct FUniqueNetId> Members);
	bool STATIC_AddSessionMember(unsigned char ScoutingPlayerNum, const struct FName& SessionName, const struct FUniqueNetId& Member);
	bool STATIC_AddSessionMemberByString(unsigned char ScoutingPlayerNum, const struct FName& SessionName, const struct FString& Member);
	bool STATIC_CreateOnlineSessionWithTemplate(unsigned char ScoutingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings, const struct FString& TemplateName, const struct FString& SessionKeyword);
	bool InitiatedSessionSearch(const struct FName& SessionName);
	bool IsHostOfSession(const struct FName& SessionName);
	void STATIC_ClearMatchmakeOnlineGameWithPartyCompleteDelegate(const struct FScriptDelegate& MatchmakeOnlineGameWithPartyCompleteDelegate);
	void STATIC_AddMatchmakeOnlineGameWithPartyCompleteDelegate(const struct FScriptDelegate& MatchmakeOnlineGameWithPartyCompleteDelegate);
	void OnMatchmakeOnlineGameWithPartyComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool MatchmakeOnlineGameWithParty(unsigned char ScoutingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	void STATIC_ClearCreateOnlineGameWithPartyCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameWithPartyCompleteDelegate);
	void STATIC_AddCreateOnlineGameWithPartyCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameWithPartyCompleteDelegate);
	void OnCreateOnlineGameWithPartyComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool STATIC_CreateOnlineGameWithParty(unsigned char ScoutingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	void STATIC_ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void STATIC_AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool IsCurrentRoomOwner();
	bool SetRankedReadyStatus(bool bReady);
	bool IsJoinOperationInProgress();
	bool JoinOnlineGameByMatchingParams(const struct FQWord& RoomId, class UOnlineGameSettings** JoinedGameSettings);
	void OnMapChangeComplete();
	void OnMapChangePending();
	bool JoinOnlineGameBySessionHandle(unsigned char PlayerNum, const struct FName& SessionName, const struct FString& InSessionGuid);
	bool JoinOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void STATIC_ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void STATIC_AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(bool bWasSuccessful);
	bool STATIC_CancelFindOnlineGames();
	void STATIC_ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	void STATIC_AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	bool STATIC_FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	void STATIC_ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void STATIC_AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool STATIC_DestroyOnlineGame(const struct FName& SessionName);
	void STATIC_ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void STATIC_AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void OnUpdateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool STATIC_UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
	void STATIC_ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void STATIC_AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool STATIC_CreateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	class UOnlineGameSearch* GetGameSearch();
	class UOnlineGameSettings* GetGameSettings(const struct FName& SessionName);
	void OnFindOnlineGamesComplete(bool bWasSuccessful);
};


// Class IpDrv.OnlineImageDownloaderWebHelper
// 0x0000 (0x0060 - 0x0060)
class UOnlineImageDownloaderWebHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineImageDownloaderWebHelper");
		return ptr;
	}


	bool STATIC_SaveImageToTempDir(const struct FString& Filename, TArray<unsigned char> ImageData);
	bool STATIC_LoadImageFromTempDir(const struct FString& Filename, TArray<unsigned char>* ImageData);
};


// Class IpDrv.OnlinePlaylistManager
// 0x00D0 (0x0130 - 0x0060)
class UOnlinePlaylistManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<struct FPlaylist>                           Playlists;                                                // 0x0068(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             PlaylistFileNames;                                        // 0x0078(0x0010) (NeedCtorLink)
	TArray<struct FName>                               DatastoresToRefresh;                                      // 0x0088(0x0010) (Config, NeedCtorLink)
	int                                                DownloadCount;                                            // 0x0098(0x0004)
	int                                                SuccessfulCount;                                          // 0x009C(0x0004)
	int                                                VersionNumber;                                            // 0x00A0(0x0004) (Config)
	TArray<struct FPlaylistPopulation>                 PopulationData;                                           // 0x00A4(0x0010) (Config, NeedCtorLink)
	int                                                WorldwideTotalPlayers;                                    // 0x00B4(0x0004)
	int                                                RegionTotalPlayers;                                       // 0x00B8(0x0004)
	TScriptInterface<class UOnlineTitleFileInterface>  TitleFileInterface;                                       // 0x00BC(0x0010) (Transient)
	struct FString                                     PopulationFileName;                                       // 0x00CC(0x0010) (NeedCtorLink)
	float                                              NextPlaylistPopulationUpdateTime;                         // 0x00DC(0x0004) (Transient)
	float                                              PlaylistPopulationUpdateInterval;                         // 0x00E0(0x0004) (Config)
	int                                                MinPlaylistIdToReport;                                    // 0x00E4(0x0004) (Config)
	int                                                CurrentPlaylistId;                                        // 0x00E8(0x0004) (Transient)
	struct FName                                       EventsInterfaceName;                                      // 0x00EC(0x0008) (Config)
	int                                                DataCenterId;                                             // 0x00F4(0x0004) (Config)
	struct FString                                     DataCenterFileName;                                       // 0x00F8(0x0010) (NeedCtorLink)
	float                                              LastPlaylistDownloadTime;                                 // 0x0108(0x0004) (Transient)
	float                                              PlaylistRefreshInterval;                                  // 0x010C(0x0004) (Config)
	struct FScriptDelegate                             __OnReadPlaylistComplete__Delegate;                       // 0x0110(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0110(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPlaylistPopulationDataUpdated__Delegate;              // 0x0120(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0120(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlinePlaylistManager");
		return ptr;
	}


	void STATIC_ParseDataCenterId(TArray<unsigned char>* Data);
	void STATIC_OnReadDataCenterIdComplete(bool bWasSuccessful, const struct FString& Filename);
	void STATIC_ReadDataCenterId();
	void SendPlaylistPopulationUpdate(int NumPlayers);
	void STATIC_GetPopulationInfoFromPlaylist(int PlaylistId, int* WorldwideTotal, int* RegionTotal);
	void STATIC_ParsePlaylistPopulationData(TArray<unsigned char>* Data);
	void OnPlaylistPopulationDataUpdated();
	void STATIC_OnReadPlaylistPopulationComplete(bool bWasSuccessful, const struct FString& Filename);
	void STATIC_ReadPlaylistPopulation();
	void Reset();
	void STATIC_GetContentIdsFromPlaylist(int PlaylistId, TArray<int>* ContentIds);
	class UClass* STATIC_GetInventorySwapFromPlaylist(int PlaylistId, class UClass* SourceInventory);
	void STATIC_GetMapCycleFromPlaylist(int PlaylistId, TArray<struct FName>* MapCycle);
	struct FString STATIC_GetUrlFromPlaylist(int PlaylistId);
	int STATIC_GetMatchType(int PlaylistId);
	bool STATIC_IsPlaylistArbitrated(int PlaylistId);
	void STATIC_GetLoadBalanceIdFromPlaylist(int PlaylistId, int* LoadBalanceId);
	void STATIC_GetTeamInfoFromPlaylist(int PlaylistId, int* TeamSize, int* TeamCount, int* MaxPartySize);
	bool STATIC_PlaylistSupportsDedicatedServers(int PlaylistId);
	bool STATIC_HasAnyGameSettings(int PlaylistId);
	class UOnlineGameSettings* GetGameSettings(int PlaylistId, int GameSettingsId);
	void STATIC_FinalizePlaylistObjects();
	void STATIC_OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	bool STATIC_ShouldRefreshPlaylists();
	void STATIC_DetermineFilesToDownload();
	void STATIC_DownloadPlaylist();
	void OnReadPlaylistComplete(bool bWasSuccessful);
};


// Class IpDrv.PartyBeacon
// 0x0038 (0x0098 - 0x0060)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0060(0x0008) (Const, Native, NoExport)
	int                                                PartyBeaconPort;                                          // 0x0068(0x0004) (Config)
	struct FPointer                                    Socket;                                                   // 0x006C(0x0008) (Native, Transient)
	unsigned long                                      bIsInTick : 1;                                            // 0x0074(0x0004)
	unsigned long                                      bWantsDeferredDestroy : 1;                                // 0x0074(0x0004)
	unsigned long                                      bShouldTick : 1;                                          // 0x0074(0x0004)
	float                                              HeartbeatTimeout;                                         // 0x0078(0x0004) (Config)
	float                                              ElapsedHeartbeatTime;                                     // 0x007C(0x0004)
	struct FName                                       BeaconName;                                               // 0x0080(0x0008)
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                            // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeacon");
		return ptr;
	}


	void OnDestroyComplete();
	void DestroyBeacon();
};


// Class IpDrv.PartyBeaconClient
// 0x00A8 (0x0140 - 0x0098)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                                       // 0x0098(0x0010) (Const)
	struct FPartyReservation                           PendingRequest;                                           // 0x00A8(0x001C) (NeedCtorLink)
	TEnumAsByte<EPartyBeaconClientState>               ClientBeaconState;                                        // 0x00C4(0x0001)
	TEnumAsByte<EPartyBeaconClientRequest>             ClientBeaconRequestType;                                  // 0x00C5(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00C6(0x0002) MISSED OFFSET
	float                                              ReservationRequestTimeout;                                // 0x00C8(0x0004) (Config)
	float                                              ReservationRequestElapsedTime;                            // 0x00CC(0x0004)
	struct FString                                     ResolverClassName;                                        // 0x00D0(0x0010) (Config, NeedCtorLink)
	class UClass*                                      ResolverClass;                                            // 0x00E0(0x0008)
	class UClientBeaconAddressResolver*                Resolver;                                                 // 0x00E8(0x0008)
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;                 // 0x00F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;                    // 0x0100(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0100(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;                      // 0x0110(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0110(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                                // 0x0120(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0120(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                           // 0x0130(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0130(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeaconClient");
		return ptr;
	}


	void DestroyBeacon();
	bool STATIC_CancelReservation(const struct FUniqueNetId& CancellingPartyLeader);
	bool STATIC_RequestReservationUpdate(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* PlayersToAdd);
	bool STATIC_RequestReservation(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* Players);
	void OnHostHasCancelled();
	void OnHostIsReady();
	void OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo);
	void OnReservationCountUpdated(int ReservationRemaining);
	void OnReservationRequestComplete(TEnumAsByte<EPartyReservationResult> ReservationResult);
};


// Class IpDrv.PartyBeaconHost
// 0x007C (0x0114 - 0x0098)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray<struct FClientBeaconConnection>             Clients;                                                  // 0x0098(0x0010) (Const, NeedCtorLink)
	int                                                NumTeams;                                                 // 0x00A8(0x0004) (Const)
	int                                                NumPlayersPerTeam;                                        // 0x00AC(0x0004) (Const)
	int                                                NumReservations;                                          // 0x00B0(0x0004) (Const)
	int                                                NumConsumedReservations;                                  // 0x00B4(0x0004) (Const)
	TArray<struct FPartyReservation>                   Reservations;                                             // 0x00B8(0x0010) (Const, NeedCtorLink)
	struct FName                                       OnlineSessionName;                                        // 0x00C8(0x0008)
	int                                                ConnectionBacklog;                                        // 0x00D0(0x0004) (Config)
	int                                                ForceTeamNum;                                             // 0x00D4(0x0004) (Const)
	int                                                ReservedHostTeamNum;                                      // 0x00D8(0x0004) (Const)
	unsigned long                                      bBestFitTeamAssignment : 1;                               // 0x00DC(0x0004)
	TEnumAsByte<EPartyBeaconHostState>                 BeaconState;                                              // 0x00E0(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             __OnReservationChange__Delegate;                          // 0x00E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E1(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                           // 0x00F4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00F4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;                 // 0x0104(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0104(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeaconHost");
		return ptr;
	}


	int STATIC_GetMaxAvailableTeamSize();
	void STATIC_GetPartyLeaders(TArray<struct FUniqueNetId>* PartyLeaders);
	void STATIC_GetPlayers(TArray<struct FUniqueNetId>* Players);
	void STATIC_AppendReservationSkillsToSearch(class UOnlineGameSearch* Search);
	void UnregisterParty(const struct FUniqueNetId& PartyLeader);
	void UnregisterPartyMembers();
	void RegisterPartyMembers();
	bool STATIC_AreReservationsFull();
	void STATIC_TellClientsHostHasCancelled();
	void STATIC_TellClientsHostIsReady();
	void STATIC_TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo);
	void DestroyBeacon();
	void OnClientCancellationReceived(const struct FUniqueNetId& PartyLeader);
	void OnReservationsFull();
	void OnReservationChange();
	void STATIC_HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty);
	int STATIC_GetExistingReservation(struct FUniqueNetId* PartyLeader);
	TEnumAsByte<EPartyReservationResult> STATIC_UpdatePartyReservationEntry(const struct FUniqueNetId& PartyLeader, TArray<struct FPlayerReservation>* PlayerMembers);
	TEnumAsByte<EPartyReservationResult> STATIC_AddPartyReservationEntry(const struct FUniqueNetId& PartyLeader, int TeamNum, bool bIsHost, TArray<struct FPlayerReservation>* PlayerMembers);
	bool STATIC_InitHostBeacon(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, const struct FName& InSessionName, int InForceTeamNum);
	void STATIC_PauseReservationRequests(bool bPause);
};


// Class IpDrv.TcpipConnection
// 0x002C (0xB130 - 0xB104)
class UTcpipConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0xB104(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpipConnection");
		return ptr;
	}

};


// Class IpDrv.TcpNetDriver
// 0x0020 (0x0228 - 0x0208)
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned long                                      AllowPlayerPortUnreach : 1;                               // 0x0208(0x0004) (Config)
	unsigned long                                      UnknownData00 : 31;                                       // 0x0208(0x0001)
	unsigned long                                      LogPortUnreach : 1;                                       // 0x020C(0x0004) (Config)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0210(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpNetDriver");
		return ptr;
	}

};


// Class IpDrv.WebRequest
// 0x00E8 (0x0148 - 0x0060)
class UWebRequest : public UObject
{
public:
	struct FString                                     RemoteAddr;                                               // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     URI;                                                      // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     UserName;                                                 // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     Password;                                                 // 0x0090(0x0010) (NeedCtorLink)
	int                                                ContentLength;                                            // 0x00A0(0x0004)
	struct FString                                     ContentType;                                              // 0x00A4(0x0010) (NeedCtorLink)
	TEnumAsByte<ERequestType>                          RequestType;                                              // 0x00B4(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	struct FMap_Mirror                                 HeaderMap;                                                // 0x00B8(0x0048) (Const, Native)
	struct FMap_Mirror                                 VariableMap;                                              // 0x0100(0x0048) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebRequest");
		return ptr;
	}


	int STATIC_GetHexDigit(const struct FString& D);
	void STATIC_DecodeFormData(const struct FString& Data, int MaxValueLength, int MaxLineLength);
	void STATIC_ProcessHeaderString(const struct FString& S);
	void STATIC_Dump();
	void STATIC_GetVariables(TArray<struct FString>* varNames);
	struct FString STATIC_GetVariableNumber(const struct FString& VariableName, int Number, const struct FString& DefaultValue);
	int STATIC_GetVariableCount(const struct FString& VariableName);
	struct FString STATIC_GetVariable(const struct FString& VariableName, const struct FString& DefaultValue);
	void STATIC_AddVariable(const struct FString& VariableName, const struct FString& Value);
	void GetHeaders(TArray<struct FString>* Headers);
	struct FString GetHeader(const struct FString& HeaderName, const struct FString& DefaultValue);
	void STATIC_AddHeader(const struct FString& HeaderName, const struct FString& Value);
	struct FString STATIC_EncodeBase64(const struct FString& Decoded);
	struct FString STATIC_DecodeBase64(const struct FString& Encoded);
};


// Class IpDrv.WebResponse
// 0x0084 (0x00E4 - 0x0060)
class UWebResponse : public UObject
{
public:
	TArray<struct FString>                             Headers;                                                  // 0x0060(0x0010) (NeedCtorLink)
	struct FMap_Mirror                                 ReplacementMap;                                           // 0x0070(0x0048) (Const, Native)
	struct FString                                     IncludePath;                                              // 0x00B8(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     CharSet;                                                  // 0x00C8(0x0010) (Const, Localized, NeedCtorLink)
	class AWebConnection*                              Connection;                                               // 0x00D8(0x0008)
	unsigned long                                      bSentText : 1;                                            // 0x00E0(0x0004)
	unsigned long                                      bSentResponse : 1;                                        // 0x00E0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebResponse");
		return ptr;
	}


	bool STATIC_SentResponse();
	bool SentText();
	void STATIC_Redirect(const struct FString& URL);
	void STATIC_SendStandardHeaders(const struct FString& ContentType, bool bCache);
	void STATIC_HTTPError(int ErrorNum, const struct FString& Data);
	void STATIC_SendHeaders();
	void STATIC_AddHeader(const struct FString& Header, bool bReplace);
	void STATIC_HTTPHeader(const struct FString& Header);
	void STATIC_HttpResponse(const struct FString& Header);
	void STATIC_FailAuthentication(const struct FString& Realm);
	bool STATIC_SendCachedFile(const struct FString& Filename, const struct FString& ContentType);
	void SendBinary(int Count, unsigned char B);
	void SendText(const struct FString& Text, bool bNoCRLF);
	void STATIC_Dump();
	struct FString STATIC_GetHTTPExpiration(int OffsetSeconds);
	struct FString STATIC_LoadParsedUHTM(const struct FString& Filename);
	bool STATIC_IncludeBinaryFile(const struct FString& Filename);
	bool STATIC_IncludeUHTM(const struct FString& Filename);
	void STATIC_ClearSubst();
	void STATIC_Subst(const struct FString& Variable, const struct FString& Value, bool bClear);
	bool STATIC_FileExists(const struct FString& Filename);
};


// Class IpDrv.OnlinePlaylistProvider
// 0x0028 (0x00BC - 0x0094)
class UOnlinePlaylistProvider : public UUIResourceDataProvider
{
public:
	int                                                PlaylistId;                                               // 0x0094(0x0004) (Config)
	TArray<struct FName>                               PlaylistGameTypeNames;                                    // 0x0098(0x0010) (Config, NeedCtorLink)
	struct FString                                     DisplayName;                                              // 0x00A8(0x0010) (Const, Config, Localized, NeedCtorLink)
	int                                                Priority;                                                 // 0x00B8(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlinePlaylistProvider");
		return ptr;
	}

};


// Class IpDrv.UIDataStore_OnlinePlaylists
// 0x0060 (0x00F8 - 0x0098)
class UUIDataStore_OnlinePlaylists : public UUIDataStore
{
public:
	struct FString                                     ProviderClassName;                                        // 0x0098(0x0010) (Config, NeedCtorLink)
	class UClass*                                      ProviderClass;                                            // 0x00A8(0x0008) (Transient)
	TArray<class UUIResourceDataProvider*>             RankedDataProviders;                                      // 0x00B0(0x0010) (Const, NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             UnrankedDataProviders;                                    // 0x00C0(0x0010) (Const, NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             RecModeDataProviders;                                     // 0x00D0(0x0010) (Const, NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             PrivateDataProviders;                                     // 0x00E0(0x0010) (Const, NeedCtorLink)
	class UOnlinePlaylistManager*                      PlaylistMan;                                              // 0x00F0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.UIDataStore_OnlinePlaylists");
		return ptr;
	}


	int GetMatchTypeForPlaylistId(int PlaylistId);
	class UOnlinePlaylistProvider* STATIC_GetOnlinePlaylistProvider(const struct FName& ProviderTag, int PlaylistId, int* ProviderIndex);
	bool STATIC_GetPlaylistProvider(const struct FName& ProviderTag, int ProviderIndex, class UUIResourceDataProvider** out_Provider);
	bool GetResourceProviders(const struct FName& ProviderTag, TArray<class UUIResourceDataProvider*>* out_Providers);
	void Init();
};


// Class IpDrv.WebApplication
// 0x0020 (0x0080 - 0x0060)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                                // 0x0060(0x0008)
	class AWebServer*                                  WebServer;                                                // 0x0068(0x0008)
	struct FString                                     Path;                                                     // 0x0070(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebApplication");
		return ptr;
	}


	void STATIC_PostQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Query(class UWebRequest* Request, class UWebResponse* Response);
	bool STATIC_PreQuery(class UWebRequest* Request, class UWebResponse* Response);
	void STATIC_CleanupApp();
	void STATIC_Cleanup();
	void Init();
};


// Class IpDrv.WebServer
// 0x01CC (0x04B0 - 0x02E4)
class AWebServer : public ATcpLink
{
public:
	struct FString                                     ServerName;                                               // 0x02E4(0x0010) (Config, NeedCtorLink)
	struct FString                                     Applications[0xA];                                        // 0x02F4(0x0010) (Config, NeedCtorLink)
	struct FString                                     ApplicationPaths[0xA];                                    // 0x0394(0x0010) (Config, NeedCtorLink)
	unsigned long                                      bEnabled : 1;                                             // 0x0434(0x0004) (Config)
	int                                                ListenPort;                                               // 0x0438(0x0004) (Config)
	int                                                MaxConnections;                                           // 0x043C(0x0004) (Config)
	int                                                DefaultApplication;                                       // 0x0440(0x0004) (Config)
	int                                                ExpirationSeconds;                                        // 0x0444(0x0004) (Config)
	struct FString                                     ServerURL;                                                // 0x0448(0x0010) (NeedCtorLink)
	class UWebApplication*                             ApplicationObjects[0xA];                                  // 0x0458(0x0008)
	int                                                ConnectionCount;                                          // 0x04A8(0x0004)
	int                                                ConnID;                                                   // 0x04AC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebServer");
		return ptr;
	}


	class UWebApplication* STATIC_GetApplication(const struct FString& URI, struct FString* SubURI);
	void LostChild(class AActor* C);
	void GainedChild(class AActor* C);
	void Destroyed();
	void PostBeginPlay();
};


// Class IpDrv.HelloWeb
// 0x0000 (0x0080 - 0x0080)
class UHelloWeb : public UWebApplication
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HelloWeb");
		return ptr;
	}


	void Query(class UWebRequest* Request, class UWebResponse* Response);
	void Init();
};


// Class IpDrv.ImageServer
// 0x0000 (0x0080 - 0x0080)
class UImageServer : public UWebApplication
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.ImageServer");
		return ptr;
	}


	void Query(class UWebRequest* Request, class UWebResponse* Response);
};


// Class IpDrv.McpServiceConfig
// 0x0050 (0x00B0 - 0x0060)
class UMcpServiceConfig : public UObject
{
public:
	struct FString                                     Protocol;                                                 // 0x0060(0x0010) (Config, NeedCtorLink)
	struct FString                                     Domain;                                                   // 0x0070(0x0010) (Config, NeedCtorLink)
	struct FString                                     TitleId;                                                  // 0x0080(0x0010) (Config, NeedCtorLink)
	struct FString                                     AppKey;                                                   // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     AppSecret;                                                // 0x00A0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpServiceConfig");
		return ptr;
	}


	struct FString STATIC_GetUserAuthTicket(const struct FString& McpId);
};


// Class IpDrv.McpClashMobBase
// 0x0070 (0x00E8 - 0x0078)
class UMcpClashMobBase : public UMcpServiceBase
{
public:
	struct FString                                     McpClashMobClassName;                                     // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnQueryChallengeListComplete__Delegate;                 // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDownloadChallengeFileComplete__Delegate;              // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0098(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAcceptChallengeComplete__Delegate;                    // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryChallengeUserStatusComplete__Delegate;           // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUpdateChallengeUserProgressComplete__Delegate;        // 0x00C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00C8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUpdateChallengeUserRewardComplete__Delegate;          // 0x00D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00D8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpClashMobBase");
		return ptr;
	}


	void STATIC_UpdateChallengeUserReward(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, int UserReward);
	void STATIC_OnUpdateChallengeUserRewardComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error);
	void STATIC_UpdateChallengeUserProgress(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, bool bDidComplete, int GoalProgress);
	void STATIC_OnUpdateChallengeUserProgressComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error);
	void STATIC_GetChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus);
	void STATIC_QueryChallengeMultiUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, TArray<struct FString>* UserIdsToRead);
	void STATIC_QueryChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId);
	void STATIC_OnQueryChallengeUserStatusComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error);
	void STATIC_AcceptChallenge(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId);
	void STATIC_OnAcceptChallengeComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error);
	void STATIC_DeleteCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void STATIC_ClearCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void STATIC_GetChallengeFileContents(const struct FString& UniqueChallengeId, const struct FString& DLName, TArray<unsigned char>* OutFileContents);
	void STATIC_DownloadChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void STATIC_GetChallengeFileList(const struct FString& UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>* OutChallengeFiles);
	void STATIC_OnDownloadChallengeFileComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& DLName, const struct FString& Filename, const struct FString& Error);
	void STATIC_GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>* OutChallengeEvents);
	void STATIC_QueryChallengeList();
	void STATIC_OnQueryChallengeListComplete(bool bWasSuccessful, const struct FString& Error);
	class UMcpClashMobBase* STATIC_CreateInstance();
};


// Class IpDrv.McpClashMobFileDownload
// 0x0000 (0x0114 - 0x0114)
class UMcpClashMobFileDownload : public UOnlineTitleFileDownloadWeb
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpClashMobFileDownload");
		return ptr;
	}


	struct FString STATIC_GetUrlForFile(const struct FString& Filename);
};


// Class IpDrv.McpClashMobManager
// 0x0140 (0x0228 - 0x00E8)
class UMcpClashMobManager : public UMcpClashMobBase
{
public:
	struct FString                                     ChallengeListUrl;                                         // 0x00E8(0x0010) (Config, NeedCtorLink)
	struct FString                                     ChallengeStatusUrl;                                       // 0x00F8(0x0010) (Config, NeedCtorLink)
	struct FString                                     ChallengeMultiStatusUrl;                                  // 0x0108(0x0010) (Config, NeedCtorLink)
	struct FString                                     AcceptChallengeUrl;                                       // 0x0118(0x0010) (Config, NeedCtorLink)
	struct FString                                     UpdateChallengeProgressUrl;                               // 0x0128(0x0010) (Config, NeedCtorLink)
	struct FString                                     UpdateRewardProgressUrl;                                  // 0x0138(0x0010) (Config, NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestChallengeList;                                 // 0x0148(0x0008)
	TArray<struct FMcpChallengeUserRequest>            ChallengeUserRequests;                                    // 0x0150(0x0010) (NeedCtorLink)
	TArray<struct FMcpClashMobChallengeEvent>          ChallengeEvents;                                          // 0x0160(0x0010) (NeedCtorLink)
	TArray<struct FMcpClashMobChallengeUserStatus>     ChallengeUserStatus;                                      // 0x0170(0x0010) (NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             TempChallengeUserStatus;                                  // 0x0180(0x0080) (NeedCtorLink)
	TArray<struct FMcpClashMobChallengeUserStatus>     TempChallengeUserStatusArray;                             // 0x0200(0x0010) (NeedCtorLink)
	TScriptInterface<class UOnlineTitleFileCacheInterface> FileCache;                                                // 0x0210(0x0010)
	class UMcpClashMobFileDownload*                    FileDownloader;                                           // 0x0220(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpClashMobManager");
		return ptr;
	}


	void STATIC_OnUpdateChallengeUserRewardHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_UpdateChallengeUserReward(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, int UserReward);
	void STATIC_OnUpdateChallengeUserProgressHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_UpdateChallengeUserProgress(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, bool bDidComplete, int GoalProgress);
	void STATIC_GetChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus);
	void STATIC_OnQueryChallengeMultiStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_QueryChallengeMultiUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, TArray<struct FString>* UserIdsToRead);
	void STATIC_OnQueryChallengeStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_QueryChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId);
	void STATIC_OnAcceptChallengeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_AcceptChallenge(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId);
	void STATIC_DeleteCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void STATIC_ClearCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void STATIC_GetChallengeFileContents(const struct FString& UniqueChallengeId, const struct FString& DLName, TArray<unsigned char>* OutFileContents);
	void STATIC_OnDownloadMcpFileComplete(bool bWasSuccessful, const struct FString& DLName);
	void STATIC_OnLoadCachedFileComplete(bool bWasSuccessful, const struct FString& DLName);
	void STATIC_DownloadChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void STATIC_GetChallengeFileList(const struct FString& UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>* OutChallengeFiles);
	void STATIC_GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>* OutChallengeEvents);
	void STATIC_OnQueryChallengeListHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_QueryChallengeList();
	void Init();
};


// Class IpDrv.McpGroupsBase
// 0x00B0 (0x0128 - 0x0078)
class UMcpGroupsBase : public UMcpServiceBase
{
public:
	struct FString                                     McpGroupsManagerClassName;                                // 0x0078(0x0010) (Config, NeedCtorLink)
	TArray<struct FMcpGroupList>                       GroupLists;                                               // 0x0088(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateGroupComplete__Delegate;                        // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0098(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteGroupComplete__Delegate;                        // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryGroupsComplete__Delegate;                        // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryGroupMembersComplete__Delegate;                  // 0x00C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00C8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAddGroupMembersComplete__Delegate;                    // 0x00D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00D8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRemoveGroupMembersComplete__Delegate;                 // 0x00E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00E8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteAllGroupsComplete__Delegate;                    // 0x00F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00F8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryGroupInvitesComplete__Delegate;                  // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0108(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAcceptGroupInviteComplete__Delegate;                  // 0x0118(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0118(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpGroupsBase");
		return ptr;
	}


	void STATIC_OnAcceptGroupInviteComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error);
	void STATIC_AcceptGroupInvite(const struct FString& UniqueUserId, const struct FString& GroupID, bool bShouldAccept);
	void STATIC_GetGroupInviteList(const struct FString& UserId, struct FMcpGroupList* InviteList);
	void STATIC_OnQueryGroupInvitesComplete(bool bWasSuccessful, const struct FString& Error);
	void STATIC_QueryGroupInvites(const struct FString& UniqueUserId);
	void STATIC_OnDeleteAllGroupsComplete(const struct FString& RequesterId, bool bWasSuccessful, const struct FString& Error);
	void STATIC_DeleteAllGroups(const struct FString& OwnerId);
	void STATIC_OnRemoveGroupMembersComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error);
	void STATIC_RemoveGroupMembers(const struct FString& OwnerId, const struct FString& GroupID, TArray<struct FString>* MemberIds);
	void STATIC_OnAddGroupMembersComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error);
	void STATIC_AddGroupMembers(const struct FString& OwnerId, const struct FString& GroupID, bool bRequiresAcceptance, TArray<struct FString>* MemberIds);
	void STATIC_GetGroupMembers(const struct FString& GroupID, TArray<struct FMcpGroupMember>* GroupMembers);
	void STATIC_OnQueryGroupMembersComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error);
	void STATIC_QueryGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID);
	void STATIC_GetGroupList(const struct FString& UserId, struct FMcpGroupList* GroupList);
	void STATIC_OnQueryGroupsComplete(const struct FString& UserId, bool bWasSuccessful, const struct FString& Error);
	void STATIC_QueryGroups(const struct FString& RequesterId);
	void STATIC_OnDeleteGroupComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error);
	void STATIC_DeleteGroup(const struct FString& UniqueUserId, const struct FString& GroupID);
	void STATIC_OnCreateGroupComplete(const struct FMcpGroup& Group, bool bWasSuccessful, const struct FString& Error);
	void STATIC_CreateGroup(const struct FString& OwnerId, const struct FString& GroupName);
	class UMcpGroupsBase* STATIC_CreateInstance();
};


// Class IpDrv.McpGroupsManager
// 0x00D0 (0x01F8 - 0x0128)
class UMcpGroupsManager : public UMcpGroupsBase
{
public:
	struct FString                                     CreateGroupUrl;                                           // 0x0128(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteGroupUrl;                                           // 0x0138(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryGroupsUrl;                                           // 0x0148(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryGroupMembersUrl;                                     // 0x0158(0x0010) (Config, NeedCtorLink)
	struct FString                                     AddGroupMembersUrl;                                       // 0x0168(0x0010) (Config, NeedCtorLink)
	struct FString                                     RemoveGroupMembersUrl;                                    // 0x0178(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteAllGroupsUrl;                                       // 0x0188(0x0010) (Config, NeedCtorLink)
	struct FString                                     AcceptGroupInviteUrl;                                     // 0x0198(0x0010) (Config, NeedCtorLink)
	struct FString                                     RejectGroupInviteUrl;                                     // 0x01A8(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupsRequestComplete__Delegate;                 // 0x01B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryGroupMembersRequestComplete__Delegate;           // 0x01C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01C8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAddGroupMembersRequestComplete__Delegate;             // 0x01D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01D8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAcceptGroupInviteRequestComplete__Delegate;           // 0x01E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01E8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpGroupsManager");
		return ptr;
	}


	void STATIC_CacheGroupMember(const struct FString& MemberId, const struct FString& GroupID, TEnumAsByte<EMcpGroupAcceptState> AcceptState);
	void STATIC_CacheGroup(const struct FString& RequesterId, const struct FMcpGroup& Group);
	void STATIC_OnAcceptGroupInviteRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void STATIC_AcceptGroupInvite(const struct FString& UniqueUserId, const struct FString& GroupID, bool bShouldAccept);
	void STATIC_OnDeleteAllGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void STATIC_DeleteAllGroups(const struct FString& UniqueUserId);
	void STATIC_OnRemoveGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void STATIC_RemoveGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID, TArray<struct FString>* MemberIds);
	void STATIC_OnAddGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void STATIC_AddGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID, bool bRequiresAcceptance, TArray<struct FString>* MemberIds);
	void STATIC_GetGroupMembers(const struct FString& GroupID, TArray<struct FMcpGroupMember>* GroupMembers);
	void STATIC_OnQueryGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void STATIC_QueryGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID);
	void STATIC_GetGroupList(const struct FString& UserId, struct FMcpGroupList* GroupList);
	void STATIC_OnQueryGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void STATIC_QueryGroups(const struct FString& RequesterId);
	void STATIC_OnDeleteGroupRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void STATIC_DeleteGroup(const struct FString& UniqueUserId, const struct FString& GroupID);
	void STATIC_OnCreateGroupRequestComplete(class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void STATIC_CreateGroup(const struct FString& UniqueUserId, const struct FString& GroupName);
};


// Class IpDrv.McpIdMappingBase
// 0x0030 (0x00A8 - 0x0078)
class UMcpIdMappingBase : public UMcpServiceBase
{
public:
	struct FString                                     McpIdMappingClassName;                                    // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnAddMappingComplete__Delegate;                         // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryMappingsComplete__Delegate;                      // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0098(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpIdMappingBase");
		return ptr;
	}


	void STATIC_GetIdMappings(const struct FString& ExternalType, TArray<struct FMcpIdMapping>* IDMappings);
	void STATIC_OnQueryMappingsComplete(const struct FString& ExternalType, bool bWasSuccessful, const struct FString& Error);
	void STATIC_QueryMappings(const struct FString& ExternalType, TArray<struct FString>* ExternalIds);
	void STATIC_OnAddMappingComplete(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType, bool bWasSuccessful, const struct FString& Error);
	void STATIC_AddMapping(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType);
	class UMcpIdMappingBase* STATIC_CreateInstance();
};


// Class IpDrv.McpIdMappingManager
// 0x0050 (0x00F8 - 0x00A8)
class UMcpIdMappingManager : public UMcpIdMappingBase
{
public:
	TArray<struct FMcpIdMapping>                       AccountMappings;                                          // 0x00A8(0x0010) (NeedCtorLink)
	struct FString                                     AddMappingUrl;                                            // 0x00B8(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryMappingUrl;                                          // 0x00C8(0x0010) (Config, NeedCtorLink)
	TArray<struct FAddMappingRequest>                  AddMappingRequests;                                       // 0x00D8(0x0010) (NeedCtorLink)
	TArray<struct FQueryMappingRequest>                QueryMappingRequests;                                     // 0x00E8(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpIdMappingManager");
		return ptr;
	}


	void STATIC_GetIdMappings(const struct FString& ExternalType, TArray<struct FMcpIdMapping>* IDMappings);
	void STATIC_OnQueryMappingsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_QueryMappings(const struct FString& ExternalType, TArray<struct FString>* ExternalIds);
	void STATIC_OnAddMappingRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_AddMapping(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType);
};


// Class IpDrv.McpManagedValueManagerBase
// 0x0050 (0x00C8 - 0x0078)
class UMcpManagedValueManagerBase : public UMcpServiceBase
{
public:
	struct FString                                     McpManagedValueManagerClassName;                          // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;                     // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadSaveSlotComplete__Delegate;                       // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0098(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUpdateValueComplete__Delegate;                        // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteValueComplete__Delegate;                        // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpManagedValueManagerBase");
		return ptr;
	}


	void STATIC_OnDeleteValueComplete(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, bool bWasSuccessful, const struct FString& Error);
	void STATIC_DeleteValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId);
	void STATIC_OnUpdateValueComplete(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value, bool bWasSuccessful, const struct FString& Error);
	void STATIC_UpdateValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value);
	int STATIC_GetValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId);
	TArray<struct FManagedValue> STATIC_GetValues(const struct FString& McpId, const struct FString& SaveSlot);
	void STATIC_OnReadSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlot, bool bWasSuccessful, const struct FString& Error);
	void STATIC_ReadSaveSlot(const struct FString& McpId, const struct FString& SaveSlot);
	void STATIC_OnCreateSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlot, bool bWasSuccessful, const struct FString& Error);
	void STATIC_CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlot);
	class UMcpManagedValueManagerBase* STATIC_CreateInstance();
};


// Class IpDrv.McpManagedValueManager
// 0x0090 (0x0158 - 0x00C8)
class UMcpManagedValueManager : public UMcpManagedValueManagerBase
{
public:
	struct FString                                     CreateSaveSlotUrl;                                        // 0x00C8(0x0010) (Config, NeedCtorLink)
	struct FString                                     ReadSaveSlotUrl;                                          // 0x00D8(0x0010) (Config, NeedCtorLink)
	struct FString                                     UpdateValueUrl;                                           // 0x00E8(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteValueUrl;                                           // 0x00F8(0x0010) (Config, NeedCtorLink)
	TArray<struct FManagedValueSaveSlot>               SaveSlots;                                                // 0x0108(0x0010) (NeedCtorLink)
	TArray<struct UMcpManagedValueManager_FSaveSlotRequestState> CreateSaveSlotRequests;                                   // 0x0118(0x0010) (NeedCtorLink)
	TArray<struct UMcpManagedValueManager_FSaveSlotRequestState> ReadSaveSlotRequests;                                     // 0x0128(0x0010) (NeedCtorLink)
	TArray<struct FValueRequestState>                  UpdateValueRequests;                                      // 0x0138(0x0010) (NeedCtorLink)
	TArray<struct FValueRequestState>                  DeleteValueRequests;                                      // 0x0148(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpManagedValueManager");
		return ptr;
	}


	void STATIC_OnDeleteValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_DeleteValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId);
	void STATIC_OnUpdateValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_UpdateValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value);
	int STATIC_GetValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId);
	TArray<struct FManagedValue> STATIC_GetValues(const struct FString& McpId, const struct FString& SaveSlot);
	void STATIC_OnReadSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_ReadSaveSlot(const struct FString& McpId, const struct FString& SaveSlot);
	void STATIC_ParseValuesForSaveSlot(const struct FString& McpId, const struct FString& SaveSlot, const struct FString& JsonPayload);
	int STATIC_FindSaveSlotIndex(const struct FString& McpId, const struct FString& SaveSlot);
	void STATIC_OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlot);
};


// Class IpDrv.McpServerTimeBase
// 0x0020 (0x0098 - 0x0078)
class UMcpServerTimeBase : public UMcpServiceBase
{
public:
	struct FString                                     McpServerTimeClassName;                                   // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnQueryServerTimeComplete__Delegate;                    // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpServerTimeBase");
		return ptr;
	}


	struct FString STATIC_GetLastServerTime();
	void STATIC_OnQueryServerTimeComplete(bool bWasSuccessful, const struct FString& DateTimeStr, const struct FString& Error);
	void STATIC_QueryServerTime();
	class UMcpServerTimeBase* STATIC_CreateInstance();
};


// Class IpDrv.McpServerTimeManager
// 0x0028 (0x00C0 - 0x0098)
class UMcpServerTimeManager : public UMcpServerTimeBase
{
public:
	struct FString                                     TimeStampUrl;                                             // 0x0098(0x0010) (Config, NeedCtorLink)
	struct FString                                     LastTimeStamp;                                            // 0x00A8(0x0010) (NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestServerTime;                                    // 0x00B8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpServerTimeManager");
		return ptr;
	}


	struct FString STATIC_GetLastServerTime();
	void STATIC_OnQueryServerTimeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_QueryServerTime();
};


// Class IpDrv.McpUserInventoryBase
// 0x00B0 (0x0128 - 0x0078)
class UMcpUserInventoryBase : public UMcpServiceBase
{
public:
	struct FString                                     McpUserInventoryClassName;                                // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;                     // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteSaveSlotComplete__Delegate;                     // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0098(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQuerySaveSlotListComplete__Delegate;                  // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryInventoryItemsComplete__Delegate;                // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPurchaseItemComplete__Delegate;                       // 0x00C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00C8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSellItemComplete__Delegate;                           // 0x00D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00D8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnEarnItemComplete__Delegate;                           // 0x00E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00E8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnConsumeItemComplete__Delegate;                        // 0x00F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00F8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteItemComplete__Delegate;                         // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0108(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRecordIapComplete__Delegate;                          // 0x0118(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0118(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserInventoryBase");
		return ptr;
	}


	void STATIC_OnRecordIapComplete(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void STATIC_RecordIap(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& Receipt);
	void STATIC_OnDeleteItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, bool bWasSuccessful, const struct FString& Error);
	void STATIC_DeleteItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int StoreVersion);
	void STATIC_OnConsumeItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void STATIC_ConsumeItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion);
	void STATIC_OnEarnItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void STATIC_EarnItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, int Quantity, int StoreVersion);
	void STATIC_OnSellItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void STATIC_SellItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion, TArray<struct FMcpInventoryItemContainer>* ExpectedResultItems);
	void STATIC_OnPurchaseItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void STATIC_PurchaseItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> PurchaseItemIds, int Quantity, int StoreVersion, float Scalar);
	bool STATIC_GetInventoryItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, struct FMcpInventoryItem* OutInventoryItem);
	void GetInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FMcpInventoryItem>* OutInventoryItems);
	void STATIC_OnQueryInventoryItemsComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error);
	void STATIC_QueryInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId);
	void STATIC_OnQuerySaveSlotListComplete(const struct FString& McpId, bool bWasSuccessful, const struct FString& Error);
	TArray<struct FString> STATIC_GetSaveSlotList(const struct FString& McpId);
	void STATIC_QuerySaveSlotList(const struct FString& McpId);
	void STATIC_OnDeleteSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error);
	void STATIC_DeleteSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId);
	void STATIC_OnCreateSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error);
	void STATIC_CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ParentSaveSlotId);
	class UMcpUserInventoryBase* STATIC_CreateInstance();
};


// Class IpDrv.McpUserInventoryManager
// 0x00F0 (0x0218 - 0x0128)
class UMcpUserInventoryManager : public UMcpUserInventoryBase
{
public:
	struct FString                                     CreateSaveSlotUrl;                                        // 0x0128(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteSaveSlotUrl;                                        // 0x0138(0x0010) (Config, NeedCtorLink)
	struct FString                                     ListSaveSlotUrl;                                          // 0x0148(0x0010) (Config, NeedCtorLink)
	struct FString                                     ListItemsUrl;                                             // 0x0158(0x0010) (Config, NeedCtorLink)
	struct FString                                     PurchaseItemUrl;                                          // 0x0168(0x0010) (Config, NeedCtorLink)
	struct FString                                     SellItemUrl;                                              // 0x0178(0x0010) (Config, NeedCtorLink)
	struct FString                                     EarnItemUrl;                                              // 0x0188(0x0010) (Config, NeedCtorLink)
	struct FString                                     ConsumeItemUrl;                                           // 0x0198(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteItemUrl;                                            // 0x01A8(0x0010) (Config, NeedCtorLink)
	struct FString                                     IapRecordUrl;                                             // 0x01B8(0x0010) (Config, NeedCtorLink)
	TArray<struct FMcpInventorySaveSlot>               SaveSlots;                                                // 0x01C8(0x0010) (NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> SaveSlotRequests;                                         // 0x01D8(0x0010) (NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> ListSaveSlotRequests;                                     // 0x01E8(0x0010) (NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> ListItemsRequests;                                        // 0x01F8(0x0010) (NeedCtorLink)
	TArray<struct FInventoryItemRequestState>          ItemRequests;                                             // 0x0208(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserInventoryManager");
		return ptr;
	}


	void STATIC_OnRecordIapRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_RecordIap(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& Receipt);
	void STATIC_OnDeleteItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_DeleteItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int StoreVersion);
	void STATIC_OnConsumeItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_ConsumeItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion);
	void STATIC_OnEarnItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_EarnItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, int Quantity, int StoreVersion);
	void STATIC_OnSellItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_SellItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion, TArray<struct FMcpInventoryItemContainer>* ExpectedResultItems);
	void STATIC_OnPurchaseItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_PurchaseItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> PurchaseItemIds, int Quantity, int StoreVersion, float Scalar);
	int STATIC_FindItemRequest(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ItemId, TArray<struct FInventoryItemRequestState>* InItemRequests);
	int STATIC_FindSaveSlotRequest(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState>* InSaveSlotRequests);
	int STATIC_FindSaveSlotIndex(const struct FString& McpId, const struct FString& SaveSlotId);
	void STATIC_ParseSaveSlotList(const struct FString& McpId, const struct FString& JsonPayload);
	TArray<struct FString> STATIC_ParseInventoryForSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& JsonPayload);
	bool STATIC_GetInventoryItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, struct FMcpInventoryItem* OutInventoryItem);
	void GetInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FMcpInventoryItem>* OutInventoryItems);
	void STATIC_OnQueryInventoryItemsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_QueryInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId);
	TArray<struct FString> STATIC_GetSaveSlotList(const struct FString& McpId);
	void STATIC_OnQuerySaveSlotListRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_QuerySaveSlotList(const struct FString& McpId);
	void STATIC_OnDeleteSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_DeleteSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId);
	void STATIC_OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ParentSaveSlotId);
};


// Class IpDrv.McpUserManagerBase
// 0x0040 (0x00B8 - 0x0078)
class UMcpUserManagerBase : public UMcpServiceBase
{
public:
	struct FString                                     McpUserManagerClassName;                                  // 0x0078(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterUserComplete__Delegate;                       // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnQueryUsersComplete__Delegate;                         // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0098(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteUserComplete__Delegate;                         // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserManagerBase");
		return ptr;
	}


	void STATIC_OnDeleteUserComplete(bool bWasSuccessful, const struct FString& Error);
	void STATIC_DeleteUser(const struct FString& McpId);
	bool STATIC_GetUser(const struct FString& McpId, struct FMcpUserStatus* User);
	void STATIC_GetUsers(TArray<struct FMcpUserStatus>* Users);
	void STATIC_OnQueryUsersComplete(bool bWasSuccessful, const struct FString& Error);
	void STATIC_QueryUsers(TArray<struct FString>* McpIds);
	void STATIC_QueryUser(const struct FString& McpId, bool bShouldUpdateLastActive);
	void STATIC_OnRegisterUserComplete(const struct FString& McpId, const struct FString& UDID, bool bWasSuccessful, const struct FString& Error);
	void STATIC_RegisterUserFacebook(const struct FString& FacebookId, const struct FString& FacebookAuthToken, const struct FString& UDID, const struct FString& ExistingMcpAuth);
	void STATIC_RegisterUserEmail(const struct FString& Email, const struct FString& PasswordHash, const struct FString& UDID, const struct FString& ExistingMcpAuth);
	void STATIC_RegisterUserGenerated(const struct FString& UDID, const struct FString& ExistingMcpAuth);
	class UMcpUserManagerBase* STATIC_CreateInstance();
};


// Class IpDrv.McpUserManager
// 0x00A0 (0x0158 - 0x00B8)
class UMcpUserManager : public UMcpUserManagerBase
{
public:
	TArray<struct FMcpUserStatus>                      UserStatuses;                                             // 0x00B8(0x0010) (NeedCtorLink)
	struct FString                                     RegisterUserMcpUrl;                                       // 0x00C8(0x0010) (Config, NeedCtorLink)
	struct FString                                     RegisterUserEmailUrl;                                     // 0x00D8(0x0010) (Config, NeedCtorLink)
	struct FString                                     RegisterUserFacebookUrl;                                  // 0x00E8(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryUserUrl;                                             // 0x00F8(0x0010) (Config, NeedCtorLink)
	struct FString                                     QueryUsersUrl;                                            // 0x0108(0x0010) (Config, NeedCtorLink)
	struct FString                                     DeleteUserUrl;                                            // 0x0118(0x0010) (Config, NeedCtorLink)
	TArray<struct FRegisterUserRequest>                RegisterUserRequests;                                     // 0x0128(0x0010) (NeedCtorLink)
	TArray<class UHttpRequestInterface*>               QueryUsersRequests;                                       // 0x0138(0x0010) (NeedCtorLink)
	TArray<class UHttpRequestInterface*>               DeleteUserRequests;                                       // 0x0148(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserManager");
		return ptr;
	}


	void STATIC_OnDeleteUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_DeleteUser(const struct FString& McpId);
	void STATIC_GetUsers(TArray<struct FMcpUserStatus>* Users);
	void STATIC_OnQueryUsersRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_QueryUsers(TArray<struct FString>* McpIds);
	void STATIC_OnQueryUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_QueryUser(const struct FString& McpId, bool bShouldUpdateLastActive);
	void STATIC_OnRegisterUserFacebookRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_RegisterUserFacebook(const struct FString& FacebookId, const struct FString& FacebookAuthToken, const struct FString& UDID, const struct FString& ExistingMcpAuth);
	void STATIC_OnRegisterUserEmailRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_RegisterUserEmail(const struct FString& Email, const struct FString& PasswordHash, const struct FString& UDID, const struct FString& ExistingMcpAuth);
	void STATIC_OnRegisterUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void STATIC_RegisterUserGenerated(const struct FString& UDID, const struct FString& ExistingMcpAuth);
};


// Class IpDrv.OnlineImageDownloaderWeb
// 0x0024 (0x0084 - 0x0060)
class UOnlineImageDownloaderWeb : public UObject
{
public:
	TArray<struct FOnlineImageDownload>                DownloadImages;                                           // 0x0060(0x0010) (NeedCtorLink)
	int                                                MaxSimultaneousDownloads;                                 // 0x0070(0x0004) (Config)
	struct FScriptDelegate                             __OnOnlineImageDownloaded__Delegate;                      // 0x0074(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineImageDownloaderWeb");
		return ptr;
	}


	void DebugDraw(class UCanvas* Canvas);
	void OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void STATIC_DownloadNextImage();
	void STATIC_ClearAllDownloads();
	void STATIC_ClearDownloads(TArray<struct FString> URLs);
	int STATIC_GetNumPendingDownloads();
	void STATIC_RequestOnlineImages(TArray<struct FString> URLs);
	int STATIC_GetOpenDownloadImagesSlot();
	class UTexture* STATIC_GetOnlineImageTexture(const struct FString& URL);
	void STATIC_OnOnlineImageDownloaded(const struct FOnlineImageDownload& CachedEntry);
};


// Class IpDrv.WebConnection
// 0x0044 (0x0328 - 0x02E4)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                                // 0x02E4(0x0008)
	struct FString                                     ReceivedData;                                             // 0x02EC(0x0010) (NeedCtorLink)
	class UWebRequest*                                 Request;                                                  // 0x02FC(0x0008)
	class UWebResponse*                                Response;                                                 // 0x0304(0x0008)
	class UWebApplication*                             Application;                                              // 0x030C(0x0008)
	unsigned long                                      bDelayCleanup : 1;                                        // 0x0314(0x0004)
	int                                                RawBytesExpecting;                                        // 0x0318(0x0004)
	int                                                MaxValueLength;                                           // 0x031C(0x0004) (Config)
	int                                                MaxLineLength;                                            // 0x0320(0x0004) (Config)
	int                                                ConnID;                                                   // 0x0324(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebConnection");
		return ptr;
	}


	bool STATIC_IsHanging();
	void STATIC_Cleanup();
	void STATIC_CheckRawBytes();
	void STATIC_EndOfHeaders();
	void STATIC_CreateResponseObject();
	void STATIC_ProcessPost(const struct FString& S);
	void STATIC_ProcessGet(const struct FString& S);
	void STATIC_ProcessHead(const struct FString& S);
	void ReceivedLine(const struct FString& S);
	void ReceivedText(const struct FString& Text);
	void Timer();
	void Closed();
	void Accepted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
