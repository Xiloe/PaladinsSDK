#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_TgGameContent_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TgGameContent.TgMenuContentData_Content
// 0x0000
class TgMenuContentData_Content
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgGameContent.TgMenuContentData_Content");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
