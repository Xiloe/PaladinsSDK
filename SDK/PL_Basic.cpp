// Paladins (5.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
TArray<FNameEntry*>* FName::GNames = nullptr;
TArray<UObject*>* UObject::GObjects = nullptr;
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
