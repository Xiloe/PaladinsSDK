#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Core_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Core.TextBuffer
// 0x0000
class TextBuffer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBuffer");
		return ptr;
	}

};


// Class Core.Object
// 0x185C0817220
class UObject
{
public:
	static TArray<UObject*>*                           GObjects;                                                 // 0x0000(0x0000)
	unsigned char                                      UnknownData00[0x185C0817220];                             // 0x0000(0x185C0817220) MISSED OFFSET

	static inline TArray<UObject*>& GetGlobalObjects()
	{
		return *GObjects;
	}

	inline std::string UObject::GetName() const
	{
		auto name = Name.GetName();
		if (Name.Number > 0)
		{
			name += '_' + std::to_string(Name.Number);
		}
		return name;
	}

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (auto i = 0u; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Object");
		return ptr;
	}

};


// Class Core.System
// 0x185ABCB6A50
class System
{
public:
	unsigned char                                      UnknownData00[0x185ABCB6A50];                             // 0x0000(0x185ABCB6A50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.System");
		return ptr;
	}

};


// Class Core.Subsystem
// 0x185B66B65B0
class Subsystem
{
public:
	unsigned char                                      UnknownData00[0x185B66B65B0];                             // 0x0000(0x185B66B65B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Subsystem");
		return ptr;
	}

};


// Class Core.PackageMap
// 0x0000
class PackageMap
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.PackageMap");
		return ptr;
	}

};


// Class Core.ObjectSerializer
// 0x0000
class ObjectSerializer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectSerializer");
		return ptr;
	}

};


// Class Core.ObjectRedirector
// 0x0000
class ObjectRedirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectRedirector");
		return ptr;
	}

};


// Class Core.MetaData
// 0x0000
class MetaData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MetaData");
		return ptr;
	}

};


// Class Core.LinkerSave
// 0x0000
class LinkerSave
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerSave");
		return ptr;
	}

};


// Class Core.Linker
// 0x0000
class Linker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Linker");
		return ptr;
	}

};


// Class Core.LinkerLoad
// 0x0000
class LinkerLoad
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerLoad");
		return ptr;
	}

};


// Class Core.Interface
// 0x0000
class Interface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Interface");
		return ptr;
	}

};


// Class Core.ScriptStruct
// 0x0000
class ScriptStruct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ScriptStruct");
		return ptr;
	}

};


// Class Core.Struct
// 0x0000
class Struct
{
public:
	unsigned char                                      UnknownData00[0x08];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned long                                      PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData01[0x48];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Struct");
		return ptr;
	}

};


// Class Core.Field
// 0x0000
class Field
{
public:
	class UField*                                      Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Field");
		return ptr;
	}

};


// Class Core.Function
// 0x0000
class Function
{
public:
	uint32_t                                           FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           iNative;                                                  // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           RepOffset;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint8_t                                            OperPrecedence;                                           // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FName                                              FriendlyName;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint8_t                                            NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Function");
		return ptr;
	}

};


// Class Core.StructProperty
// 0x0000
class StructProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StructProperty");
		return ptr;
	}

};


// Class Core.Property
// 0x0000
class Property
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Property");
		return ptr;
	}

};


// Class Core.StrProperty
// 0x0000
class StrProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StrProperty");
		return ptr;
	}

};


// Class Core.SafeObjectProperty
// 0x0000
class SafeObjectProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.SafeObjectProperty");
		return ptr;
	}

};


// Class Core.ObjectProperty
// 0x0000
class ObjectProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectProperty");
		return ptr;
	}

};


// Class Core.ComponentProperty
// 0x0000
class ComponentProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ComponentProperty");
		return ptr;
	}

};


// Class Core.ClassProperty
// 0x0000
class ClassProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ClassProperty");
		return ptr;
	}

};


// Class Core.NameProperty
// 0x0000
class NameProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.NameProperty");
		return ptr;
	}

};


// Class Core.MapProperty
// 0x0000
class MapProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MapProperty");
		return ptr;
	}

};


// Class Core.IntProperty
// 0x0000
class IntProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.IntProperty");
		return ptr;
	}

};


// Class Core.InterfaceProperty
// 0x0000
class InterfaceProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.InterfaceProperty");
		return ptr;
	}

};


// Class Core.FloatProperty
// 0x0000
class FloatProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.FloatProperty");
		return ptr;
	}

};


// Class Core.DelegateProperty
// 0x0000
class DelegateProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DelegateProperty");
		return ptr;
	}

};


// Class Core.ByteProperty
// 0x0000
class ByteProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ByteProperty");
		return ptr;
	}

};


// Class Core.BoolProperty
// 0x0000
class BoolProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.BoolProperty");
		return ptr;
	}

};


// Class Core.ArrayProperty
// 0x0000
class ArrayProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ArrayProperty");
		return ptr;
	}

};


// Class Core.Enum
// 0x0000
class Enum
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Enum");
		return ptr;
	}

};


// Class Core.Const
// 0x0000
class Const
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Const");
		return ptr;
	}

};


// Class Core.TextBufferFactory
// 0x0000
class TextBufferFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBufferFactory");
		return ptr;
	}

};


// Class Core.Factory
// 0x185B7E05DA0
class Factory
{
public:
	unsigned char                                      UnknownData00[0x185B7E05DA0];                             // 0x0000(0x185B7E05DA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Factory");
		return ptr;
	}

};


// Class Core.Exporter
// 0x185ABCB7950
class Exporter
{
public:
	unsigned char                                      UnknownData00[0x185ABCB7950];                             // 0x0000(0x185ABCB7950) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Exporter");
		return ptr;
	}

};


// Class Core.DistributionVector
// 0x185C082E0E0
class DistributionVector
{
public:
	unsigned char                                      UnknownData00[0x185C082E0E0];                             // 0x0000(0x185C082E0E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionVector");
		return ptr;
	}

};


// Class Core.Component
// 0x185B7E05CD0
class Component
{
public:
	unsigned char                                      UnknownData00[0x185B7E05CD0];                             // 0x0000(0x185B7E05CD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Component");
		return ptr;
	}

};


// Class Core.DistributionFloat
// 0x185C082F520
class DistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x185C082F520];                             // 0x0000(0x185C082F520) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionFloat");
		return ptr;
	}

};


// Class Core.HelpCommandlet
// 0x185C082FAC0
class HelpCommandlet
{
public:
	unsigned char                                      UnknownData00[0x185C082FAC0];                             // 0x0000(0x185C082FAC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.HelpCommandlet");
		return ptr;
	}

};


// Class Core.Commandlet
// 0x185C082E440
class Commandlet
{
public:
	unsigned char                                      UnknownData00[0x185C082E440];                             // 0x0000(0x185C082E440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Commandlet");
		return ptr;
	}

};


// Class Core.State
// 0x0000
class State
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.State");
		return ptr;
	}

};


// Class Core.Package
// 0x0000
class Package
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Package");
		return ptr;
	}

};


// Class Core.Class
// 0x0000
class Class
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     ClassDefaultObject;                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData01[0x70];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* CreateDefaultObject()
	{
		using Fn = UObject*(__thiscall *)(UClass*, unsigned int);

		//UClass::GetDefaultObject can be found with the sig
		//74 ?? F7 86 ?? 00 00 00 00 00 00 10 75 ?? F6 05 ?? ?? ?? ?? 02 0F 84
		static Fn fn = nullptr;
		
		return fn(this, 0);

		//or use the default object (WARNING: may be null)
		//return ClassDefaultObject;
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Class");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
