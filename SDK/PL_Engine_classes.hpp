#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Engine_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Engine.Actor
// 0x185C1E19800
class AActor
{
public:
	unsigned char                                      UnknownData00[0x185C1E19800];                             // 0x0000(0x185C1E19800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Actor");
		return ptr;
	}

};


// Class Engine.Info
// 0x185C1E168C0
class Info
{
public:
	unsigned char                                      UnknownData00[0x185C1E168C0];                             // 0x0000(0x185C1E168C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Info");
		return ptr;
	}

};


// Class Engine.ZoneInfo
// 0x185B65EFEF0
class ZoneInfo
{
public:
	unsigned char                                      UnknownData00[0x185B65EFEF0];                             // 0x0000(0x185B65EFEF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ZoneInfo");
		return ptr;
	}

};


// Class Engine.WorldInfo
// 0x185AD4C9550
class WorldInfo
{
public:
	unsigned char                                      UnknownData00[0x185AD4C9550];                             // 0x0000(0x185AD4C9550) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldInfo");
		return ptr;
	}

};


// Class Engine.DownloadableContentEnumerator
// 0x185BB8FFA00
class DownloadableContentEnumerator
{
public:
	unsigned char                                      UnknownData00[0x185BB8FFA00];                             // 0x0000(0x185BB8FFA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DownloadableContentEnumerator");
		return ptr;
	}

};


// Class Engine.DownloadableContentManager
// 0x185BB901980
class DownloadableContentManager
{
public:
	unsigned char                                      UnknownData00[0x185BB901980];                             // 0x0000(0x185BB901980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DownloadableContentManager");
		return ptr;
	}

};


// Class Engine.Engine
// 0x185BB915EA0
class Engine
{
public:
	unsigned char                                      UnknownData00[0x185BB915EA0];                             // 0x0000(0x185BB915EA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Engine");
		return ptr;
	}

};


// Class Engine.GameEngine
// 0x185AD4CA510
class GameEngine
{
public:
	unsigned char                                      UnknownData00[0x185AD4CA510];                             // 0x0000(0x185AD4CA510) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameEngine");
		return ptr;
	}

};


// Class Engine.EngineBaseTypes
// 0x185C1E14DC0
class EngineBaseTypes
{
public:
	unsigned char                                      UnknownData00[0x185C1E14DC0];                             // 0x0000(0x185C1E14DC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineBaseTypes");
		return ptr;
	}

};


// Class Engine.Brush
// 0x185BB4F22B0
class Brush
{
public:
	unsigned char                                      UnknownData00[0x185BB4F22B0];                             // 0x0000(0x185BB4F22B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Brush");
		return ptr;
	}

};


// Class Engine.BrushShape
// 0x0000
class BrushShape
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushShape");
		return ptr;
	}

};


// Class Engine.Volume
// 0x185C1DB7DF0
class Volume
{
public:
	unsigned char                                      UnknownData00[0x185C1DB7DF0];                             // 0x0000(0x185C1DB7DF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Volume");
		return ptr;
	}

};


// Class Engine.BlockingVolume
// 0x185BB8DD2C0
class BlockingVolume
{
public:
	unsigned char                                      UnknownData00[0x185BB8DD2C0];                             // 0x0000(0x185BB8DD2C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlockingVolume");
		return ptr;
	}

};


// Class Engine.DynamicBlockingVolume
// 0x185BB906A80
class DynamicBlockingVolume
{
public:
	unsigned char                                      UnknownData00[0x185BB906A80];                             // 0x0000(0x185BB906A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicBlockingVolume");
		return ptr;
	}

};


// Class Engine.CullDistanceVolume
// 0x185B69C4A50
class CullDistanceVolume
{
public:
	unsigned char                                      UnknownData00[0x185B69C4A50];                             // 0x0000(0x185B69C4A50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CullDistanceVolume");
		return ptr;
	}

};


// Class Engine.LevelGridVolume
// 0x185BC8AED00
class LevelGridVolume
{
public:
	unsigned char                                      UnknownData00[0x185BC8AED00];                             // 0x0000(0x185BC8AED00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelGridVolume");
		return ptr;
	}

};


// Class Engine.LevelStreamingVolume
// 0x185AD4C51D0
class LevelStreamingVolume
{
public:
	unsigned char                                      UnknownData00[0x185AD4C51D0];                             // 0x0000(0x185AD4C51D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingVolume");
		return ptr;
	}

};


// Class Engine.LightmassCharacterIndirectDetailVolume
// 0x0000
class LightmassCharacterIndirectDetailVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassCharacterIndirectDetailVolume");
		return ptr;
	}

};


// Class Engine.LightmassImportanceVolume
// 0x0000
class LightmassImportanceVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassImportanceVolume");
		return ptr;
	}

};


// Class Engine.MassiveLODOverrideVolume
// 0x0000
class MassiveLODOverrideVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MassiveLODOverrideVolume");
		return ptr;
	}

};


// Class Engine.PathBlockingVolume
// 0x0000
class PathBlockingVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathBlockingVolume");
		return ptr;
	}

};


// Class Engine.PhysicsVolume
// 0x185BB903900
class PhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x185BB903900];                             // 0x0000(0x185BB903900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsVolume");
		return ptr;
	}

};


// Class Engine.DefaultPhysicsVolume
// 0x185BB903000
class DefaultPhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x185BB903000];                             // 0x0000(0x185BB903000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPhysicsVolume");
		return ptr;
	}

};


// Class Engine.GravityVolume
// 0x185B8F8E8D0
class GravityVolume
{
public:
	unsigned char                                      UnknownData00[0x185B8F8E8D0];                             // 0x0000(0x185B8F8E8D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GravityVolume");
		return ptr;
	}

};


// Class Engine.LadderVolume
// 0x185AD501DD0
class LadderVolume
{
public:
	unsigned char                                      UnknownData00[0x185AD501DD0];                             // 0x0000(0x185AD501DD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LadderVolume");
		return ptr;
	}

};


// Class Engine.PortalVolume
// 0x185B488BBA0
class PortalVolume
{
public:
	unsigned char                                      UnknownData00[0x185B488BBA0];                             // 0x0000(0x185B488BBA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PortalVolume");
		return ptr;
	}

};


// Class Engine.PostProcessVolume
// 0x185B854B3C0
class PostProcessVolume
{
public:
	unsigned char                                      UnknownData00[0x185B854B3C0];                             // 0x0000(0x185B854B3C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessVolume");
		return ptr;
	}

};


// Class Engine.PrecomputedVisibilityOverrideVolume
// 0x185B488A5E0
class PrecomputedVisibilityOverrideVolume
{
public:
	unsigned char                                      UnknownData00[0x185B488A5E0];                             // 0x0000(0x185B488A5E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityOverrideVolume");
		return ptr;
	}

};


// Class Engine.PrecomputedVisibilityVolume
// 0x0000
class PrecomputedVisibilityVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityVolume");
		return ptr;
	}

};


// Class Engine.ReverbVolume
// 0x185C1DB4D90
class ReverbVolume
{
public:
	unsigned char                                      UnknownData00[0x185C1DB4D90];                             // 0x0000(0x185C1DB4D90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbVolume");
		return ptr;
	}

};


// Class Engine.TriggerVolume
// 0x185BB906BA0
class TriggerVolume
{
public:
	unsigned char                                      UnknownData00[0x185BB906BA0];                             // 0x0000(0x185BB906BA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerVolume");
		return ptr;
	}

};


// Class Engine.Portal
// 0x185B854AAC0
class Portal
{
public:
	unsigned char                                      UnknownData00[0x185B854AAC0];                             // 0x0000(0x185B854AAC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Portal");
		return ptr;
	}

};


// Class Engine.DroppedPickup
// 0x185C09D4500
class DroppedPickup
{
public:
	unsigned char                                      UnknownData00[0x185C09D4500];                             // 0x0000(0x185C09D4500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DroppedPickup");
		return ptr;
	}

};


// Class Engine.DynamicSMActor
// 0x185BB9040E0
class DynamicSMActor
{
public:
	unsigned char                                      UnknownData00[0x185BB9040E0];                             // 0x0000(0x185BB9040E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicSMActor");
		return ptr;
	}

};


// Class Engine.InterpActor
// 0x185AD4F9D90
class InterpActor
{
public:
	unsigned char                                      UnknownData00[0x185AD4F9D90];                             // 0x0000(0x185AD4F9D90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpActor");
		return ptr;
	}

};


// Class Engine.Emitter
// 0x185BB90DF80
class Emitter
{
public:
	unsigned char                                      UnknownData00[0x185BB90DF80];                             // 0x0000(0x185BB90DF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Emitter");
		return ptr;
	}

};


// Class Engine.EmitterPool
// 0x185BB9105C0
class EmitterPool
{
public:
	unsigned char                                      UnknownData00[0x185BB9105C0];                             // 0x0000(0x185BB9105C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterPool");
		return ptr;
	}

};


// Class Engine.HUD
// 0x185AD4F0490
class HUD
{
public:
	unsigned char                                      UnknownData00[0x185AD4F0490];                             // 0x0000(0x185AD4F0490) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HUD");
		return ptr;
	}

};


// Class Engine.AutoTestManager
// 0x185BB8DC660
class AutoTestManager
{
public:
	unsigned char                                      UnknownData00[0x185BB8DC660];                             // 0x0000(0x185BB8DC660) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutoTestManager");
		return ptr;
	}

};


// Class Engine.CoverGroup
// 0x185BB8F2680
class CoverGroup
{
public:
	unsigned char                                      UnknownData00[0x185BB8F2680];                             // 0x0000(0x185BB8F2680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoverGroup");
		return ptr;
	}

};


// Class Engine.FileWriter
// 0x185BB912D20
class FileWriter
{
public:
	unsigned char                                      UnknownData00[0x185BB912D20];                             // 0x0000(0x185BB912D20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FileWriter");
		return ptr;
	}

};


// Class Engine.FileLog
// 0x185BB912AE0
class FileLog
{
public:
	unsigned char                                      UnknownData00[0x185BB912AE0];                             // 0x0000(0x185BB912AE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FileLog");
		return ptr;
	}

};


// Class Engine.GameInfo
// 0x185AD4D8970
class GameInfo
{
public:
	unsigned char                                      UnknownData00[0x185AD4D8970];                             // 0x0000(0x185AD4D8970) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInfo");
		return ptr;
	}

};


// Class Engine.Mutator
// 0x185BB8890A0
class Mutator
{
public:
	unsigned char                                      UnknownData00[0x185BB8890A0];                             // 0x0000(0x185BB8890A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Mutator");
		return ptr;
	}

};


// Class Engine.PotentialClimbWatcher
// 0x185B854E1E0
class PotentialClimbWatcher
{
public:
	unsigned char                                      UnknownData00[0x185B854E1E0];                             // 0x0000(0x185B854E1E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PotentialClimbWatcher");
		return ptr;
	}

};


// Class Engine.Route
// 0x185B8552440
class Route
{
public:
	unsigned char                                      UnknownData00[0x185B8552440];                             // 0x0000(0x185B8552440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Route");
		return ptr;
	}

};


// Class Engine.WindPointSource
// 0x185B84FA6E0
class WindPointSource
{
public:
	unsigned char                                      UnknownData00[0x185B84FA6E0];                             // 0x0000(0x185B84FA6E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindPointSource");
		return ptr;
	}

};


// Class Engine.Inventory
// 0x185AD4FA8D0
class Inventory
{
public:
	unsigned char                                      UnknownData00[0x185AD4FA8D0];                             // 0x0000(0x185AD4FA8D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Inventory");
		return ptr;
	}

};


// Class Engine.Weapon
// 0x185AD4FBE30
class Weapon
{
public:
	unsigned char                                      UnknownData00[0x185AD4FBE30];                             // 0x0000(0x185AD4FBE30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Weapon");
		return ptr;
	}

};


// Class Engine.InventoryManager
// 0x185AD4FC610
class InventoryManager
{
public:
	unsigned char                                      UnknownData00[0x185AD4FC610];                             // 0x0000(0x185AD4FC610) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InventoryManager");
		return ptr;
	}

};


// Class Engine.Keypoint
// 0x185B608F3C0
class Keypoint
{
public:
	unsigned char                                      UnknownData00[0x185B608F3C0];                             // 0x0000(0x185B608F3C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Keypoint");
		return ptr;
	}

};


// Class Engine.TargetPoint
// 0x185B62881C0
class TargetPoint
{
public:
	unsigned char                                      UnknownData00[0x185B62881C0];                             // 0x0000(0x185B62881C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TargetPoint");
		return ptr;
	}

};


// Class Engine.MaterialInstanceActor
// 0x185BCA061F0
class MaterialInstanceActor
{
public:
	unsigned char                                      UnknownData00[0x185BCA061F0];                             // 0x0000(0x185BCA061F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceActor");
		return ptr;
	}

};


// Class Engine.MatineeActor
// 0x185BB886700
class MatineeActor
{
public:
	unsigned char                                      UnknownData00[0x185BB886700];                             // 0x0000(0x185BB886700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActor");
		return ptr;
	}

};


// Class Engine.NavigationPoint
// 0x185BB4F1770
class NavigationPoint
{
public:
	unsigned char                                      UnknownData00[0x185BB4F1770];                             // 0x0000(0x185BB4F1770) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationPoint");
		return ptr;
	}

};


// Class Engine.CoverLink
// 0x185BB8F81A0
class CoverLink
{
public:
	unsigned char                                      UnknownData00[0x185BB8F81A0];                             // 0x0000(0x185BB8F81A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoverLink");
		return ptr;
	}

};


// Class Engine.DoorMarker
// 0x185BB8FFE80
class DoorMarker
{
public:
	unsigned char                                      UnknownData00[0x185BB8FFE80];                             // 0x0000(0x185BB8FFE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DoorMarker");
		return ptr;
	}

};


// Class Engine.DynamicAnchor
// 0x185B69E5F90
class DynamicAnchor
{
public:
	unsigned char                                      UnknownData00[0x185B69E5F90];                             // 0x0000(0x185B69E5F90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicAnchor");
		return ptr;
	}

};


// Class Engine.Ladder
// 0x185BB8DEDC0
class Ladder
{
public:
	unsigned char                                      UnknownData00[0x185BB8DEDC0];                             // 0x0000(0x185BB8DEDC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Ladder");
		return ptr;
	}

};


// Class Engine.AutoLadder
// 0x0000
class AutoLadder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutoLadder");
		return ptr;
	}

};


// Class Engine.LiftCenter
// 0x185AD4C3490
class LiftCenter
{
public:
	unsigned char                                      UnknownData00[0x185AD4C3490];                             // 0x0000(0x185AD4C3490) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LiftCenter");
		return ptr;
	}

};


// Class Engine.LiftExit
// 0x185AD4C35B0
class LiftExit
{
public:
	unsigned char                                      UnknownData00[0x185AD4C35B0];                             // 0x0000(0x185AD4C35B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LiftExit");
		return ptr;
	}

};


// Class Engine.PathNode
// 0x185B853E160
class PathNode
{
public:
	unsigned char                                      UnknownData00[0x185B853E160];                             // 0x0000(0x185B853E160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathNode");
		return ptr;
	}

};


// Class Engine.VolumePathNode
// 0x185B84F95A0
class VolumePathNode
{
public:
	unsigned char                                      UnknownData00[0x185B84F95A0];                             // 0x0000(0x185B84F95A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumePathNode");
		return ptr;
	}

};


// Class Engine.PickupFactory
// 0x185B4F38AF0
class PickupFactory
{
public:
	unsigned char                                      UnknownData00[0x185B4F38AF0];                             // 0x0000(0x185B4F38AF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PickupFactory");
		return ptr;
	}

};


// Class Engine.PlayerStart
// 0x185B8547700
class PlayerStart
{
public:
	unsigned char                                      UnknownData00[0x185B8547700];                             // 0x0000(0x185B8547700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStart");
		return ptr;
	}

};


// Class Engine.PortalMarker
// 0x185B854BF00
class PortalMarker
{
public:
	unsigned char                                      UnknownData00[0x185B854BF00];                             // 0x0000(0x185B854BF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PortalMarker");
		return ptr;
	}

};


// Class Engine.Pylon
// 0x185BB4F07B0
class Pylon
{
public:
	unsigned char                                      UnknownData00[0x185BB4F07B0];                             // 0x0000(0x185BB4F07B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pylon");
		return ptr;
	}

};


// Class Engine.AISwitchablePylon
// 0x185BB4F1F50
class AISwitchablePylon
{
public:
	unsigned char                                      UnknownData00[0x185BB4F1F50];                             // 0x0000(0x185BB4F1F50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AISwitchablePylon");
		return ptr;
	}

};


// Class Engine.DynamicPylon
// 0x185BB904320
class DynamicPylon
{
public:
	unsigned char                                      UnknownData00[0x185BB904320];                             // 0x0000(0x185BB904320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicPylon");
		return ptr;
	}

};


// Class Engine.Teleporter
// 0x185B856A500
class Teleporter
{
public:
	unsigned char                                      UnknownData00[0x185B856A500];                             // 0x0000(0x185B856A500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Teleporter");
		return ptr;
	}

};


// Class Engine.Note
// 0x0000
class Note
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Note");
		return ptr;
	}

};


// Class Engine.Projectile
// 0x185B854AF40
class Projectile
{
public:
	unsigned char                                      UnknownData00[0x185B854AF40];                             // 0x0000(0x185B854AF40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Projectile");
		return ptr;
	}

};


// Class Engine.RigidBodyBase
// 0x0000
class RigidBodyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RigidBodyBase");
		return ptr;
	}

};


// Class Engine.SceneCaptureActor
// 0x185B854CDA0
class SceneCaptureActor
{
public:
	unsigned char                                      UnknownData00[0x185B854CDA0];                             // 0x0000(0x185B854CDA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureActor");
		return ptr;
	}

};


// Class Engine.SceneCapture2DActor
// 0x185B48A2D60
class SceneCapture2DActor
{
public:
	unsigned char                                      UnknownData00[0x185B48A2D60];                             // 0x0000(0x185B48A2D60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2DActor");
		return ptr;
	}

};


// Class Engine.SceneCaptureCubeMapActor
// 0x185B48A46E0
class SceneCaptureCubeMapActor
{
public:
	unsigned char                                      UnknownData00[0x185B48A46E0];                             // 0x0000(0x185B48A46E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureCubeMapActor");
		return ptr;
	}

};


// Class Engine.SceneCaptureReflectActor
// 0x185B4889E60
class SceneCaptureReflectActor
{
public:
	unsigned char                                      UnknownData00[0x185B4889E60];                             // 0x0000(0x185B4889E60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureReflectActor");
		return ptr;
	}

};


// Class Engine.SceneCapturePortalActor
// 0x0000
class SceneCapturePortalActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapturePortalActor");
		return ptr;
	}

};


// Class Engine.PortalTeleporter
// 0x185B854D6A0
class PortalTeleporter
{
public:
	unsigned char                                      UnknownData00[0x185B854D6A0];                             // 0x0000(0x185B854D6A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PortalTeleporter");
		return ptr;
	}

};


// Class Engine.StaticMeshActorBase
// 0x0000
class StaticMeshActorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActorBase");
		return ptr;
	}

};


// Class Engine.StaticMeshActor
// 0x185AD4F46F0
class StaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x185AD4F46F0];                             // 0x0000(0x185AD4F46F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActor");
		return ptr;
	}

};


// Class Engine.StaticMeshCollectionActor
// 0x185B6275740
class StaticMeshCollectionActor
{
public:
	unsigned char                                      UnknownData00[0x185B6275740];                             // 0x0000(0x185B6275740) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshCollectionActor");
		return ptr;
	}

};


// Class Engine.StaticMeshActorBasedOnExtremeContent
// 0x185B8562B80
class StaticMeshActorBasedOnExtremeContent
{
public:
	unsigned char                                      UnknownData00[0x185B8562B80];                             // 0x0000(0x185B8562B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActorBasedOnExtremeContent");
		return ptr;
	}

};


// Class Engine.Trigger
// 0x185B8570DA0
class Trigger
{
public:
	unsigned char                                      UnknownData00[0x185B8570DA0];                             // 0x0000(0x185B8570DA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Trigger");
		return ptr;
	}

};


// Class Engine.Trigger_PawnsOnly
// 0x0000
class Trigger_PawnsOnly
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Trigger_PawnsOnly");
		return ptr;
	}

};


// Class Engine.ActorComponent
// 0x185C1E24D20
class ActorComponent
{
public:
	unsigned char                                      UnknownData00[0x185C1E24D20];                             // 0x0000(0x185C1E24D20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorComponent");
		return ptr;
	}

};


// Class Engine.AudioComponent
// 0x185C1DB5C30
class AudioComponent
{
public:
	unsigned char                                      UnknownData00[0x185C1DB5C30];                             // 0x0000(0x185C1DB5C30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioComponent");
		return ptr;
	}

};


// Class Engine.SplineAudioComponent
// 0x185B605AEC0
class SplineAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x185B605AEC0];                             // 0x0000(0x185B605AEC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineAudioComponent");
		return ptr;
	}

};


// Class Engine.MultiCueSplineAudioComponent
// 0x185C1D42190
class MultiCueSplineAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x185C1D42190];                             // 0x0000(0x185C1D42190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MultiCueSplineAudioComponent");
		return ptr;
	}

};


// Class Engine.SimpleSplineAudioComponent
// 0x185B605B580
class SimpleSplineAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x185B605B580];                             // 0x0000(0x185B605B580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimpleSplineAudioComponent");
		return ptr;
	}

};


// Class Engine.SimpleSplineNonLoopAudioComponent
// 0x185C1D42490
class SimpleSplineNonLoopAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x185C1D42490];                             // 0x0000(0x185C1D42490) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimpleSplineNonLoopAudioComponent");
		return ptr;
	}

};


// Class Engine.HeightFogComponent
// 0x185AD4EF5F0
class HeightFogComponent
{
public:
	unsigned char                                      UnknownData00[0x185AD4EF5F0];                             // 0x0000(0x185AD4EF5F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HeightFogComponent");
		return ptr;
	}

};


// Class Engine.PrimitiveComponent
// 0x185C1E280E0
class PrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x185C1E280E0];                             // 0x0000(0x185C1E280E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponent");
		return ptr;
	}

};


// Class Engine.ArrowComponent
// 0x185C1D32780
class ArrowComponent
{
public:
	unsigned char                                      UnknownData00[0x185C1D32780];                             // 0x0000(0x185C1D32780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ArrowComponent");
		return ptr;
	}

};


// Class Engine.BrushComponent
// 0x185BB4F2070
class BrushComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB4F2070];                             // 0x0000(0x185BB4F2070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushComponent");
		return ptr;
	}

};


// Class Engine.CameraConeComponent
// 0x0000
class CameraConeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraConeComponent");
		return ptr;
	}

};


// Class Engine.CylinderComponent
// 0x185C1E14820
class CylinderComponent
{
public:
	unsigned char                                      UnknownData00[0x185C1E14820];                             // 0x0000(0x185C1E14820) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CylinderComponent");
		return ptr;
	}

};


// Class Engine.DrawBoxComponent
// 0x185B69E1CD0
class DrawBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x185B69E1CD0];                             // 0x0000(0x185B69E1CD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawBoxComponent");
		return ptr;
	}

};


// Class Engine.DrawCapsuleComponent
// 0x185B69E22D0
class DrawCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x185B69E22D0];                             // 0x0000(0x185B69E22D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawCapsuleComponent");
		return ptr;
	}

};


// Class Engine.DrawConeComponent
// 0x185B69E4250
class DrawConeComponent
{
public:
	unsigned char                                      UnknownData00[0x185B69E4250];                             // 0x0000(0x185B69E4250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawConeComponent");
		return ptr;
	}

};


// Class Engine.DrawCylinderComponent
// 0x185B69E6350
class DrawCylinderComponent
{
public:
	unsigned char                                      UnknownData00[0x185B69E6350];                             // 0x0000(0x185B69E6350) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawCylinderComponent");
		return ptr;
	}

};


// Class Engine.DrawFrustumComponent
// 0x185B69E70D0
class DrawFrustumComponent
{
public:
	unsigned char                                      UnknownData00[0x185B69E70D0];                             // 0x0000(0x185B69E70D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawFrustumComponent");
		return ptr;
	}

};


// Class Engine.DrawQuadComponent
// 0x185B69E4190
class DrawQuadComponent
{
public:
	unsigned char                                      UnknownData00[0x185B69E4190];                             // 0x0000(0x185B69E4190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawQuadComponent");
		return ptr;
	}

};


// Class Engine.DrawSphereComponent
// 0x185B69E4F10
class DrawSphereComponent
{
public:
	unsigned char                                      UnknownData00[0x185B69E4F10];                             // 0x0000(0x185B69E4F10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawSphereComponent");
		return ptr;
	}

};


// Class Engine.DrawPylonRadiusComponent
// 0x0000
class DrawPylonRadiusComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawPylonRadiusComponent");
		return ptr;
	}

};


// Class Engine.DrawSoundRadiusComponent
// 0x0000
class DrawSoundRadiusComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawSoundRadiusComponent");
		return ptr;
	}

};


// Class Engine.LevelGridVolumeRenderingComponent
// 0x0000
class LevelGridVolumeRenderingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelGridVolumeRenderingComponent");
		return ptr;
	}

};


// Class Engine.LineBatchComponent
// 0x185BC9F1130
class LineBatchComponent
{
public:
	unsigned char                                      UnknownData00[0x185BC9F1130];                             // 0x0000(0x185BC9F1130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LineBatchComponent");
		return ptr;
	}

};


// Class Engine.ModelComponent
// 0x185BCA0B6B0
class ModelComponent
{
public:
	unsigned char                                      UnknownData00[0x185BCA0B6B0];                             // 0x0000(0x185BCA0B6B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ModelComponent");
		return ptr;
	}

};


// Class Engine.PortalRenderingComponent
// 0x0000
class PortalRenderingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PortalRenderingComponent");
		return ptr;
	}

};


// Class Engine.SpriteComponent
// 0x185B8560D20
class SpriteComponent
{
public:
	unsigned char                                      UnknownData00[0x185B8560D20];                             // 0x0000(0x185B8560D20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpriteComponent");
		return ptr;
	}

};


// Class Engine.TgSilhouetteComponent
// 0x185AD4F4030
class TgSilhouetteComponent
{
public:
	unsigned char                                      UnknownData00[0x185AD4F4030];                             // 0x0000(0x185AD4F4030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TgSilhouetteComponent");
		return ptr;
	}

};


// Class Engine.RadialBlurComponent
// 0x185B854C140
class RadialBlurComponent
{
public:
	unsigned char                                      UnknownData00[0x185B854C140];                             // 0x0000(0x185B854C140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialBlurComponent");
		return ptr;
	}

};


// Class Engine.SceneCaptureComponent
// 0x185B854A9A0
class SceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x185B854A9A0];                             // 0x0000(0x185B854A9A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent");
		return ptr;
	}

};


// Class Engine.SceneCapture2DComponent
// 0x185B8550A60
class SceneCapture2DComponent
{
public:
	unsigned char                                      UnknownData00[0x185B8550A60];                             // 0x0000(0x185B8550A60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2DComponent");
		return ptr;
	}

};


// Class Engine.SceneCapture2DHitMaskComponent
// 0x185B854E8A0
class SceneCapture2DHitMaskComponent
{
public:
	unsigned char                                      UnknownData00[0x185B854E8A0];                             // 0x0000(0x185B854E8A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2DHitMaskComponent");
		return ptr;
	}

};


// Class Engine.SceneCaptureCubeMapComponent
// 0x185B48A4620
class SceneCaptureCubeMapComponent
{
public:
	unsigned char                                      UnknownData00[0x185B48A4620];                             // 0x0000(0x185B48A4620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureCubeMapComponent");
		return ptr;
	}

};


// Class Engine.SceneCapturePortalComponent
// 0x185B854A760
class SceneCapturePortalComponent
{
public:
	unsigned char                                      UnknownData00[0x185B854A760];                             // 0x0000(0x185B854A760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapturePortalComponent");
		return ptr;
	}

};


// Class Engine.SceneCaptureReflectComponent
// 0x185B4887EE0
class SceneCaptureReflectComponent
{
public:
	unsigned char                                      UnknownData00[0x185B4887EE0];                             // 0x0000(0x185B4887EE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureReflectComponent");
		return ptr;
	}

};


// Class Engine.WindDirectionalSourceComponent
// 0x185B84FBBE0
class WindDirectionalSourceComponent
{
public:
	unsigned char                                      UnknownData00[0x185B84FBBE0];                             // 0x0000(0x185B84FBBE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSourceComponent");
		return ptr;
	}

};


// Class Engine.WindPointSourceComponent
// 0x185B84FBEE0
class WindPointSourceComponent
{
public:
	unsigned char                                      UnknownData00[0x185B84FBEE0];                             // 0x0000(0x185B84FBEE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindPointSourceComponent");
		return ptr;
	}

};


// Class Engine.ActorFactory
// 0x185C1E25E00
class ActorFactory
{
public:
	unsigned char                                      UnknownData00[0x185C1E25E00];                             // 0x0000(0x185C1E25E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactory");
		return ptr;
	}

};


// Class Engine.ActorFactoryActor
// 0x185B7E0A520
class ActorFactoryActor
{
public:
	unsigned char                                      UnknownData00[0x185B7E0A520];                             // 0x0000(0x185B7E0A520) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryActor");
		return ptr;
	}

};


// Class Engine.ActorFactoryAI
// 0x185B7E0A380
class ActorFactoryAI
{
public:
	unsigned char                                      UnknownData00[0x185B7E0A380];                             // 0x0000(0x185B7E0A380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAI");
		return ptr;
	}

};


// Class Engine.ActorFactoryAmbientSound
// 0x185B5A8B790
class ActorFactoryAmbientSound
{
public:
	unsigned char                                      UnknownData00[0x185B5A8B790];                             // 0x0000(0x185B5A8B790) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAmbientSound");
		return ptr;
	}

};


// Class Engine.ActorFactoryAmbientSoundMovable
// 0x0000
class ActorFactoryAmbientSoundMovable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAmbientSoundMovable");
		return ptr;
	}

};


// Class Engine.ActorFactoryAmbientSoundSimple
// 0x185B5A8DF50
class ActorFactoryAmbientSoundSimple
{
public:
	unsigned char                                      UnknownData00[0x185B5A8DF50];                             // 0x0000(0x185B5A8DF50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAmbientSoundSimple");
		return ptr;
	}

};


// Class Engine.ActorFactoryAmbientSoundNonLoop
// 0x0000
class ActorFactoryAmbientSoundNonLoop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAmbientSoundNonLoop");
		return ptr;
	}

};


// Class Engine.ActorFactoryAmbientSoundSimpleToggleable
// 0x0000
class ActorFactoryAmbientSoundSimpleToggleable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAmbientSoundSimpleToggleable");
		return ptr;
	}

};


// Class Engine.ActorFactoryAmbientSoundNonLoopingToggleable
// 0x0000
class ActorFactoryAmbientSoundNonLoopingToggleable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryAmbientSoundNonLoopingToggleable");
		return ptr;
	}

};


// Class Engine.ActorFactoryApexDestructible
// 0x185B5A97790
class ActorFactoryApexDestructible
{
public:
	unsigned char                                      UnknownData00[0x185B5A97790];                             // 0x0000(0x185B5A97790) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryApexDestructible");
		return ptr;
	}

};


// Class Engine.ActorFactoryArchetype
// 0x185B5A99110
class ActorFactoryArchetype
{
public:
	unsigned char                                      UnknownData00[0x185B5A99110];                             // 0x0000(0x185B5A99110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryArchetype");
		return ptr;
	}

};


// Class Engine.ActorFactoryCoverLink
// 0x0000
class ActorFactoryCoverLink
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryCoverLink");
		return ptr;
	}

};


// Class Engine.ActorFactoryDominantDirectionalLight
// 0x0000
class ActorFactoryDominantDirectionalLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryDominantDirectionalLight");
		return ptr;
	}

};


// Class Engine.ActorFactoryDominantDirectionalLightMovable
// 0x0000
class ActorFactoryDominantDirectionalLightMovable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryDominantDirectionalLightMovable");
		return ptr;
	}

};


// Class Engine.ActorFactoryDynamicSM
// 0x185B5A98D50
class ActorFactoryDynamicSM
{
public:
	unsigned char                                      UnknownData00[0x185B5A98D50];                             // 0x0000(0x185B5A98D50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryDynamicSM");
		return ptr;
	}

};


// Class Engine.ActorFactoryMover
// 0x0000
class ActorFactoryMover
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryMover");
		return ptr;
	}

};


// Class Engine.ActorFactoryRigidBody
// 0x185B5A98990
class ActorFactoryRigidBody
{
public:
	unsigned char                                      UnknownData00[0x185B5A98990];                             // 0x0000(0x185B5A98990) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryRigidBody");
		return ptr;
	}

};


// Class Engine.ActorFactoryEmitter
// 0x185B5A991D0
class ActorFactoryEmitter
{
public:
	unsigned char                                      UnknownData00[0x185B5A991D0];                             // 0x0000(0x185B5A991D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryEmitter");
		return ptr;
	}

};


// Class Engine.ActorFactoryFracturedStaticMesh
// 0x185B5A99C50
class ActorFactoryFracturedStaticMesh
{
public:
	unsigned char                                      UnknownData00[0x185B5A99C50];                             // 0x0000(0x185B5A99C50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryFracturedStaticMesh");
		return ptr;
	}

};


// Class Engine.ActorFactoryLensFlare
// 0x185B5A99F50
class ActorFactoryLensFlare
{
public:
	unsigned char                                      UnknownData00[0x185B5A99F50];                             // 0x0000(0x185B5A99F50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryLensFlare");
		return ptr;
	}

};


// Class Engine.ActorFactoryLight
// 0x0000
class ActorFactoryLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryLight");
		return ptr;
	}

};


// Class Engine.ActorFactoryPathNode
// 0x0000
class ActorFactoryPathNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryPathNode");
		return ptr;
	}

};


// Class Engine.ActorFactoryPhysicsAsset
// 0x185B5A973D0
class ActorFactoryPhysicsAsset
{
public:
	unsigned char                                      UnknownData00[0x185B5A973D0];                             // 0x0000(0x185B5A973D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryPhysicsAsset");
		return ptr;
	}

};


// Class Engine.ActorFactoryPlayerStart
// 0x0000
class ActorFactoryPlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryPlayerStart");
		return ptr;
	}

};


// Class Engine.ActorFactoryPylon
// 0x0000
class ActorFactoryPylon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryPylon");
		return ptr;
	}

};


// Class Engine.ActorFactorySkeletalMesh
// 0x185B5A8CE10
class ActorFactorySkeletalMesh
{
public:
	unsigned char                                      UnknownData00[0x185B5A8CE10];                             // 0x0000(0x185B5A8CE10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactorySkeletalMesh");
		return ptr;
	}

};


// Class Engine.ActorFactoryStaticMesh
// 0x185B5A98510
class ActorFactoryStaticMesh
{
public:
	unsigned char                                      UnknownData00[0x185B5A98510];                             // 0x0000(0x185B5A98510) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryStaticMesh");
		return ptr;
	}

};


// Class Engine.ActorFactoryTrigger
// 0x0000
class ActorFactoryTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryTrigger");
		return ptr;
	}

};


// Class Engine.ActorFactoryVehicle
// 0x185B7E08BF0
class ActorFactoryVehicle
{
public:
	unsigned char                                      UnknownData00[0x185B7E08BF0];                             // 0x0000(0x185B7E08BF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryVehicle");
		return ptr;
	}

};


// Class Engine.AkBank
// 0x185B608AEC0
class AkBank
{
public:
	unsigned char                                      UnknownData00[0x185B608AEC0];                             // 0x0000(0x185B608AEC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AkBank");
		return ptr;
	}

};


// Class Engine.AkBaseSoundObject
// 0x0000
class AkBaseSoundObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AkBaseSoundObject");
		return ptr;
	}

};


// Class Engine.AkEvent
// 0x185B608AC80
class AkEvent
{
public:
	unsigned char                                      UnknownData00[0x185B608AC80];                             // 0x0000(0x185B608AC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AkEvent");
		return ptr;
	}

};


// Class Engine.SoundCue
// 0x185C1DB8A50
class SoundCue
{
public:
	unsigned char                                      UnknownData00[0x185C1DB8A50];                             // 0x0000(0x185C1DB8A50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundCue");
		return ptr;
	}

};


// Class Engine.BookMark
// 0x185C1D36440
class BookMark
{
public:
	unsigned char                                      UnknownData00[0x185C1D36440];                             // 0x0000(0x185C1D36440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark");
		return ptr;
	}

};


// Class Engine.BookMark2D
// 0x185C1D36500
class BookMark2D
{
public:
	unsigned char                                      UnknownData00[0x185C1D36500];                             // 0x0000(0x185C1D36500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark2D");
		return ptr;
	}

};


// Class Engine.KismetBookMark
// 0x185BC89EA40
class KismetBookMark
{
public:
	unsigned char                                      UnknownData00[0x185BC89EA40];                             // 0x0000(0x185BC89EA40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetBookMark");
		return ptr;
	}

};


// Class Engine.Canvas
// 0x185BB8E8000
class Canvas
{
public:
	unsigned char                                      UnknownData00[0x185BB8E8000];                             // 0x0000(0x185BB8E8000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Canvas");
		return ptr;
	}

};


// Class Engine.Channel
// 0x0000
class Channel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Channel");
		return ptr;
	}

};


// Class Engine.ActorChannel
// 0x0000
class ActorChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorChannel");
		return ptr;
	}

};


// Class Engine.ControlChannel
// 0x0000
class ControlChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlChannel");
		return ptr;
	}

};


// Class Engine.FileChannel
// 0x0000
class FileChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FileChannel");
		return ptr;
	}

};


// Class Engine.VoiceChannel
// 0x0000
class VoiceChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VoiceChannel");
		return ptr;
	}

};


// Class Engine.Controller
// 0x185C1E143A0
class Controller
{
public:
	unsigned char                                      UnknownData00[0x185C1E143A0];                             // 0x0000(0x185C1E143A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Controller");
		return ptr;
	}

};


// Class Engine.PlayerController
// 0x185BB5309B0
class PlayerController
{
public:
	unsigned char                                      UnknownData00[0x185BB5309B0];                             // 0x0000(0x185BB5309B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerController");
		return ptr;
	}

};


// Class Engine.CheatManager
// 0x185BB8EB2A0
class CheatManager
{
public:
	unsigned char                                      UnknownData00[0x185BB8EB2A0];                             // 0x0000(0x185BB8EB2A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheatManager");
		return ptr;
	}

};


// Class Engine.Client
// 0x185ABC26C40
class Client
{
public:
	unsigned char                                      UnknownData00[0x185ABC26C40];                             // 0x0000(0x185ABC26C40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Client");
		return ptr;
	}

};


// Class Engine.ClipPadEntry
// 0x185B2D83ED0
class ClipPadEntry
{
public:
	unsigned char                                      UnknownData00[0x185B2D83ED0];                             // 0x0000(0x185B2D83ED0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ClipPadEntry");
		return ptr;
	}

};


// Class Engine.CloudSaveSystem
// 0x185BB8F0EE0
class CloudSaveSystem
{
public:
	unsigned char                                      UnknownData00[0x185BB8F0EE0];                             // 0x0000(0x185BB8F0EE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudSaveSystem");
		return ptr;
	}

};


// Class Engine.CodecMovie
// 0x185B2D8F690
class CodecMovie
{
public:
	unsigned char                                      UnknownData00[0x185B2D8F690];                             // 0x0000(0x185B2D8F690) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CodecMovie");
		return ptr;
	}

};


// Class Engine.CodecMovieBink
// 0x0000
class CodecMovieBink
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CodecMovieBink");
		return ptr;
	}

};


// Class Engine.CodecMovieFallback
// 0x185B2D907D0
class CodecMovieFallback
{
public:
	unsigned char                                      UnknownData00[0x185B2D907D0];                             // 0x0000(0x185B2D907D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CodecMovieFallback");
		return ptr;
	}

};


// Class Engine.CurveEdPresetCurve
// 0x185B69C5D10
class CurveEdPresetCurve
{
public:
	unsigned char                                      UnknownData00[0x185B69C5D10];                             // 0x0000(0x185B69C5D10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveEdPresetCurve");
		return ptr;
	}

};


// Class Engine.CustomPropertyItemHandler
// 0x0000
class CustomPropertyItemHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CustomPropertyItemHandler");
		return ptr;
	}

};


// Class Engine.DamageType
// 0x185BB8FD060
class DamageType
{
public:
	unsigned char                                      UnknownData00[0x185BB8FD060];                             // 0x0000(0x185BB8FD060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DamageType");
		return ptr;
	}

};


// Class Engine.KillZDamageType
// 0x0000
class KillZDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KillZDamageType");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstant
// 0x185B69DC150
class DistributionFloatConstant
{
public:
	unsigned char                                      UnknownData00[0x185B69DC150];                             // 0x0000(0x185B69DC150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstant");
		return ptr;
	}

};


// Class Engine.DistributionFloatParameterBase
// 0x185B863F7E0
class DistributionFloatParameterBase
{
public:
	unsigned char                                      UnknownData00[0x185B863F7E0];                             // 0x0000(0x185B863F7E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstantCurve
// 0x185B69DB790
class DistributionFloatConstantCurve
{
public:
	unsigned char                                      UnknownData00[0x185B69DB790];                             // 0x0000(0x185B69DB790) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniform
// 0x185B605C900
class DistributionFloatUniform
{
public:
	unsigned char                                      UnknownData00[0x185B605C900];                             // 0x0000(0x185B605C900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniform");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniformCurve
// 0x185B69DBE50
class DistributionFloatUniformCurve
{
public:
	unsigned char                                      UnknownData00[0x185B69DBE50];                             // 0x0000(0x185B69DBE50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniformCurve");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniformRange
// 0x185B69DD890
class DistributionFloatUniformRange
{
public:
	unsigned char                                      UnknownData00[0x185B69DD890];                             // 0x0000(0x185B69DD890) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniformRange");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstant
// 0x185B69DC8D0
class DistributionVectorConstant
{
public:
	unsigned char                                      UnknownData00[0x185B69DC8D0];                             // 0x0000(0x185B69DC8D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstant");
		return ptr;
	}

};


// Class Engine.DistributionVectorParameterBase
// 0x185B69E0AD0
class DistributionVectorParameterBase
{
public:
	unsigned char                                      UnknownData00[0x185B69E0AD0];                             // 0x0000(0x185B69E0AD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstantCurve
// 0x185B69DC810
class DistributionVectorConstantCurve
{
public:
	unsigned char                                      UnknownData00[0x185B69DC810];                             // 0x0000(0x185B69DC810) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniform
// 0x185B69E0950
class DistributionVectorUniform
{
public:
	unsigned char                                      UnknownData00[0x185B69E0950];                             // 0x0000(0x185B69E0950) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniform");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniformCurve
// 0x185B69DE790
class DistributionVectorUniformCurve
{
public:
	unsigned char                                      UnknownData00[0x185B69DE790];                             // 0x0000(0x185B69DE790) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniformCurve");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniformRange
// 0x185B69E1010
class DistributionVectorUniformRange
{
public:
	unsigned char                                      UnknownData00[0x185B69E1010];                             // 0x0000(0x185B69E1010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniformRange");
		return ptr;
	}

};


// Class Engine.Download
// 0x0000
class Download
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Download");
		return ptr;
	}

};


// Class Engine.ChannelDownload
// 0x0000
class ChannelDownload
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChannelDownload");
		return ptr;
	}

};


// Class Engine.EdCoordSystem
// 0x185B69E73D0
class EdCoordSystem
{
public:
	unsigned char                                      UnknownData00[0x185B69E73D0];                             // 0x0000(0x185B69E73D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdCoordSystem");
		return ptr;
	}

};


// Class Engine.EditorLinkSelectionInterface
// 0x0000
class EditorLinkSelectionInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EditorLinkSelectionInterface");
		return ptr;
	}

};


// Class Engine.EngineTypes
// 0x185BB9128A0
class EngineTypes
{
public:
	unsigned char                                      UnknownData00[0x185BB9128A0];                             // 0x0000(0x185BB9128A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineTypes");
		return ptr;
	}

};


// Class Engine.FaceFXAnimSet
// 0x185B65D8F70
class FaceFXAnimSet
{
public:
	unsigned char                                      UnknownData00[0x185B65D8F70];                             // 0x0000(0x185B65D8F70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FaceFXAnimSet");
		return ptr;
	}

};


// Class Engine.FaceFXAsset
// 0x185BB9145E0
class FaceFXAsset
{
public:
	unsigned char                                      UnknownData00[0x185BB9145E0];                             // 0x0000(0x185BB9145E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FaceFXAsset");
		return ptr;
	}

};


// Class Engine.Font
// 0x185BB911B20
class Font
{
public:
	unsigned char                                      UnknownData00[0x185BB911B20];                             // 0x0000(0x185BB911B20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Font");
		return ptr;
	}

};


// Class Engine.MultiFont
// 0x185BB88ACC0
class MultiFont
{
public:
	unsigned char                                      UnknownData00[0x185BB88ACC0];                             // 0x0000(0x185BB88ACC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MultiFont");
		return ptr;
	}

};


// Class Engine.FontImportOptions
// 0x185B65E2C30
class FontImportOptions
{
public:
	unsigned char                                      UnknownData00[0x185B65E2C30];                             // 0x0000(0x185B65E2C30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontImportOptions");
		return ptr;
	}

};


// Class Engine.ForceFeedbackManager
// 0x185BB917640
class ForceFeedbackManager
{
public:
	unsigned char                                      UnknownData00[0x185BB917640];                             // 0x0000(0x185BB917640) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackManager");
		return ptr;
	}

};


// Class Engine.ForceFeedbackWaveform
// 0x185B65E7430
class ForceFeedbackWaveform
{
public:
	unsigned char                                      UnknownData00[0x185B65E7430];                             // 0x0000(0x185B65E7430) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackWaveform");
		return ptr;
	}

};


// Class Engine.GamePadLightbarSubsystem
// 0x185AD4D9030
class GamePadLightbarSubsystem
{
public:
	unsigned char                                      UnknownData00[0x185AD4D9030];                             // 0x0000(0x185AD4D9030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GamePadLightbarSubsystem");
		return ptr;
	}

};


// Class Engine.GameplayEvents
// 0x185AD4DAB30
class GameplayEvents
{
public:
	unsigned char                                      UnknownData00[0x185AD4DAB30];                             // 0x0000(0x185AD4DAB30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayEvents");
		return ptr;
	}

};


// Class Engine.GameplayEventsReader
// 0x185AD4D9ED0
class GameplayEventsReader
{
public:
	unsigned char                                      UnknownData00[0x185AD4D9ED0];                             // 0x0000(0x185AD4D9ED0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayEventsReader");
		return ptr;
	}

};


// Class Engine.GameplayEventsWriterBase
// 0x185AD4DEFD0
class GameplayEventsWriterBase
{
public:
	unsigned char                                      UnknownData00[0x185AD4DEFD0];                             // 0x0000(0x185AD4DEFD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayEventsWriterBase");
		return ptr;
	}

};


// Class Engine.GameplayEventsUploadAnalytics
// 0x185AD4DD5F0
class GameplayEventsUploadAnalytics
{
public:
	unsigned char                                      UnknownData00[0x185AD4DD5F0];                             // 0x0000(0x185AD4DD5F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayEventsUploadAnalytics");
		return ptr;
	}

};


// Class Engine.GameplayEventsWriter
// 0x185AD4E3FB0
class GameplayEventsWriter
{
public:
	unsigned char                                      UnknownData00[0x185AD4E3FB0];                             // 0x0000(0x185AD4E3FB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayEventsWriter");
		return ptr;
	}

};


// Class Engine.GameplayEventsHandler
// 0x185AD4D94B0
class GameplayEventsHandler
{
public:
	unsigned char                                      UnknownData00[0x185AD4D94B0];                             // 0x0000(0x185AD4D94B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayEventsHandler");
		return ptr;
	}

};


// Class Engine.GenericParamListStatEntry
// 0x185AD4E90B0
class GenericParamListStatEntry
{
public:
	unsigned char                                      UnknownData00[0x185AD4E90B0];                             // 0x0000(0x185AD4E90B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GenericParamListStatEntry");
		return ptr;
	}

};


// Class Engine.GuidCache
// 0x0000
class GuidCache
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GuidCache");
		return ptr;
	}

};


// Class Engine.HttpBaseInterface
// 0x185AD4F2410
class HttpBaseInterface
{
public:
	unsigned char                                      UnknownData00[0x185AD4F2410];                             // 0x0000(0x185AD4F2410) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HttpBaseInterface");
		return ptr;
	}

};


// Class Engine.HttpRequestInterface
// 0x185BB8EA400
class HttpRequestInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8EA400];                             // 0x0000(0x185BB8EA400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HttpRequestInterface");
		return ptr;
	}

};


// Class Engine.HttpResponseInterface
// 0x185BB8ED340
class HttpResponseInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8ED340];                             // 0x0000(0x185BB8ED340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HttpResponseInterface");
		return ptr;
	}

};


// Class Engine.IniLocPatcher
// 0x185AD4F4150
class IniLocPatcher
{
public:
	unsigned char                                      UnknownData00[0x185AD4F4150];                             // 0x0000(0x185AD4F4150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.IniLocPatcher");
		return ptr;
	}

};


// Class Engine.Interface_NavigationHandle
// 0x185AD4F4FF0
class Interface_NavigationHandle
{
public:
	unsigned char                                      UnknownData00[0x185AD4F4FF0];                             // 0x0000(0x185AD4F4FF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_NavigationHandle");
		return ptr;
	}

};


// Class Engine.Interface_Speaker
// 0x185AD4F5230
class Interface_Speaker
{
public:
	unsigned char                                      UnknownData00[0x185AD4F5230];                             // 0x0000(0x185AD4F5230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_Speaker");
		return ptr;
	}

};


// Class Engine.InterpCurveEdSetup
// 0x185BC884940
class InterpCurveEdSetup
{
public:
	unsigned char                                      UnknownData00[0x185BC884940];                             // 0x0000(0x185BC884940) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpCurveEdSetup");
		return ptr;
	}

};


// Class Engine.InterpTrack
// 0x185B8644C40
class InterpTrack
{
public:
	unsigned char                                      UnknownData00[0x185B8644C40];                             // 0x0000(0x185B8644C40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrack");
		return ptr;
	}

};


// Class Engine.JsonObject
// 0x185AD4FEFB0
class JsonObject
{
public:
	unsigned char                                      UnknownData00[0x185AD4FEFB0];                             // 0x0000(0x185AD4FEFB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.JsonObject");
		return ptr;
	}

};


// Class Engine.KMeshProps
// 0x185BC89E440
class KMeshProps
{
public:
	unsigned char                                      UnknownData00[0x185BC89E440];                             // 0x0000(0x185BC89E440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KMeshProps");
		return ptr;
	}

};


// Class Engine.LevelBase
// 0x0000
class LevelBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelBase");
		return ptr;
	}

};


// Class Engine.Level
// 0x185ABC25980
class Level
{
public:
	unsigned char                                      UnknownData00[0x185ABC25980];                             // 0x0000(0x185ABC25980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Level");
		return ptr;
	}

};


// Class Engine.PendingLevel
// 0x0000
class PendingLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PendingLevel");
		return ptr;
	}

};


// Class Engine.DemoPlayPendingLevel
// 0x0000
class DemoPlayPendingLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoPlayPendingLevel");
		return ptr;
	}

};


// Class Engine.NetPendingLevel
// 0x0000
class NetPendingLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetPendingLevel");
		return ptr;
	}

};


// Class Engine.LevelStreaming
// 0x185B606E180
class LevelStreaming
{
public:
	unsigned char                                      UnknownData00[0x185B606E180];                             // 0x0000(0x185B606E180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreaming");
		return ptr;
	}

};


// Class Engine.LevelStreamingAlwaysLoaded
// 0x185BC8AE700
class LevelStreamingAlwaysLoaded
{
public:
	unsigned char                                      UnknownData00[0x185BC8AE700];                             // 0x0000(0x185BC8AE700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingAlwaysLoaded");
		return ptr;
	}

};


// Class Engine.LevelStreamingDistance
// 0x185BC8AE040
class LevelStreamingDistance
{
public:
	unsigned char                                      UnknownData00[0x185BC8AE040];                             // 0x0000(0x185BC8AE040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingDistance");
		return ptr;
	}

};


// Class Engine.LevelStreamingKismet
// 0x0000
class LevelStreamingKismet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingKismet");
		return ptr;
	}

};


// Class Engine.LevelStreamingPersistent
// 0x0000
class LevelStreamingPersistent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingPersistent");
		return ptr;
	}

};


// Class Engine.LightmappedSurfaceCollection
// 0x185BC9F1970
class LightmappedSurfaceCollection
{
public:
	unsigned char                                      UnknownData00[0x185BC9F1970];                             // 0x0000(0x185BC9F1970) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmappedSurfaceCollection");
		return ptr;
	}

};


// Class Engine.LightmassLevelSettings
// 0x185BC9F23F0
class LightmassLevelSettings
{
public:
	unsigned char                                      UnknownData00[0x185BC9F23F0];                             // 0x0000(0x185BC9F23F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassLevelSettings");
		return ptr;
	}

};


// Class Engine.LightmassPrimitiveSettingsObject
// 0x185BC9F24B0
class LightmassPrimitiveSettingsObject
{
public:
	unsigned char                                      UnknownData00[0x185BC9F24B0];                             // 0x0000(0x185BC9F24B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPrimitiveSettingsObject");
		return ptr;
	}

};


// Class Engine.MapInfo
// 0x0000
class MapInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MapInfo");
		return ptr;
	}

};


// Class Engine.Model
// 0x0000
class Model
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Model");
		return ptr;
	}

};


// Class Engine.MusicTrackDataStructures
// 0x185BB8DAEC0
class MusicTrackDataStructures
{
public:
	unsigned char                                      UnknownData00[0x185BB8DAEC0];                             // 0x0000(0x185BB8DAEC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MusicTrackDataStructures");
		return ptr;
	}

};


// Class Engine.NavigationMeshBase
// 0x0000
class NavigationMeshBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationMeshBase");
		return ptr;
	}

};


// Class Engine.NetDriver
// 0x185ABC24240
class NetDriver
{
public:
	unsigned char                                      UnknownData00[0x185ABC24240];                             // 0x0000(0x185ABC24240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetDriver");
		return ptr;
	}

};


// Class Engine.DemoRecDriver
// 0x185ABC24CC0
class DemoRecDriver
{
public:
	unsigned char                                      UnknownData00[0x185ABC24CC0];                             // 0x0000(0x185ABC24CC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoRecDriver");
		return ptr;
	}

};


// Class Engine.TimeLapseRecordingDriver
// 0x185ABC25A40
class TimeLapseRecordingDriver
{
public:
	unsigned char                                      UnknownData00[0x185ABC25A40];                             // 0x0000(0x185ABC25A40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimeLapseRecordingDriver");
		return ptr;
	}

};


// Class Engine.ObjectReferencer
// 0x185BCA27D30
class ObjectReferencer
{
public:
	unsigned char                                      UnknownData00[0x185BCA27D30];                             // 0x0000(0x185BCA27D30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectReferencer");
		return ptr;
	}

};


// Class Engine.OnlineAuthInterface
// 0x185C1E23C40
class OnlineAuthInterface
{
public:
	unsigned char                                      UnknownData00[0x185C1E23C40];                             // 0x0000(0x185C1E23C40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineAuthInterface");
		return ptr;
	}

};


// Class Engine.OnlineEventTracker
// 0x185BB8958E0
class OnlineEventTracker
{
public:
	unsigned char                                      UnknownData00[0x185BB8958E0];                             // 0x0000(0x185BB8958E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineEventTracker");
		return ptr;
	}

};


// Class Engine.OnlineMatchmakingStats
// 0x185BB8A3680
class OnlineMatchmakingStats
{
public:
	unsigned char                                      UnknownData00[0x185BB8A3680];                             // 0x0000(0x185BB8A3680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineMatchmakingStats");
		return ptr;
	}

};


// Class Engine.OnlinePlayerStorage
// 0x185BB8BC3A0
class OnlinePlayerStorage
{
public:
	unsigned char                                      UnknownData00[0x185BB8BC3A0];                             // 0x0000(0x185BB8BC3A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlinePlayerStorage");
		return ptr;
	}

};


// Class Engine.OnlineProfileSettings
// 0x185BB8BD240
class OnlineProfileSettings
{
public:
	unsigned char                                      UnknownData00[0x185BB8BD240];                             // 0x0000(0x185BB8BD240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineProfileSettings");
		return ptr;
	}

};


// Class Engine.OnlineStats
// 0x185BB8BE560
class OnlineStats
{
public:
	unsigned char                                      UnknownData00[0x185BB8BE560];                             // 0x0000(0x185BB8BE560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineStats");
		return ptr;
	}

};


// Class Engine.OnlineStatsRead
// 0x185BB8836A0
class OnlineStatsRead
{
public:
	unsigned char                                      UnknownData00[0x185BB8836A0];                             // 0x0000(0x185BB8836A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineStatsRead");
		return ptr;
	}

};


// Class Engine.OnlineStatsWrite
// 0x185BB8837C0
class OnlineStatsWrite
{
public:
	unsigned char                                      UnknownData00[0x185BB8837C0];                             // 0x0000(0x185BB8837C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineStatsWrite");
		return ptr;
	}

};


// Class Engine.OnlineSubsystem
// 0x185C1E19B60
class OnlineSubsystem
{
public:
	unsigned char                                      UnknownData00[0x185C1E19B60];                             // 0x0000(0x185C1E19B60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSubsystem");
		return ptr;
	}

};


// Class Engine.PackageMapLevel
// 0x0000
class PackageMapLevel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapLevel");
		return ptr;
	}

};


// Class Engine.PackageMapSeekFree
// 0x0000
class PackageMapSeekFree
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapSeekFree");
		return ptr;
	}

};


// Class Engine.PatchScriptCommandlet
// 0x0000
class PatchScriptCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PatchScriptCommandlet");
		return ptr;
	}

};


// Class Engine.PlatformInterfaceBase
// 0x185C1DBBCF0
class PlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x185C1DBBCF0];                             // 0x0000(0x185C1DBBCF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceBase");
		return ptr;
	}

};


// Class Engine.MicroTransactionBase
// 0x185BB887480
class MicroTransactionBase
{
public:
	unsigned char                                      UnknownData00[0x185BB887480];                             // 0x0000(0x185BB887480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MicroTransactionBase");
		return ptr;
	}

};


// Class Engine.MicroTransactionProxy
// 0x0000
class MicroTransactionProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MicroTransactionProxy");
		return ptr;
	}

};


// Class Engine.Player
// 0x185AD4C5770
class Player
{
public:
	unsigned char                                      UnknownData00[0x185AD4C5770];                             // 0x0000(0x185AD4C5770) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Player");
		return ptr;
	}

};


// Class Engine.LocalPlayer
// 0x185BB8848A0
class LocalPlayer
{
public:
	unsigned char                                      UnknownData00[0x185BB8848A0];                             // 0x0000(0x185BB8848A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalPlayer");
		return ptr;
	}

};


// Class Engine.NetConnection
// 0x185ABC25BC0
class NetConnection
{
public:
	unsigned char                                      UnknownData00[0x185ABC25BC0];                             // 0x0000(0x185ABC25BC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetConnection");
		return ptr;
	}

};


// Class Engine.ChildConnection
// 0x185ABC25C80
class ChildConnection
{
public:
	unsigned char                                      UnknownData00[0x185ABC25C80];                             // 0x0000(0x185ABC25C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildConnection");
		return ptr;
	}

};


// Class Engine.DemoRecConnection
// 0x0000
class DemoRecConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoRecConnection");
		return ptr;
	}

};


// Class Engine.TimeLapseRecordingConnection
// 0x0000
class TimeLapseRecordingConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimeLapseRecordingConnection");
		return ptr;
	}

};


// Class Engine.Polys
// 0x0000
class Polys
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Polys");
		return ptr;
	}

};


// Class Engine.PostProcessChain
// 0x185B854A520
class PostProcessChain
{
public:
	unsigned char                                      UnknownData00[0x185B854A520];                             // 0x0000(0x185B854A520) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessChain");
		return ptr;
	}

};


// Class Engine.PostProcessEffect
// 0x185B5AAAA50
class PostProcessEffect
{
public:
	unsigned char                                      UnknownData00[0x185B5AAAA50];                             // 0x0000(0x185B5AAAA50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessEffect");
		return ptr;
	}

};


// Class Engine.AmbientOcclusionEffect
// 0x185B8639B60
class AmbientOcclusionEffect
{
public:
	unsigned char                                      UnknownData00[0x185B8639B60];                             // 0x0000(0x185B8639B60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientOcclusionEffect");
		return ptr;
	}

};


// Class Engine.BlurEffect
// 0x185C1D37640
class BlurEffect
{
public:
	unsigned char                                      UnknownData00[0x185C1D37640];                             // 0x0000(0x185C1D37640) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlurEffect");
		return ptr;
	}

};


// Class Engine.DOFEffect
// 0x185B86368C0
class DOFEffect
{
public:
	unsigned char                                      UnknownData00[0x185B86368C0];                             // 0x0000(0x185B86368C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DOFEffect");
		return ptr;
	}

};


// Class Engine.DOFAndBloomEffect
// 0x185B86400A0
class DOFAndBloomEffect
{
public:
	unsigned char                                      UnknownData00[0x185B86400A0];                             // 0x0000(0x185B86400A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DOFAndBloomEffect");
		return ptr;
	}

};


// Class Engine.DOFBloomMotionBlurEffect
// 0x185B69DFF90
class DOFBloomMotionBlurEffect
{
public:
	unsigned char                                      UnknownData00[0x185B69DFF90];                             // 0x0000(0x185B69DFF90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DOFBloomMotionBlurEffect");
		return ptr;
	}

};


// Class Engine.UberPostProcessEffect
// 0x185BC86AC40
class UberPostProcessEffect
{
public:
	unsigned char                                      UnknownData00[0x185BC86AC40];                             // 0x0000(0x185BC86AC40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UberPostProcessEffect");
		return ptr;
	}

};


// Class Engine.DwTriovizImplEffect
// 0x0000
class DwTriovizImplEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DwTriovizImplEffect");
		return ptr;
	}

};


// Class Engine.MaterialEffect
// 0x185BB3CB6E0
class MaterialEffect
{
public:
	unsigned char                                      UnknownData00[0x185BB3CB6E0];                             // 0x0000(0x185BB3CB6E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialEffect");
		return ptr;
	}

};


// Class Engine.MotionBlurEffect
// 0x185BCA0FAF0
class MotionBlurEffect
{
public:
	unsigned char                                      UnknownData00[0x185BCA0FAF0];                             // 0x0000(0x185BCA0FAF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MotionBlurEffect");
		return ptr;
	}

};


// Class Engine.PrimitiveComponentFactory
// 0x185BCA092B0
class PrimitiveComponentFactory
{
public:
	unsigned char                                      UnknownData00[0x185BCA092B0];                             // 0x0000(0x185BCA092B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponentFactory");
		return ptr;
	}

};


// Class Engine.MeshComponentFactory
// 0x185BCA09DF0
class MeshComponentFactory
{
public:
	unsigned char                                      UnknownData00[0x185BCA09DF0];                             // 0x0000(0x185BCA09DF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponentFactory");
		return ptr;
	}

};


// Class Engine.StaticMeshComponentFactory
// 0x185B6277F00
class StaticMeshComponentFactory
{
public:
	unsigned char                                      UnknownData00[0x185B6277F00];                             // 0x0000(0x185B6277F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponentFactory");
		return ptr;
	}

};


// Class Engine.ReachSpec
// 0x185BB4F2190
class ReachSpec
{
public:
	unsigned char                                      UnknownData00[0x185BB4F2190];                             // 0x0000(0x185BB4F2190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReachSpec");
		return ptr;
	}

};


// Class Engine.AdvancedReachSpec
// 0x0000
class AdvancedReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AdvancedReachSpec");
		return ptr;
	}

};


// Class Engine.CeilingReachSpec
// 0x0000
class CeilingReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CeilingReachSpec");
		return ptr;
	}

};


// Class Engine.ForcedReachSpec
// 0x0000
class ForcedReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForcedReachSpec");
		return ptr;
	}

};


// Class Engine.CoverSlipReachSpec
// 0x185B69C54D0
class CoverSlipReachSpec
{
public:
	unsigned char                                      UnknownData00[0x185B69C54D0];                             // 0x0000(0x185B69C54D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoverSlipReachSpec");
		return ptr;
	}

};


// Class Engine.FloorToCeilingReachSpec
// 0x0000
class FloorToCeilingReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FloorToCeilingReachSpec");
		return ptr;
	}

};


// Class Engine.MantleReachSpec
// 0x185BC9F9770
class MantleReachSpec
{
public:
	unsigned char                                      UnknownData00[0x185BC9F9770];                             // 0x0000(0x185BC9F9770) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MantleReachSpec");
		return ptr;
	}

};


// Class Engine.SlotToSlotReachSpec
// 0x185B6266800
class SlotToSlotReachSpec
{
public:
	unsigned char                                      UnknownData00[0x185B6266800];                             // 0x0000(0x185B6266800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlotToSlotReachSpec");
		return ptr;
	}

};


// Class Engine.SwatTurnReachSpec
// 0x185B6288100
class SwatTurnReachSpec
{
public:
	unsigned char                                      UnknownData00[0x185B6288100];                             // 0x0000(0x185B6288100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SwatTurnReachSpec");
		return ptr;
	}

};


// Class Engine.WallTransReachSpec
// 0x0000
class WallTransReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WallTransReachSpec");
		return ptr;
	}

};


// Class Engine.LadderReachSpec
// 0x0000
class LadderReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LadderReachSpec");
		return ptr;
	}

};


// Class Engine.ProscribedReachSpec
// 0x0000
class ProscribedReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProscribedReachSpec");
		return ptr;
	}

};


// Class Engine.TeleportReachSpec
// 0x0000
class TeleportReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TeleportReachSpec");
		return ptr;
	}

};


// Class Engine.SavedMove
// 0x185B854F500
class SavedMove
{
public:
	unsigned char                                      UnknownData00[0x185B854F500];                             // 0x0000(0x185B854F500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SavedMove");
		return ptr;
	}

};


// Class Engine.SaveGameSummary
// 0x185B48A2760
class SaveGameSummary
{
public:
	unsigned char                                      UnknownData00[0x185B48A2760];                             // 0x0000(0x185B48A2760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SaveGameSummary");
		return ptr;
	}

};


// Class Engine.ScriptViewportClient
// 0x185B8F840D0
class ScriptViewportClient
{
public:
	unsigned char                                      UnknownData00[0x185B8F840D0];                             // 0x0000(0x185B8F840D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptViewportClient");
		return ptr;
	}

};


// Class Engine.GameViewportClient
// 0x185AD4E5E10
class GameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x185AD4E5E10];                             // 0x0000(0x185AD4E5E10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameViewportClient");
		return ptr;
	}

};


// Class Engine.Selection
// 0x0000
class Selection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Selection");
		return ptr;
	}

};


// Class Engine.ServerCommandlet
// 0x0000
class ServerCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ServerCommandlet");
		return ptr;
	}

};


// Class Engine.Settings
// 0x185BB4FC4B0
class Settings
{
public:
	unsigned char                                      UnknownData00[0x185BB4FC4B0];                             // 0x0000(0x185BB4FC4B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Settings");
		return ptr;
	}

};


// Class Engine.OnlineGameSearch
// 0x185BB4FD230
class OnlineGameSearch
{
public:
	unsigned char                                      UnknownData00[0x185BB4FD230];                             // 0x0000(0x185BB4FD230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineGameSearch");
		return ptr;
	}

};


// Class Engine.OnlineGameSettings
// 0x185B8F699D0
class OnlineGameSettings
{
public:
	unsigned char                                      UnknownData00[0x185B8F699D0];                             // 0x0000(0x185B8F699D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineGameSettings");
		return ptr;
	}

};


// Class Engine.ShaderCache
// 0x0000
class ShaderCache
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShaderCache");
		return ptr;
	}

};


// Class Engine.ShadowMap1D
// 0x0000
class ShadowMap1D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMap1D");
		return ptr;
	}

};


// Class Engine.ShadowMap2D
// 0x185B4886CE0
class ShadowMap2D
{
public:
	unsigned char                                      UnknownData00[0x185B4886CE0];                             // 0x0000(0x185B4886CE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMap2D");
		return ptr;
	}

};


// Class Engine.SmokeTestCommandlet
// 0x0000
class SmokeTestCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SmokeTestCommandlet");
		return ptr;
	}

};


// Class Engine.SpeechRecognition
// 0x185B62704C0
class SpeechRecognition
{
public:
	unsigned char                                      UnknownData00[0x185B62704C0];                             // 0x0000(0x185B62704C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpeechRecognition");
		return ptr;
	}

};


// Class Engine.StaticMesh
// 0x185ABC29700
class StaticMesh
{
public:
	unsigned char                                      UnknownData00[0x185ABC29700];                             // 0x0000(0x185ABC29700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMesh");
		return ptr;
	}

};


// Class Engine.Surface
// 0x185BB8E3020
class Surface
{
public:
	unsigned char                                      UnknownData00[0x185BB8E3020];                             // 0x0000(0x185BB8E3020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Surface");
		return ptr;
	}

};


// Class Engine.MaterialInterface
// 0x185BB8FE380
class MaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8FE380];                             // 0x0000(0x185BB8FE380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInterface");
		return ptr;
	}

};


// Class Engine.RB_BodySetup
// 0x185B854F3E0
class RB_BodySetup
{
public:
	unsigned char                                      UnknownData00[0x185B854F3E0];                             // 0x0000(0x185B854F3E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_BodySetup");
		return ptr;
	}

};


// Class Engine.FracturedStaticMesh
// 0x185ABC27180
class FracturedStaticMesh
{
public:
	unsigned char                                      UnknownData00[0x185ABC27180];                             // 0x0000(0x185ABC27180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedStaticMesh");
		return ptr;
	}

};


// Class Engine.ParticleSystem
// 0x185BB4F98D0
class ParticleSystem
{
public:
	unsigned char                                      UnknownData00[0x185BB4F98D0];                             // 0x0000(0x185BB4F98D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystem");
		return ptr;
	}

};


// Class Engine.Texture
// 0x185B2D6BD50
class Texture
{
public:
	unsigned char                                      UnknownData00[0x185B2D6BD50];                             // 0x0000(0x185B2D6BD50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture");
		return ptr;
	}

};


// Class Engine.Texture2D
// 0x185BB8E4580
class Texture2D
{
public:
	unsigned char                                      UnknownData00[0x185BB8E4580];                             // 0x0000(0x185BB8E4580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2D");
		return ptr;
	}

};


// Class Engine.LightMapTexture2D
// 0x0000
class LightMapTexture2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapTexture2D");
		return ptr;
	}

};


// Class Engine.ShadowMapTexture2D
// 0x185B48842E0
class ShadowMapTexture2D
{
public:
	unsigned char                                      UnknownData00[0x185B48842E0];                             // 0x0000(0x185B48842E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMapTexture2D");
		return ptr;
	}

};


// Class Engine.TranslationContext
// 0x185B856BDC0
class TranslationContext
{
public:
	unsigned char                                      UnknownData00[0x185B856BDC0];                             // 0x0000(0x185B856BDC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TranslationContext");
		return ptr;
	}

};


// Class Engine.TranslatorTag
// 0x185B85640E0
class TranslatorTag
{
public:
	unsigned char                                      UnknownData00[0x185B85640E0];                             // 0x0000(0x185B85640E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TranslatorTag");
		return ptr;
	}

};


// Class Engine.StringsTag
// 0x185B8564320
class StringsTag
{
public:
	unsigned char                                      UnknownData00[0x185B8564320];                             // 0x0000(0x185B8564320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StringsTag");
		return ptr;
	}

};


// Class Engine.UIRoot
// 0x185BB8F5800
class UIRoot
{
public:
	unsigned char                                      UnknownData00[0x185BB8F5800];                             // 0x0000(0x185BB8F5800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIRoot");
		return ptr;
	}

};


// Class Engine.Interaction
// 0x185BB8F4DE0
class Interaction
{
public:
	unsigned char                                      UnknownData00[0x185BB8F4DE0];                             // 0x0000(0x185BB8F4DE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interaction");
		return ptr;
	}

};


// Class Engine.UIInteraction
// 0x185B853B6A0
class UIInteraction
{
public:
	unsigned char                                      UnknownData00[0x185B853B6A0];                             // 0x0000(0x185B853B6A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIInteraction");
		return ptr;
	}

};


// Class Engine.UIManager
// 0x185B8538760
class UIManager
{
public:
	unsigned char                                      UnknownData00[0x185B8538760];                             // 0x0000(0x185B8538760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIManager");
		return ptr;
	}

};


// Class Engine.WaveFormBase
// 0x185B606AB80
class WaveFormBase
{
public:
	unsigned char                                      UnknownData00[0x185B606AB80];                             // 0x0000(0x185B606AB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WaveFormBase");
		return ptr;
	}

};


// Class Engine.World
// 0x0000
class World
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.World");
		return ptr;
	}

};


// Class Engine.EnvironmentVolume
// 0x185BB9132C0
class EnvironmentVolume
{
public:
	unsigned char                                      UnknownData00[0x185BB9132C0];                             // 0x0000(0x185BB9132C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EnvironmentVolume");
		return ptr;
	}

};


// Class Engine.TestSplittingVolume
// 0x185B84D3CE0
class TestSplittingVolume
{
public:
	unsigned char                                      UnknownData00[0x185B84D3CE0];                             // 0x0000(0x185B84D3CE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TestSplittingVolume");
		return ptr;
	}

};


// Class Engine.AIController
// 0x185BB4F1BF0
class AIController
{
public:
	unsigned char                                      UnknownData00[0x185BB4F1BF0];                             // 0x0000(0x185BB4F1BF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AIController");
		return ptr;
	}

};


// Class Engine.CrowdAgentBase
// 0x185BB8FBD40
class CrowdAgentBase
{
public:
	unsigned char                                      UnknownData00[0x185BB8FBD40];                             // 0x0000(0x185BB8FBD40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CrowdAgentBase");
		return ptr;
	}

};


// Class Engine.CrowdPopulationManagerBase
// 0x0000
class CrowdPopulationManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CrowdPopulationManagerBase");
		return ptr;
	}

};


// Class Engine.PathTargetPoint
// 0x185B853EEE0
class PathTargetPoint
{
public:
	unsigned char                                      UnknownData00[0x185B853EEE0];                             // 0x0000(0x185B853EEE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathTargetPoint");
		return ptr;
	}

};


// Class Engine.NavMeshObstacle
// 0x185BB88D9C0
class NavMeshObstacle
{
public:
	unsigned char                                      UnknownData00[0x185BB88D9C0];                             // 0x0000(0x185BB88D9C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshObstacle");
		return ptr;
	}

};


// Class Engine.PylonSeed
// 0x185B48930A0
class PylonSeed
{
public:
	unsigned char                                      UnknownData00[0x185B48930A0];                             // 0x0000(0x185B48930A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PylonSeed");
		return ptr;
	}

};


// Class Engine.CoverGroupRenderingComponent
// 0x0000
class CoverGroupRenderingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoverGroupRenderingComponent");
		return ptr;
	}

};


// Class Engine.MeshComponent
// 0x185BB4F9C30
class MeshComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB4F9C30];                             // 0x0000(0x185BB4F9C30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponent");
		return ptr;
	}

};


// Class Engine.StaticMeshComponent
// 0x185C083ECA0
class StaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x185C083ECA0];                             // 0x0000(0x185C083ECA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponent");
		return ptr;
	}

};


// Class Engine.CoverMeshComponent
// 0x185B2DA7D50
class CoverMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x185B2DA7D50];                             // 0x0000(0x185B2DA7D50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoverMeshComponent");
		return ptr;
	}

};


// Class Engine.NavMeshRenderingComponent
// 0x0000
class NavMeshRenderingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshRenderingComponent");
		return ptr;
	}

};


// Class Engine.PathRenderingComponent
// 0x0000
class PathRenderingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathRenderingComponent");
		return ptr;
	}

};


// Class Engine.RouteRenderingComponent
// 0x0000
class RouteRenderingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RouteRenderingComponent");
		return ptr;
	}

};


// Class Engine.AICommandBase
// 0x185BB4F34B0
class AICommandBase
{
public:
	unsigned char                                      UnknownData00[0x185BB4F34B0];                             // 0x0000(0x185BB4F34B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AICommandBase");
		return ptr;
	}

};


// Class Engine.AutoNavMeshPathObstacleUnregister
// 0x185C1D33EC0
class AutoNavMeshPathObstacleUnregister
{
public:
	unsigned char                                      UnknownData00[0x185C1D33EC0];                             // 0x0000(0x185C1D33EC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutoNavMeshPathObstacleUnregister");
		return ptr;
	}

};


// Class Engine.Interface_ActorPathConstraints
// 0x185AD4F4ED0
class Interface_ActorPathConstraints
{
public:
	unsigned char                                      UnknownData00[0x185AD4F4ED0];                             // 0x0000(0x185AD4F4ED0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_ActorPathConstraints");
		return ptr;
	}

};


// Class Engine.Interface_NavMeshPathObject
// 0x0000
class Interface_NavMeshPathObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_NavMeshPathObject");
		return ptr;
	}

};


// Class Engine.Interface_NavMeshPathSwitch
// 0x185AD4F5110
class Interface_NavMeshPathSwitch
{
public:
	unsigned char                                      UnknownData00[0x185AD4F5110];                             // 0x0000(0x185AD4F5110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_NavMeshPathSwitch");
		return ptr;
	}

};


// Class Engine.Interface_NavMeshPathObstacle
// 0x185B8644D80
class Interface_NavMeshPathObstacle
{
public:
	unsigned char                                      UnknownData00[0x185B8644D80];                             // 0x0000(0x185B8644D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_NavMeshPathObstacle");
		return ptr;
	}

};


// Class Engine.Interface_PylonGeometryProvider
// 0x0000
class Interface_PylonGeometryProvider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PylonGeometryProvider");
		return ptr;
	}

};


// Class Engine.Interface_RVO
// 0x0000
class Interface_RVO
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_RVO");
		return ptr;
	}

};


// Class Engine.NavigationHandle
// 0x185AD4EB6F0
class NavigationHandle
{
public:
	unsigned char                                      UnknownData00[0x185AD4EB6F0];                             // 0x0000(0x185AD4EB6F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationHandle");
		return ptr;
	}

};


// Class Engine.NavMeshGoal_Filter
// 0x185BB88ABA0
class NavMeshGoal_Filter
{
public:
	unsigned char                                      UnknownData00[0x185BB88ABA0];                             // 0x0000(0x185BB88ABA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_Filter");
		return ptr;
	}

};


// Class Engine.NavMeshGoalFilter_MinPathDistance
// 0x185BB88FEE0
class NavMeshGoalFilter_MinPathDistance
{
public:
	unsigned char                                      UnknownData00[0x185BB88FEE0];                             // 0x0000(0x185BB88FEE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoalFilter_MinPathDistance");
		return ptr;
	}

};


// Class Engine.NavMeshGoalFilter_NotNearOtherAI
// 0x185BB88CA00
class NavMeshGoalFilter_NotNearOtherAI
{
public:
	unsigned char                                      UnknownData00[0x185BB88CA00];                             // 0x0000(0x185BB88CA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoalFilter_NotNearOtherAI");
		return ptr;
	}

};


// Class Engine.NavMeshGoalFilter_OutOfViewFrom
// 0x185BB88DD20
class NavMeshGoalFilter_OutOfViewFrom
{
public:
	unsigned char                                      UnknownData00[0x185BB88DD20];                             // 0x0000(0x185BB88DD20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoalFilter_OutOfViewFrom");
		return ptr;
	}

};


// Class Engine.NavMeshGoalFilter_OutSideOfDotProductWedge
// 0x185BB88EBC0
class NavMeshGoalFilter_OutSideOfDotProductWedge
{
public:
	unsigned char                                      UnknownData00[0x185BB88EBC0];                             // 0x0000(0x185BB88EBC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoalFilter_OutSideOfDotProductWedge");
		return ptr;
	}

};


// Class Engine.NavMeshGoalFilter_PolyEncompassesAI
// 0x185BB88FCA0
class NavMeshGoalFilter_PolyEncompassesAI
{
public:
	unsigned char                                      UnknownData00[0x185BB88FCA0];                             // 0x0000(0x185BB88FCA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoalFilter_PolyEncompassesAI");
		return ptr;
	}

};


// Class Engine.NavMeshPathConstraint
// 0x185BB890000
class NavMeshPathConstraint
{
public:
	unsigned char                                      UnknownData00[0x185BB890000];                             // 0x0000(0x185BB890000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPathConstraint");
		return ptr;
	}

};


// Class Engine.NavMeshPath_AlongLine
// 0x185BB88CB20
class NavMeshPath_AlongLine
{
public:
	unsigned char                                      UnknownData00[0x185BB88CB20];                             // 0x0000(0x185BB88CB20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_AlongLine");
		return ptr;
	}

};


// Class Engine.NavMeshPath_EnforceTwoWayEdges
// 0x185BB88DAE0
class NavMeshPath_EnforceTwoWayEdges
{
public:
	unsigned char                                      UnknownData00[0x185BB88DAE0];                             // 0x0000(0x185BB88DAE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_EnforceTwoWayEdges");
		return ptr;
	}

};


// Class Engine.NavMeshPath_MinDistBetweenSpecsOfType
// 0x185BB88DC00
class NavMeshPath_MinDistBetweenSpecsOfType
{
public:
	unsigned char                                      UnknownData00[0x185BB88DC00];                             // 0x0000(0x185BB88DC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_MinDistBetweenSpecsOfType");
		return ptr;
	}

};


// Class Engine.NavMeshPath_SameCoverLink
// 0x185BB88D0C0
class NavMeshPath_SameCoverLink
{
public:
	unsigned char                                      UnknownData00[0x185BB88D0C0];                             // 0x0000(0x185BB88D0C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_SameCoverLink");
		return ptr;
	}

};


// Class Engine.NavMeshPath_Toward
// 0x185BB88FA60
class NavMeshPath_Toward
{
public:
	unsigned char                                      UnknownData00[0x185BB88FA60];                             // 0x0000(0x185BB88FA60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_Toward");
		return ptr;
	}

};


// Class Engine.NavMeshPath_WithinDistanceEnvelope
// 0x185BB890B40
class NavMeshPath_WithinDistanceEnvelope
{
public:
	unsigned char                                      UnknownData00[0x185BB890B40];                             // 0x0000(0x185BB890B40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_WithinDistanceEnvelope");
		return ptr;
	}

};


// Class Engine.NavMeshPath_WithinTraversalDist
// 0x185BB88E860
class NavMeshPath_WithinTraversalDist
{
public:
	unsigned char                                      UnknownData00[0x185BB88E860];                             // 0x0000(0x185BB88E860) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPath_WithinTraversalDist");
		return ptr;
	}

};


// Class Engine.NavMeshPathGoalEvaluator
// 0x185BB889400
class NavMeshPathGoalEvaluator
{
public:
	unsigned char                                      UnknownData00[0x185BB889400];                             // 0x0000(0x185BB889400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshPathGoalEvaluator");
		return ptr;
	}

};


// Class Engine.NavMeshGoal_At
// 0x185BB889F40
class NavMeshGoal_At
{
public:
	unsigned char                                      UnknownData00[0x185BB889F40];                             // 0x0000(0x185BB889F40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_At");
		return ptr;
	}

};


// Class Engine.NavMeshGoal_ClosestActorInList
// 0x185BB88A4E0
class NavMeshGoal_ClosestActorInList
{
public:
	unsigned char                                      UnknownData00[0x185BB88A4E0];                             // 0x0000(0x185BB88A4E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_ClosestActorInList");
		return ptr;
	}

};


// Class Engine.NavMeshGoal_GenericFilterContainer
// 0x185BB88AA80
class NavMeshGoal_GenericFilterContainer
{
public:
	unsigned char                                      UnknownData00[0x185BB88AA80];                             // 0x0000(0x185BB88AA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_GenericFilterContainer");
		return ptr;
	}

};


// Class Engine.NavMeshGoal_Null
// 0x185BB88B140
class NavMeshGoal_Null
{
public:
	unsigned char                                      UnknownData00[0x185BB88B140];                             // 0x0000(0x185BB88B140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_Null");
		return ptr;
	}

};


// Class Engine.NavMeshGoal_PolyEncompassesAI
// 0x185BB88B800
class NavMeshGoal_PolyEncompassesAI
{
public:
	unsigned char                                      UnknownData00[0x185BB88B800];                             // 0x0000(0x185BB88B800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_PolyEncompassesAI");
		return ptr;
	}

};


// Class Engine.NavMeshGoal_Random
// 0x185BB890C60
class NavMeshGoal_Random
{
public:
	unsigned char                                      UnknownData00[0x185BB890C60];                             // 0x0000(0x185BB890C60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_Random");
		return ptr;
	}

};


// Class Engine.NavMeshGoal_WithinDistanceEnvelope
// 0x185BB890120
class NavMeshGoal_WithinDistanceEnvelope
{
public:
	unsigned char                                      UnknownData00[0x185BB890120];                             // 0x0000(0x185BB890120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshGoal_WithinDistanceEnvelope");
		return ptr;
	}

};


// Class Engine.PathConstraint
// 0x185B8540560
class PathConstraint
{
public:
	unsigned char                                      UnknownData00[0x185B8540560];                             // 0x0000(0x185B8540560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathConstraint");
		return ptr;
	}

};


// Class Engine.Path_AlongLine
// 0x185B85407A0
class Path_AlongLine
{
public:
	unsigned char                                      UnknownData00[0x185B85407A0];                             // 0x0000(0x185B85407A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_AlongLine");
		return ptr;
	}

};


// Class Engine.Path_AvoidInEscapableNodes
// 0x185B853D740
class Path_AvoidInEscapableNodes
{
public:
	unsigned char                                      UnknownData00[0x185B853D740];                             // 0x0000(0x185B853D740) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_AvoidInEscapableNodes");
		return ptr;
	}

};


// Class Engine.Path_MinDistBetweenSpecsOfType
// 0x185B853C9C0
class Path_MinDistBetweenSpecsOfType
{
public:
	unsigned char                                      UnknownData00[0x185B853C9C0];                             // 0x0000(0x185B853C9C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_MinDistBetweenSpecsOfType");
		return ptr;
	}

};


// Class Engine.Path_TowardGoal
// 0x185B853DE00
class Path_TowardGoal
{
public:
	unsigned char                                      UnknownData00[0x185B853DE00];                             // 0x0000(0x185B853DE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_TowardGoal");
		return ptr;
	}

};


// Class Engine.Path_TowardPoint
// 0x185B853F900
class Path_TowardPoint
{
public:
	unsigned char                                      UnknownData00[0x185B853F900];                             // 0x0000(0x185B853F900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_TowardPoint");
		return ptr;
	}

};


// Class Engine.Path_WithinDistanceEnvelope
// 0x185B853E040
class Path_WithinDistanceEnvelope
{
public:
	unsigned char                                      UnknownData00[0x185B853E040];                             // 0x0000(0x185B853E040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_WithinDistanceEnvelope");
		return ptr;
	}

};


// Class Engine.Path_WithinTraversalDist
// 0x185B853F120
class Path_WithinTraversalDist
{
public:
	unsigned char                                      UnknownData00[0x185B853F120];                             // 0x0000(0x185B853F120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Path_WithinTraversalDist");
		return ptr;
	}

};


// Class Engine.PathGoalEvaluator
// 0x185AD4E7250
class PathGoalEvaluator
{
public:
	unsigned char                                      UnknownData00[0x185AD4E7250];                             // 0x0000(0x185AD4E7250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathGoalEvaluator");
		return ptr;
	}

};


// Class Engine.Goal_AtActor
// 0x185AD4E5CF0
class Goal_AtActor
{
public:
	unsigned char                                      UnknownData00[0x185AD4E5CF0];                             // 0x0000(0x185AD4E5CF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Goal_AtActor");
		return ptr;
	}

};


// Class Engine.Goal_Null
// 0x185AD4E6A70
class Goal_Null
{
public:
	unsigned char                                      UnknownData00[0x185AD4E6A70];                             // 0x0000(0x185AD4E6A70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Goal_Null");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActor
// 0x185B855D180
class SkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x185B855D180];                             // 0x0000(0x185B855D180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActor");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActorBasedOnExtremeContent
// 0x185B855FA00
class SkeletalMeshActorBasedOnExtremeContent
{
public:
	unsigned char                                      UnknownData00[0x185B855FA00];                             // 0x0000(0x185B855FA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActorBasedOnExtremeContent");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActorSpawnable
// 0x0000
class SkeletalMeshActorSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActorSpawnable");
		return ptr;
	}

};


// Class Engine.SkeletalMeshCinematicActor
// 0x0000
class SkeletalMeshCinematicActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshCinematicActor");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActorMAT
// 0x185B8561620
class SkeletalMeshActorMAT
{
public:
	unsigned char                                      UnknownData00[0x185B8561620];                             // 0x0000(0x185B8561620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActorMAT");
		return ptr;
	}

};


// Class Engine.HeadTrackingComponent
// 0x185AD4F2650
class HeadTrackingComponent
{
public:
	unsigned char                                      UnknownData00[0x185AD4F2650];                             // 0x0000(0x185AD4F2650) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HeadTrackingComponent");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm
// 0x185C1D48190
class AnimationCompressionAlgorithm
{
public:
	unsigned char                                      UnknownData00[0x185C1D48190];                             // 0x0000(0x185C1D48190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_Automatic
// 0x185C1D4AAD0
class AnimationCompressionAlgorithm_Automatic
{
public:
	unsigned char                                      UnknownData00[0x185C1D4AAD0];                             // 0x0000(0x185C1D4AAD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_Automatic");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_BitwiseCompressOnly
// 0x0000
class AnimationCompressionAlgorithm_BitwiseCompressOnly
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_BitwiseCompressOnly");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_LeastDestructive
// 0x0000
class AnimationCompressionAlgorithm_LeastDestructive
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_LeastDestructive");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_RemoveEverySecondKey
// 0x185C1D4B6D0
class AnimationCompressionAlgorithm_RemoveEverySecondKey
{
public:
	unsigned char                                      UnknownData00[0x185C1D4B6D0];                             // 0x0000(0x185C1D4B6D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_RemoveEverySecondKey");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_RemoveLinearKeys
// 0x185C1D498D0
class AnimationCompressionAlgorithm_RemoveLinearKeys
{
public:
	unsigned char                                      UnknownData00[0x185C1D498D0];                             // 0x0000(0x185C1D498D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_RemoveLinearKeys");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_PerTrackCompression
// 0x185C1D4D890
class AnimationCompressionAlgorithm_PerTrackCompression
{
public:
	unsigned char                                      UnknownData00[0x185C1D4D890];                             // 0x0000(0x185C1D4D890) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_PerTrackCompression");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_RemoveTrivialKeys
// 0x185C1D4CBD0
class AnimationCompressionAlgorithm_RemoveTrivialKeys
{
public:
	unsigned char                                      UnknownData00[0x185C1D4CBD0];                             // 0x0000(0x185C1D4CBD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_RemoveTrivialKeys");
		return ptr;
	}

};


// Class Engine.AnimationCompressionAlgorithm_RevertToRaw
// 0x0000
class AnimationCompressionAlgorithm_RevertToRaw
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationCompressionAlgorithm_RevertToRaw");
		return ptr;
	}

};


// Class Engine.AnimMetaData
// 0x0000
class AnimMetaData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData");
		return ptr;
	}

};


// Class Engine.AnimMetaData_SkelControl
// 0x185C1D4B310
class AnimMetaData_SkelControl
{
public:
	unsigned char                                      UnknownData00[0x185C1D4B310];                             // 0x0000(0x185C1D4B310) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData_SkelControl");
		return ptr;
	}

};


// Class Engine.AnimMetaData_SkelControlKeyFrame
// 0x185C1D4CF90
class AnimMetaData_SkelControlKeyFrame
{
public:
	unsigned char                                      UnknownData00[0x185C1D4CF90];                             // 0x0000(0x185C1D4CF90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData_SkelControlKeyFrame");
		return ptr;
	}

};


// Class Engine.AnimNotify
// 0x185C1DC04F0
class AnimNotify
{
public:
	unsigned char                                      UnknownData00[0x185C1DC04F0];                             // 0x0000(0x185C1DC04F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify");
		return ptr;
	}

};


// Class Engine.AnimNotify_AkEvent
// 0x185C1DC14B0
class AnimNotify_AkEvent
{
public:
	unsigned char                                      UnknownData00[0x185C1DC14B0];                             // 0x0000(0x185C1DC14B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_AkEvent");
		return ptr;
	}

};


// Class Engine.AnimNotify_CameraEffect
// 0x185B7E0C190
class AnimNotify_CameraEffect
{
public:
	unsigned char                                      UnknownData00[0x185B7E0C190];                             // 0x0000(0x185B7E0C190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_CameraEffect");
		return ptr;
	}

};


// Class Engine.AnimNotify_ClothingMaxDistanceScale
// 0x185C1D60250
class AnimNotify_ClothingMaxDistanceScale
{
public:
	unsigned char                                      UnknownData00[0x185C1D60250];                             // 0x0000(0x185C1D60250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ClothingMaxDistanceScale");
		return ptr;
	}

};


// Class Engine.AnimNotify_Footstep
// 0x185B771AC00
class AnimNotify_Footstep
{
public:
	unsigned char                                      UnknownData00[0x185B771AC00];                             // 0x0000(0x185B771AC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Footstep");
		return ptr;
	}

};


// Class Engine.AnimNotify_ForceField
// 0x185BB3ADDA0
class AnimNotify_ForceField
{
public:
	unsigned char                                      UnknownData00[0x185BB3ADDA0];                             // 0x0000(0x185BB3ADDA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ForceField");
		return ptr;
	}

};


// Class Engine.AnimNotify_Kismet
// 0x185B771CC40
class AnimNotify_Kismet
{
public:
	unsigned char                                      UnknownData00[0x185B771CC40];                             // 0x0000(0x185B771CC40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Kismet");
		return ptr;
	}

};


// Class Engine.AnimNotify_PlayParticleEffect
// 0x185BB504F10
class AnimNotify_PlayParticleEffect
{
public:
	unsigned char                                      UnknownData00[0x185BB504F10];                             // 0x0000(0x185BB504F10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlayParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimNotify_Rumble
// 0x185B7E0DED0
class AnimNotify_Rumble
{
public:
	unsigned char                                      UnknownData00[0x185B7E0DED0];                             // 0x0000(0x185B7E0DED0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Rumble");
		return ptr;
	}

};


// Class Engine.AnimNotify_Script
// 0x185B771F400
class AnimNotify_Script
{
public:
	unsigned char                                      UnknownData00[0x185B771F400];                             // 0x0000(0x185B771F400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Script");
		return ptr;
	}

};


// Class Engine.AnimNotify_Scripted
// 0x185C1DB1D30
class AnimNotify_Scripted
{
public:
	unsigned char                                      UnknownData00[0x185C1DB1D30];                             // 0x0000(0x185C1DB1D30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Scripted");
		return ptr;
	}

};


// Class Engine.AnimNotify_PawnMaterialParam
// 0x185C1DB4250
class AnimNotify_PawnMaterialParam
{
public:
	unsigned char                                      UnknownData00[0x185C1DB4250];                             // 0x0000(0x185C1DB4250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PawnMaterialParam");
		return ptr;
	}

};


// Class Engine.AnimNotify_ViewShake
// 0x185C1DB4010
class AnimNotify_ViewShake
{
public:
	unsigned char                                      UnknownData00[0x185C1DB4010];                             // 0x0000(0x185C1DB4010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ViewShake");
		return ptr;
	}

};


// Class Engine.AnimNotify_Sound
// 0x185C1DB0FB0
class AnimNotify_Sound
{
public:
	unsigned char                                      UnknownData00[0x185C1DB0FB0];                             // 0x0000(0x185C1DB0FB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Sound");
		return ptr;
	}

};


// Class Engine.AnimNotify_Trails
// 0x185C1DB0D70
class AnimNotify_Trails
{
public:
	unsigned char                                      UnknownData00[0x185C1DB0D70];                             // 0x0000(0x185C1DB0D70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_Trails");
		return ptr;
	}

};


// Class Engine.AnimObject
// 0x185C1D4DDD0
class AnimObject
{
public:
	unsigned char                                      UnknownData00[0x185C1D4DDD0];                             // 0x0000(0x185C1D4DDD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimObject");
		return ptr;
	}

};


// Class Engine.AnimNode
// 0x185C1DBBAB0
class AnimNode
{
public:
	unsigned char                                      UnknownData00[0x185C1DBBAB0];                             // 0x0000(0x185C1DBBAB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNode");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendBase
// 0x185C1DB9FB0
class AnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x185C1DB9FB0];                             // 0x0000(0x185C1DB9FB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendBase");
		return ptr;
	}

};


// Class Engine.AnimNode_MultiBlendPerBone
// 0x185C1DBD370
class AnimNode_MultiBlendPerBone
{
public:
	unsigned char                                      UnknownData00[0x185C1DBD370];                             // 0x0000(0x185C1DBD370) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNode_MultiBlendPerBone");
		return ptr;
	}

};


// Class Engine.AnimNodeAimOffset
// 0x185C1DB9230
class AnimNodeAimOffset
{
public:
	unsigned char                                      UnknownData00[0x185C1DB9230];                             // 0x0000(0x185C1DB9230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeAimOffset");
		return ptr;
	}

};


// Class Engine.AnimNodeBlend
// 0x185C1DBD5B0
class AnimNodeBlend
{
public:
	unsigned char                                      UnknownData00[0x185C1DBD5B0];                             // 0x0000(0x185C1DBD5B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlend");
		return ptr;
	}

};


// Class Engine.AnimNodeAdditiveBlending
// 0x185C1DBD6D0
class AnimNodeAdditiveBlending
{
public:
	unsigned char                                      UnknownData00[0x185C1DBD6D0];                             // 0x0000(0x185C1DBD6D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeAdditiveBlending");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendPerBone
// 0x185C1DB9350
class AnimNodeBlendPerBone
{
public:
	unsigned char                                      UnknownData00[0x185C1DB9350];                             // 0x0000(0x185C1DB9350) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendPerBone");
		return ptr;
	}

};


// Class Engine.AnimNodeCrossfader
// 0x185C1DBB510
class AnimNodeCrossfader
{
public:
	unsigned char                                      UnknownData00[0x185C1DBB510];                             // 0x0000(0x185C1DBB510) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeCrossfader");
		return ptr;
	}

};


// Class Engine.AnimNodePlayCustomAnim
// 0x185C1DC1930
class AnimNodePlayCustomAnim
{
public:
	unsigned char                                      UnknownData00[0x185C1DC1930];                             // 0x0000(0x185C1DC1930) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodePlayCustomAnim");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendDirectional
// 0x185C1D55750
class AnimNodeBlendDirectional
{
public:
	unsigned char                                      UnknownData00[0x185C1D55750];                             // 0x0000(0x185C1D55750) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendDirectional");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendList
// 0x185C1DBAF70
class AnimNodeBlendList
{
public:
	unsigned char                                      UnknownData00[0x185C1DBAF70];                             // 0x0000(0x185C1DBAF70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendList");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendByBase
// 0x185C1D52510
class AnimNodeBlendByBase
{
public:
	unsigned char                                      UnknownData00[0x185C1D52510];                             // 0x0000(0x185C1D52510) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendByBase");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendByPhysics
// 0x0000
class AnimNodeBlendByPhysics
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendByPhysics");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendByPosture
// 0x0000
class AnimNodeBlendByPosture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendByPosture");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendByProperty
// 0x185C1D51850
class AnimNodeBlendByProperty
{
public:
	unsigned char                                      UnknownData00[0x185C1D51850];                             // 0x0000(0x185C1D51850) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendByProperty");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendBySpeed
// 0x185C1D55090
class AnimNodeBlendBySpeed
{
public:
	unsigned char                                      UnknownData00[0x185C1D55090];                             // 0x0000(0x185C1D55090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendBySpeed");
		return ptr;
	}

};


// Class Engine.AnimNodeRandom
// 0x185C1D5BED0
class AnimNodeRandom
{
public:
	unsigned char                                      UnknownData00[0x185C1D5BED0];                             // 0x0000(0x185C1D5BED0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeRandom");
		return ptr;
	}

};


// Class Engine.AnimNodeBlendMultiBone
// 0x185C1DB9110
class AnimNodeBlendMultiBone
{
public:
	unsigned char                                      UnknownData00[0x185C1DB9110];                             // 0x0000(0x185C1DB9110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeBlendMultiBone");
		return ptr;
	}

};


// Class Engine.AnimNodeMirror
// 0x185C1D55810
class AnimNodeMirror
{
public:
	unsigned char                                      UnknownData00[0x185C1D55810];                             // 0x0000(0x185C1D55810) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeMirror");
		return ptr;
	}

};


// Class Engine.AnimNodeScalePlayRate
// 0x185C1D5AD90
class AnimNodeScalePlayRate
{
public:
	unsigned char                                      UnknownData00[0x185C1D5AD90];                             // 0x0000(0x185C1D5AD90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeScalePlayRate");
		return ptr;
	}

};


// Class Engine.AnimNodeScaleRateBySpeed
// 0x185C1D5C4D0
class AnimNodeScaleRateBySpeed
{
public:
	unsigned char                                      UnknownData00[0x185C1D5C4D0];                             // 0x0000(0x185C1D5C4D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeScaleRateBySpeed");
		return ptr;
	}

};


// Class Engine.AnimNodeSlot
// 0x185C1DBFAD0
class AnimNodeSlot
{
public:
	unsigned char                                      UnknownData00[0x185C1DBFAD0];                             // 0x0000(0x185C1DBFAD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeSlot");
		return ptr;
	}

};


// Class Engine.AnimNodeSynch
// 0x185C1DBD910
class AnimNodeSynch
{
public:
	unsigned char                                      UnknownData00[0x185C1DBD910];                             // 0x0000(0x185C1DBD910) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeSynch");
		return ptr;
	}

};


// Class Engine.AnimTree
// 0x185C1DB0110
class AnimTree
{
public:
	unsigned char                                      UnknownData00[0x185C1DB0110];                             // 0x0000(0x185C1DB0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimTree");
		return ptr;
	}

};


// Class Engine.AnimNodeSequence
// 0x185C1DC1810
class AnimNodeSequence
{
public:
	unsigned char                                      UnknownData00[0x185C1DC1810];                             // 0x0000(0x185C1DC1810) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeSequence");
		return ptr;
	}

};


// Class Engine.AnimNodeSequenceBlendBase
// 0x185C1D5B2D0
class AnimNodeSequenceBlendBase
{
public:
	unsigned char                                      UnknownData00[0x185C1D5B2D0];                             // 0x0000(0x185C1D5B2D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeSequenceBlendBase");
		return ptr;
	}

};


// Class Engine.AnimNodeSequenceBlendByAim
// 0x185C1DC1DB0
class AnimNodeSequenceBlendByAim
{
public:
	unsigned char                                      UnknownData00[0x185C1DC1DB0];                             // 0x0000(0x185C1DC1DB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeSequenceBlendByAim");
		return ptr;
	}

};


// Class Engine.AnimNodeFrame
// 0x185C1D55510
class AnimNodeFrame
{
public:
	unsigned char                                      UnknownData00[0x185C1D55510];                             // 0x0000(0x185C1D55510) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNodeFrame");
		return ptr;
	}

};


// Class Engine.MorphNodeBase
// 0x185BCA0BA70
class MorphNodeBase
{
public:
	unsigned char                                      UnknownData00[0x185BCA0BA70];                             // 0x0000(0x185BCA0BA70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodeBase");
		return ptr;
	}

};


// Class Engine.MorphNodeMultiPose
// 0x185BB887FC0
class MorphNodeMultiPose
{
public:
	unsigned char                                      UnknownData00[0x185BB887FC0];                             // 0x0000(0x185BB887FC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodeMultiPose");
		return ptr;
	}

};


// Class Engine.MorphNodePose
// 0x185BB8838E0
class MorphNodePose
{
public:
	unsigned char                                      UnknownData00[0x185BB8838E0];                             // 0x0000(0x185BB8838E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodePose");
		return ptr;
	}

};


// Class Engine.MorphNodeWeightBase
// 0x185BCA0C670
class MorphNodeWeightBase
{
public:
	unsigned char                                      UnknownData00[0x185BCA0C670];                             // 0x0000(0x185BCA0C670) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodeWeightBase");
		return ptr;
	}

};


// Class Engine.MorphNodeWeight
// 0x185BB88A060
class MorphNodeWeight
{
public:
	unsigned char                                      UnknownData00[0x185BB88A060];                             // 0x0000(0x185BB88A060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodeWeight");
		return ptr;
	}

};


// Class Engine.MorphNodeWeightByBoneAngle
// 0x185BB88BEC0
class MorphNodeWeightByBoneAngle
{
public:
	unsigned char                                      UnknownData00[0x185BB88BEC0];                             // 0x0000(0x185BB88BEC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodeWeightByBoneAngle");
		return ptr;
	}

};


// Class Engine.MorphNodeWeightByBoneRotation
// 0x185BCA0D3F0
class MorphNodeWeightByBoneRotation
{
public:
	unsigned char                                      UnknownData00[0x185BCA0D3F0];                             // 0x0000(0x185BCA0D3F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphNodeWeightByBoneRotation");
		return ptr;
	}

};


// Class Engine.SkelControlBase
// 0x185B855C0A0
class SkelControlBase
{
public:
	unsigned char                                      UnknownData00[0x185B855C0A0];                             // 0x0000(0x185B855C0A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlBase");
		return ptr;
	}

};


// Class Engine.SkelControl_CCD_IK
// 0x185B6250840
class SkelControl_CCD_IK
{
public:
	unsigned char                                      UnknownData00[0x185B6250840];                             // 0x0000(0x185B6250840) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControl_CCD_IK");
		return ptr;
	}

};


// Class Engine.SkelControl_Multiply
// 0x185B624F940
class SkelControl_Multiply
{
public:
	unsigned char                                      UnknownData00[0x185B624F940];                             // 0x0000(0x185B624F940) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControl_Multiply");
		return ptr;
	}

};


// Class Engine.SkelControl_TwistBone
// 0x185B624E5C0
class SkelControl_TwistBone
{
public:
	unsigned char                                      UnknownData00[0x185B624E5C0];                             // 0x0000(0x185B624E5C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControl_TwistBone");
		return ptr;
	}

};


// Class Engine.SkelControlLimb
// 0x185B6251200
class SkelControlLimb
{
public:
	unsigned char                                      UnknownData00[0x185B6251200];                             // 0x0000(0x185B6251200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlLimb");
		return ptr;
	}

};


// Class Engine.SkelControlFootPlacement
// 0x185B6252280
class SkelControlFootPlacement
{
public:
	unsigned char                                      UnknownData00[0x185B6252280];                             // 0x0000(0x185B6252280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlFootPlacement");
		return ptr;
	}

};


// Class Engine.SkelControlLookAt
// 0x185B855C9A0
class SkelControlLookAt
{
public:
	unsigned char                                      UnknownData00[0x185B855C9A0];                             // 0x0000(0x185B855C9A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlLookAt");
		return ptr;
	}

};


// Class Engine.SkelControlSingleBone
// 0x185B62530C0
class SkelControlSingleBone
{
public:
	unsigned char                                      UnknownData00[0x185B62530C0];                             // 0x0000(0x185B62530C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlSingleBone");
		return ptr;
	}

};


// Class Engine.SkelControlHandlebars
// 0x185B6251500
class SkelControlHandlebars
{
public:
	unsigned char                                      UnknownData00[0x185B6251500];                             // 0x0000(0x185B6251500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlHandlebars");
		return ptr;
	}

};


// Class Engine.SkelControlWheel
// 0x185B6256FC0
class SkelControlWheel
{
public:
	unsigned char                                      UnknownData00[0x185B6256FC0];                             // 0x0000(0x185B6256FC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlWheel");
		return ptr;
	}

};


// Class Engine.SkelControlSpline
// 0x185BC8693E0
class SkelControlSpline
{
public:
	unsigned char                                      UnknownData00[0x185BC8693E0];                             // 0x0000(0x185BC8693E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlSpline");
		return ptr;
	}

};


// Class Engine.SkelControlTrail
// 0x185B6254BC0
class SkelControlTrail
{
public:
	unsigned char                                      UnknownData00[0x185B6254BC0];                             // 0x0000(0x185B6254BC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkelControlTrail");
		return ptr;
	}

};


// Class Engine.TgAnimTreeComment
// 0x185B84D6320
class TgAnimTreeComment
{
public:
	unsigned char                                      UnknownData00[0x185B84D6320];                             // 0x0000(0x185B84D6320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TgAnimTreeComment");
		return ptr;
	}

};


// Class Engine.AnimSequence
// 0x185C1DBA430
class AnimSequence
{
public:
	unsigned char                                      UnknownData00[0x185C1DBA430];                             // 0x0000(0x185C1DBA430) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequence");
		return ptr;
	}

};


// Class Engine.AnimSet
// 0x185C1D242C0
class AnimSet
{
public:
	unsigned char                                      UnknownData00[0x185C1D242C0];                             // 0x0000(0x185C1D242C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSet");
		return ptr;
	}

};


// Class Engine.MorphTarget
// 0x185BCA0D870
class MorphTarget
{
public:
	unsigned char                                      UnknownData00[0x185BCA0D870];                             // 0x0000(0x185BCA0D870) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphTarget");
		return ptr;
	}

};


// Class Engine.MorphTargetSet
// 0x185BB8888C0
class MorphTargetSet
{
public:
	unsigned char                                      UnknownData00[0x185BB8888C0];                             // 0x0000(0x185BB8888C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphTargetSet");
		return ptr;
	}

};


// Class Engine.MorphWeightSequence
// 0x0000
class MorphWeightSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphWeightSequence");
		return ptr;
	}

};


// Class Engine.DecalActorBase
// 0x185B69CAE10
class DecalActorBase
{
public:
	unsigned char                                      UnknownData00[0x185B69CAE10];                             // 0x0000(0x185B69CAE10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActorBase");
		return ptr;
	}

};


// Class Engine.DecalActor
// 0x0000
class DecalActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActor");
		return ptr;
	}

};


// Class Engine.DecalActorMovable
// 0x0000
class DecalActorMovable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActorMovable");
		return ptr;
	}

};


// Class Engine.DecalManager
// 0x185BB8FC1C0
class DecalManager
{
public:
	unsigned char                                      UnknownData00[0x185BB8FC1C0];                             // 0x0000(0x185BB8FC1C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalManager");
		return ptr;
	}

};


// Class Engine.DecalComponent
// 0x185BB8FB7A0
class DecalComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB8FB7A0];                             // 0x0000(0x185BB8FB7A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalComponent");
		return ptr;
	}

};


// Class Engine.ActorFactoryDecal
// 0x185B5A99A10
class ActorFactoryDecal
{
public:
	unsigned char                                      UnknownData00[0x185B5A99A10];                             // 0x0000(0x185B5A99A10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryDecal");
		return ptr;
	}

};


// Class Engine.ActorFactoryDecalMovable
// 0x0000
class ActorFactoryDecalMovable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryDecalMovable");
		return ptr;
	}

};


// Class Engine.Material
// 0x185BB8FD180
class Material
{
public:
	unsigned char                                      UnknownData00[0x185BB8FD180];                             // 0x0000(0x185BB8FD180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Material");
		return ptr;
	}

};


// Class Engine.DecalMaterial
// 0x0000
class DecalMaterial
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalMaterial");
		return ptr;
	}

};


// Class Engine.FogVolumeDensityInfo
// 0x185BB915120
class FogVolumeDensityInfo
{
public:
	unsigned char                                      UnknownData00[0x185BB915120];                             // 0x0000(0x185BB915120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeDensityInfo");
		return ptr;
	}

};


// Class Engine.FogVolumeConeDensityInfo
// 0x0000
class FogVolumeConeDensityInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeConeDensityInfo");
		return ptr;
	}

};


// Class Engine.FogVolumeConstantDensityInfo
// 0x0000
class FogVolumeConstantDensityInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeConstantDensityInfo");
		return ptr;
	}

};


// Class Engine.FogVolumeLinearHalfspaceDensityInfo
// 0x0000
class FogVolumeLinearHalfspaceDensityInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeLinearHalfspaceDensityInfo");
		return ptr;
	}

};


// Class Engine.FogVolumeSphericalDensityInfo
// 0x0000
class FogVolumeSphericalDensityInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeSphericalDensityInfo");
		return ptr;
	}

};


// Class Engine.ExponentialHeightFogComponent
// 0x185BB912E40
class ExponentialHeightFogComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB912E40];                             // 0x0000(0x185BB912E40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFogComponent");
		return ptr;
	}

};


// Class Engine.FogVolumeDensityComponent
// 0x185BB913F20
class FogVolumeDensityComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB913F20];                             // 0x0000(0x185BB913F20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeDensityComponent");
		return ptr;
	}

};


// Class Engine.FogVolumeConeDensityComponent
// 0x185B65E3770
class FogVolumeConeDensityComponent
{
public:
	unsigned char                                      UnknownData00[0x185B65E3770];                             // 0x0000(0x185B65E3770) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeConeDensityComponent");
		return ptr;
	}

};


// Class Engine.FogVolumeConstantDensityComponent
// 0x185B65E23F0
class FogVolumeConstantDensityComponent
{
public:
	unsigned char                                      UnknownData00[0x185B65E23F0];                             // 0x0000(0x185B65E23F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeConstantDensityComponent");
		return ptr;
	}

};


// Class Engine.FogVolumeLinearHalfspaceDensityComponent
// 0x185B65E1670
class FogVolumeLinearHalfspaceDensityComponent
{
public:
	unsigned char                                      UnknownData00[0x185B65E1670];                             // 0x0000(0x185B65E1670) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeLinearHalfspaceDensityComponent");
		return ptr;
	}

};


// Class Engine.FogVolumeSphericalDensityComponent
// 0x185B65E2B70
class FogVolumeSphericalDensityComponent
{
public:
	unsigned char                                      UnknownData00[0x185B65E2B70];                             // 0x0000(0x185B65E2B70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FogVolumeSphericalDensityComponent");
		return ptr;
	}

};


// Class Engine.ActorFactoryFogVolumeConstantDensityInfo
// 0x185B5A99410
class ActorFactoryFogVolumeConstantDensityInfo
{
public:
	unsigned char                                      UnknownData00[0x185B5A99410];                             // 0x0000(0x185B5A99410) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryFogVolumeConstantDensityInfo");
		return ptr;
	}

};


// Class Engine.ActorFactoryFogVolumeLinearHalfspaceDensityInfo
// 0x0000
class ActorFactoryFogVolumeLinearHalfspaceDensityInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryFogVolumeLinearHalfspaceDensityInfo");
		return ptr;
	}

};


// Class Engine.ActorFactoryFogVolumeSphericalDensityInfo
// 0x0000
class ActorFactoryFogVolumeSphericalDensityInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryFogVolumeSphericalDensityInfo");
		return ptr;
	}

};


// Class Engine.ApexDestructibleActor
// 0x185C1DB22D0
class ApexDestructibleActor
{
public:
	unsigned char                                      UnknownData00[0x185C1DB22D0];                             // 0x0000(0x185C1DB22D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexDestructibleActor");
		return ptr;
	}

};


// Class Engine.FracturedStaticMeshActor
// 0x185AD4C98B0
class FracturedStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x185AD4C98B0];                             // 0x0000(0x185AD4C98B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedStaticMeshActor");
		return ptr;
	}

};


// Class Engine.FracturedStaticMeshPart
// 0x185AD4C8110
class FracturedStaticMeshPart
{
public:
	unsigned char                                      UnknownData00[0x185AD4C8110];                             // 0x0000(0x185AD4C8110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedStaticMeshPart");
		return ptr;
	}

};


// Class Engine.FractureManager
// 0x185AD4CBA70
class FractureManager
{
public:
	unsigned char                                      UnknownData00[0x185AD4CBA70];                             // 0x0000(0x185AD4CBA70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FractureManager");
		return ptr;
	}

};


// Class Engine.ImageReflection
// 0x185AD4F1B10
class ImageReflection
{
public:
	unsigned char                                      UnknownData00[0x185AD4F1B10];                             // 0x0000(0x185AD4F1B10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImageReflection");
		return ptr;
	}

};


// Class Engine.ImageReflectionSceneCapture
// 0x185BC873CC0
class ImageReflectionSceneCapture
{
public:
	unsigned char                                      UnknownData00[0x185BC873CC0];                             // 0x0000(0x185BC873CC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImageReflectionSceneCapture");
		return ptr;
	}

};


// Class Engine.ImageReflectionShadowPlane
// 0x185AD4F5E90
class ImageReflectionShadowPlane
{
public:
	unsigned char                                      UnknownData00[0x185AD4F5E90];                             // 0x0000(0x185AD4F5E90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImageReflectionShadowPlane");
		return ptr;
	}

};


// Class Engine.ImageReflectionComponent
// 0x185BC871A40
class ImageReflectionComponent
{
public:
	unsigned char                                      UnknownData00[0x185BC871A40];                             // 0x0000(0x185BC871A40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImageReflectionComponent");
		return ptr;
	}

};


// Class Engine.ImageReflectionShadowPlaneComponent
// 0x185AD4F1C30
class ImageReflectionShadowPlaneComponent
{
public:
	unsigned char                                      UnknownData00[0x185AD4F1C30];                             // 0x0000(0x185AD4F1C30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImageReflectionShadowPlaneComponent");
		return ptr;
	}

};


// Class Engine.ApexComponentBase
// 0x185C1D2BAC0
class ApexComponentBase
{
public:
	unsigned char                                      UnknownData00[0x185C1D2BAC0];                             // 0x0000(0x185C1D2BAC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexComponentBase");
		return ptr;
	}

};


// Class Engine.ApexDynamicComponent
// 0x185C1D34100
class ApexDynamicComponent
{
public:
	unsigned char                                      UnknownData00[0x185C1D34100];                             // 0x0000(0x185C1D34100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexDynamicComponent");
		return ptr;
	}

};


// Class Engine.ApexStaticComponent
// 0x0000
class ApexStaticComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexStaticComponent");
		return ptr;
	}

};


// Class Engine.ApexStaticDestructibleComponent
// 0x185C1D2C3C0
class ApexStaticDestructibleComponent
{
public:
	unsigned char                                      UnknownData00[0x185C1D2C3C0];                             // 0x0000(0x185C1D2C3C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexStaticDestructibleComponent");
		return ptr;
	}

};


// Class Engine.FracturedBaseComponent
// 0x185BB8D7D40
class FracturedBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB8D7D40];                             // 0x0000(0x185BB8D7D40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedBaseComponent");
		return ptr;
	}

};


// Class Engine.FracturedSkinnedMeshComponent
// 0x185B65EB570
class FracturedSkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x185B65EB570];                             // 0x0000(0x185B65EB570) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedSkinnedMeshComponent");
		return ptr;
	}

};


// Class Engine.FracturedStaticMeshComponent
// 0x185BB8D7E60
class FracturedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB8D7E60];                             // 0x0000(0x185BB8D7E60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedStaticMeshComponent");
		return ptr;
	}

};


// Class Engine.ImageBasedReflectionComponent
// 0x185AD4F0FD0
class ImageBasedReflectionComponent
{
public:
	unsigned char                                      UnknownData00[0x185AD4F0FD0];                             // 0x0000(0x185AD4F0FD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImageBasedReflectionComponent");
		return ptr;
	}

};


// Class Engine.InstancedStaticMeshComponent
// 0x185AD4F6550
class InstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x185AD4F6550];                             // 0x0000(0x185AD4F6550) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Engine.ProxyStaticMeshComponent
// 0x0000
class ProxyStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProxyStaticMeshComponent");
		return ptr;
	}

};


// Class Engine.SplineMeshComponent
// 0x185B6276640
class SplineMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x185B6276640];                             // 0x0000(0x185B6276640) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshComponent");
		return ptr;
	}

};


// Class Engine.ApexAsset
// 0x185C1D28D00
class ApexAsset
{
public:
	unsigned char                                      UnknownData00[0x185C1D28D00];                             // 0x0000(0x185C1D28D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexAsset");
		return ptr;
	}

};


// Class Engine.ApexClothingAsset
// 0x185C1D27680
class ApexClothingAsset
{
public:
	unsigned char                                      UnknownData00[0x185C1D27680];                             // 0x0000(0x185C1D27680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexClothingAsset");
		return ptr;
	}

};


// Class Engine.ApexDestructibleAsset
// 0x185C1DB23F0
class ApexDestructibleAsset
{
public:
	unsigned char                                      UnknownData00[0x185C1DB23F0];                             // 0x0000(0x185C1DB23F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexDestructibleAsset");
		return ptr;
	}

};


// Class Engine.ApexGenericAsset
// 0x185C1D32C00
class ApexGenericAsset
{
public:
	unsigned char                                      UnknownData00[0x185C1D32C00];                             // 0x0000(0x185C1D32C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexGenericAsset");
		return ptr;
	}

};


// Class Engine.InterpFilter
// 0x185BC884F40
class InterpFilter
{
public:
	unsigned char                                      UnknownData00[0x185BC884F40];                             // 0x0000(0x185BC884F40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter");
		return ptr;
	}

};


// Class Engine.InterpFilter_Classes
// 0x0000
class InterpFilter_Classes
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Classes");
		return ptr;
	}

};


// Class Engine.InterpFilter_Custom
// 0x0000
class InterpFilter_Custom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Custom");
		return ptr;
	}

};


// Class Engine.InterpGroup
// 0x185AD4FB1D0
class InterpGroup
{
public:
	unsigned char                                      UnknownData00[0x185AD4FB1D0];                             // 0x0000(0x185AD4FB1D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroup");
		return ptr;
	}

};


// Class Engine.InterpGroupAI
// 0x185BC888A80
class InterpGroupAI
{
public:
	unsigned char                                      UnknownData00[0x185BC888A80];                             // 0x0000(0x185BC888A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupAI");
		return ptr;
	}

};


// Class Engine.InterpGroupCamera
// 0x185AD4FB2F0
class InterpGroupCamera
{
public:
	unsigned char                                      UnknownData00[0x185AD4FB2F0];                             // 0x0000(0x185AD4FB2F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupDirector
// 0x0000
class InterpGroupDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupDirector");
		return ptr;
	}

};


// Class Engine.InterpGroupInst
// 0x185C1D39440
class InterpGroupInst
{
public:
	unsigned char                                      UnknownData00[0x185C1D39440];                             // 0x0000(0x185C1D39440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInst");
		return ptr;
	}

};


// Class Engine.InterpGroupInstAI
// 0x185BC886C80
class InterpGroupInstAI
{
public:
	unsigned char                                      UnknownData00[0x185BC886C80];                             // 0x0000(0x185BC886C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstAI");
		return ptr;
	}

};


// Class Engine.InterpGroupInstCamera
// 0x0000
class InterpGroupInstCamera
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupInstDirector
// 0x0000
class InterpGroupInstDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackBoolProp
// 0x185BC88AE80
class InterpTrackBoolProp
{
public:
	unsigned char                                      UnknownData00[0x185BC88AE80];                             // 0x0000(0x185BC88AE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackDirector
// 0x185BC889380
class InterpTrackDirector
{
public:
	unsigned char                                      UnknownData00[0x185BC889380];                             // 0x0000(0x185BC889380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackEvent
// 0x185BC88B840
class InterpTrackEvent
{
public:
	unsigned char                                      UnknownData00[0x185BC88B840];                             // 0x0000(0x185BC88B840) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackFaceFX
// 0x185AD4FB650
class InterpTrackFaceFX
{
public:
	unsigned char                                      UnknownData00[0x185AD4FB650];                             // 0x0000(0x185AD4FB650) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFaceFX");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatBase
// 0x185BC886440
class InterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x185BC886440];                             // 0x0000(0x185BC886440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatBase");
		return ptr;
	}

};


// Class Engine.InterpTrackAnimControl
// 0x185AD4F7F30
class InterpTrackAnimControl
{
public:
	unsigned char                                      UnknownData00[0x185AD4F7F30];                             // 0x0000(0x185AD4F7F30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackFade
// 0x185BC88BC00
class InterpTrackFade
{
public:
	unsigned char                                      UnknownData00[0x185BC88BC00];                             // 0x0000(0x185BC88BC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFade");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatMaterialParam
// 0x185BC88A880
class InterpTrackFloatMaterialParam
{
public:
	unsigned char                                      UnknownData00[0x185BC88A880];                             // 0x0000(0x185BC88A880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatParticleParam
// 0x185BC88AD00
class InterpTrackFloatParticleParam
{
public:
	unsigned char                                      UnknownData00[0x185BC88AD00];                             // 0x0000(0x185BC88AD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatProp
// 0x185BC8895C0
class InterpTrackFloatProp
{
public:
	unsigned char                                      UnknownData00[0x185BC8895C0];                             // 0x0000(0x185BC8895C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackMorphWeight
// 0x185BC891840
class InterpTrackMorphWeight
{
public:
	unsigned char                                      UnknownData00[0x185BC891840];                             // 0x0000(0x185BC891840) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMorphWeight");
		return ptr;
	}

};


// Class Engine.InterpTrackMoveAxis
// 0x185BC8904C0
class InterpTrackMoveAxis
{
public:
	unsigned char                                      UnknownData00[0x185BC8904C0];                             // 0x0000(0x185BC8904C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMoveAxis");
		return ptr;
	}

};


// Class Engine.InterpTrackSkelControlScale
// 0x185BC88FE00
class InterpTrackSkelControlScale
{
public:
	unsigned char                                      UnknownData00[0x185BC88FE00];                             // 0x0000(0x185BC88FE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSkelControlScale");
		return ptr;
	}

};


// Class Engine.InterpTrackSkelControlStrength
// 0x185BC88FBC0
class InterpTrackSkelControlStrength
{
public:
	unsigned char                                      UnknownData00[0x185BC88FBC0];                             // 0x0000(0x185BC88FBC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSkelControlStrength");
		return ptr;
	}

};


// Class Engine.InterpTrackSlomo
// 0x0000
class InterpTrackSlomo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackHeadTracking
// 0x185BC88ADC0
class InterpTrackHeadTracking
{
public:
	unsigned char                                      UnknownData00[0x185BC88ADC0];                             // 0x0000(0x185BC88ADC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackHeadTracking");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorBase
// 0x185BC88FA40
class InterpTrackLinearColorBase
{
public:
	unsigned char                                      UnknownData00[0x185BC88FA40];                             // 0x0000(0x185BC88FA40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorProp
// 0x185BC891000
class InterpTrackLinearColorProp
{
public:
	unsigned char                                      UnknownData00[0x185BC891000];                             // 0x0000(0x185BC891000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackMove
// 0x185B8644F60
class InterpTrackMove
{
public:
	unsigned char                                      UnknownData00[0x185B8644F60];                             // 0x0000(0x185B8644F60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMove");
		return ptr;
	}

};


// Class Engine.InterpTrackNotify
// 0x185AD4FA7B0
class InterpTrackNotify
{
public:
	unsigned char                                      UnknownData00[0x185AD4FA7B0];                             // 0x0000(0x185AD4FA7B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackNotify");
		return ptr;
	}

};


// Class Engine.InterpTrackParticleReplay
// 0x185BC891D80
class InterpTrackParticleReplay
{
public:
	unsigned char                                      UnknownData00[0x185BC891D80];                             // 0x0000(0x185BC891D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackToggle
// 0x185BC88E180
class InterpTrackToggle
{
public:
	unsigned char                                      UnknownData00[0x185BC88E180];                             // 0x0000(0x185BC88E180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorBase
// 0x185BC88A700
class InterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x185BC88A700];                             // 0x0000(0x185BC88A700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackAudioMaster
// 0x0000
class InterpTrackAudioMaster
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackColorProp
// 0x185BC88A940
class InterpTrackColorProp
{
public:
	unsigned char                                      UnknownData00[0x185BC88A940];                             // 0x0000(0x185BC88A940) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackColorScale
// 0x0000
class InterpTrackColorScale
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackSound
// 0x185BC890D00
class InterpTrackSound
{
public:
	unsigned char                                      UnknownData00[0x185BC890D00];                             // 0x0000(0x185BC890D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSound");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorMaterialParam
// 0x185BC88F140
class InterpTrackVectorMaterialParam
{
public:
	unsigned char                                      UnknownData00[0x185BC88F140];                             // 0x0000(0x185BC88F140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorProp
// 0x185BC88F5C0
class InterpTrackVectorProp
{
public:
	unsigned char                                      UnknownData00[0x185BC88F5C0];                             // 0x0000(0x185BC88F5C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackVisibility
// 0x185BC88C500
class InterpTrackVisibility
{
public:
	unsigned char                                      UnknownData00[0x185BC88C500];                             // 0x0000(0x185BC88C500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVisibility");
		return ptr;
	}

};


// Class Engine.InterpTrackInst
// 0x0000
class InterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInst");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAnimControl
// 0x185BC889500
class InterpTrackInstAnimControl
{
public:
	unsigned char                                      UnknownData00[0x185BC889500];                             // 0x0000(0x185BC889500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAudioMaster
// 0x0000
class InterpTrackInstAudioMaster
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorScale
// 0x0000
class InterpTrackInstColorScale
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackInstDirector
// 0x185BC88DDC0
class InterpTrackInstDirector
{
public:
	unsigned char                                      UnknownData00[0x185BC88DDC0];                             // 0x0000(0x185BC88DDC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackInstEvent
// 0x185BC88CA40
class InterpTrackInstEvent
{
public:
	unsigned char                                      UnknownData00[0x185BC88CA40];                             // 0x0000(0x185BC88CA40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFaceFX
// 0x185BC88C8C0
class InterpTrackInstFaceFX
{
public:
	unsigned char                                      UnknownData00[0x185BC88C8C0];                             // 0x0000(0x185BC88C8C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFaceFX");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFade
// 0x0000
class InterpTrackInstFade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFade");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatMaterialParam
// 0x185BC88C380
class InterpTrackInstFloatMaterialParam
{
public:
	unsigned char                                      UnknownData00[0x185BC88C380];                             // 0x0000(0x185BC88C380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatParticleParam
// 0x185BC88D100
class InterpTrackInstFloatParticleParam
{
public:
	unsigned char                                      UnknownData00[0x185BC88D100];                             // 0x0000(0x185BC88D100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstHeadTracking
// 0x185BC88DE80
class InterpTrackInstHeadTracking
{
public:
	unsigned char                                      UnknownData00[0x185BC88DE80];                             // 0x0000(0x185BC88DE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstHeadTracking");
		return ptr;
	}

};


// Class Engine.InterpTrackInstMorphWeight
// 0x0000
class InterpTrackInstMorphWeight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMorphWeight");
		return ptr;
	}

};


// Class Engine.InterpTrackInstMove
// 0x185BC88D940
class InterpTrackInstMove
{
public:
	unsigned char                                      UnknownData00[0x185BC88D940];                             // 0x0000(0x185BC88D940) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMove");
		return ptr;
	}

};


// Class Engine.InterpTrackInstNotify
// 0x185BC88E600
class InterpTrackInstNotify
{
public:
	unsigned char                                      UnknownData00[0x185BC88E600];                             // 0x0000(0x185BC88E600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstNotify");
		return ptr;
	}

};


// Class Engine.InterpTrackInstParticleReplay
// 0x185BC88CEC0
class InterpTrackInstParticleReplay
{
public:
	unsigned char                                      UnknownData00[0x185BC88CEC0];                             // 0x0000(0x185BC88CEC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackInstProperty
// 0x185BC88D280
class InterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x185BC88D280];                             // 0x0000(0x185BC88D280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstProperty");
		return ptr;
	}

};


// Class Engine.InterpTrackInstBoolProp
// 0x185BC88D340
class InterpTrackInstBoolProp
{
public:
	unsigned char                                      UnknownData00[0x185BC88D340];                             // 0x0000(0x185BC88D340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorProp
// 0x185BC88E240
class InterpTrackInstColorProp
{
public:
	unsigned char                                      UnknownData00[0x185BC88E240];                             // 0x0000(0x185BC88E240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatProp
// 0x185BC88D7C0
class InterpTrackInstFloatProp
{
public:
	unsigned char                                      UnknownData00[0x185BC88D7C0];                             // 0x0000(0x185BC88D7C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstLinearColorProp
// 0x185BC88E480
class InterpTrackInstLinearColorProp
{
public:
	unsigned char                                      UnknownData00[0x185BC88E480];                             // 0x0000(0x185BC88E480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorProp
// 0x185BC88C2C0
class InterpTrackInstVectorProp
{
public:
	unsigned char                                      UnknownData00[0x185BC88C2C0];                             // 0x0000(0x185BC88C2C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSkelControlScale
// 0x0000
class InterpTrackInstSkelControlScale
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSkelControlScale");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSkelControlStrength
// 0x185BC88CD40
class InterpTrackInstSkelControlStrength
{
public:
	unsigned char                                      UnknownData00[0x185BC88CD40];                             // 0x0000(0x185BC88CD40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSkelControlStrength");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSlomo
// 0x185BC88E6C0
class InterpTrackInstSlomo
{
public:
	unsigned char                                      UnknownData00[0x185BC88E6C0];                             // 0x0000(0x185BC88E6C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSound
// 0x185BC88C5C0
class InterpTrackInstSound
{
public:
	unsigned char                                      UnknownData00[0x185BC88C5C0];                             // 0x0000(0x185BC88C5C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSound");
		return ptr;
	}

};


// Class Engine.InterpTrackInstToggle
// 0x185BC88D400
class InterpTrackInstToggle
{
public:
	unsigned char                                      UnknownData00[0x185BC88D400];                             // 0x0000(0x185BC88D400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorMaterialParam
// 0x185BC88E900
class InterpTrackInstVectorMaterialParam
{
public:
	unsigned char                                      UnknownData00[0x185BC88E900];                             // 0x0000(0x185BC88E900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVisibility
// 0x185BC891E40
class InterpTrackInstVisibility
{
public:
	unsigned char                                      UnknownData00[0x185BC891E40];                             // 0x0000(0x185BC891E40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVisibility");
		return ptr;
	}

};


// Class Engine.MaterialExpression
// 0x185BC9FCCB0
class MaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x185BC9FCCB0];                             // 0x0000(0x185BC9FCCB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpression");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAbs
// 0x185BC9FC0B0
class MaterialExpressionAbs
{
public:
	unsigned char                                      UnknownData00[0x185BC9FC0B0];                             // 0x0000(0x185BC9FC0B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAbs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionActorWorldPosition
// 0x0000
class MaterialExpressionActorWorldPosition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionActorWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAdd
// 0x185BC9FCA70
class MaterialExpressionAdd
{
public:
	unsigned char                                      UnknownData00[0x185BC9FCA70];                             // 0x0000(0x185BC9FCA70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAdd");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAppendVector
// 0x185BC9FA4F0
class MaterialExpressionAppendVector
{
public:
	unsigned char                                      UnknownData00[0x185BC9FA4F0];                             // 0x0000(0x185BC9FA4F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAppendVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBumpOffset
// 0x185BC9FA430
class MaterialExpressionBumpOffset
{
public:
	unsigned char                                      UnknownData00[0x185BC9FA430];                             // 0x0000(0x185BC9FA430) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBumpOffset");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraVector
// 0x0000
class MaterialExpressionCameraVector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraWorldPosition
// 0x0000
class MaterialExpressionCameraWorldPosition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCeil
// 0x185BC9FAAF0
class MaterialExpressionCeil
{
public:
	unsigned char                                      UnknownData00[0x185BC9FAAF0];                             // 0x0000(0x185BC9FAAF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCeil");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClamp
// 0x185BC9FB6F0
class MaterialExpressionClamp
{
public:
	unsigned char                                      UnknownData00[0x185BC9FB6F0];                             // 0x0000(0x185BC9FB6F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClamp");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComment
// 0x185BC9FA370
class MaterialExpressionComment
{
public:
	unsigned char                                      UnknownData00[0x185BC9FA370];                             // 0x0000(0x185BC9FA370) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComment");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComponentMask
// 0x185BC9FA5B0
class MaterialExpressionComponentMask
{
public:
	unsigned char                                      UnknownData00[0x185BC9FA5B0];                             // 0x0000(0x185BC9FA5B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComponentMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant
// 0x185BC9FC530
class MaterialExpressionConstant
{
public:
	unsigned char                                      UnknownData00[0x185BC9FC530];                             // 0x0000(0x185BC9FC530) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant2Vector
// 0x185BC9FC5F0
class MaterialExpressionConstant2Vector
{
public:
	unsigned char                                      UnknownData00[0x185BC9FC5F0];                             // 0x0000(0x185BC9FC5F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant2Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant3Vector
// 0x185BC9FBCF0
class MaterialExpressionConstant3Vector
{
public:
	unsigned char                                      UnknownData00[0x185BC9FBCF0];                             // 0x0000(0x185BC9FBCF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant3Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant4Vector
// 0x185BC9FCB30
class MaterialExpressionConstant4Vector
{
public:
	unsigned char                                      UnknownData00[0x185BC9FCB30];                             // 0x0000(0x185BC9FCB30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant4Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstantBiasScale
// 0x185BC9FC8F0
class MaterialExpressionConstantBiasScale
{
public:
	unsigned char                                      UnknownData00[0x185BC9FC8F0];                             // 0x0000(0x185BC9FC8F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstantBiasScale");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstantClamp
// 0x185BC9FA130
class MaterialExpressionConstantClamp
{
public:
	unsigned char                                      UnknownData00[0x185BC9FA130];                             // 0x0000(0x185BC9FA130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstantClamp");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCosine
// 0x185BC9FB930
class MaterialExpressionCosine
{
public:
	unsigned char                                      UnknownData00[0x185BC9FB930];                             // 0x0000(0x185BC9FB930) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCrossProduct
// 0x185BC9FD730
class MaterialExpressionCrossProduct
{
public:
	unsigned char                                      UnknownData00[0x185BC9FD730];                             // 0x0000(0x185BC9FD730) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCrossProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustom
// 0x185BCA00070
class MaterialExpressionCustom
{
public:
	unsigned char                                      UnknownData00[0x185BCA00070];                             // 0x0000(0x185BCA00070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustomPixelShaderVector
// 0x0000
class MaterialExpressionCustomPixelShaderVector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustomPixelShaderVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustomTexture
// 0x185BC9FF170
class MaterialExpressionCustomTexture
{
public:
	unsigned char                                      UnknownData00[0x185BC9FF170];                             // 0x0000(0x185BC9FF170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustomTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthBiasedAlpha
// 0x185BC9FEC30
class MaterialExpressionDepthBiasedAlpha
{
public:
	unsigned char                                      UnknownData00[0x185BC9FEC30];                             // 0x0000(0x185BC9FEC30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthBiasedAlpha");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthBiasedBlend
// 0x185BC9FE030
class MaterialExpressionDepthBiasedBlend
{
public:
	unsigned char                                      UnknownData00[0x185BC9FE030];                             // 0x0000(0x185BC9FE030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthBiasedBlend");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthOfFieldFunction
// 0x185BC9FE330
class MaterialExpressionDepthOfFieldFunction
{
public:
	unsigned char                                      UnknownData00[0x185BC9FE330];                             // 0x0000(0x185BC9FE330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthOfFieldFunction");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDeriveNormalZ
// 0x185BC9FFEF0
class MaterialExpressionDeriveNormalZ
{
public:
	unsigned char                                      UnknownData00[0x185BC9FFEF0];                             // 0x0000(0x185BC9FFEF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDeriveNormalZ");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDesaturation
// 0x185BC9FFFB0
class MaterialExpressionDesaturation
{
public:
	unsigned char                                      UnknownData00[0x185BC9FFFB0];                             // 0x0000(0x185BC9FFFB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDesaturation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDestColor
// 0x0000
class MaterialExpressionDestColor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDestColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDestDepth
// 0x185BC9FFCB0
class MaterialExpressionDestDepth
{
public:
	unsigned char                                      UnknownData00[0x185BC9FFCB0];                             // 0x0000(0x185BC9FFCB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDestDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistance
// 0x185BC9FE270
class MaterialExpressionDistance
{
public:
	unsigned char                                      UnknownData00[0x185BC9FE270];                             // 0x0000(0x185BC9FE270) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDivide
// 0x185BC9FF470
class MaterialExpressionDivide
{
public:
	unsigned char                                      UnknownData00[0x185BC9FF470];                             // 0x0000(0x185BC9FF470) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDivide");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDotProduct
// 0x185BC9FD130
class MaterialExpressionDotProduct
{
public:
	unsigned char                                      UnknownData00[0x185BC9FD130];                             // 0x0000(0x185BC9FD130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDotProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDynamicParameter
// 0x185BC9FD1F0
class MaterialExpressionDynamicParameter
{
public:
	unsigned char                                      UnknownData00[0x185BC9FD1F0];                             // 0x0000(0x185BC9FD1F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDynamicParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMeshEmitterDynamicParameter
// 0x0000
class MaterialExpressionMeshEmitterDynamicParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMeshEmitterDynamicParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFloor
// 0x185BC9FEAB0
class MaterialExpressionFloor
{
public:
	unsigned char                                      UnknownData00[0x185BC9FEAB0];                             // 0x0000(0x185BC9FEAB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFloor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFluidNormal
// 0x185BC9FD5B0
class MaterialExpressionFluidNormal
{
public:
	unsigned char                                      UnknownData00[0x185BC9FD5B0];                             // 0x0000(0x185BC9FD5B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFluidNormal");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFmod
// 0x185BC9FDC70
class MaterialExpressionFmod
{
public:
	unsigned char                                      UnknownData00[0x185BC9FDC70];                             // 0x0000(0x185BC9FDC70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFmod");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFoliageImpulseDirection
// 0x0000
class MaterialExpressionFoliageImpulseDirection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFoliageImpulseDirection");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFoliageNormalizedRotationAxisAndAngle
// 0x0000
class MaterialExpressionFoliageNormalizedRotationAxisAndAngle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFoliageNormalizedRotationAxisAndAngle");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSample
// 0x185BC9FD430
class MaterialExpressionFontSample
{
public:
	unsigned char                                      UnknownData00[0x185BC9FD430];                             // 0x0000(0x185BC9FD430) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSampleParameter
// 0x185BC9FE4B0
class MaterialExpressionFontSampleParameter
{
public:
	unsigned char                                      UnknownData00[0x185BC9FE4B0];                             // 0x0000(0x185BC9FE4B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFrac
// 0x185BC9FDDF0
class MaterialExpressionFrac
{
public:
	unsigned char                                      UnknownData00[0x185BC9FDDF0];                             // 0x0000(0x185BC9FDDF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFrac");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFresnel
// 0x185BC9FF9B0
class MaterialExpressionFresnel
{
public:
	unsigned char                                      UnknownData00[0x185BC9FF9B0];                             // 0x0000(0x185BC9FF9B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFresnel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionInput
// 0x185B8643FC0
class MaterialExpressionFunctionInput
{
public:
	unsigned char                                      UnknownData00[0x185B8643FC0];                             // 0x0000(0x185B8643FC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionInput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionOutput
// 0x185BC9FEB70
class MaterialExpressionFunctionOutput
{
public:
	unsigned char                                      UnknownData00[0x185BC9FEB70];                             // 0x0000(0x185BC9FEB70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionIf
// 0x185BCA00670
class MaterialExpressionIf
{
public:
	unsigned char                                      UnknownData00[0x185BCA00670];                             // 0x0000(0x185BCA00670) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIf");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLandscapeLayerBlend
// 0x185BCA016F0
class MaterialExpressionLandscapeLayerBlend
{
public:
	unsigned char                                      UnknownData00[0x185BCA016F0];                             // 0x0000(0x185BCA016F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLensFlareIntensity
// 0x0000
class MaterialExpressionLensFlareIntensity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLensFlareIntensity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLensFlareOcclusion
// 0x0000
class MaterialExpressionLensFlareOcclusion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLensFlareOcclusion");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLensFlareRadialDistance
// 0x0000
class MaterialExpressionLensFlareRadialDistance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLensFlareRadialDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLensFlareRayDistance
// 0x0000
class MaterialExpressionLensFlareRayDistance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLensFlareRayDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLensFlareSourceDistance
// 0x0000
class MaterialExpressionLensFlareSourceDistance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLensFlareSourceDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmapUVs
// 0x0000
class MaterialExpressionLightmapUVs
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmapUVs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmassReplace
// 0x185BCA00AF0
class MaterialExpressionLightmassReplace
{
public:
	unsigned char                                      UnknownData00[0x185BCA00AF0];                             // 0x0000(0x185BCA00AF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmassReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightVector
// 0x0000
class MaterialExpressionLightVector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLinearInterpolate
// 0x185BCA02230
class MaterialExpressionLinearInterpolate
{
public:
	unsigned char                                      UnknownData00[0x185BCA02230];                             // 0x0000(0x185BCA02230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLinearInterpolate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialFunctionCall
// 0x185BB884420
class MaterialExpressionMaterialFunctionCall
{
public:
	unsigned char                                      UnknownData00[0x185BB884420];                             // 0x0000(0x185BB884420) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialFunctionCall");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMeshEmitterVertexColor
// 0x0000
class MaterialExpressionMeshEmitterVertexColor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMeshEmitterVertexColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMultiply
// 0x185BCA004F0
class MaterialExpressionMultiply
{
public:
	unsigned char                                      UnknownData00[0x185BCA004F0];                             // 0x0000(0x185BCA004F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMultiply");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNormalize
// 0x185BCA022F0
class MaterialExpressionNormalize
{
public:
	unsigned char                                      UnknownData00[0x185BCA022F0];                             // 0x0000(0x185BCA022F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNormalize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectOrientation
// 0x0000
class MaterialExpressionObjectOrientation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectOrientation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectRadius
// 0x0000
class MaterialExpressionObjectRadius
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectWorldPosition
// 0x0000
class MaterialExpressionObjectWorldPosition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionOcclusionPercentage
// 0x0000
class MaterialExpressionOcclusionPercentage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionOcclusionPercentage");
		return ptr;
	}

};


// Class Engine.MaterialExpressionOneMinus
// 0x185BCA00D30
class MaterialExpressionOneMinus
{
public:
	unsigned char                                      UnknownData00[0x185BCA00D30];                             // 0x0000(0x185BCA00D30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionOneMinus");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPanner
// 0x185BCA026B0
class MaterialExpressionPanner
{
public:
	unsigned char                                      UnknownData00[0x185BCA026B0];                             // 0x0000(0x185BCA026B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPanner");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParameter
// 0x185BCA008B0
class MaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x185BCA008B0];                             // 0x0000(0x185BCA008B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScalarParameter
// 0x185BCA019F0
class MaterialExpressionScalarParameter
{
public:
	unsigned char                                      UnknownData00[0x185BCA019F0];                             // 0x0000(0x185BCA019F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScalarParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBoolParameter
// 0x185BCA05FB0
class MaterialExpressionStaticBoolParameter
{
public:
	unsigned char                                      UnknownData00[0x185BCA05FB0];                             // 0x0000(0x185BCA05FB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBoolParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitchParameter
// 0x185BCA053B0
class MaterialExpressionStaticSwitchParameter
{
public:
	unsigned char                                      UnknownData00[0x185BCA053B0];                             // 0x0000(0x185BCA053B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitchParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticComponentMaskParameter
// 0x185BCA06070
class MaterialExpressionStaticComponentMaskParameter
{
public:
	unsigned char                                      UnknownData00[0x185BCA06070];                             // 0x0000(0x185BCA06070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticComponentMaskParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorParameter
// 0x185BCA07F30
class MaterialExpressionVectorParameter
{
public:
	unsigned char                                      UnknownData00[0x185BCA07F30];                             // 0x0000(0x185BCA07F30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMacroUV
// 0x185BCA01870
class MaterialExpressionParticleMacroUV
{
public:
	unsigned char                                      UnknownData00[0x185BCA01870];                             // 0x0000(0x185BCA01870) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMacroUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceRandom
// 0x0000
class MaterialExpressionPerInstanceRandom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelDepth
// 0x185BCA00DF0
class MaterialExpressionPixelDepth
{
public:
	unsigned char                                      UnknownData00[0x185BCA00DF0];                             // 0x0000(0x185BCA00DF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPower
// 0x185BCA01030
class MaterialExpressionPower
{
public:
	unsigned char                                      UnknownData00[0x185BCA01030];                             // 0x0000(0x185BCA01030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPower");
		return ptr;
	}

};


// Class Engine.MaterialExpressionQualitySwitch
// 0x185BCA01DB0
class MaterialExpressionQualitySwitch
{
public:
	unsigned char                                      UnknownData00[0x185BCA01DB0];                             // 0x0000(0x185BCA01DB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionQualitySwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReflectionVector
// 0x0000
class MaterialExpressionReflectionVector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReflectionVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotateAboutAxis
// 0x185BCA00C70
class MaterialExpressionRotateAboutAxis
{
public:
	unsigned char                                      UnknownData00[0x185BCA00C70];                             // 0x0000(0x185BCA00C70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotateAboutAxis");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotator
// 0x185BCA01570
class MaterialExpressionRotator
{
public:
	unsigned char                                      UnknownData00[0x185BCA01570];                             // 0x0000(0x185BCA01570) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotator");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneDepth
// 0x185BCA01AB0
class MaterialExpressionSceneDepth
{
public:
	unsigned char                                      UnknownData00[0x185BCA01AB0];                             // 0x0000(0x185BCA01AB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexture
// 0x185B8643A20
class MaterialExpressionSceneTexture
{
public:
	unsigned char                                      UnknownData00[0x185B8643A20];                             // 0x0000(0x185B8643A20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScreenPosition
// 0x185BCA02530
class MaterialExpressionScreenPosition
{
public:
	unsigned char                                      UnknownData00[0x185BCA02530];                             // 0x0000(0x185BCA02530) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScreenPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScreenSize
// 0x0000
class MaterialExpressionScreenSize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScreenSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSine
// 0x185BCA05230
class MaterialExpressionSine
{
public:
	unsigned char                                      UnknownData00[0x185BCA05230];                             // 0x0000(0x185BCA05230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphereMask
// 0x185BCA04870
class MaterialExpressionSphereMask
{
public:
	unsigned char                                      UnknownData00[0x185BCA04870];                             // 0x0000(0x185BCA04870) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphereMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSquareRoot
// 0x185BCA03430
class MaterialExpressionSquareRoot
{
public:
	unsigned char                                      UnknownData00[0x185BCA03430];                             // 0x0000(0x185BCA03430) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSquareRoot");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBool
// 0x185BCA03AF0
class MaterialExpressionStaticBool
{
public:
	unsigned char                                      UnknownData00[0x185BCA03AF0];                             // 0x0000(0x185BCA03AF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBool");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitch
// 0x185BCA043F0
class MaterialExpressionStaticSwitch
{
public:
	unsigned char                                      UnknownData00[0x185BCA043F0];                             // 0x0000(0x185BCA043F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSubtract
// 0x185BCA03EB0
class MaterialExpressionSubtract
{
public:
	unsigned char                                      UnknownData00[0x185BCA03EB0];                             // 0x0000(0x185BCA03EB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSubtract");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTerrainLayerCoords
// 0x185BCA03BB0
class MaterialExpressionTerrainLayerCoords
{
public:
	unsigned char                                      UnknownData00[0x185BCA03BB0];                             // 0x0000(0x185BCA03BB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTerrainLayerCoords");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTerrainLayerSwitch
// 0x185BCA03DF0
class MaterialExpressionTerrainLayerSwitch
{
public:
	unsigned char                                      UnknownData00[0x185BCA03DF0];                             // 0x0000(0x185BCA03DF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTerrainLayerSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTerrainLayerWeight
// 0x185BCA04FF0
class MaterialExpressionTerrainLayerWeight
{
public:
	unsigned char                                      UnknownData00[0x185BCA04FF0];                             // 0x0000(0x185BCA04FF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTerrainLayerWeight");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTexelSize
// 0x0000
class MaterialExpressionTexelSize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTexelSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureCoordinate
// 0x185BCA05D70
class MaterialExpressionTextureCoordinate
{
public:
	unsigned char                                      UnknownData00[0x185BCA05D70];                             // 0x0000(0x185BCA05D70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureCoordinate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObject
// 0x185BCA04570
class MaterialExpressionTextureObject
{
public:
	unsigned char                                      UnknownData00[0x185BCA04570];                             // 0x0000(0x185BCA04570) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObject");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSample
// 0x185BC9FB630
class MaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x185BC9FB630];                             // 0x0000(0x185BC9FB630) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthBiasBlend
// 0x185BC9FDAF0
class MaterialExpressionDepthBiasBlend
{
public:
	unsigned char                                      UnknownData00[0x185BC9FDAF0];                             // 0x0000(0x185BC9FDAF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthBiasBlend");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFlipBookSample
// 0x0000
class MaterialExpressionFlipBookSample
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFlipBookSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMeshSubUV
// 0x0000
class MaterialExpressionMeshSubUV
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMeshSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMeshSubUVBlend
// 0x0000
class MaterialExpressionMeshSubUVBlend
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMeshSubUVBlend");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSubUV
// 0x0000
class MaterialExpressionParticleSubUV
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter
// 0x185BC9FB030
class MaterialExpressionTextureSampleParameter
{
public:
	unsigned char                                      UnknownData00[0x185BC9FB030];                             // 0x0000(0x185BC9FB030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObjectParameter
// 0x0000
class MaterialExpressionTextureObjectParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObjectParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter2D
// 0x0000
class MaterialExpressionTextureSampleParameter2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter2D");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAntialiasedTextureMask
// 0x185B8643980
class MaterialExpressionAntialiasedTextureMask
{
public:
	unsigned char                                      UnknownData00[0x185B8643980];                             // 0x0000(0x185B8643980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAntialiasedTextureMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterFlipbook
// 0x0000
class MaterialExpressionTextureSampleParameterFlipbook
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterFlipbook");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterMeshSubUV
// 0x0000
class MaterialExpressionTextureSampleParameterMeshSubUV
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterMeshSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterMeshSubUVBlend
// 0x0000
class MaterialExpressionTextureSampleParameterMeshSubUVBlend
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterMeshSubUVBlend");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// 0x0000
class MaterialExpressionTextureSampleParameterSubUV
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterCube
// 0x0000
class MaterialExpressionTextureSampleParameterCube
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterCube");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterMovie
// 0x0000
class MaterialExpressionTextureSampleParameterMovie
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterMovie");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterNormal
// 0x185BCA058F0
class MaterialExpressionTextureSampleParameterNormal
{
public:
	unsigned char                                      UnknownData00[0x185BCA058F0];                             // 0x0000(0x185BCA058F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterNormal");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTime
// 0x185BCA05B30
class MaterialExpressionTime
{
public:
	unsigned char                                      UnknownData00[0x185BCA05B30];                             // 0x0000(0x185BCA05B30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransform
// 0x185B8644100
class MaterialExpressionTransform
{
public:
	unsigned char                                      UnknownData00[0x185B8644100];                             // 0x0000(0x185B8644100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransform");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransformPosition
// 0x185B8644560
class MaterialExpressionTransformPosition
{
public:
	unsigned char                                      UnknownData00[0x185B8644560];                             // 0x0000(0x185B8644560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransformPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTwoSidedSign
// 0x0000
class MaterialExpressionTwoSidedSign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTwoSidedSign");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexColor
// 0x0000
class MaterialExpressionVertexColor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWindDirectionAndSpeed
// 0x0000
class MaterialExpressionWindDirectionAndSpeed
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWindDirectionAndSpeed");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWorldNormal
// 0x0000
class MaterialExpressionWorldNormal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldNormal");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWorldPosition
// 0x0000
class MaterialExpressionWorldPosition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialFunction
// 0x185BCA074B0
class MaterialFunction
{
public:
	unsigned char                                      UnknownData00[0x185BCA074B0];                             // 0x0000(0x185BCA074B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunction");
		return ptr;
	}

};


// Class Engine.MaterialInstance
// 0x185AD5003F0
class MaterialInstance
{
public:
	unsigned char                                      UnknownData00[0x185AD5003F0];                             // 0x0000(0x185AD5003F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstance");
		return ptr;
	}

};


// Class Engine.MaterialInstanceConstant
// 0x185AD4C2710
class MaterialInstanceConstant
{
public:
	unsigned char                                      UnknownData00[0x185AD4C2710];                             // 0x0000(0x185AD4C2710) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceConstant");
		return ptr;
	}

};


// Class Engine.LandscapeMaterialInstanceConstant
// 0x185BC8A84C0
class LandscapeMaterialInstanceConstant
{
public:
	unsigned char                                      UnknownData00[0x185BC8A84C0];                             // 0x0000(0x185BC8A84C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeMaterialInstanceConstant");
		return ptr;
	}

};


// Class Engine.MaterialInstanceTimeVarying
// 0x185BB8863A0
class MaterialInstanceTimeVarying
{
public:
	unsigned char                                      UnknownData00[0x185BB8863A0];                             // 0x0000(0x185BB8863A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceTimeVarying");
		return ptr;
	}

};


// Class Engine.EmitterCameraLensEffectBase
// 0x185BB90E520
class EmitterCameraLensEffectBase
{
public:
	unsigned char                                      UnknownData00[0x185BB90E520];                             // 0x0000(0x185BB90E520) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterCameraLensEffectBase");
		return ptr;
	}

};


// Class Engine.ParticleEventManager
// 0x185B853F5A0
class ParticleEventManager
{
public:
	unsigned char                                      UnknownData00[0x185B853F5A0];                             // 0x0000(0x185B853F5A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEventManager");
		return ptr;
	}

};


// Class Engine.ParticleSystemComponent
// 0x185BB502330
class ParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB502330];                             // 0x0000(0x185BB502330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemComponent");
		return ptr;
	}

};


// Class Engine.DistributionFloatParticleParameter
// 0x0000
class DistributionFloatParticleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionVectorParticleParameter
// 0x0000
class DistributionVectorParticleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParticleParameter");
		return ptr;
	}

};


// Class Engine.ParticleEmitter
// 0x185B853CC00
class ParticleEmitter
{
public:
	unsigned char                                      UnknownData00[0x185B853CC00];                             // 0x0000(0x185B853CC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEmitter");
		return ptr;
	}

};


// Class Engine.ParticleSpriteEmitter
// 0x185BC866B40
class ParticleSpriteEmitter
{
public:
	unsigned char                                      UnknownData00[0x185BC866B40];                             // 0x0000(0x185BC866B40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSpriteEmitter");
		return ptr;
	}

};


// Class Engine.ParticleLODLevel
// 0x185B9E826E0
class ParticleLODLevel
{
public:
	unsigned char                                      UnknownData00[0x185B9E826E0];                             // 0x0000(0x185B9E826E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleLODLevel");
		return ptr;
	}

};


// Class Engine.ParticleModule
// 0x185B853CE40
class ParticleModule
{
public:
	unsigned char                                      UnknownData00[0x185B853CE40];                             // 0x0000(0x185B853CE40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModule");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationBase
// 0x185B9E80EE0
class ParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x185B9E80EE0];                             // 0x0000(0x185B9E80EE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAcceleration
// 0x185B9E820E0
class ParticleModuleAcceleration
{
public:
	unsigned char                                      UnknownData00[0x185B9E820E0];                             // 0x0000(0x185B9E820E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAcceleration");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationOverLifetime
// 0x185B9E7FFE0
class ParticleModuleAccelerationOverLifetime
{
public:
	unsigned char                                      UnknownData00[0x185B9E7FFE0];                             // 0x0000(0x185B9E7FFE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorBase
// 0x0000
class ParticleModuleAttractorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorBoneSocket
// 0x185BC862220
class ParticleModuleAttractorBoneSocket
{
public:
	unsigned char                                      UnknownData00[0x185BC862220];                             // 0x0000(0x185BC862220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorBoneSocket");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorLine
// 0x185B9E82860
class ParticleModuleAttractorLine
{
public:
	unsigned char                                      UnknownData00[0x185B9E82860];                             // 0x0000(0x185B9E82860) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorLine");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorParticle
// 0x185BC863440
class ParticleModuleAttractorParticle
{
public:
	unsigned char                                      UnknownData00[0x185BC863440];                             // 0x0000(0x185BC863440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorParticle");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPoint
// 0x185B9E84BA0
class ParticleModuleAttractorPoint
{
public:
	unsigned char                                      UnknownData00[0x185B9E84BA0];                             // 0x0000(0x185B9E84BA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPoint");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorSkelVertSurface
// 0x185BC862EA0
class ParticleModuleAttractorSkelVertSurface
{
public:
	unsigned char                                      UnknownData00[0x185BC862EA0];                             // 0x0000(0x185BC862EA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorSkelVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamBase
// 0x185BC863300
class ParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x185BC863300];                             // 0x0000(0x185BC863300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamModifier
// 0x185B853EA60
class ParticleModuleBeamModifier
{
public:
	unsigned char                                      UnknownData00[0x185B853EA60];                             // 0x0000(0x185B853EA60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamModifier");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamNoise
// 0x185B9E880E0
class ParticleModuleBeamNoise
{
public:
	unsigned char                                      UnknownData00[0x185B9E880E0];                             // 0x0000(0x185B9E880E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamNoise");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamSource
// 0x185B9E88620
class ParticleModuleBeamSource
{
public:
	unsigned char                                      UnknownData00[0x185B9E88620];                             // 0x0000(0x185B9E88620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamTarget
// 0x185B9E886E0
class ParticleModuleBeamTarget
{
public:
	unsigned char                                      UnknownData00[0x185B9E886E0];                             // 0x0000(0x185B9E886E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamTarget");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraBase
// 0x0000
class ParticleModuleCameraBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraOffset
// 0x185BC862CC0
class ParticleModuleCameraOffset
{
public:
	unsigned char                                      UnknownData00[0x185BC862CC0];                             // 0x0000(0x185BC862CC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionBase
// 0x185BC864160
class ParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x185BC864160];                             // 0x0000(0x185BC864160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollision
// 0x185B853EB80
class ParticleModuleCollision
{
public:
	unsigned char                                      UnknownData00[0x185B853EB80];                             // 0x0000(0x185B853EB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollision");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionActor
// 0x185B9E87AE0
class ParticleModuleCollisionActor
{
public:
	unsigned char                                      UnknownData00[0x185B9E87AE0];                             // 0x0000(0x185B9E87AE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionActor");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorBase
// 0x0000
class ParticleModuleColorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor
// 0x185B9E86B20
class ParticleModuleColor
{
public:
	unsigned char                                      UnknownData00[0x185B9E86B20];                             // 0x0000(0x185B9E86B20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor_Seeded
// 0x185B9E86FA0
class ParticleModuleColor_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9E86FA0];                             // 0x0000(0x185B9E86FA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorByParameter
// 0x185B9E85920
class ParticleModuleColorByParameter
{
public:
	unsigned char                                      UnknownData00[0x185B9E85920];                             // 0x0000(0x185B9E85920) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorByParameter");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorOverLife
// 0x185B9E87060
class ParticleModuleColorOverLife
{
public:
	unsigned char                                      UnknownData00[0x185B9E87060];                             // 0x0000(0x185B9E87060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorScaleOverDensity
// 0x185B9E872A0
class ParticleModuleColorScaleOverDensity
{
public:
	unsigned char                                      UnknownData00[0x185B9E872A0];                             // 0x0000(0x185B9E872A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorScaleOverDensity");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorScaleOverLife
// 0x185B9E8AA20
class ParticleModuleColorScaleOverLife
{
public:
	unsigned char                                      UnknownData00[0x185B9E8AA20];                             // 0x0000(0x185B9E8AA20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventBase
// 0x0000
class ParticleModuleEventBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventGenerator
// 0x185B9E88CE0
class ParticleModuleEventGenerator
{
public:
	unsigned char                                      UnknownData00[0x185B9E88CE0];                             // 0x0000(0x185B9E88CE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventGenerator");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverBase
// 0x185B9E8B560
class ParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0x185B9E8B560];                             // 0x0000(0x185B9E8B560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverKillParticles
// 0x185B9E8A8A0
class ParticleModuleEventReceiverKillParticles
{
public:
	unsigned char                                      UnknownData00[0x185B9E8A8A0];                             // 0x0000(0x185B9E8A8A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverKillParticles");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverSpawn
// 0x185B9E89D60
class ParticleModuleEventReceiverSpawn
{
public:
	unsigned char                                      UnknownData00[0x185B9E89D60];                             // 0x0000(0x185B9E89D60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBase
// 0x0000
class ParticleModuleKillBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBox
// 0x185B9E88AA0
class ParticleModuleKillBox
{
public:
	unsigned char                                      UnknownData00[0x185B9E88AA0];                             // 0x0000(0x185B9E88AA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBox");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillHeight
// 0x185B9E8A4E0
class ParticleModuleKillHeight
{
public:
	unsigned char                                      UnknownData00[0x185B9E8A4E0];                             // 0x0000(0x185B9E8A4E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillHeight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetimeBase
// 0x0000
class ParticleModuleLifetimeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetimeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime
// 0x185B9E8B7A0
class ParticleModuleLifetime
{
public:
	unsigned char                                      UnknownData00[0x185B9E8B7A0];                             // 0x0000(0x185B9E8B7A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime_Seeded
// 0x185B9E8AAE0
class ParticleModuleLifetime_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9E8AAE0];                             // 0x0000(0x185B9E8AAE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBase
// 0x0000
class ParticleModuleLocationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation
// 0x185B9E8B860
class ParticleModuleLocation
{
public:
	unsigned char                                      UnknownData00[0x185B9E8B860];                             // 0x0000(0x185B9E8B860) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation_Seeded
// 0x185B9E89520
class ParticleModuleLocation_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9E89520];                             // 0x0000(0x185B9E89520) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset
// 0x0000
class ParticleModuleLocationWorldOffset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// 0x185B9E8BCE0
class ParticleModuleLocationWorldOffset_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9E8BCE0];                             // 0x0000(0x185B9E8BCE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBoneSocket
// 0x185BC862360
class ParticleModuleLocationBoneSocket
{
public:
	unsigned char                                      UnknownData00[0x185BC862360];                             // 0x0000(0x185BC862360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBoneSocket");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationDirect
// 0x185B9E8B0E0
class ParticleModuleLocationDirect
{
public:
	unsigned char                                      UnknownData00[0x185B9E8B0E0];                             // 0x0000(0x185B9E8B0E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitter
// 0x185BC863F80
class ParticleModuleLocationEmitter
{
public:
	unsigned char                                      UnknownData00[0x185BC863F80];                             // 0x0000(0x185BC863F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitter");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitterDirect
// 0x185B9E8E0E0
class ParticleModuleLocationEmitterDirect
{
public:
	unsigned char                                      UnknownData00[0x185B9E8E0E0];                             // 0x0000(0x185B9E8E0E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitterDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveBase
// 0x185B9E8D420
class ParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x185B9E8D420];                             // 0x0000(0x185B9E8D420) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder
// 0x185BC865100
class ParticleModuleLocationPrimitiveCylinder
{
public:
	unsigned char                                      UnknownData00[0x185BC865100];                             // 0x0000(0x185BC865100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// 0x185B9E8E6E0
class ParticleModuleLocationPrimitiveCylinder_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9E8E6E0];                             // 0x0000(0x185B9E8E6E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere
// 0x185B9E8E4A0
class ParticleModuleLocationPrimitiveSphere
{
public:
	unsigned char                                      UnknownData00[0x185B9E8E4A0];                             // 0x0000(0x185B9E8E4A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// 0x185B9E8D720
class ParticleModuleLocationPrimitiveSphere_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9E8D720];                             // 0x0000(0x185B9E8D720) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationSkelVertSurface
// 0x185B9E8E620
class ParticleModuleLocationSkelVertSurface
{
public:
	unsigned char                                      UnknownData00[0x185B9E8E620];                             // 0x0000(0x185B9E8E620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationSkelVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationStaticVertSurface
// 0x185B9E8B9E0
class ParticleModuleLocationStaticVertSurface
{
public:
	unsigned char                                      UnknownData00[0x185B9E8B9E0];                             // 0x0000(0x185B9E8B9E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationStaticVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModuleSourceMovement
// 0x185B9E94260
class ParticleModuleSourceMovement
{
public:
	unsigned char                                      UnknownData00[0x185B9E94260];                             // 0x0000(0x185B9E94260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSourceMovement");
		return ptr;
	}

};


// Class Engine.ParticleModuleMaterialBase
// 0x0000
class ParticleModuleMaterialBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMaterialBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMaterialByParameter
// 0x185B9E8BE60
class ParticleModuleMaterialByParameter
{
public:
	unsigned char                                      UnknownData00[0x185B9E8BE60];                             // 0x0000(0x185B9E8BE60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMaterialByParameter");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshMaterial
// 0x185B9E8BF20
class ParticleModuleMeshMaterial
{
public:
	unsigned char                                      UnknownData00[0x185B9E8BF20];                             // 0x0000(0x185B9E8BF20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshMaterial");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbitBase
// 0x185B9E8F160
class ParticleModuleOrbitBase
{
public:
	unsigned char                                      UnknownData00[0x185B9E8F160];                             // 0x0000(0x185B9E8F160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbitBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbit
// 0x185B853ECA0
class ParticleModuleOrbit
{
public:
	unsigned char                                      UnknownData00[0x185B853ECA0];                             // 0x0000(0x185B853ECA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbit");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationBase
// 0x0000
class ParticleModuleOrientationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationAxisLock
// 0x185B9E90C60
class ParticleModuleOrientationAxisLock
{
public:
	unsigned char                                      UnknownData00[0x185B9E90C60];                             // 0x0000(0x185B9E90C60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationAxisLock");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterBase
// 0x0000
class ParticleModuleParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic
// 0x185B9E8EF20
class ParticleModuleParameterDynamic
{
public:
	unsigned char                                      UnknownData00[0x185B9E8EF20];                             // 0x0000(0x185B9E8EF20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic_Seeded
// 0x185B9E90DE0
class ParticleModuleParameterDynamic_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9E90DE0];                             // 0x0000(0x185B9E90DE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRequired
// 0x185BC866C80
class ParticleModuleRequired
{
public:
	unsigned char                                      UnknownData00[0x185BC866C80];                             // 0x0000(0x185BC866C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRequired");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationBase
// 0x0000
class ParticleModuleRotationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation
// 0x185B9E8D060
class ParticleModuleMeshRotation
{
public:
	unsigned char                                      UnknownData00[0x185B9E8D060];                             // 0x0000(0x185B9E8D060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation_Seeded
// 0x185B9E8D1E0
class ParticleModuleMeshRotation_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9E8D1E0];                             // 0x0000(0x185B9E8D1E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation
// 0x185B9E93DE0
class ParticleModuleRotation
{
public:
	unsigned char                                      UnknownData00[0x185B9E93DE0];                             // 0x0000(0x185B9E93DE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation_Seeded
// 0x185B9E92E20
class ParticleModuleRotation_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9E92E20];                             // 0x0000(0x185B9E92E20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationOverLifetime
// 0x185B9E91DA0
class ParticleModuleRotationOverLifetime
{
public:
	unsigned char                                      UnknownData00[0x185B9E91DA0];                             // 0x0000(0x185B9E91DA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateBase
// 0x0000
class ParticleModuleRotationRateBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate
// 0x185B9E8D4E0
class ParticleModuleMeshRotationRate
{
public:
	unsigned char                                      UnknownData00[0x185B9E8D4E0];                             // 0x0000(0x185B9E8D4E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate_Seeded
// 0x185B9E8F820
class ParticleModuleMeshRotationRate_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9E8F820];                             // 0x0000(0x185B9E8F820) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// 0x185B9E904E0
class ParticleModuleMeshRotationRateMultiplyLife
{
public:
	unsigned char                                      UnknownData00[0x185B9E904E0];                             // 0x0000(0x185B9E904E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateOverLife
// 0x185B9E8FA60
class ParticleModuleMeshRotationRateOverLife
{
public:
	unsigned char                                      UnknownData00[0x185B9E8FA60];                             // 0x0000(0x185B9E8FA60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate
// 0x185B9E923A0
class ParticleModuleRotationRate
{
public:
	unsigned char                                      UnknownData00[0x185B9E923A0];                             // 0x0000(0x185B9E923A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate_Seeded
// 0x185B9E92460
class ParticleModuleRotationRate_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9E92460];                             // 0x0000(0x185B9E92460) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateMultiplyLife
// 0x185B9E925E0
class ParticleModuleRotationRateMultiplyLife
{
public:
	unsigned char                                      UnknownData00[0x185B9E925E0];                             // 0x0000(0x185B9E925E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeBase
// 0x0000
class ParticleModuleSizeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize
// 0x185B9E931E0
class ParticleModuleSize
{
public:
	unsigned char                                      UnknownData00[0x185B9E931E0];                             // 0x0000(0x185B9E931E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize_Seeded
// 0x185B9E938A0
class ParticleModuleSize_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9E938A0];                             // 0x0000(0x185B9E938A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeMultiplyLife
// 0x185B9E928E0
class ParticleModuleSizeMultiplyLife
{
public:
	unsigned char                                      UnknownData00[0x185B9E928E0];                             // 0x0000(0x185B9E928E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeMultiplyVelocity
// 0x185B9E92D60
class ParticleModuleSizeMultiplyVelocity
{
public:
	unsigned char                                      UnknownData00[0x185B9E92D60];                             // 0x0000(0x185B9E92D60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeMultiplyVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScale
// 0x185B9E92CA0
class ParticleModuleSizeScale
{
public:
	unsigned char                                      UnknownData00[0x185B9E92CA0];                             // 0x0000(0x185B9E92CA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScaleByTime
// 0x185B9E93A20
class ParticleModuleSizeScaleByTime
{
public:
	unsigned char                                      UnknownData00[0x185B9E93A20];                             // 0x0000(0x185B9E93A20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleByTime");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScaleOverDensity
// 0x185B9E940E0
class ParticleModuleSizeScaleOverDensity
{
public:
	unsigned char                                      UnknownData00[0x185B9E940E0];                             // 0x0000(0x185B9E940E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleOverDensity");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnBase
// 0x185B9E94320
class ParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0x185B9E94320];                             // 0x0000(0x185B9E94320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawn
// 0x185B9E91AA0
class ParticleModuleSpawn
{
public:
	unsigned char                                      UnknownData00[0x185B9E91AA0];                             // 0x0000(0x185B9E91AA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnPerUnit
// 0x185B9E965A0
class ParticleModuleSpawnPerUnit
{
public:
	unsigned char                                      UnknownData00[0x185B9E965A0];                             // 0x0000(0x185B9E965A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnPerUnit");
		return ptr;
	}

};


// Class Engine.ParticleModuleStoreSpawnTimeBase
// 0x0000
class ParticleModuleStoreSpawnTimeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleStoreSpawnTimeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleStoreSpawnTime
// 0x0000
class ParticleModuleStoreSpawnTime
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleStoreSpawnTime");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVBase
// 0x0000
class ParticleModuleSubUVBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUV
// 0x185B9E94DA0
class ParticleModuleSubUV
{
public:
	unsigned char                                      UnknownData00[0x185B9E94DA0];                             // 0x0000(0x185B9E94DA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUV");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVMovie
// 0x185B9E95A60
class ParticleModuleSubUVMovie
{
public:
	unsigned char                                      UnknownData00[0x185B9E95A60];                             // 0x0000(0x185B9E95A60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVMovie");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVDirect
// 0x185B9E949E0
class ParticleModuleSubUVDirect
{
public:
	unsigned char                                      UnknownData00[0x185B9E949E0];                             // 0x0000(0x185B9E949E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVSelect
// 0x185B9E97620
class ParticleModuleSubUVSelect
{
public:
	unsigned char                                      UnknownData00[0x185B9E97620];                             // 0x0000(0x185B9E97620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVSelect");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailBase
// 0x0000
class ParticleModuleTrailBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailSource
// 0x185B9E955E0
class ParticleModuleTrailSource
{
public:
	unsigned char                                      UnknownData00[0x185B9E955E0];                             // 0x0000(0x185B9E955E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailSpawn
// 0x185B9E97320
class ParticleModuleTrailSpawn
{
public:
	unsigned char                                      UnknownData00[0x185B9E97320];                             // 0x0000(0x185B9E97320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailTaper
// 0x185B9E96360
class ParticleModuleTrailTaper
{
public:
	unsigned char                                      UnknownData00[0x185B9E96360];                             // 0x0000(0x185B9E96360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailTaper");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBase
// 0x0000
class ParticleModuleTypeDataBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataAnimTrail
// 0x185B9E968A0
class ParticleModuleTypeDataAnimTrail
{
public:
	unsigned char                                      UnknownData00[0x185B9E968A0];                             // 0x0000(0x185B9E968A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataAnimTrail");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataApex
// 0x185B9E961E0
class ParticleModuleTypeDataApex
{
public:
	unsigned char                                      UnknownData00[0x185B9E961E0];                             // 0x0000(0x185B9E961E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataApex");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBeam
// 0x185BC866320
class ParticleModuleTypeDataBeam
{
public:
	unsigned char                                      UnknownData00[0x185BC866320];                             // 0x0000(0x185BC866320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBeam");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBeam2
// 0x185BC864980
class ParticleModuleTypeDataBeam2
{
public:
	unsigned char                                      UnknownData00[0x185BC864980];                             // 0x0000(0x185BC864980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBeam2");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataMesh
// 0x185BC8648E0
class ParticleModuleTypeDataMesh
{
public:
	unsigned char                                      UnknownData00[0x185BC8648E0];                             // 0x0000(0x185BC8648E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataMesh");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataMeshPhysX
// 0x185BC866E60
class ParticleModuleTypeDataMeshPhysX
{
public:
	unsigned char                                      UnknownData00[0x185BC866E60];                             // 0x0000(0x185BC866E60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataMeshPhysX");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataPhysX
// 0x185B8540200
class ParticleModuleTypeDataPhysX
{
public:
	unsigned char                                      UnknownData00[0x185B8540200];                             // 0x0000(0x185B8540200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataPhysX");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataRibbon
// 0x185BC866FA0
class ParticleModuleTypeDataRibbon
{
public:
	unsigned char                                      UnknownData00[0x185BC866FA0];                             // 0x0000(0x185BC866FA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataRibbon");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataTrail
// 0x185B9E99420
class ParticleModuleTypeDataTrail
{
public:
	unsigned char                                      UnknownData00[0x185B9E99420];                             // 0x0000(0x185B9E99420) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataTrail");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataTrail2
// 0x185B9E9BEE0
class ParticleModuleTypeDataTrail2
{
public:
	unsigned char                                      UnknownData00[0x185B9E9BEE0];                             // 0x0000(0x185B9E9BEE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataTrail2");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberBase
// 0x185B9E9AF20
class ParticleModuleUberBase
{
public:
	unsigned char                                      UnknownData00[0x185B9E9AF20];                             // 0x0000(0x185B9E9AF20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberLTISIVCL
// 0x185B9E9CBA0
class ParticleModuleUberLTISIVCL
{
public:
	unsigned char                                      UnknownData00[0x185B9E9CBA0];                             // 0x0000(0x185B9E9CBA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberLTISIVCL");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberLTISIVCLIL
// 0x185B9E9AB60
class ParticleModuleUberLTISIVCLIL
{
public:
	unsigned char                                      UnknownData00[0x185B9E9AB60];                             // 0x0000(0x185B9E9AB60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberLTISIVCLIL");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberLTISIVCLILIRSSBLIRR
// 0x185B9E9BD60
class ParticleModuleUberLTISIVCLILIRSSBLIRR
{
public:
	unsigned char                                      UnknownData00[0x185B9E9BD60];                             // 0x0000(0x185B9E9BD60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberLTISIVCLILIRSSBLIRR");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberRainDrops
// 0x185B9E9E160
class ParticleModuleUberRainDrops
{
public:
	unsigned char                                      UnknownData00[0x185B9E9E160];                             // 0x0000(0x185B9E9E160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberRainDrops");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberRainImpacts
// 0x185B9E9E8E0
class ParticleModuleUberRainImpacts
{
public:
	unsigned char                                      UnknownData00[0x185B9E9E8E0];                             // 0x0000(0x185B9E9E8E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberRainImpacts");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberRainSplashA
// 0x185B9EA0860
class ParticleModuleUberRainSplashA
{
public:
	unsigned char                                      UnknownData00[0x185B9EA0860];                             // 0x0000(0x185B9EA0860) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberRainSplashA");
		return ptr;
	}

};


// Class Engine.ParticleModuleUberRainSplashB
// 0x185B9EA1160
class ParticleModuleUberRainSplashB
{
public:
	unsigned char                                      UnknownData00[0x185B9EA1160];                             // 0x0000(0x185B9EA1160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleUberRainSplashB");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityBase
// 0x185B9EA31A0
class ParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x185B9EA31A0];                             // 0x0000(0x185B9EA31A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity
// 0x185B9EA1D60
class ParticleModuleVelocity
{
public:
	unsigned char                                      UnknownData00[0x185B9EA1D60];                             // 0x0000(0x185B9EA1D60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity_Seeded
// 0x185B9EA0FE0
class ParticleModuleVelocity_Seeded
{
public:
	unsigned char                                      UnknownData00[0x185B9EA0FE0];                             // 0x0000(0x185B9EA0FE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityCone
// 0x185B9EA2660
class ParticleModuleVelocityCone
{
public:
	unsigned char                                      UnknownData00[0x185B9EA2660];                             // 0x0000(0x185B9EA2660) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityCone");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityInheritParent
// 0x185B9EA2720
class ParticleModuleVelocityInheritParent
{
public:
	unsigned char                                      UnknownData00[0x185B9EA2720];                             // 0x0000(0x185B9EA2720) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityInheritParent");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityOverLifetime
// 0x185B9EA3620
class ParticleModuleVelocityOverLifetime
{
public:
	unsigned char                                      UnknownData00[0x185B9EA3620];                             // 0x0000(0x185B9EA3620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleWorldForcesBase
// 0x0000
class ParticleModuleWorldForcesBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleWorldForcesBase");
		return ptr;
	}

};


// Class Engine.ParticleModulePhysicsVolumes
// 0x185BC865560
class ParticleModulePhysicsVolumes
{
public:
	unsigned char                                      UnknownData00[0x185BC865560];                             // 0x0000(0x185BC865560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModulePhysicsVolumes");
		return ptr;
	}

};


// Class Engine.ParticleModuleWorldAttractor
// 0x185B9EA2D20
class ParticleModuleWorldAttractor
{
public:
	unsigned char                                      UnknownData00[0x185B9EA2D20];                             // 0x0000(0x185B9EA2D20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleWorldAttractor");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventSendToGame
// 0x185B853C8A0
class ParticleModuleEventSendToGame
{
public:
	unsigned char                                      UnknownData00[0x185B853C8A0];                             // 0x0000(0x185B853C8A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventSendToGame");
		return ptr;
	}

};


// Class Engine.ParticleSystemReplay
// 0x185B9EA36E0
class ParticleSystemReplay
{
public:
	unsigned char                                      UnknownData00[0x185B9EA36E0];                             // 0x0000(0x185B9EA36E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemReplay");
		return ptr;
	}

};


// Class Engine.PhysXParticleSystem
// 0x185B9EB3520
class PhysXParticleSystem
{
public:
	unsigned char                                      UnknownData00[0x185B9EB3520];                             // 0x0000(0x185B9EB3520) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysXParticleSystem");
		return ptr;
	}

};


// Class Engine.KActor
// 0x185AD4FCDF0
class KActor
{
public:
	unsigned char                                      UnknownData00[0x185AD4FCDF0];                             // 0x0000(0x185AD4FCDF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KActor");
		return ptr;
	}

};


// Class Engine.KActorFromStatic
// 0x185AD4FF9D0
class KActorFromStatic
{
public:
	unsigned char                                      UnknownData00[0x185AD4FF9D0];                             // 0x0000(0x185AD4FF9D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KActorFromStatic");
		return ptr;
	}

};


// Class Engine.KActorSpawnable
// 0x185AD4FB9B0
class KActorSpawnable
{
public:
	unsigned char                                      UnknownData00[0x185AD4FB9B0];                             // 0x0000(0x185AD4FB9B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KActorSpawnable");
		return ptr;
	}

};


// Class Engine.KAsset
// 0x185AD500510
class KAsset
{
public:
	unsigned char                                      UnknownData00[0x185AD500510];                             // 0x0000(0x185AD500510) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KAsset");
		return ptr;
	}

};


// Class Engine.KAssetSpawnable
// 0x0000
class KAssetSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KAssetSpawnable");
		return ptr;
	}

};


// Class Engine.Pawn
// 0x185C1DB10D0
class Pawn
{
public:
	unsigned char                                      UnknownData00[0x185C1DB10D0];                             // 0x0000(0x185C1DB10D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pawn");
		return ptr;
	}

};


// Class Engine.Vehicle
// 0x185B8566A80
class Vehicle
{
public:
	unsigned char                                      UnknownData00[0x185B8566A80];                             // 0x0000(0x185B8566A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Vehicle");
		return ptr;
	}

};


// Class Engine.SVehicle
// 0x185B856D8C0
class SVehicle
{
public:
	unsigned char                                      UnknownData00[0x185B856D8C0];                             // 0x0000(0x185B856D8C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SVehicle");
		return ptr;
	}

};


// Class Engine.RB_ConstraintActor
// 0x185B8552F80
class RB_ConstraintActor
{
public:
	unsigned char                                      UnknownData00[0x185B8552F80];                             // 0x0000(0x185B8552F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_ConstraintActor");
		return ptr;
	}

};


// Class Engine.RB_LineImpulseActor
// 0x185B8551240
class RB_LineImpulseActor
{
public:
	unsigned char                                      UnknownData00[0x185B8551240];                             // 0x0000(0x185B8551240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_LineImpulseActor");
		return ptr;
	}

};


// Class Engine.RB_RadialImpulseActor
// 0x185B854F620
class RB_RadialImpulseActor
{
public:
	unsigned char                                      UnknownData00[0x185B854F620];                             // 0x0000(0x185B854F620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_RadialImpulseActor");
		return ptr;
	}

};


// Class Engine.RB_Thruster
// 0x185B8551D80
class RB_Thruster
{
public:
	unsigned char                                      UnknownData00[0x185B8551D80];                             // 0x0000(0x185B8551D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_Thruster");
		return ptr;
	}

};


// Class Engine.WorldAttractor
// 0x185B85531C0
class WorldAttractor
{
public:
	unsigned char                                      UnknownData00[0x185B85531C0];                             // 0x0000(0x185B85531C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldAttractor");
		return ptr;
	}

};


// Class Engine.RB_ConstraintDrawComponent
// 0x185B4898560
class RB_ConstraintDrawComponent
{
public:
	unsigned char                                      UnknownData00[0x185B4898560];                             // 0x0000(0x185B4898560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_ConstraintDrawComponent");
		return ptr;
	}

};


// Class Engine.RB_RadialImpulseComponent
// 0x185B854FE00
class RB_RadialImpulseComponent
{
public:
	unsigned char                                      UnknownData00[0x185B854FE00];                             // 0x0000(0x185B854FE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_RadialImpulseComponent");
		return ptr;
	}

};


// Class Engine.RB_Handle
// 0x185B854FAA0
class RB_Handle
{
public:
	unsigned char                                      UnknownData00[0x185B854FAA0];                             // 0x0000(0x185B854FAA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_Handle");
		return ptr;
	}

};


// Class Engine.RB_Spring
// 0x185B8550940
class RB_Spring
{
public:
	unsigned char                                      UnknownData00[0x185B8550940];                             // 0x0000(0x185B8550940) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_Spring");
		return ptr;
	}

};


// Class Engine.SVehicleSimBase
// 0x185B6289300
class SVehicleSimBase
{
public:
	unsigned char                                      UnknownData00[0x185B6289300];                             // 0x0000(0x185B6289300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SVehicleSimBase");
		return ptr;
	}

};


// Class Engine.SVehicleSimCar
// 0x185B6289900
class SVehicleSimCar
{
public:
	unsigned char                                      UnknownData00[0x185B6289900];                             // 0x0000(0x185B6289900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SVehicleSimCar");
		return ptr;
	}

};


// Class Engine.SVehicleSimTank
// 0x185B6287440
class SVehicleSimTank
{
public:
	unsigned char                                      UnknownData00[0x185B6287440];                             // 0x0000(0x185B6287440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SVehicleSimTank");
		return ptr;
	}

};


// Class Engine.ActorFactoryApexClothing
// 0x185B5A98810
class ActorFactoryApexClothing
{
public:
	unsigned char                                      UnknownData00[0x185B5A98810];                             // 0x0000(0x185B5A98810) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryApexClothing");
		return ptr;
	}

};


// Class Engine.ApexDestructibleDamageParameters
// 0x185C1D30200
class ApexDestructibleDamageParameters
{
public:
	unsigned char                                      UnknownData00[0x185C1D30200];                             // 0x0000(0x185C1D30200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexDestructibleDamageParameters");
		return ptr;
	}

};


// Class Engine.FractureMaterial
// 0x185B66057F0
class FractureMaterial
{
public:
	unsigned char                                      UnknownData00[0x185B66057F0];                             // 0x0000(0x185B66057F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FractureMaterial");
		return ptr;
	}

};


// Class Engine.PhysicalMaterial
// 0x185B8541400
class PhysicalMaterial
{
public:
	unsigned char                                      UnknownData00[0x185B8541400];                             // 0x0000(0x185B8541400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterial");
		return ptr;
	}

};


// Class Engine.PhysicalMaterialPropertyBase
// 0x0000
class PhysicalMaterialPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterialPropertyBase");
		return ptr;
	}

};


// Class Engine.PhysicsAsset
// 0x185B8542A80
class PhysicsAsset
{
public:
	unsigned char                                      UnknownData00[0x185B8542A80];                             // 0x0000(0x185B8542A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsAsset");
		return ptr;
	}

};


// Class Engine.PhysicsAssetInstance
// 0x185B85412E0
class PhysicsAssetInstance
{
public:
	unsigned char                                      UnknownData00[0x185B85412E0];                             // 0x0000(0x185B85412E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsAssetInstance");
		return ptr;
	}

};


// Class Engine.PhysicsLODVerticalEmitter
// 0x185B65ED970
class PhysicsLODVerticalEmitter
{
public:
	unsigned char                                      UnknownData00[0x185B65ED970];                             // 0x0000(0x185B65ED970) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsLODVerticalEmitter");
		return ptr;
	}

};


// Class Engine.RB_BodyInstance
// 0x185B85527A0
class RB_BodyInstance
{
public:
	unsigned char                                      UnknownData00[0x185B85527A0];                             // 0x0000(0x185B85527A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_BodyInstance");
		return ptr;
	}

};


// Class Engine.RB_ConstraintInstance
// 0x185B8552D40
class RB_ConstraintInstance
{
public:
	unsigned char                                      UnknownData00[0x185B8552D40];                             // 0x0000(0x185B8552D40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_ConstraintInstance");
		return ptr;
	}

};


// Class Engine.RB_ConstraintSetup
// 0x185B854EE40
class RB_ConstraintSetup
{
public:
	unsigned char                                      UnknownData00[0x185B854EE40];                             // 0x0000(0x185B854EE40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_ConstraintSetup");
		return ptr;
	}

};


// Class Engine.RB_BSJointSetup
// 0x0000
class RB_BSJointSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_BSJointSetup");
		return ptr;
	}

};


// Class Engine.RB_DistanceJointSetup
// 0x0000
class RB_DistanceJointSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_DistanceJointSetup");
		return ptr;
	}

};


// Class Engine.RB_HingeSetup
// 0x0000
class RB_HingeSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_HingeSetup");
		return ptr;
	}

};


// Class Engine.RB_PrismaticSetup
// 0x0000
class RB_PrismaticSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_PrismaticSetup");
		return ptr;
	}

};


// Class Engine.RB_PulleyJointSetup
// 0x0000
class RB_PulleyJointSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_PulleyJointSetup");
		return ptr;
	}

};


// Class Engine.RB_SkelJointSetup
// 0x0000
class RB_SkelJointSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_SkelJointSetup");
		return ptr;
	}

};


// Class Engine.RB_StayUprightSetup
// 0x0000
class RB_StayUprightSetup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_StayUprightSetup");
		return ptr;
	}

};


// Class Engine.SVehicleWheel
// 0x185B6287F80
class SVehicleWheel
{
public:
	unsigned char                                      UnknownData00[0x185B6287F80];                             // 0x0000(0x185B6287F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SVehicleWheel");
		return ptr;
	}

};


// Class Engine.NxGenericForceFieldBrush
// 0x185BB88E3E0
class NxGenericForceFieldBrush
{
public:
	unsigned char                                      UnknownData00[0x185BB88E3E0];                             // 0x0000(0x185BB88E3E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxGenericForceFieldBrush");
		return ptr;
	}

};


// Class Engine.RB_ForceFieldExcludeVolume
// 0x185B489D7E0
class RB_ForceFieldExcludeVolume
{
public:
	unsigned char                                      UnknownData00[0x185B489D7E0];                             // 0x0000(0x185B489D7E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_ForceFieldExcludeVolume");
		return ptr;
	}

};


// Class Engine.NxForceField
// 0x185BB88E980
class NxForceField
{
public:
	unsigned char                                      UnknownData00[0x185BB88E980];                             // 0x0000(0x185BB88E980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceField");
		return ptr;
	}

};


// Class Engine.NxCylindricalForceField
// 0x185BCA206B0
class NxCylindricalForceField
{
public:
	unsigned char                                      UnknownData00[0x185BCA206B0];                             // 0x0000(0x185BCA206B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxCylindricalForceField");
		return ptr;
	}

};


// Class Engine.NxCylindricalForceFieldCapsule
// 0x185BB88D1E0
class NxCylindricalForceFieldCapsule
{
public:
	unsigned char                                      UnknownData00[0x185BB88D1E0];                             // 0x0000(0x185BB88D1E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxCylindricalForceFieldCapsule");
		return ptr;
	}

};


// Class Engine.NxForceFieldGeneric
// 0x185BB890D80
class NxForceFieldGeneric
{
public:
	unsigned char                                      UnknownData00[0x185BB890D80];                             // 0x0000(0x185BB890D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldGeneric");
		return ptr;
	}

};


// Class Engine.NxForceFieldRadial
// 0x185BB8905A0
class NxForceFieldRadial
{
public:
	unsigned char                                      UnknownData00[0x185BB8905A0];                             // 0x0000(0x185BB8905A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldRadial");
		return ptr;
	}

};


// Class Engine.NxForceFieldTornado
// 0x185BB88C8E0
class NxForceFieldTornado
{
public:
	unsigned char                                      UnknownData00[0x185BB88C8E0];                             // 0x0000(0x185BB88C8E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldTornado");
		return ptr;
	}

};


// Class Engine.NxGenericForceField
// 0x185BCA25C30
class NxGenericForceField
{
public:
	unsigned char                                      UnknownData00[0x185BCA25C30];                             // 0x0000(0x185BCA25C30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxGenericForceField");
		return ptr;
	}

};


// Class Engine.NxGenericForceFieldBox
// 0x185BB88D420
class NxGenericForceFieldBox
{
public:
	unsigned char                                      UnknownData00[0x185BB88D420];                             // 0x0000(0x185BB88D420) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxGenericForceFieldBox");
		return ptr;
	}

};


// Class Engine.NxGenericForceFieldCapsule
// 0x185BCA26230
class NxGenericForceFieldCapsule
{
public:
	unsigned char                                      UnknownData00[0x185BCA26230];                             // 0x0000(0x185BCA26230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxGenericForceFieldCapsule");
		return ptr;
	}

};


// Class Engine.NxRadialForceField
// 0x185BCA262F0
class NxRadialForceField
{
public:
	unsigned char                                      UnknownData00[0x185BCA262F0];                             // 0x0000(0x185BCA262F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxRadialForceField");
		return ptr;
	}

};


// Class Engine.NxRadialCustomForceField
// 0x185BCA25030
class NxRadialCustomForceField
{
public:
	unsigned char                                      UnknownData00[0x185BCA25030];                             // 0x0000(0x185BCA25030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxRadialCustomForceField");
		return ptr;
	}

};


// Class Engine.NxTornadoAngularForceField
// 0x185BCA24DF0
class NxTornadoAngularForceField
{
public:
	unsigned char                                      UnknownData00[0x185BCA24DF0];                             // 0x0000(0x185BCA24DF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxTornadoAngularForceField");
		return ptr;
	}

};


// Class Engine.NxTornadoAngularForceFieldCapsule
// 0x185BCA244F0
class NxTornadoAngularForceFieldCapsule
{
public:
	unsigned char                                      UnknownData00[0x185BCA244F0];                             // 0x0000(0x185BCA244F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxTornadoAngularForceFieldCapsule");
		return ptr;
	}

};


// Class Engine.NxTornadoForceField
// 0x185BCA29B30
class NxTornadoForceField
{
public:
	unsigned char                                      UnknownData00[0x185BCA29B30];                             // 0x0000(0x185BCA29B30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxTornadoForceField");
		return ptr;
	}

};


// Class Engine.NxTornadoForceFieldCapsule
// 0x185BCA287B0
class NxTornadoForceFieldCapsule
{
public:
	unsigned char                                      UnknownData00[0x185BCA287B0];                             // 0x0000(0x185BCA287B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxTornadoForceFieldCapsule");
		return ptr;
	}

};


// Class Engine.NxForceFieldSpawnable
// 0x185BB88D300
class NxForceFieldSpawnable
{
public:
	unsigned char                                      UnknownData00[0x185BB88D300];                             // 0x0000(0x185BB88D300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldSpawnable");
		return ptr;
	}

};


// Class Engine.RB_CylindricalForceActor
// 0x185B8552E60
class RB_CylindricalForceActor
{
public:
	unsigned char                                      UnknownData00[0x185B8552E60];                             // 0x0000(0x185B8552E60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_CylindricalForceActor");
		return ptr;
	}

};


// Class Engine.RB_RadialForceActor
// 0x185B8551480
class RB_RadialForceActor
{
public:
	unsigned char                                      UnknownData00[0x185B8551480];                             // 0x0000(0x185B8551480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_RadialForceActor");
		return ptr;
	}

};


// Class Engine.NxForceFieldComponent
// 0x185BB88E1A0
class NxForceFieldComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB88E1A0];                             // 0x0000(0x185BB88E1A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldComponent");
		return ptr;
	}

};


// Class Engine.NxForceFieldCylindricalComponent
// 0x185BCA1EA30
class NxForceFieldCylindricalComponent
{
public:
	unsigned char                                      UnknownData00[0x185BCA1EA30];                             // 0x0000(0x185BCA1EA30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldCylindricalComponent");
		return ptr;
	}

};


// Class Engine.NxForceFieldGenericComponent
// 0x185BCA232F0
class NxForceFieldGenericComponent
{
public:
	unsigned char                                      UnknownData00[0x185BCA232F0];                             // 0x0000(0x185BCA232F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldGenericComponent");
		return ptr;
	}

};


// Class Engine.NxForceFieldRadialComponent
// 0x185BCA220F0
class NxForceFieldRadialComponent
{
public:
	unsigned char                                      UnknownData00[0x185BCA220F0];                             // 0x0000(0x185BCA220F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldRadialComponent");
		return ptr;
	}

};


// Class Engine.NxForceFieldTornadoComponent
// 0x185BCA23BF0
class NxForceFieldTornadoComponent
{
public:
	unsigned char                                      UnknownData00[0x185BCA23BF0];                             // 0x0000(0x185BCA23BF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NxForceFieldTornadoComponent");
		return ptr;
	}

};


// Class Engine.ForceFieldShape
// 0x185BB9160E0
class ForceFieldShape
{
public:
	unsigned char                                      UnknownData00[0x185BB9160E0];                             // 0x0000(0x185BB9160E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFieldShape");
		return ptr;
	}

};


// Class Engine.ForceFieldShapeBox
// 0x185BB9170A0
class ForceFieldShapeBox
{
public:
	unsigned char                                      UnknownData00[0x185BB9170A0];                             // 0x0000(0x185BB9170A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFieldShapeBox");
		return ptr;
	}

};


// Class Engine.ForceFieldShapeCapsule
// 0x185BB9168C0
class ForceFieldShapeCapsule
{
public:
	unsigned char                                      UnknownData00[0x185BB9168C0];                             // 0x0000(0x185BB9168C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFieldShapeCapsule");
		return ptr;
	}

};


// Class Engine.ForceFieldShapeSphere
// 0x185BB8DB460
class ForceFieldShapeSphere
{
public:
	unsigned char                                      UnknownData00[0x185BB8DB460];                             // 0x0000(0x185BB8DB460) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFieldShapeSphere");
		return ptr;
	}

};


// Class Engine.PrefabInstance
// 0x185B488C020
class PrefabInstance
{
public:
	unsigned char                                      UnknownData00[0x185B488C020];                             // 0x0000(0x185B488C020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrefabInstance");
		return ptr;
	}

};


// Class Engine.Prefab
// 0x185B488BF60
class Prefab
{
public:
	unsigned char                                      UnknownData00[0x185B488BF60];                             // 0x0000(0x185B488BF60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Prefab");
		return ptr;
	}

};


// Class Engine.SequenceObject
// 0x185C0841E20
class SequenceObject
{
public:
	unsigned char                                      UnknownData00[0x185C0841E20];                             // 0x0000(0x185C0841E20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceObject");
		return ptr;
	}

};


// Class Engine.SequenceFrame
// 0x185B4884A60
class SequenceFrame
{
public:
	unsigned char                                      UnknownData00[0x185B4884A60];                             // 0x0000(0x185B4884A60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceFrame");
		return ptr;
	}

};


// Class Engine.SequenceFrameWrapped
// 0x0000
class SequenceFrameWrapped
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceFrameWrapped");
		return ptr;
	}

};


// Class Engine.SequenceOp
// 0x185BB4F87F0
class SequenceOp
{
public:
	unsigned char                                      UnknownData00[0x185BB4F87F0];                             // 0x0000(0x185BB4F87F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceOp");
		return ptr;
	}

};


// Class Engine.Sequence
// 0x185B854D220
class Sequence
{
public:
	unsigned char                                      UnknownData00[0x185B854D220];                             // 0x0000(0x185B854D220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Sequence");
		return ptr;
	}

};


// Class Engine.PrefabSequence
// 0x185B854B720
class PrefabSequence
{
public:
	unsigned char                                      UnknownData00[0x185B854B720];                             // 0x0000(0x185B854B720) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrefabSequence");
		return ptr;
	}

};


// Class Engine.PrefabSequenceContainer
// 0x0000
class PrefabSequenceContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrefabSequenceContainer");
		return ptr;
	}

};


// Class Engine.SequenceAction
// 0x185B93DBCE0
class SequenceAction
{
public:
	unsigned char                                      UnknownData00[0x185B93DBCE0];                             // 0x0000(0x185B93DBCE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceAction");
		return ptr;
	}

};


// Class Engine.SeqAct_ActivateRemoteEvent
// 0x185B854F1A0
class SeqAct_ActivateRemoteEvent
{
public:
	unsigned char                                      UnknownData00[0x185B854F1A0];                             // 0x0000(0x185B854F1A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ActivateRemoteEvent");
		return ptr;
	}

};


// Class Engine.SeqAct_AndGate
// 0x185B48AADA0
class SeqAct_AndGate
{
public:
	unsigned char                                      UnknownData00[0x185B48AADA0];                             // 0x0000(0x185B48AADA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AndGate");
		return ptr;
	}

};


// Class Engine.SeqAct_ApplySoundNode
// 0x185B48A92A0
class SeqAct_ApplySoundNode
{
public:
	unsigned char                                      UnknownData00[0x185B48A92A0];                             // 0x0000(0x185B48A92A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ApplySoundNode");
		return ptr;
	}

};


// Class Engine.SeqAct_AttachToEvent
// 0x185B48AAF20
class SeqAct_AttachToEvent
{
public:
	unsigned char                                      UnknownData00[0x185B48AAF20];                             // 0x0000(0x185B48AAF20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AttachToEvent");
		return ptr;
	}

};


// Class Engine.SeqAct_CameraFade
// 0x185B85571E0
class SeqAct_CameraFade
{
public:
	unsigned char                                      UnknownData00[0x185B85571E0];                             // 0x0000(0x185B85571E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_CameraFade");
		return ptr;
	}

};


// Class Engine.SeqAct_CameraLookAt
// 0x185B8557300
class SeqAct_CameraLookAt
{
public:
	unsigned char                                      UnknownData00[0x185B8557300];                             // 0x0000(0x185B8557300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_CameraLookAt");
		return ptr;
	}

};


// Class Engine.SeqAct_CameraShake
// 0x185B8555020
class SeqAct_CameraShake
{
public:
	unsigned char                                      UnknownData00[0x185B8555020];                             // 0x0000(0x185B8555020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_CameraShake");
		return ptr;
	}

};


// Class Engine.SeqAct_ChangeCollision
// 0x185C0841400
class SeqAct_ChangeCollision
{
public:
	unsigned char                                      UnknownData00[0x185C0841400];                             // 0x0000(0x185C0841400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ChangeCollision");
		return ptr;
	}

};


// Class Engine.SeqAct_CommitMapChange
// 0x0000
class SeqAct_CommitMapChange
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_CommitMapChange");
		return ptr;
	}

};


// Class Engine.SeqAct_ConvertToString
// 0x185B85568E0
class SeqAct_ConvertToString
{
public:
	unsigned char                                      UnknownData00[0x185B85568E0];                             // 0x0000(0x185B85568E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ConvertToString");
		return ptr;
	}

};


// Class Engine.SeqAct_DrawText
// 0x185B8556D60
class SeqAct_DrawText
{
public:
	unsigned char                                      UnknownData00[0x185B8556D60];                             // 0x0000(0x185B8556D60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_DrawText");
		return ptr;
	}

};


// Class Engine.SeqAct_FinishSequence
// 0x185B48B00E0
class SeqAct_FinishSequence
{
public:
	unsigned char                                      UnknownData00[0x185B48B00E0];                             // 0x0000(0x185B48B00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_FinishSequence");
		return ptr;
	}

};


// Class Engine.SeqAct_Gate
// 0x185B48B03E0
class SeqAct_Gate
{
public:
	unsigned char                                      UnknownData00[0x185B48B03E0];                             // 0x0000(0x185B48B03E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Gate");
		return ptr;
	}

};


// Class Engine.SeqAct_GetDistance
// 0x185B48AF060
class SeqAct_GetDistance
{
public:
	unsigned char                                      UnknownData00[0x185B48AF060];                             // 0x0000(0x185B48AF060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_GetDistance");
		return ptr;
	}

};


// Class Engine.SeqAct_GetLocationAndRotation
// 0x185B8553AC0
class SeqAct_GetLocationAndRotation
{
public:
	unsigned char                                      UnknownData00[0x185B8553AC0];                             // 0x0000(0x185B8553AC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_GetLocationAndRotation");
		return ptr;
	}

};


// Class Engine.SeqAct_GetProperty
// 0x185B48B01A0
class SeqAct_GetProperty
{
public:
	unsigned char                                      UnknownData00[0x185B48B01A0];                             // 0x0000(0x185B48B01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_GetProperty");
		return ptr;
	}

};


// Class Engine.SeqAct_GetVectorComponents
// 0x185B48AE3A0
class SeqAct_GetVectorComponents
{
public:
	unsigned char                                      UnknownData00[0x185B48AE3A0];                             // 0x0000(0x185B48AE3A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_GetVectorComponents");
		return ptr;
	}

};


// Class Engine.SeqAct_GetVelocity
// 0x185B8555140
class SeqAct_GetVelocity
{
public:
	unsigned char                                      UnknownData00[0x185B8555140];                             // 0x0000(0x185B8555140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_GetVelocity");
		return ptr;
	}

};


// Class Engine.SeqAct_HeadTrackingControl
// 0x185B8555DA0
class SeqAct_HeadTrackingControl
{
public:
	unsigned char                                      UnknownData00[0x185B8555DA0];                             // 0x0000(0x185B8555DA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_HeadTrackingControl");
		return ptr;
	}

};


// Class Engine.SeqAct_IsInObjectList
// 0x185B48B3C20
class SeqAct_IsInObjectList
{
public:
	unsigned char                                      UnknownData00[0x185B48B3C20];                             // 0x0000(0x185B48B3C20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_IsInObjectList");
		return ptr;
	}

};


// Class Engine.SeqAct_Latent
// 0x185B8550CA0
class SeqAct_Latent
{
public:
	unsigned char                                      UnknownData00[0x185B8550CA0];                             // 0x0000(0x185B8550CA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Latent");
		return ptr;
	}

};


// Class Engine.SeqAct_ActorFactory
// 0x185B8550EE0
class SeqAct_ActorFactory
{
public:
	unsigned char                                      UnknownData00[0x185B8550EE0];                             // 0x0000(0x185B8550EE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ActorFactory");
		return ptr;
	}

};


// Class Engine.SeqAct_ActorFactoryEx
// 0x0000
class SeqAct_ActorFactoryEx
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ActorFactoryEx");
		return ptr;
	}

};


// Class Engine.SeqAct_ProjectileFactory
// 0x185B8554DE0
class SeqAct_ProjectileFactory
{
public:
	unsigned char                                      UnknownData00[0x185B8554DE0];                             // 0x0000(0x185B8554DE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ProjectileFactory");
		return ptr;
	}

};


// Class Engine.SeqAct_AIMoveToActor
// 0x185B8557660
class SeqAct_AIMoveToActor
{
public:
	unsigned char                                      UnknownData00[0x185B8557660];                             // 0x0000(0x185B8557660) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AIMoveToActor");
		return ptr;
	}

};


// Class Engine.SeqAct_Delay
// 0x185B8557540
class SeqAct_Delay
{
public:
	unsigned char                                      UnknownData00[0x185B8557540];                             // 0x0000(0x185B8557540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Delay");
		return ptr;
	}

};


// Class Engine.SeqAct_DelaySwitch
// 0x185B48AD4A0
class SeqAct_DelaySwitch
{
public:
	unsigned char                                      UnknownData00[0x185B48AD4A0];                             // 0x0000(0x185B48AD4A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_DelaySwitch");
		return ptr;
	}

};


// Class Engine.SeqAct_ForceGarbageCollection
// 0x0000
class SeqAct_ForceGarbageCollection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ForceGarbageCollection");
		return ptr;
	}

};


// Class Engine.SeqAct_Interp
// 0x185B8555FE0
class SeqAct_Interp
{
public:
	unsigned char                                      UnknownData00[0x185B8555FE0];                             // 0x0000(0x185B8555FE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Interp");
		return ptr;
	}

};


// Class Engine.SeqAct_LevelStreamingBase
// 0x185B48B3E60
class SeqAct_LevelStreamingBase
{
public:
	unsigned char                                      UnknownData00[0x185B48B3E60];                             // 0x0000(0x185B48B3E60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_LevelStreamingBase");
		return ptr;
	}

};


// Class Engine.SeqAct_LevelStreaming
// 0x185B48B18E0
class SeqAct_LevelStreaming
{
public:
	unsigned char                                      UnknownData00[0x185B48B18E0];                             // 0x0000(0x185B48B18E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_LevelStreaming");
		return ptr;
	}

};


// Class Engine.SeqAct_MultiLevelStreaming
// 0x185B48B12E0
class SeqAct_MultiLevelStreaming
{
public:
	unsigned char                                      UnknownData00[0x185B48B12E0];                             // 0x0000(0x185B48B12E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_MultiLevelStreaming");
		return ptr;
	}

};


// Class Engine.SeqAct_LevelVisibility
// 0x185B48B3260
class SeqAct_LevelVisibility
{
public:
	unsigned char                                      UnknownData00[0x185B48B3260];                             // 0x0000(0x185B48B3260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_LevelVisibility");
		return ptr;
	}

};


// Class Engine.SeqAct_PlaySound
// 0x185B8556580
class SeqAct_PlaySound
{
public:
	unsigned char                                      UnknownData00[0x185B8556580];                             // 0x0000(0x185B8556580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_PlaySound");
		return ptr;
	}

};


// Class Engine.SeqAct_PrepareMapChange
// 0x185B48B4160
class SeqAct_PrepareMapChange
{
public:
	unsigned char                                      UnknownData00[0x185B48B4160];                             // 0x0000(0x185B48B4160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_PrepareMapChange");
		return ptr;
	}

};


// Class Engine.SeqAct_SetDOFParams
// 0x185B48B9260
class SeqAct_SetDOFParams
{
public:
	unsigned char                                      UnknownData00[0x185B48B9260];                             // 0x0000(0x185B48B9260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetDOFParams");
		return ptr;
	}

};


// Class Engine.SeqAct_SetMotionBlurParams
// 0x185B48B8AE0
class SeqAct_SetMotionBlurParams
{
public:
	unsigned char                                      UnknownData00[0x185B48B8AE0];                             // 0x0000(0x185B48B8AE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetMotionBlurParams");
		return ptr;
	}

};


// Class Engine.SeqAct_StreamInTextures
// 0x185B8556B20
class SeqAct_StreamInTextures
{
public:
	unsigned char                                      UnknownData00[0x185B8556B20];                             // 0x0000(0x185B8556B20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_StreamInTextures");
		return ptr;
	}

};


// Class Engine.SeqAct_WaitForLevelsVisible
// 0x185B8558BC0
class SeqAct_WaitForLevelsVisible
{
public:
	unsigned char                                      UnknownData00[0x185B8558BC0];                             // 0x0000(0x185B8558BC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_WaitForLevelsVisible");
		return ptr;
	}

};


// Class Engine.SeqAct_Log
// 0x185B8554F00
class SeqAct_Log
{
public:
	unsigned char                                      UnknownData00[0x185B8554F00];                             // 0x0000(0x185B8554F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Log");
		return ptr;
	}

};


// Class Engine.SeqAct_FeatureTest
// 0x185B48AF5A0
class SeqAct_FeatureTest
{
public:
	unsigned char                                      UnknownData00[0x185B48AF5A0];                             // 0x0000(0x185B48AF5A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_FeatureTest");
		return ptr;
	}

};


// Class Engine.SeqAct_ModifyCover
// 0x185B2DA2DD0
class SeqAct_ModifyCover
{
public:
	unsigned char                                      UnknownData00[0x185B2DA2DD0];                             // 0x0000(0x185B2DA2DD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ModifyCover");
		return ptr;
	}

};


// Class Engine.SeqAct_ModifyHealth
// 0x185B8553D00
class SeqAct_ModifyHealth
{
public:
	unsigned char                                      UnknownData00[0x185B8553D00];                             // 0x0000(0x185B8553D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ModifyHealth");
		return ptr;
	}

};


// Class Engine.SeqAct_ParticleEventGenerator
// 0x185B85530A0
class SeqAct_ParticleEventGenerator
{
public:
	unsigned char                                      UnknownData00[0x185B85530A0];                             // 0x0000(0x185B85530A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ParticleEventGenerator");
		return ptr;
	}

};


// Class Engine.SeqAct_PlayCameraAnim
// 0x185B8555EC0
class SeqAct_PlayCameraAnim
{
public:
	unsigned char                                      UnknownData00[0x185B8555EC0];                             // 0x0000(0x185B8555EC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_PlayCameraAnim");
		return ptr;
	}

};


// Class Engine.SeqAct_PlayFaceFXAnim
// 0x185B7700BC0
class SeqAct_PlayFaceFXAnim
{
public:
	unsigned char                                      UnknownData00[0x185B7700BC0];                             // 0x0000(0x185B7700BC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_PlayFaceFXAnim");
		return ptr;
	}

};


// Class Engine.SeqAct_PlayMusicTrack
// 0x185B48B55A0
class SeqAct_PlayMusicTrack
{
public:
	unsigned char                                      UnknownData00[0x185B48B55A0];                             // 0x0000(0x185B48B55A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_PlayMusicTrack");
		return ptr;
	}

};


// Class Engine.SeqAct_Possess
// 0x185B5A9BA50
class SeqAct_Possess
{
public:
	unsigned char                                      UnknownData00[0x185B5A9BA50];                             // 0x0000(0x185B5A9BA50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Possess");
		return ptr;
	}

};


// Class Engine.SeqAct_RangeSwitch
// 0x185B48B64A0
class SeqAct_RangeSwitch
{
public:
	unsigned char                                      UnknownData00[0x185B48B64A0];                             // 0x0000(0x185B48B64A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_RangeSwitch");
		return ptr;
	}

};


// Class Engine.SeqAct_SetActiveAnimChild
// 0x185B48B6920
class SeqAct_SetActiveAnimChild
{
public:
	unsigned char                                      UnknownData00[0x185B48B6920];                             // 0x0000(0x185B48B6920) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetActiveAnimChild");
		return ptr;
	}

};


// Class Engine.SeqAct_SetApexClothingParam
// 0x185B48B66E0
class SeqAct_SetApexClothingParam
{
public:
	unsigned char                                      UnknownData00[0x185B48B66E0];                             // 0x0000(0x185B48B66E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetApexClothingParam");
		return ptr;
	}

};


// Class Engine.SeqAct_SetBlockRigidBody
// 0x0000
class SeqAct_SetBlockRigidBody
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetBlockRigidBody");
		return ptr;
	}

};


// Class Engine.SeqAct_SetCameraTarget
// 0x185B8555260
class SeqAct_SetCameraTarget
{
public:
	unsigned char                                      UnknownData00[0x185B8555260];                             // 0x0000(0x185B8555260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetCameraTarget");
		return ptr;
	}

};


// Class Engine.SeqAct_SetMaterial
// 0x185B7711FC0
class SeqAct_SetMaterial
{
public:
	unsigned char                                      UnknownData00[0x185B7711FC0];                             // 0x0000(0x185B7711FC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetMaterial");
		return ptr;
	}

};


// Class Engine.SeqAct_SetMatInstScalarParam
// 0x185B48B73A0
class SeqAct_SetMatInstScalarParam
{
public:
	unsigned char                                      UnknownData00[0x185B48B73A0];                             // 0x0000(0x185B48B73A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetMatInstScalarParam");
		return ptr;
	}

};


// Class Engine.SeqAct_SetMesh
// 0x185B48B84E0
class SeqAct_SetMesh
{
public:
	unsigned char                                      UnknownData00[0x185B48B84E0];                             // 0x0000(0x185B48B84E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetMesh");
		return ptr;
	}

};


// Class Engine.SeqAct_SetPhysics
// 0x185B6EA9140
class SeqAct_SetPhysics
{
public:
	unsigned char                                      UnknownData00[0x185B6EA9140];                             // 0x0000(0x185B6EA9140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetPhysics");
		return ptr;
	}

};


// Class Engine.SeqAct_SetRigidBodyIgnoreVehicles
// 0x0000
class SeqAct_SetRigidBodyIgnoreVehicles
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetRigidBodyIgnoreVehicles");
		return ptr;
	}

};


// Class Engine.SeqAct_SetSequenceVariable
// 0x0000
class SeqAct_SetSequenceVariable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetSequenceVariable");
		return ptr;
	}

};


// Class Engine.SeqAct_AccessObjectList
// 0x185B48A62A0
class SeqAct_AccessObjectList
{
public:
	unsigned char                                      UnknownData00[0x185B48A62A0];                             // 0x0000(0x185B48A62A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AccessObjectList");
		return ptr;
	}

};


// Class Engine.SeqAct_AddFloat
// 0x185B48A94E0
class SeqAct_AddFloat
{
public:
	unsigned char                                      UnknownData00[0x185B48A94E0];                             // 0x0000(0x185B48A94E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AddFloat");
		return ptr;
	}

};


// Class Engine.SeqAct_AddInt
// 0x185B48A9660
class SeqAct_AddInt
{
public:
	unsigned char                                      UnknownData00[0x185B48A9660];                             // 0x0000(0x185B48A9660) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AddInt");
		return ptr;
	}

};


// Class Engine.SeqAct_CastToFloat
// 0x185B48AB8E0
class SeqAct_CastToFloat
{
public:
	unsigned char                                      UnknownData00[0x185B48AB8E0];                             // 0x0000(0x185B48AB8E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_CastToFloat");
		return ptr;
	}

};


// Class Engine.SeqAct_CastToInt
// 0x185B48AC660
class SeqAct_CastToInt
{
public:
	unsigned char                                      UnknownData00[0x185B48AC660];                             // 0x0000(0x185B48AC660) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_CastToInt");
		return ptr;
	}

};


// Class Engine.SeqAct_DivideFloat
// 0x185B48AB160
class SeqAct_DivideFloat
{
public:
	unsigned char                                      UnknownData00[0x185B48AB160];                             // 0x0000(0x185B48AB160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_DivideFloat");
		return ptr;
	}

};


// Class Engine.SeqAct_DivideInt
// 0x185B48AD620
class SeqAct_DivideInt
{
public:
	unsigned char                                      UnknownData00[0x185B48AD620];                             // 0x0000(0x185B48AD620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_DivideInt");
		return ptr;
	}

};


// Class Engine.SeqAct_ModifyObjectList
// 0x185B48B2EA0
class SeqAct_ModifyObjectList
{
public:
	unsigned char                                      UnknownData00[0x185B48B2EA0];                             // 0x0000(0x185B48B2EA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ModifyObjectList");
		return ptr;
	}

};


// Class Engine.SeqAct_MultiplyFloat
// 0x185B48B2120
class SeqAct_MultiplyFloat
{
public:
	unsigned char                                      UnknownData00[0x185B48B2120];                             // 0x0000(0x185B48B2120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_MultiplyFloat");
		return ptr;
	}

};


// Class Engine.SeqAct_MultiplyInt
// 0x185B48B3B60
class SeqAct_MultiplyInt
{
public:
	unsigned char                                      UnknownData00[0x185B48B3B60];                             // 0x0000(0x185B48B3B60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_MultiplyInt");
		return ptr;
	}

};


// Class Engine.SeqAct_SetBool
// 0x185B48B4760
class SeqAct_SetBool
{
public:
	unsigned char                                      UnknownData00[0x185B48B4760];                             // 0x0000(0x185B48B4760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetBool");
		return ptr;
	}

};


// Class Engine.SeqAct_SetFloat
// 0x185B8553F40
class SeqAct_SetFloat
{
public:
	unsigned char                                      UnknownData00[0x185B8553F40];                             // 0x0000(0x185B8553F40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetFloat");
		return ptr;
	}

};


// Class Engine.SeqAct_SetInt
// 0x185B8555380
class SeqAct_SetInt
{
public:
	unsigned char                                      UnknownData00[0x185B8555380];                             // 0x0000(0x185B8555380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetInt");
		return ptr;
	}

};


// Class Engine.SeqAct_SetLocation
// 0x185B85554A0
class SeqAct_SetLocation
{
public:
	unsigned char                                      UnknownData00[0x185B85554A0];                             // 0x0000(0x185B85554A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetLocation");
		return ptr;
	}

};


// Class Engine.SeqAct_SetObject
// 0x185B85555C0
class SeqAct_SetObject
{
public:
	unsigned char                                      UnknownData00[0x185B85555C0];                             // 0x0000(0x185B85555C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetObject");
		return ptr;
	}

};


// Class Engine.SeqAct_SetString
// 0x185B8555A40
class SeqAct_SetString
{
public:
	unsigned char                                      UnknownData00[0x185B8555A40];                             // 0x0000(0x185B8555A40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetString");
		return ptr;
	}

};


// Class Engine.SeqAct_SubtractFloat
// 0x185B48BA2E0
class SeqAct_SubtractFloat
{
public:
	unsigned char                                      UnknownData00[0x185B48BA2E0];                             // 0x0000(0x185B48BA2E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SubtractFloat");
		return ptr;
	}

};


// Class Engine.SeqAct_SubtractInt
// 0x185B48BA160
class SeqAct_SubtractInt
{
public:
	unsigned char                                      UnknownData00[0x185B48BA160];                             // 0x0000(0x185B48BA160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SubtractInt");
		return ptr;
	}

};


// Class Engine.SeqAct_SetVectorComponents
// 0x185B48B9CE0
class SeqAct_SetVectorComponents
{
public:
	unsigned char                                      UnknownData00[0x185B48B9CE0];                             // 0x0000(0x185B48B9CE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetVectorComponents");
		return ptr;
	}

};


// Class Engine.SeqAct_SetWorldAttractorParam
// 0x185B48BA9A0
class SeqAct_SetWorldAttractorParam
{
public:
	unsigned char                                      UnknownData00[0x185B48BA9A0];                             // 0x0000(0x185B48BA9A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetWorldAttractorParam");
		return ptr;
	}

};


// Class Engine.SeqAct_Switch
// 0x185B48B6560
class SeqAct_Switch
{
public:
	unsigned char                                      UnknownData00[0x185B48B6560];                             // 0x0000(0x185B48B6560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Switch");
		return ptr;
	}

};


// Class Engine.SeqAct_RandomSwitch
// 0x185B8555B60
class SeqAct_RandomSwitch
{
public:
	unsigned char                                      UnknownData00[0x185B8555B60];                             // 0x0000(0x185B8555B60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_RandomSwitch");
		return ptr;
	}

};


// Class Engine.SeqAct_Timer
// 0x185B48BA820
class SeqAct_Timer
{
public:
	unsigned char                                      UnknownData00[0x185B48BA820];                             // 0x0000(0x185B48BA820) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Timer");
		return ptr;
	}

};


// Class Engine.SeqAct_Toggle
// 0x0000
class SeqAct_Toggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Toggle");
		return ptr;
	}

};


// Class Engine.SeqAct_Trace
// 0x185B8553520
class SeqAct_Trace
{
public:
	unsigned char                                      UnknownData00[0x185B8553520];                             // 0x0000(0x185B8553520) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Trace");
		return ptr;
	}

};


// Class Engine.SequenceCondition
// 0x0000
class SequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceCondition");
		return ptr;
	}

};


// Class Engine.SeqCond_CompareBool
// 0x185B855A5A0
class SeqCond_CompareBool
{
public:
	unsigned char                                      UnknownData00[0x185B855A5A0];                             // 0x0000(0x185B855A5A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_CompareBool");
		return ptr;
	}

};


// Class Engine.SeqCond_CompareFloat
// 0x185B48BFFE0
class SeqCond_CompareFloat
{
public:
	unsigned char                                      UnknownData00[0x185B48BFFE0];                             // 0x0000(0x185B48BFFE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_CompareFloat");
		return ptr;
	}

};


// Class Engine.SeqCond_CompareInt
// 0x185B48BFAA0
class SeqCond_CompareInt
{
public:
	unsigned char                                      UnknownData00[0x185B48BFAA0];                             // 0x0000(0x185B48BFAA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_CompareInt");
		return ptr;
	}

};


// Class Engine.SeqCond_CompareObject
// 0x0000
class SeqCond_CompareObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_CompareObject");
		return ptr;
	}

};


// Class Engine.SeqCond_GetServerType
// 0x185B85582C0
class SeqCond_GetServerType
{
public:
	unsigned char                                      UnknownData00[0x185B85582C0];                             // 0x0000(0x185B85582C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_GetServerType");
		return ptr;
	}

};


// Class Engine.SeqCond_Increment
// 0x185B48BD460
class SeqCond_Increment
{
public:
	unsigned char                                      UnknownData00[0x185B48BD460];                             // 0x0000(0x185B48BD460) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_Increment");
		return ptr;
	}

};


// Class Engine.SeqCond_IncrementFloat
// 0x185B48BDD60
class SeqCond_IncrementFloat
{
public:
	unsigned char                                      UnknownData00[0x185B48BDD60];                             // 0x0000(0x185B48BDD60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IncrementFloat");
		return ptr;
	}

};


// Class Engine.SeqCond_IsAlive
// 0x0000
class SeqCond_IsAlive
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsAlive");
		return ptr;
	}

};


// Class Engine.SeqCond_IsBenchmarking
// 0x185B8559820
class SeqCond_IsBenchmarking
{
public:
	unsigned char                                      UnknownData00[0x185B8559820];                             // 0x0000(0x185B8559820) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsBenchmarking");
		return ptr;
	}

};


// Class Engine.SeqCond_IsConsole
// 0x0000
class SeqCond_IsConsole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsConsole");
		return ptr;
	}

};


// Class Engine.SeqCond_IsInCombat
// 0x0000
class SeqCond_IsInCombat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsInCombat");
		return ptr;
	}

};


// Class Engine.SeqCond_IsLoggedIn
// 0x185B855B9E0
class SeqCond_IsLoggedIn
{
public:
	unsigned char                                      UnknownData00[0x185B855B9E0];                             // 0x0000(0x185B855B9E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsLoggedIn");
		return ptr;
	}

};


// Class Engine.SeqCond_IsPIE
// 0x185B8558E00
class SeqCond_IsPIE
{
public:
	unsigned char                                      UnknownData00[0x185B8558E00];                             // 0x0000(0x185B8558E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsPIE");
		return ptr;
	}

};


// Class Engine.SeqCond_IsSameTeam
// 0x0000
class SeqCond_IsSameTeam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_IsSameTeam");
		return ptr;
	}

};


// Class Engine.SeqCond_MatureLanguage
// 0x0000
class SeqCond_MatureLanguage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_MatureLanguage");
		return ptr;
	}

};


// Class Engine.SeqCond_ShowGore
// 0x0000
class SeqCond_ShowGore
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_ShowGore");
		return ptr;
	}

};


// Class Engine.SeqCond_SwitchBase
// 0x185B855BC20
class SeqCond_SwitchBase
{
public:
	unsigned char                                      UnknownData00[0x185B855BC20];                             // 0x0000(0x185B855BC20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_SwitchBase");
		return ptr;
	}

};


// Class Engine.SeqCond_SwitchClass
// 0x185B855BD40
class SeqCond_SwitchClass
{
public:
	unsigned char                                      UnknownData00[0x185B855BD40];                             // 0x0000(0x185B855BD40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_SwitchClass");
		return ptr;
	}

};


// Class Engine.SeqCond_SwitchObject
// 0x185B8558F20
class SeqCond_SwitchObject
{
public:
	unsigned char                                      UnknownData00[0x185B8558F20];                             // 0x0000(0x185B8558F20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_SwitchObject");
		return ptr;
	}

};


// Class Engine.SeqCond_SwitchPlatform
// 0x0000
class SeqCond_SwitchPlatform
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqCond_SwitchPlatform");
		return ptr;
	}

};


// Class Engine.SequenceEvent
// 0x185B8559DC0
class SequenceEvent
{
public:
	unsigned char                                      UnknownData00[0x185B8559DC0];                             // 0x0000(0x185B8559DC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceEvent");
		return ptr;
	}

};


// Class Engine.SeqEvent_AISeeEnemy
// 0x185B48C0FA0
class SeqEvent_AISeeEnemy
{
public:
	unsigned char                                      UnknownData00[0x185B48C0FA0];                             // 0x0000(0x185B48C0FA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_AISeeEnemy");
		return ptr;
	}

};


// Class Engine.SeqEvent_AnalogInput
// 0x185B48C2FE0
class SeqEvent_AnalogInput
{
public:
	unsigned char                                      UnknownData00[0x185B48C2FE0];                             // 0x0000(0x185B48C2FE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_AnalogInput");
		return ptr;
	}

};


// Class Engine.SeqEvent_AnimNotify
// 0x185B48C1F60
class SeqEvent_AnimNotify
{
public:
	unsigned char                                      UnknownData00[0x185B48C1F60];                             // 0x0000(0x185B48C1F60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_AnimNotify");
		return ptr;
	}

};


// Class Engine.SeqEvent_Console
// 0x185B6067100
class SeqEvent_Console
{
public:
	unsigned char                                      UnknownData00[0x185B6067100];                             // 0x0000(0x185B6067100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Console");
		return ptr;
	}

};


// Class Engine.SeqEvent_ConstraintBroken
// 0x0000
class SeqEvent_ConstraintBroken
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_ConstraintBroken");
		return ptr;
	}

};


// Class Engine.SeqEvent_Destroyed
// 0x0000
class SeqEvent_Destroyed
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Destroyed");
		return ptr;
	}

};


// Class Engine.SeqEvent_GetInventory
// 0x0000
class SeqEvent_GetInventory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_GetInventory");
		return ptr;
	}

};


// Class Engine.SeqEvent_Input
// 0x185B48C26E0
class SeqEvent_Input
{
public:
	unsigned char                                      UnknownData00[0x185B48C26E0];                             // 0x0000(0x185B48C26E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Input");
		return ptr;
	}

};


// Class Engine.SeqEvent_LevelBeginning
// 0x0000
class SeqEvent_LevelBeginning
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_LevelBeginning");
		return ptr;
	}

};


// Class Engine.SeqEvent_LevelLoaded
// 0x185B855A240
class SeqEvent_LevelLoaded
{
public:
	unsigned char                                      UnknownData00[0x185B855A240];                             // 0x0000(0x185B855A240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_LevelLoaded");
		return ptr;
	}

};


// Class Engine.SeqEvent_LevelStartup
// 0x0000
class SeqEvent_LevelStartup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_LevelStartup");
		return ptr;
	}

};


// Class Engine.SeqEvent_Mover
// 0x185B8557E40
class SeqEvent_Mover
{
public:
	unsigned char                                      UnknownData00[0x185B8557E40];                             // 0x0000(0x185B8557E40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Mover");
		return ptr;
	}

};


// Class Engine.SeqEvent_ParticleEvent
// 0x185B855AC60
class SeqEvent_ParticleEvent
{
public:
	unsigned char                                      UnknownData00[0x185B855AC60];                             // 0x0000(0x185B855AC60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_ParticleEvent");
		return ptr;
	}

};


// Class Engine.SeqEvent_ProjectileLanded
// 0x185B48C1AE0
class SeqEvent_ProjectileLanded
{
public:
	unsigned char                                      UnknownData00[0x185B48C1AE0];                             // 0x0000(0x185B48C1AE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_ProjectileLanded");
		return ptr;
	}

};


// Class Engine.SeqEvent_RemoteEvent
// 0x185B85579C0
class SeqEvent_RemoteEvent
{
public:
	unsigned char                                      UnknownData00[0x185B85579C0];                             // 0x0000(0x185B85579C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_RemoteEvent");
		return ptr;
	}

};


// Class Engine.SeqEvent_RigidBodyCollision
// 0x185B48C1D20
class SeqEvent_RigidBodyCollision
{
public:
	unsigned char                                      UnknownData00[0x185B48C1D20];                             // 0x0000(0x185B48C1D20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_RigidBodyCollision");
		return ptr;
	}

};


// Class Engine.SeqEvent_SeeDeath
// 0x0000
class SeqEvent_SeeDeath
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_SeeDeath");
		return ptr;
	}

};


// Class Engine.SeqEvent_SequenceActivated
// 0x185B48C2920
class SeqEvent_SequenceActivated
{
public:
	unsigned char                                      UnknownData00[0x185B48C2920];                             // 0x0000(0x185B48C2920) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_SequenceActivated");
		return ptr;
	}

};


// Class Engine.SeqEvent_TakeDamage
// 0x185B8559A60
class SeqEvent_TakeDamage
{
public:
	unsigned char                                      UnknownData00[0x185B8559A60];                             // 0x0000(0x185B8559A60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_TakeDamage");
		return ptr;
	}

};


// Class Engine.SeqEvent_Touch
// 0x185B8559CA0
class SeqEvent_Touch
{
public:
	unsigned char                                      UnknownData00[0x185B8559CA0];                             // 0x0000(0x185B8559CA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Touch");
		return ptr;
	}

};


// Class Engine.SeqEvent_TouchInput
// 0x185B48C47E0
class SeqEvent_TouchInput
{
public:
	unsigned char                                      UnknownData00[0x185B48C47E0];                             // 0x0000(0x185B48C47E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_TouchInput");
		return ptr;
	}

};


// Class Engine.SeqEvent_Used
// 0x185BB3D65A0
class SeqEvent_Used
{
public:
	unsigned char                                      UnknownData00[0x185BB3D65A0];                             // 0x0000(0x185BB3D65A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Used");
		return ptr;
	}

};


// Class Engine.SequenceVariable
// 0x185BC885A80
class SequenceVariable
{
public:
	unsigned char                                      UnknownData00[0x185BC885A80];                             // 0x0000(0x185BC885A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SequenceVariable");
		return ptr;
	}

};


// Class Engine.InterpData
// 0x185AD4F7630
class InterpData
{
public:
	unsigned char                                      UnknownData00[0x185AD4F7630];                             // 0x0000(0x185AD4F7630) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpData");
		return ptr;
	}

};


// Class Engine.SeqVar_Bool
// 0x185B48852A0
class SeqVar_Bool
{
public:
	unsigned char                                      UnknownData00[0x185B48852A0];                             // 0x0000(0x185B48852A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Bool");
		return ptr;
	}

};


// Class Engine.SeqVar_External
// 0x185AC99C930
class SeqVar_External
{
public:
	unsigned char                                      UnknownData00[0x185AC99C930];                             // 0x0000(0x185AC99C930) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_External");
		return ptr;
	}

};


// Class Engine.SeqVar_Float
// 0x185B48C4AE0
class SeqVar_Float
{
public:
	unsigned char                                      UnknownData00[0x185B48C4AE0];                             // 0x0000(0x185B48C4AE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Float");
		return ptr;
	}

};


// Class Engine.SeqVar_RandomFloat
// 0x185B48860E0
class SeqVar_RandomFloat
{
public:
	unsigned char                                      UnknownData00[0x185B48860E0];                             // 0x0000(0x185B48860E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_RandomFloat");
		return ptr;
	}

};


// Class Engine.SeqVar_Int
// 0x185B48855A0
class SeqVar_Int
{
public:
	unsigned char                                      UnknownData00[0x185B48855A0];                             // 0x0000(0x185B48855A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Int");
		return ptr;
	}

};


// Class Engine.SeqVar_RandomInt
// 0x185B48870A0
class SeqVar_RandomInt
{
public:
	unsigned char                                      UnknownData00[0x185B48870A0];                             // 0x0000(0x185B48870A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_RandomInt");
		return ptr;
	}

};


// Class Engine.SeqVar_Named
// 0x185AC99CFB0
class SeqVar_Named
{
public:
	unsigned char                                      UnknownData00[0x185AC99CFB0];                             // 0x0000(0x185AC99CFB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Named");
		return ptr;
	}

};


// Class Engine.SeqVar_Object
// 0x185B855B560
class SeqVar_Object
{
public:
	unsigned char                                      UnknownData00[0x185B855B560];                             // 0x0000(0x185B855B560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Object");
		return ptr;
	}

};


// Class Engine.SeqVar_Character
// 0x185AC99BDD0
class SeqVar_Character
{
public:
	unsigned char                                      UnknownData00[0x185AC99BDD0];                             // 0x0000(0x185AC99BDD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Character");
		return ptr;
	}

};


// Class Engine.SeqVar_Group
// 0x185B4886DA0
class SeqVar_Group
{
public:
	unsigned char                                      UnknownData00[0x185B4886DA0];                             // 0x0000(0x185B4886DA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Group");
		return ptr;
	}

};


// Class Engine.SeqVar_ObjectList
// 0x185B8559160
class SeqVar_ObjectList
{
public:
	unsigned char                                      UnknownData00[0x185B8559160];                             // 0x0000(0x185B8559160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_ObjectList");
		return ptr;
	}

};


// Class Engine.SeqVar_ObjectVolume
// 0x185B4884160
class SeqVar_ObjectVolume
{
public:
	unsigned char                                      UnknownData00[0x185B4884160];                             // 0x0000(0x185B4884160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_ObjectVolume");
		return ptr;
	}

};


// Class Engine.SeqVar_Player
// 0x185B855A120
class SeqVar_Player
{
public:
	unsigned char                                      UnknownData00[0x185B855A120];                             // 0x0000(0x185B855A120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Player");
		return ptr;
	}

};


// Class Engine.SeqVar_String
// 0x185B4886020
class SeqVar_String
{
public:
	unsigned char                                      UnknownData00[0x185B4886020];                             // 0x0000(0x185B4886020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_String");
		return ptr;
	}

};


// Class Engine.SeqVar_Vector
// 0x185B48B81E0
class SeqVar_Vector
{
public:
	unsigned char                                      UnknownData00[0x185B48B81E0];                             // 0x0000(0x185B48B81E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Vector");
		return ptr;
	}

};


// Class Engine.AmbientSound
// 0x185B60959C0
class AmbientSound
{
public:
	unsigned char                                      UnknownData00[0x185B60959C0];                             // 0x0000(0x185B60959C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSound");
		return ptr;
	}

};


// Class Engine.AmbientSoundMovable
// 0x0000
class AmbientSoundMovable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundMovable");
		return ptr;
	}

};


// Class Engine.AmbientSoundSimple
// 0x185B609AD00
class AmbientSoundSimple
{
public:
	unsigned char                                      UnknownData00[0x185B609AD00];                             // 0x0000(0x185B609AD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundSimple");
		return ptr;
	}

};


// Class Engine.AmbientSoundNonLoop
// 0x0000
class AmbientSoundNonLoop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundNonLoop");
		return ptr;
	}

};


// Class Engine.AmbientSoundSimpleToggleable
// 0x185C1DB59F0
class AmbientSoundSimpleToggleable
{
public:
	unsigned char                                      UnknownData00[0x185C1DB59F0];                             // 0x0000(0x185C1DB59F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundSimpleToggleable");
		return ptr;
	}

};


// Class Engine.AmbientSoundNonLoopingToggleable
// 0x0000
class AmbientSoundNonLoopingToggleable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundNonLoopingToggleable");
		return ptr;
	}

};


// Class Engine.AmbientSoundSpline
// 0x0000
class AmbientSoundSpline
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundSpline");
		return ptr;
	}

};


// Class Engine.AmbientSoundSimpleSpline
// 0x0000
class AmbientSoundSimpleSpline
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundSimpleSpline");
		return ptr;
	}

};


// Class Engine.AmbientSoundSplineMultiCue
// 0x0000
class AmbientSoundSplineMultiCue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundSplineMultiCue");
		return ptr;
	}

};


// Class Engine.SoundComponentPool
// 0x185B8561740
class SoundComponentPool
{
public:
	unsigned char                                      UnknownData00[0x185B8561740];                             // 0x0000(0x185B8561740) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundComponentPool");
		return ptr;
	}

};


// Class Engine.DistributionFloatSoundParameter
// 0x0000
class DistributionFloatSoundParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatSoundParameter");
		return ptr;
	}

};


// Class Engine.SoundNode
// 0x185B609A880
class SoundNode
{
public:
	unsigned char                                      UnknownData00[0x185B609A880];                             // 0x0000(0x185B609A880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNode");
		return ptr;
	}

};


// Class Engine.ForcedLoopSoundNode
// 0x0000
class ForcedLoopSoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForcedLoopSoundNode");
		return ptr;
	}

};


// Class Engine.SoundNodeAmbient
// 0x185B609AA00
class SoundNodeAmbient
{
public:
	unsigned char                                      UnknownData00[0x185B609AA00];                             // 0x0000(0x185B609AA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAmbient");
		return ptr;
	}

};


// Class Engine.SoundNodeAmbientNonLoop
// 0x185B605CE40
class SoundNodeAmbientNonLoop
{
public:
	unsigned char                                      UnknownData00[0x185B605CE40];                             // 0x0000(0x185B605CE40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAmbientNonLoop");
		return ptr;
	}

};


// Class Engine.SoundNodeAmbientNonLoopToggle
// 0x0000
class SoundNodeAmbientNonLoopToggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAmbientNonLoopToggle");
		return ptr;
	}

};


// Class Engine.SoundNodeAttenuation
// 0x185B6099800
class SoundNodeAttenuation
{
public:
	unsigned char                                      UnknownData00[0x185B6099800];                             // 0x0000(0x185B6099800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAttenuation");
		return ptr;
	}

};


// Class Engine.SoundNodeAttenuationAndGain
// 0x185B626BFC0
class SoundNodeAttenuationAndGain
{
public:
	unsigned char                                      UnknownData00[0x185B626BFC0];                             // 0x0000(0x185B626BFC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAttenuationAndGain");
		return ptr;
	}

};


// Class Engine.SoundNodeConcatenator
// 0x185B626A400
class SoundNodeConcatenator
{
public:
	unsigned char                                      UnknownData00[0x185B626A400];                             // 0x0000(0x185B626A400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenator");
		return ptr;
	}

};


// Class Engine.SoundNodeConcatenatorRadio
// 0x0000
class SoundNodeConcatenatorRadio
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenatorRadio");
		return ptr;
	}

};


// Class Engine.SoundNodeDelay
// 0x185B626A700
class SoundNodeDelay
{
public:
	unsigned char                                      UnknownData00[0x185B626A700];                             // 0x0000(0x185B626A700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDelay");
		return ptr;
	}

};


// Class Engine.SoundNodeDistanceCrossFade
// 0x185B626A7C0
class SoundNodeDistanceCrossFade
{
public:
	unsigned char                                      UnknownData00[0x185B626A7C0];                             // 0x0000(0x185B626A7C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDistanceCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeDoppler
// 0x185B6269E00
class SoundNodeDoppler
{
public:
	unsigned char                                      UnknownData00[0x185B6269E00];                             // 0x0000(0x185B6269E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDoppler");
		return ptr;
	}

};


// Class Engine.SoundNodeEnveloper
// 0x185B626C080
class SoundNodeEnveloper
{
public:
	unsigned char                                      UnknownData00[0x185B626C080];                             // 0x0000(0x185B626C080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeEnveloper");
		return ptr;
	}

};


// Class Engine.SoundNodeLooping
// 0x185B626A340
class SoundNodeLooping
{
public:
	unsigned char                                      UnknownData00[0x185B626A340];                             // 0x0000(0x185B626A340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeLooping");
		return ptr;
	}

};


// Class Engine.SoundNodeMature
// 0x0000
class SoundNodeMature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMature");
		return ptr;
	}

};


// Class Engine.SoundNodeMixer
// 0x185B626B480
class SoundNodeMixer
{
public:
	unsigned char                                      UnknownData00[0x185B626B480];                             // 0x0000(0x185B626B480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMixer");
		return ptr;
	}

};


// Class Engine.SoundNodeModulator
// 0x185B626B600
class SoundNodeModulator
{
public:
	unsigned char                                      UnknownData00[0x185B626B600];                             // 0x0000(0x185B626B600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulator");
		return ptr;
	}

};


// Class Engine.SoundNodeModulatorContinuous
// 0x185B626B6C0
class SoundNodeModulatorContinuous
{
public:
	unsigned char                                      UnknownData00[0x185B626B6C0];                             // 0x0000(0x185B626B6C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulatorContinuous");
		return ptr;
	}

};


// Class Engine.SoundNodeOscillator
// 0x185B626A4C0
class SoundNodeOscillator
{
public:
	unsigned char                                      UnknownData00[0x185B626A4C0];                             // 0x0000(0x185B626A4C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeOscillator");
		return ptr;
	}

};


// Class Engine.SoundNodeRandom
// 0x185B6269C80
class SoundNodeRandom
{
public:
	unsigned char                                      UnknownData00[0x185B6269C80];                             // 0x0000(0x185B6269C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeRandom");
		return ptr;
	}

};


// Class Engine.SoundNodeWave
// 0x185B8563480
class SoundNodeWave
{
public:
	unsigned char                                      UnknownData00[0x185B8563480];                             // 0x0000(0x185B8563480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWave");
		return ptr;
	}

};


// Class Engine.SoundNodeWaveStreaming
// 0x185B85637E0
class SoundNodeWaveStreaming
{
public:
	unsigned char                                      UnknownData00[0x185B85637E0];                             // 0x0000(0x185B85637E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWaveStreaming");
		return ptr;
	}

};


// Class Engine.SoundNodeWaveParam
// 0x185B626EB40
class SoundNodeWaveParam
{
public:
	unsigned char                                      UnknownData00[0x185B626EB40];                             // 0x0000(0x185B626EB40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWaveParam");
		return ptr;
	}

};


// Class Engine.LandscapeProxy
// 0x185AD500AB0
class LandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0x185AD500AB0];                             // 0x0000(0x185AD500AB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeProxy");
		return ptr;
	}

};


// Class Engine.Landscape
// 0x185AD501EF0
class Landscape
{
public:
	unsigned char                                      UnknownData00[0x185AD501EF0];                             // 0x0000(0x185AD501EF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Landscape");
		return ptr;
	}

};


// Class Engine.Terrain
// 0x185B856C900
class Terrain
{
public:
	unsigned char                                      UnknownData00[0x185B856C900];                             // 0x0000(0x185B856C900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Terrain");
		return ptr;
	}

};


// Class Engine.LandscapeGizmoActor
// 0x0000
class LandscapeGizmoActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeGizmoActor");
		return ptr;
	}

};


// Class Engine.LandscapeGizmoActiveActor
// 0x185BBFAA0E0
class LandscapeGizmoActiveActor
{
public:
	unsigned char                                      UnknownData00[0x185BBFAA0E0];                             // 0x0000(0x185BBFAA0E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeGizmoActiveActor");
		return ptr;
	}

};


// Class Engine.LandscapeComponent
// 0x185AD501170
class LandscapeComponent
{
public:
	unsigned char                                      UnknownData00[0x185AD501170];                             // 0x0000(0x185AD501170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeComponent");
		return ptr;
	}

};


// Class Engine.LandscapeGizmoRenderComponent
// 0x0000
class LandscapeGizmoRenderComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeGizmoRenderComponent");
		return ptr;
	}

};


// Class Engine.LandscapeHeightfieldCollisionComponent
// 0x185BC8A12C0
class LandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x185BC8A12C0];                             // 0x0000(0x185BC8A12C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}

};


// Class Engine.TerrainComponent
// 0x185B856CD80
class TerrainComponent
{
public:
	unsigned char                                      UnknownData00[0x185B856CD80];                             // 0x0000(0x185B856CD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerrainComponent");
		return ptr;
	}

};


// Class Engine.LandscapeInfo
// 0x185AD501950
class LandscapeInfo
{
public:
	unsigned char                                      UnknownData00[0x185AD501950];                             // 0x0000(0x185AD501950) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeInfo");
		return ptr;
	}

};


// Class Engine.LandscapeLayerInfoObject
// 0x185BC8A6D80
class LandscapeLayerInfoObject
{
public:
	unsigned char                                      UnknownData00[0x185BC8A6D80];                             // 0x0000(0x185BC8A6D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LandscapeLayerInfoObject");
		return ptr;
	}

};


// Class Engine.TerrainWeightMapTexture
// 0x185B84D2120
class TerrainWeightMapTexture
{
public:
	unsigned char                                      UnknownData00[0x185B84D2120];                             // 0x0000(0x185B84D2120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerrainWeightMapTexture");
		return ptr;
	}

};


// Class Engine.TerrainLayerSetup
// 0x185B856A3E0
class TerrainLayerSetup
{
public:
	unsigned char                                      UnknownData00[0x185B856A3E0];                             // 0x0000(0x185B856A3E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerrainLayerSetup");
		return ptr;
	}

};


// Class Engine.TerrainMaterial
// 0x185BC86A9C0
class TerrainMaterial
{
public:
	unsigned char                                      UnknownData00[0x185BC86A9C0];                             // 0x0000(0x185BC86A9C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TerrainMaterial");
		return ptr;
	}

};


// Class Engine.DataStoreClient
// 0x185BB8FEC80
class DataStoreClient
{
public:
	unsigned char                                      UnknownData00[0x185BB8FEC80];                             // 0x0000(0x185BB8FEC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataStoreClient");
		return ptr;
	}

};


// Class Engine.Console
// 0x185C09D33F0
class Console
{
public:
	unsigned char                                      UnknownData00[0x185C09D33F0];                             // 0x0000(0x185C09D33F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Console");
		return ptr;
	}

};


// Class Engine.Input
// 0x185AD4F5D70
class Input
{
public:
	unsigned char                                      UnknownData00[0x185AD4F5D70];                             // 0x0000(0x185AD4F5D70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Input");
		return ptr;
	}

};


// Class Engine.PlayerInput
// 0x185B85487E0
class PlayerInput
{
public:
	unsigned char                                      UnknownData00[0x185B85487E0];                             // 0x0000(0x185B85487E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerInput");
		return ptr;
	}

};


// Class Engine.PlayerManagerInteraction
// 0x0000
class PlayerManagerInteraction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerManagerInteraction");
		return ptr;
	}

};


// Class Engine.UISceneClient
// 0x185AD4E0AD0
class UISceneClient
{
public:
	unsigned char                                      UnknownData00[0x185AD4E0AD0];                             // 0x0000(0x185AD4E0AD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UISceneClient");
		return ptr;
	}

};


// Class Engine.UISoundTheme
// 0x185B853A4A0
class UISoundTheme
{
public:
	unsigned char                                      UnknownData00[0x185B853A4A0];                             // 0x0000(0x185B853A4A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UISoundTheme");
		return ptr;
	}

};


// Class Engine.UIDataStoreSubscriber
// 0x185B8539180
class UIDataStoreSubscriber
{
public:
	unsigned char                                      UnknownData00[0x185B8539180];                             // 0x0000(0x185B8539180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStoreSubscriber");
		return ptr;
	}

};


// Class Engine.UIDataStorePublisher
// 0x185B853C780
class UIDataStorePublisher
{
public:
	unsigned char                                      UnknownData00[0x185B853C780];                             // 0x0000(0x185B853C780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStorePublisher");
		return ptr;
	}

};


// Class Engine.UIDataProvider
// 0x0000
class UIDataProvider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider");
		return ptr;
	}

};


// Class Engine.UIDataProvider_OnlinePlayerDataBase
// 0x185B8571100
class UIDataProvider_OnlinePlayerDataBase
{
public:
	unsigned char                                      UnknownData00[0x185B8571100];                             // 0x0000(0x185B8571100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlinePlayerDataBase");
		return ptr;
	}

};


// Class Engine.UIDataProvider_OnlineFriendMessages
// 0x185B856E400
class UIDataProvider_OnlineFriendMessages
{
public:
	unsigned char                                      UnknownData00[0x185B856E400];                             // 0x0000(0x185B856E400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlineFriendMessages");
		return ptr;
	}

};


// Class Engine.UIDataProvider_OnlineFriends
// 0x185B856E640
class UIDataProvider_OnlineFriends
{
public:
	unsigned char                                      UnknownData00[0x185B856E640];                             // 0x0000(0x185B856E640) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlineFriends");
		return ptr;
	}

};


// Class Engine.UIDataProvider_OnlinePartyChatList
// 0x185B85704A0
class UIDataProvider_OnlinePartyChatList
{
public:
	unsigned char                                      UnknownData00[0x185B85704A0];                             // 0x0000(0x185B85704A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlinePartyChatList");
		return ptr;
	}

};


// Class Engine.UIDataProvider_OnlinePlayerStorage
// 0x185B85716A0
class UIDataProvider_OnlinePlayerStorage
{
public:
	unsigned char                                      UnknownData00[0x185B85716A0];                             // 0x0000(0x185B85716A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlinePlayerStorage");
		return ptr;
	}

};


// Class Engine.UIDataProvider_OnlineProfileSettings
// 0x185B8571D60
class UIDataProvider_OnlineProfileSettings
{
public:
	unsigned char                                      UnknownData00[0x185B8571D60];                             // 0x0000(0x185B8571D60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlineProfileSettings");
		return ptr;
	}

};


// Class Engine.UIDataProvider_PlayerAchievements
// 0x185B8575A20
class UIDataProvider_PlayerAchievements
{
public:
	unsigned char                                      UnknownData00[0x185B8575A20];                             // 0x0000(0x185B8575A20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_PlayerAchievements");
		return ptr;
	}

};


// Class Engine.UIDataProvider_OnlinePlayerStorageArray
// 0x185B84E3D60
class UIDataProvider_OnlinePlayerStorageArray
{
public:
	unsigned char                                      UnknownData00[0x185B84E3D60];                             // 0x0000(0x185B84E3D60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_OnlinePlayerStorageArray");
		return ptr;
	}

};


// Class Engine.UIDataProvider_SettingsArray
// 0x185B84E6D60
class UIDataProvider_SettingsArray
{
public:
	unsigned char                                      UnknownData00[0x185B84E6D60];                             // 0x0000(0x185B84E6D60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_SettingsArray");
		return ptr;
	}

};


// Class Engine.UIDataStore
// 0x185B85744C0
class UIDataStore
{
public:
	unsigned char                                      UnknownData00[0x185B85744C0];                             // 0x0000(0x185B85744C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore");
		return ptr;
	}

};


// Class Engine.UIDataStore_DynamicResource
// 0x185B85729C0
class UIDataStore_DynamicResource
{
public:
	unsigned char                                      UnknownData00[0x185B85729C0];                             // 0x0000(0x185B85729C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_DynamicResource");
		return ptr;
	}

};


// Class Engine.UIDataStore_Fonts
// 0x0000
class UIDataStore_Fonts
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_Fonts");
		return ptr;
	}

};


// Class Engine.UIDataStore_GameResource
// 0x185B8573E00
class UIDataStore_GameResource
{
public:
	unsigned char                                      UnknownData00[0x185B8573E00];                             // 0x0000(0x185B8573E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_GameResource");
		return ptr;
	}

};


// Class Engine.UIDataStore_MenuItems
// 0x185B8572C00
class UIDataStore_MenuItems
{
public:
	unsigned char                                      UnknownData00[0x185B8572C00];                             // 0x0000(0x185B8572C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_MenuItems");
		return ptr;
	}

};


// Class Engine.UIDataStore_GameState
// 0x185B85757E0
class UIDataStore_GameState
{
public:
	unsigned char                                      UnknownData00[0x185B85757E0];                             // 0x0000(0x185B85757E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_GameState");
		return ptr;
	}

};


// Class Engine.UIDataStore_Registry
// 0x185B8539060
class UIDataStore_Registry
{
public:
	unsigned char                                      UnknownData00[0x185B8539060];                             // 0x0000(0x185B8539060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_Registry");
		return ptr;
	}

};


// Class Engine.UIDataStore_Remote
// 0x0000
class UIDataStore_Remote
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_Remote");
		return ptr;
	}

};


// Class Engine.UIDataStore_OnlineGameSearch
// 0x185B8573500
class UIDataStore_OnlineGameSearch
{
public:
	unsigned char                                      UnknownData00[0x185B8573500];                             // 0x0000(0x185B8573500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_OnlineGameSearch");
		return ptr;
	}

};


// Class Engine.UIDataStore_OnlinePlayerData
// 0x185B85770A0
class UIDataStore_OnlinePlayerData
{
public:
	unsigned char                                      UnknownData00[0x185B85770A0];                             // 0x0000(0x185B85770A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_OnlinePlayerData");
		return ptr;
	}

};


// Class Engine.UIDataStore_OnlineStats
// 0x185B853BC40
class UIDataStore_OnlineStats
{
public:
	unsigned char                                      UnknownData00[0x185B853BC40];                             // 0x0000(0x185B853BC40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_OnlineStats");
		return ptr;
	}

};


// Class Engine.UIDataStore_Settings
// 0x0000
class UIDataStore_Settings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_Settings");
		return ptr;
	}

};


// Class Engine.UIDataStore_OnlineGameSettings
// 0x185B8575FC0
class UIDataStore_OnlineGameSettings
{
public:
	unsigned char                                      UnknownData00[0x185B8575FC0];                             // 0x0000(0x185B8575FC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_OnlineGameSettings");
		return ptr;
	}

};


// Class Engine.UIDataStore_StringBase
// 0x0000
class UIDataStore_StringBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_StringBase");
		return ptr;
	}

};


// Class Engine.UIDataStore_InputAlias
// 0x185B8576560
class UIDataStore_InputAlias
{
public:
	unsigned char                                      UnknownData00[0x185B8576560];                             // 0x0000(0x185B8576560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_InputAlias");
		return ptr;
	}

};


// Class Engine.UIDataStore_StringAliasMap
// 0x185B853AFE0
class UIDataStore_StringAliasMap
{
public:
	unsigned char                                      UnknownData00[0x185B853AFE0];                             // 0x0000(0x185B853AFE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataStore_StringAliasMap");
		return ptr;
	}

};


// Class Engine.UIPropertyDataProvider
// 0x185BB8BBCE0
class UIPropertyDataProvider
{
public:
	unsigned char                                      UnknownData00[0x185BB8BBCE0];                             // 0x0000(0x185BB8BBCE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIPropertyDataProvider");
		return ptr;
	}

};


// Class Engine.UIDataProvider_Settings
// 0x185B84E5F20
class UIDataProvider_Settings
{
public:
	unsigned char                                      UnknownData00[0x185B84E5F20];                             // 0x0000(0x185B84E5F20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_Settings");
		return ptr;
	}

};


// Class Engine.UIResourceDataProvider
// 0x185BB8BA540
class UIResourceDataProvider
{
public:
	unsigned char                                      UnknownData00[0x185BB8BA540];                             // 0x0000(0x185BB8BA540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIResourceDataProvider");
		return ptr;
	}

};


// Class Engine.UIDataProvider_MenuItem
// 0x185B84DC320
class UIDataProvider_MenuItem
{
public:
	unsigned char                                      UnknownData00[0x185B84DC320];                             // 0x0000(0x185B84DC320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIDataProvider_MenuItem");
		return ptr;
	}

};


// Class Engine.UIResourceCombinationProvider
// 0x185B853C1E0
class UIResourceCombinationProvider
{
public:
	unsigned char                                      UnknownData00[0x185B853C1E0];                             // 0x0000(0x185B853C1E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIResourceCombinationProvider");
		return ptr;
	}

};


// Class Engine.GameUISceneClient
// 0x185AD4E24B0
class GameUISceneClient
{
public:
	unsigned char                                      UnknownData00[0x185AD4E24B0];                             // 0x0000(0x185AD4E24B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameUISceneClient");
		return ptr;
	}

};


// Class Engine.Scene
// 0x185B8638760
class Scene
{
public:
	unsigned char                                      UnknownData00[0x185B8638760];                             // 0x0000(0x185B8638760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scene");
		return ptr;
	}

};


// Class Engine.InstancedFoliageActor
// 0x185AD4F6F70
class InstancedFoliageActor
{
public:
	unsigned char                                      UnknownData00[0x185AD4F6F70];                             // 0x0000(0x185AD4F6F70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedFoliageActor");
		return ptr;
	}

};


// Class Engine.InteractiveFoliageActor
// 0x185AD4F4C90
class InteractiveFoliageActor
{
public:
	unsigned char                                      UnknownData00[0x185AD4F4C90];                             // 0x0000(0x185AD4F4C90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InteractiveFoliageActor");
		return ptr;
	}

};


// Class Engine.InteractiveFoliageComponent
// 0x185BC87E280
class InteractiveFoliageComponent
{
public:
	unsigned char                                      UnknownData00[0x185BC87E280];                             // 0x0000(0x185BC87E280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InteractiveFoliageComponent");
		return ptr;
	}

};


// Class Engine.ActorFactoryInteractiveFoliage
// 0x0000
class ActorFactoryInteractiveFoliage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactoryInteractiveFoliage");
		return ptr;
	}

};


// Class Engine.InstancedFoliageSettings
// 0x185B8644CE0
class InstancedFoliageSettings
{
public:
	unsigned char                                      UnknownData00[0x185B8644CE0];                             // 0x0000(0x185B8644CE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedFoliageSettings");
		return ptr;
	}

};


// Class Engine.FluidInfluenceActor
// 0x185BB913AA0
class FluidInfluenceActor
{
public:
	unsigned char                                      UnknownData00[0x185BB913AA0];                             // 0x0000(0x185BB913AA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidInfluenceActor");
		return ptr;
	}

};


// Class Engine.FluidSurfaceActor
// 0x185BB914B80
class FluidSurfaceActor
{
public:
	unsigned char                                      UnknownData00[0x185BB914B80];                             // 0x0000(0x185BB914B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidSurfaceActor");
		return ptr;
	}

};


// Class Engine.FluidSurfaceActorMovable
// 0x0000
class FluidSurfaceActorMovable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidSurfaceActorMovable");
		return ptr;
	}

};


// Class Engine.FluidInfluenceComponent
// 0x185B65DF7B0
class FluidInfluenceComponent
{
public:
	unsigned char                                      UnknownData00[0x185B65DF7B0];                             // 0x0000(0x185B65DF7B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidInfluenceComponent");
		return ptr;
	}

};


// Class Engine.FluidSurfaceComponent
// 0x185BB913CE0
class FluidSurfaceComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB913CE0];                             // 0x0000(0x185BB913CE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FluidSurfaceComponent");
		return ptr;
	}

};


// Class Engine.SpeedTreeActor
// 0x185B62737C0
class SpeedTreeActor
{
public:
	unsigned char                                      UnknownData00[0x185B62737C0];                             // 0x0000(0x185B62737C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpeedTreeActor");
		return ptr;
	}

};


// Class Engine.SpeedTreeComponent
// 0x185B8564E60
class SpeedTreeComponent
{
public:
	unsigned char                                      UnknownData00[0x185B8564E60];                             // 0x0000(0x185B8564E60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpeedTreeComponent");
		return ptr;
	}

};


// Class Engine.SpeedTreeActorFactory
// 0x185B6272980
class SpeedTreeActorFactory
{
public:
	unsigned char                                      UnknownData00[0x185B6272980];                             // 0x0000(0x185B6272980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpeedTreeActorFactory");
		return ptr;
	}

};


// Class Engine.SpeedTreeComponentFactory
// 0x185B6272A40
class SpeedTreeComponentFactory
{
public:
	unsigned char                                      UnknownData00[0x185B6272A40];                             // 0x0000(0x185B6272A40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpeedTreeComponentFactory");
		return ptr;
	}

};


// Class Engine.SpeedTree
// 0x185B6271300
class SpeedTree
{
public:
	unsigned char                                      UnknownData00[0x185B6271300];                             // 0x0000(0x185B6271300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpeedTree");
		return ptr;
	}

};


// Class Engine.LensFlareSource
// 0x185AD4C49F0
class LensFlareSource
{
public:
	unsigned char                                      UnknownData00[0x185AD4C49F0];                             // 0x0000(0x185AD4C49F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LensFlareSource");
		return ptr;
	}

};


// Class Engine.LensFlareComponent
// 0x185AD4C1BD0
class LensFlareComponent
{
public:
	unsigned char                                      UnknownData00[0x185AD4C1BD0];                             // 0x0000(0x185AD4C1BD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LensFlareComponent");
		return ptr;
	}

};


// Class Engine.LensFlare
// 0x185BC8AB280
class LensFlare
{
public:
	unsigned char                                      UnknownData00[0x185BC8AB280];                             // 0x0000(0x185BC8AB280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LensFlare");
		return ptr;
	}

};


// Class Engine.TextureFlipBook
// 0x185B856C5A0
class TextureFlipBook
{
public:
	unsigned char                                      UnknownData00[0x185B856C5A0];                             // 0x0000(0x185B856C5A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureFlipBook");
		return ptr;
	}

};


// Class Engine.Texture2DComposite
// 0x185B856B3A0
class Texture2DComposite
{
public:
	unsigned char                                      UnknownData00[0x185B856B3A0];                             // 0x0000(0x185B856B3A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DComposite");
		return ptr;
	}

};


// Class Engine.Texture2DDynamic
// 0x185B856B820
class Texture2DDynamic
{
public:
	unsigned char                                      UnknownData00[0x185B856B820];                             // 0x0000(0x185B856B820) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DDynamic");
		return ptr;
	}

};


// Class Engine.TextureCube
// 0x185BCA05EF0
class TextureCube
{
public:
	unsigned char                                      UnknownData00[0x185BCA05EF0];                             // 0x0000(0x185BCA05EF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureCube");
		return ptr;
	}

};


// Class Engine.TextureMovie
// 0x185B856D0E0
class TextureMovie
{
public:
	unsigned char                                      UnknownData00[0x185B856D0E0];                             // 0x0000(0x185B856D0E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureMovie");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget
// 0x185B48A56A0
class TextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0x185B48A56A0];                             // 0x0000(0x185B48A56A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget2D
// 0x185B854EAE0
class TextureRenderTarget2D
{
public:
	unsigned char                                      UnknownData00[0x185B854EAE0];                             // 0x0000(0x185B854EAE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget2D");
		return ptr;
	}

};


// Class Engine.ScriptedTexture
// 0x185B854EC00
class ScriptedTexture
{
public:
	unsigned char                                      UnknownData00[0x185B854EC00];                             // 0x0000(0x185B854EC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptedTexture");
		return ptr;
	}

};


// Class Engine.TextureRenderTargetCube
// 0x185B84D5D20
class TextureRenderTargetCube
{
public:
	unsigned char                                      UnknownData00[0x185B84D5D20];                             // 0x0000(0x185B84D5D20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTargetCube");
		return ptr;
	}

};


// Class Engine.AudioDevice
// 0x185C1DB8930
class AudioDevice
{
public:
	unsigned char                                      UnknownData00[0x185C1DB8930];                             // 0x0000(0x185C1DB8930) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioDevice");
		return ptr;
	}

};


// Class Engine.SoundClass
// 0x185B6268C00
class SoundClass
{
public:
	unsigned char                                      UnknownData00[0x185B6268C00];                             // 0x0000(0x185B6268C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundClass");
		return ptr;
	}

};


// Class Engine.SoundMode
// 0x185B6267AC0
class SoundMode
{
public:
	unsigned char                                      UnknownData00[0x185B6267AC0];                             // 0x0000(0x185B6267AC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundMode");
		return ptr;
	}

};


// Class Engine.MatineePawn
// 0x0000
class MatineePawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineePawn");
		return ptr;
	}

};


// Class Engine.Scout
// 0x185B8552560
class Scout
{
public:
	unsigned char                                      UnknownData00[0x185B8552560];                             // 0x0000(0x185B8552560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scout");
		return ptr;
	}

};


// Class Engine.Light
// 0x185BB903120
class Light
{
public:
	unsigned char                                      UnknownData00[0x185BB903120];                             // 0x0000(0x185BB903120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Light");
		return ptr;
	}

};


// Class Engine.DirectionalLight
// 0x0000
class DirectionalLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLight");
		return ptr;
	}

};


// Class Engine.DirectionalLightToggleable
// 0x0000
class DirectionalLightToggleable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightToggleable");
		return ptr;
	}

};


// Class Engine.DominantDirectionalLight
// 0x0000
class DominantDirectionalLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantDirectionalLight");
		return ptr;
	}

};


// Class Engine.DominantDirectionalLightMovable
// 0x0000
class DominantDirectionalLightMovable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantDirectionalLightMovable");
		return ptr;
	}

};


// Class Engine.PointLight
// 0x0000
class PointLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLight");
		return ptr;
	}

};


// Class Engine.DominantPointLight
// 0x0000
class DominantPointLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantPointLight");
		return ptr;
	}

};


// Class Engine.PointLightMovable
// 0x0000
class PointLightMovable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightMovable");
		return ptr;
	}

};


// Class Engine.PointLightToggleable
// 0x185B8548000
class PointLightToggleable
{
public:
	unsigned char                                      UnknownData00[0x185B8548000];                             // 0x0000(0x185B8548000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightToggleable");
		return ptr;
	}

};


// Class Engine.SkyLight
// 0x0000
class SkyLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLight");
		return ptr;
	}

};


// Class Engine.SkyLightToggleable
// 0x0000
class SkyLightToggleable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightToggleable");
		return ptr;
	}

};


// Class Engine.SpotLight
// 0x0000
class SpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLight");
		return ptr;
	}

};


// Class Engine.DominantSpotLight
// 0x0000
class DominantSpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantSpotLight");
		return ptr;
	}

};


// Class Engine.GeneratedMeshAreaLight
// 0x0000
class GeneratedMeshAreaLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GeneratedMeshAreaLight");
		return ptr;
	}

};


// Class Engine.SpotLightMovable
// 0x0000
class SpotLightMovable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightMovable");
		return ptr;
	}

};


// Class Engine.SpotLightToggleable
// 0x185B8562040
class SpotLightToggleable
{
public:
	unsigned char                                      UnknownData00[0x185B8562040];                             // 0x0000(0x185B8562040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightToggleable");
		return ptr;
	}

};


// Class Engine.StaticLightCollectionActor
// 0x185B6276F40
class StaticLightCollectionActor
{
public:
	unsigned char                                      UnknownData00[0x185B6276F40];                             // 0x0000(0x185B6276F40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticLightCollectionActor");
		return ptr;
	}

};


// Class Engine.LightComponent
// 0x185BB8FFD60
class LightComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB8FFD60];                             // 0x0000(0x185BB8FFD60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponent");
		return ptr;
	}

};


// Class Engine.DirectionalLightComponent
// 0x185BB900420
class DirectionalLightComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB900420];                             // 0x0000(0x185BB900420) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightComponent");
		return ptr;
	}

};


// Class Engine.DominantDirectionalLightComponent
// 0x185B69DF5D0
class DominantDirectionalLightComponent
{
public:
	unsigned char                                      UnknownData00[0x185B69DF5D0];                             // 0x0000(0x185B69DF5D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantDirectionalLightComponent");
		return ptr;
	}

};


// Class Engine.PointLightComponent
// 0x185BB9036C0
class PointLightComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB9036C0];                             // 0x0000(0x185BB9036C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightComponent");
		return ptr;
	}

};


// Class Engine.DominantPointLightComponent
// 0x0000
class DominantPointLightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantPointLightComponent");
		return ptr;
	}

};


// Class Engine.SpotLightComponent
// 0x185BB903EA0
class SpotLightComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB903EA0];                             // 0x0000(0x185BB903EA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightComponent");
		return ptr;
	}

};


// Class Engine.DominantSpotLightComponent
// 0x185B69E04D0
class DominantSpotLightComponent
{
public:
	unsigned char                                      UnknownData00[0x185B69E04D0];                             // 0x0000(0x185B69E04D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DominantSpotLightComponent");
		return ptr;
	}

};


// Class Engine.SkyLightComponent
// 0x185B6263BC0
class SkyLightComponent
{
public:
	unsigned char                                      UnknownData00[0x185B6263BC0];                             // 0x0000(0x185B6263BC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightComponent");
		return ptr;
	}

};


// Class Engine.SphericalHarmonicLightComponent
// 0x185B6274180
class SphericalHarmonicLightComponent
{
public:
	unsigned char                                      UnknownData00[0x185B6274180];                             // 0x0000(0x185B6274180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphericalHarmonicLightComponent");
		return ptr;
	}

};


// Class Engine.LightEnvironmentComponent
// 0x185C1DB0590
class LightEnvironmentComponent
{
public:
	unsigned char                                      UnknownData00[0x185C1DB0590];                             // 0x0000(0x185C1DB0590) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightEnvironmentComponent");
		return ptr;
	}

};


// Class Engine.DynamicLightEnvironmentComponent
// 0x185C1DB06B0
class DynamicLightEnvironmentComponent
{
public:
	unsigned char                                      UnknownData00[0x185C1DB06B0];                             // 0x0000(0x185C1DB06B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicLightEnvironmentComponent");
		return ptr;
	}

};


// Class Engine.ParticleLightEnvironmentComponent
// 0x185B9D4A3E0
class ParticleLightEnvironmentComponent
{
public:
	unsigned char                                      UnknownData00[0x185B9D4A3E0];                             // 0x0000(0x185B9D4A3E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleLightEnvironmentComponent");
		return ptr;
	}

};


// Class Engine.DrawLightConeComponent
// 0x0000
class DrawLightConeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawLightConeComponent");
		return ptr;
	}

};


// Class Engine.DrawLightRadiusComponent
// 0x0000
class DrawLightRadiusComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawLightRadiusComponent");
		return ptr;
	}

};


// Class Engine.LightFunction
// 0x185BC9F1D30
class LightFunction
{
public:
	unsigned char                                      UnknownData00[0x185BC9F1D30];                             // 0x0000(0x185BC9F1D30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightFunction");
		return ptr;
	}

};


// Class Engine.SkeletalMeshComponent
// 0x185BB509DD0
class SkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x185BB509DD0];                             // 0x0000(0x185BB509DD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshComponent");
		return ptr;
	}

};


// Class Engine.SkeletalMesh
// 0x185B855E020
class SkeletalMesh
{
public:
	unsigned char                                      UnknownData00[0x185B855E020];                             // 0x0000(0x185B855E020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMesh");
		return ptr;
	}

};


// Class Engine.SkeletalMeshSocket
// 0x185B6264AC0
class SkeletalMeshSocket
{
public:
	unsigned char                                      UnknownData00[0x185B6264AC0];                             // 0x0000(0x185B6264AC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSocket");
		return ptr;
	}

};


// Class Engine.SplineActor
// 0x185B8562820
class SplineActor
{
public:
	unsigned char                                      UnknownData00[0x185B8562820];                             // 0x0000(0x185B8562820) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineActor");
		return ptr;
	}

};


// Class Engine.SplineLoftActor
// 0x185B85623A0
class SplineLoftActor
{
public:
	unsigned char                                      UnknownData00[0x185B85623A0];                             // 0x0000(0x185B85623A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineLoftActor");
		return ptr;
	}

};


// Class Engine.SplineLoftActorMovable
// 0x0000
class SplineLoftActorMovable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineLoftActorMovable");
		return ptr;
	}

};


// Class Engine.SplineComponent
// 0x185C1DB7A90
class SplineComponent
{
public:
	unsigned char                                      UnknownData00[0x185C1DB7A90];                             // 0x0000(0x185C1DB7A90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineComponent");
		return ptr;
	}

};


// Class Engine.ProcBuilding
// 0x185B853CAE0
class ProcBuilding
{
public:
	unsigned char                                      UnknownData00[0x185B853CAE0];                             // 0x0000(0x185B853CAE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProcBuilding");
		return ptr;
	}

};


// Class Engine.ProcBuilding_SimpleLODActor
// 0x0000
class ProcBuilding_SimpleLODActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProcBuilding_SimpleLODActor");
		return ptr;
	}

};


// Class Engine.PBRuleNodeBase
// 0x185B9EA63E0
class PBRuleNodeBase
{
public:
	unsigned char                                      UnknownData00[0x185B9EA63E0];                             // 0x0000(0x185B9EA63E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeBase");
		return ptr;
	}

};


// Class Engine.PBRuleNodeAlternate
// 0x185B9EAC560
class PBRuleNodeAlternate
{
public:
	unsigned char                                      UnknownData00[0x185B9EAC560];                             // 0x0000(0x185B9EAC560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeAlternate");
		return ptr;
	}

};


// Class Engine.PBRuleNodeComment
// 0x185B9EAAFA0
class PBRuleNodeComment
{
public:
	unsigned char                                      UnknownData00[0x185B9EAAFA0];                             // 0x0000(0x185B9EAAFA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeComment");
		return ptr;
	}

};


// Class Engine.PBRuleNodeCorner
// 0x185B8543EC0
class PBRuleNodeCorner
{
public:
	unsigned char                                      UnknownData00[0x185B8543EC0];                             // 0x0000(0x185B8543EC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeCorner");
		return ptr;
	}

};


// Class Engine.PBRuleNodeCycle
// 0x185B9EAAE20
class PBRuleNodeCycle
{
public:
	unsigned char                                      UnknownData00[0x185B9EAAE20];                             // 0x0000(0x185B9EAAE20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeCycle");
		return ptr;
	}

};


// Class Engine.PBRuleNodeEdgeAngle
// 0x185B8541BE0
class PBRuleNodeEdgeAngle
{
public:
	unsigned char                                      UnknownData00[0x185B8541BE0];                             // 0x0000(0x185B8541BE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeEdgeAngle");
		return ptr;
	}

};


// Class Engine.PBRuleNodeEdgeMesh
// 0x185B9EAA220
class PBRuleNodeEdgeMesh
{
public:
	unsigned char                                      UnknownData00[0x185B9EAA220];                             // 0x0000(0x185B9EAA220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeEdgeMesh");
		return ptr;
	}

};


// Class Engine.PBRuleNodeExtractTopBottom
// 0x185B9EAC860
class PBRuleNodeExtractTopBottom
{
public:
	unsigned char                                      UnknownData00[0x185B9EAC860];                             // 0x0000(0x185B9EAC860) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeExtractTopBottom");
		return ptr;
	}

};


// Class Engine.PBRuleNodeLODQuad
// 0x185B9EA9F20
class PBRuleNodeLODQuad
{
public:
	unsigned char                                      UnknownData00[0x185B9EA9F20];                             // 0x0000(0x185B9EA9F20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeLODQuad");
		return ptr;
	}

};


// Class Engine.PBRuleNodeMesh
// 0x185B8543800
class PBRuleNodeMesh
{
public:
	unsigned char                                      UnknownData00[0x185B8543800];                             // 0x0000(0x185B8543800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeMesh");
		return ptr;
	}

};


// Class Engine.PBRuleNodeOcclusion
// 0x0000
class PBRuleNodeOcclusion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeOcclusion");
		return ptr;
	}

};


// Class Engine.PBRuleNodeQuad
// 0x185B9EAD220
class PBRuleNodeQuad
{
public:
	unsigned char                                      UnknownData00[0x185B9EAD220];                             // 0x0000(0x185B9EAD220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeQuad");
		return ptr;
	}

};


// Class Engine.PBRuleNodeRandom
// 0x185B9EAD2E0
class PBRuleNodeRandom
{
public:
	unsigned char                                      UnknownData00[0x185B9EAD2E0];                             // 0x0000(0x185B9EAD2E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeRandom");
		return ptr;
	}

};


// Class Engine.PBRuleNodeRepeat
// 0x185B9EADA60
class PBRuleNodeRepeat
{
public:
	unsigned char                                      UnknownData00[0x185B9EADA60];                             // 0x0000(0x185B9EADA60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeRepeat");
		return ptr;
	}

};


// Class Engine.PBRuleNodeSize
// 0x185B9EAD0A0
class PBRuleNodeSize
{
public:
	unsigned char                                      UnknownData00[0x185B9EAD0A0];                             // 0x0000(0x185B9EAD0A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeSize");
		return ptr;
	}

};


// Class Engine.PBRuleNodeSplit
// 0x185B8544FA0
class PBRuleNodeSplit
{
public:
	unsigned char                                      UnknownData00[0x185B8544FA0];                             // 0x0000(0x185B8544FA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeSplit");
		return ptr;
	}

};


// Class Engine.PBRuleNodeSubRuleset
// 0x185B9EAED20
class PBRuleNodeSubRuleset
{
public:
	unsigned char                                      UnknownData00[0x185B9EAED20];                             // 0x0000(0x185B9EAED20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeSubRuleset");
		return ptr;
	}

};


// Class Engine.PBRuleNodeTransform
// 0x185B9EAE720
class PBRuleNodeTransform
{
public:
	unsigned char                                      UnknownData00[0x185B9EAE720];                             // 0x0000(0x185B9EAE720) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeTransform");
		return ptr;
	}

};


// Class Engine.PBRuleNodeVariation
// 0x185B9EADFA0
class PBRuleNodeVariation
{
public:
	unsigned char                                      UnknownData00[0x185B9EADFA0];                             // 0x0000(0x185B9EADFA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeVariation");
		return ptr;
	}

};


// Class Engine.PBRuleNodeWindowWall
// 0x185B9EAD460
class PBRuleNodeWindowWall
{
public:
	unsigned char                                      UnknownData00[0x185B9EAD460];                             // 0x0000(0x185B9EAD460) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PBRuleNodeWindowWall");
		return ptr;
	}

};


// Class Engine.ProcBuildingRuleset
// 0x185BC867860
class ProcBuildingRuleset
{
public:
	unsigned char                                      UnknownData00[0x185BC867860];                             // 0x0000(0x185BC867860) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProcBuildingRuleset");
		return ptr;
	}

};


// Class Engine.ReplicationInfo
// 0x0000
class ReplicationInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReplicationInfo");
		return ptr;
	}

};


// Class Engine.GameReplicationInfo
// 0x185AD4E1A90
class GameReplicationInfo
{
public:
	unsigned char                                      UnknownData00[0x185AD4E1A90];                             // 0x0000(0x185AD4E1A90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameReplicationInfo");
		return ptr;
	}

};


// Class Engine.PlayerReplicationInfo
// 0x185BB508990
class PlayerReplicationInfo
{
public:
	unsigned char                                      UnknownData00[0x185BB508990];                             // 0x0000(0x185BB508990) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerReplicationInfo");
		return ptr;
	}

};


// Class Engine.TeamInfo
// 0x185B856C480
class TeamInfo
{
public:
	unsigned char                                      UnknownData00[0x185B856C480];                             // 0x0000(0x185B856C480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TeamInfo");
		return ptr;
	}

};


// Class Engine.Camera
// 0x185C1E12660
class Camera
{
public:
	unsigned char                                      UnknownData00[0x185C1E12660];                             // 0x0000(0x185C1E12660) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Camera");
		return ptr;
	}

};


// Class Engine.CameraActor
// 0x185BB8DC540
class CameraActor
{
public:
	unsigned char                                      UnknownData00[0x185BB8DC540];                             // 0x0000(0x185BB8DC540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraActor");
		return ptr;
	}

};


// Class Engine.DynamicCameraActor
// 0x0000
class DynamicCameraActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicCameraActor");
		return ptr;
	}

};


// Class Engine.CameraAnim
// 0x185C1D38B40
class CameraAnim
{
public:
	unsigned char                                      UnknownData00[0x185C1D38B40];                             // 0x0000(0x185C1D38B40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnim");
		return ptr;
	}

};


// Class Engine.CameraAnimInst
// 0x185BB52CCF0
class CameraAnimInst
{
public:
	unsigned char                                      UnknownData00[0x185BB52CCF0];                             // 0x0000(0x185BB52CCF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnimInst");
		return ptr;
	}

};


// Class Engine.CameraModifier
// 0x185BB8E1AC0
class CameraModifier
{
public:
	unsigned char                                      UnknownData00[0x185BB8E1AC0];                             // 0x0000(0x185BB8E1AC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier");
		return ptr;
	}

};


// Class Engine.CameraModifier_CameraShake
// 0x185BB8E0200
class CameraModifier_CameraShake
{
public:
	unsigned char                                      UnknownData00[0x185BB8E0200];                             // 0x0000(0x185BB8E0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier_CameraShake");
		return ptr;
	}

};


// Class Engine.CameraShake
// 0x185BB8E46A0
class CameraShake
{
public:
	unsigned char                                      UnknownData00[0x185BB8E46A0];                             // 0x0000(0x185BB8E46A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraShake");
		return ptr;
	}

};


// Class Engine.CloudStorageUpgradeHelper
// 0x185BB8EFBC0
class CloudStorageUpgradeHelper
{
public:
	unsigned char                                      UnknownData00[0x185BB8EFBC0];                             // 0x0000(0x185BB8EFBC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageUpgradeHelper");
		return ptr;
	}

};


// Class Engine.AnalyticEventsBase
// 0x185C1DB9590
class AnalyticEventsBase
{
public:
	unsigned char                                      UnknownData00[0x185C1DB9590];                             // 0x0000(0x185C1DB9590) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnalyticEventsBase");
		return ptr;
	}

};


// Class Engine.MultiProviderAnalytics
// 0x185BB888440
class MultiProviderAnalytics
{
public:
	unsigned char                                      UnknownData00[0x185BB888440];                             // 0x0000(0x185BB888440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MultiProviderAnalytics");
		return ptr;
	}

};


// Class Engine.AppNotificationsBase
// 0x185BB8DBB20
class AppNotificationsBase
{
public:
	unsigned char                                      UnknownData00[0x185BB8DBB20];                             // 0x0000(0x185BB8DBB20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AppNotificationsBase");
		return ptr;
	}

};


// Class Engine.CloudStorageBase
// 0x185BB8EEF60
class CloudStorageBase
{
public:
	unsigned char                                      UnknownData00[0x185BB8EEF60];                             // 0x0000(0x185BB8EEF60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageBase");
		return ptr;
	}

};


// Class Engine.FacebookIntegration
// 0x185BB914040
class FacebookIntegration
{
public:
	unsigned char                                      UnknownData00[0x185BB914040];                             // 0x0000(0x185BB914040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FacebookIntegration");
		return ptr;
	}

};


// Class Engine.InAppMessageBase
// 0x185AD4F3850
class InAppMessageBase
{
public:
	unsigned char                                      UnknownData00[0x185AD4F3850];                             // 0x0000(0x185AD4F3850) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InAppMessageBase");
		return ptr;
	}

};


// Class Engine.InGameAdManager
// 0x185AD4F56B0
class InGameAdManager
{
public:
	unsigned char                                      UnknownData00[0x185AD4F56B0];                             // 0x0000(0x185AD4F56B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InGameAdManager");
		return ptr;
	}

};


// Class Engine.TwitterIntegrationBase
// 0x185B8572300
class TwitterIntegrationBase
{
public:
	unsigned char                                      UnknownData00[0x185B8572300];                             // 0x0000(0x185B8572300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TwitterIntegrationBase");
		return ptr;
	}

};


// Class Engine.PlatformInterfaceWebResponse
// 0x185B8547040
class PlatformInterfaceWebResponse
{
public:
	unsigned char                                      UnknownData00[0x185B8547040];                             // 0x0000(0x185B8547040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceWebResponse");
		return ptr;
	}

};


// Class Engine.HavokMaterialPainter
// 0x0000
class HavokMaterialPainter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HavokMaterialPainter");
		return ptr;
	}

};


// Class Engine.HavokCustomTraversalAnnotation
// 0x185AD4E7130
class HavokCustomTraversalAnnotation
{
public:
	unsigned char                                      UnknownData00[0x185AD4E7130];                             // 0x0000(0x185AD4E7130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HavokCustomTraversalAnnotation");
		return ptr;
	}

};


// Class Engine.HavokTraversalAnnotationPortal
// 0x185AD4EEAB0
class HavokTraversalAnnotationPortal
{
public:
	unsigned char                                      UnknownData00[0x185AD4EEAB0];                             // 0x0000(0x185AD4EEAB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HavokTraversalAnnotationPortal");
		return ptr;
	}

};


// Class Engine.HavokNavMeshActor
// 0x185AD4E9BF0
class HavokNavMeshActor
{
public:
	unsigned char                                      UnknownData00[0x185AD4E9BF0];                             // 0x0000(0x185AD4E9BF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HavokNavMeshActor");
		return ptr;
	}

};


// Class Engine.HavokCustomTraversalRenderingComponent
// 0x0000
class HavokCustomTraversalRenderingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HavokCustomTraversalRenderingComponent");
		return ptr;
	}

};


// Class Engine.HavokNavigationRenderingComponent
// 0x185B8F9BD10
class HavokNavigationRenderingComponent
{
public:
	unsigned char                                      UnknownData00[0x185B8F9BD10];                             // 0x0000(0x185B8F9BD10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HavokNavigationRenderingComponent");
		return ptr;
	}

};


// Class Engine.HavokNavMeshGrid
// 0x185AD4F2770
class HavokNavMeshGrid
{
public:
	unsigned char                                      UnknownData00[0x185AD4F2770];                             // 0x0000(0x185AD4F2770) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HavokNavMeshGrid");
		return ptr;
	}

};


// Class Engine.HavokNavigationHandle
// 0x185AD4ED670
class HavokNavigationHandle
{
public:
	unsigned char                                      UnknownData00[0x185AD4ED670];                             // 0x0000(0x185AD4ED670) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HavokNavigationHandle");
		return ptr;
	}

};


// Class Engine.SeqEvent_HitWall
// 0x0000
class SeqEvent_HitWall
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_HitWall");
		return ptr;
	}

};


// Class Engine.LocalMessage
// 0x185BB914940
class LocalMessage
{
public:
	unsigned char                                      UnknownData00[0x185BB914940];                             // 0x0000(0x185BB914940) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalMessage");
		return ptr;
	}

};


// Class Engine.SeqAct_Destroy
// 0x185B6EA6140
class SeqAct_Destroy
{
public:
	unsigned char                                      UnknownData00[0x185B6EA6140];                             // 0x0000(0x185B6EA6140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Destroy");
		return ptr;
	}

};


// Class Engine.SeqAct_Teleport
// 0x185B8556FA0
class SeqAct_Teleport
{
public:
	unsigned char                                      UnknownData00[0x185B8556FA0];                             // 0x0000(0x185B8556FA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_Teleport");
		return ptr;
	}

};


// Class Engine.SeqAct_SetVelocity
// 0x185B8555C80
class SeqAct_SetVelocity
{
public:
	unsigned char                                      UnknownData00[0x185B8555C80];                             // 0x0000(0x185B8555C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetVelocity");
		return ptr;
	}

};


// Class Engine.SeqAct_ToggleHidden
// 0x185B6EA8D80
class SeqAct_ToggleHidden
{
public:
	unsigned char                                      UnknownData00[0x185B6EA8D80];                             // 0x0000(0x185B6EA8D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleHidden");
		return ptr;
	}

};


// Class Engine.SeqAct_AttachToActor
// 0x185B8554180
class SeqAct_AttachToActor
{
public:
	unsigned char                                      UnknownData00[0x185B8554180];                             // 0x0000(0x185B8554180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AttachToActor");
		return ptr;
	}

};


// Class Engine.SeqEvent_MobileTouch
// 0x0000
class SeqEvent_MobileTouch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_MobileTouch");
		return ptr;
	}

};


// Class Engine.OnlinePlayerInterface
// 0x185BB8B3B80
class OnlinePlayerInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8B3B80];                             // 0x0000(0x185BB8B3B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlinePlayerInterface");
		return ptr;
	}

};


// Class Engine.OnlineCommunityContentInterface
// 0x185BB898A60
class OnlineCommunityContentInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB898A60];                             // 0x0000(0x185BB898A60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineCommunityContentInterface");
		return ptr;
	}

};


// Class Engine.OnlineGameDVRInterface
// 0x185BB89AF80
class OnlineGameDVRInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB89AF80];                             // 0x0000(0x185BB89AF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineGameDVRInterface");
		return ptr;
	}

};


// Class Engine.SharedCloudFileInterface
// 0x185B85595E0
class SharedCloudFileInterface
{
public:
	unsigned char                                      UnknownData00[0x185B85595E0];                             // 0x0000(0x185B85595E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SharedCloudFileInterface");
		return ptr;
	}

};


// Class Engine.UserCloudFileInterface
// 0x185B6D01B30
class UserCloudFileInterface
{
public:
	unsigned char                                      UnknownData00[0x185B6D01B30];                             // 0x0000(0x185B6D01B30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserCloudFileInterface");
		return ptr;
	}

};


// Class Engine.OnlineSocialInterface
// 0x185BB8BE0E0
class OnlineSocialInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8BE0E0];                             // 0x0000(0x185BB8BE0E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSocialInterface");
		return ptr;
	}

};


// Class Engine.OnlineTitleFileCacheInterface
// 0x185AD4F3DF0
class OnlineTitleFileCacheInterface
{
public:
	unsigned char                                      UnknownData00[0x185AD4F3DF0];                             // 0x0000(0x185AD4F3DF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineTitleFileCacheInterface");
		return ptr;
	}

};


// Class Engine.OnlineChatInterface
// 0x185BB892760
class OnlineChatInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB892760];                             // 0x0000(0x185BB892760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineChatInterface");
		return ptr;
	}

};


// Class Engine.OnlineTitleFileInterface
// 0x185BB8814E0
class OnlineTitleFileInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8814E0];                             // 0x0000(0x185BB8814E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineTitleFileInterface");
		return ptr;
	}

};


// Class Engine.OnlinePartyChatInterface
// 0x185BB8A7A00
class OnlinePartyChatInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8A7A00];                             // 0x0000(0x185BB8A7A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlinePartyChatInterface");
		return ptr;
	}

};


// Class Engine.OnlineNewsInterface
// 0x185BB8A49A0
class OnlineNewsInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8A49A0];                             // 0x0000(0x185BB8A49A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineNewsInterface");
		return ptr;
	}

};


// Class Engine.OnlineStatsInterface
// 0x185BB880D00
class OnlineStatsInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB880D00];                             // 0x0000(0x185BB880D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineStatsInterface");
		return ptr;
	}

};


// Class Engine.OnlineVoiceInterface
// 0x185B853D080
class OnlineVoiceInterface
{
public:
	unsigned char                                      UnknownData00[0x185B853D080];                             // 0x0000(0x185B853D080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineVoiceInterface");
		return ptr;
	}

};


// Class Engine.OnlineContentInterface
// 0x185BB8983A0
class OnlineContentInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8983A0];                             // 0x0000(0x185BB8983A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineContentInterface");
		return ptr;
	}

};


// Class Engine.OnlineGameInterface
// 0x185BB8A6A40
class OnlineGameInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8A6A40];                             // 0x0000(0x185BB8A6A40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineGameInterface");
		return ptr;
	}

};


// Class Engine.OnlineSystemInterface
// 0x185BB883340
class OnlineSystemInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB883340];                             // 0x0000(0x185BB883340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSystemInterface");
		return ptr;
	}

};


// Class Engine.OnlineMarketplaceInterface
// 0x185BB8A5600
class OnlineMarketplaceInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8A5600];                             // 0x0000(0x185BB8A5600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineMarketplaceInterface");
		return ptr;
	}

};


// Class Engine.OnlinePlayerInterfaceEx
// 0x185BB8B8800
class OnlinePlayerInterfaceEx
{
public:
	unsigned char                                      UnknownData00[0x185BB8B8800];                             // 0x0000(0x185BB8B8800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlinePlayerInterfaceEx");
		return ptr;
	}

};


// Class Engine.OnlineAccountInterface
// 0x185BB88EE00
class OnlineAccountInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB88EE00];                             // 0x0000(0x185BB88EE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineAccountInterface");
		return ptr;
	}

};


// Class Engine.AccessControl
// 0x185C1E25CE0
class AccessControl
{
public:
	unsigned char                                      UnknownData00[0x185C1E25CE0];                             // 0x0000(0x185C1E25CE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AccessControl");
		return ptr;
	}

};


// Class Engine.Admin
// 0x185BB530650
class Admin
{
public:
	unsigned char                                      UnknownData00[0x185BB530650];                             // 0x0000(0x185BB530650) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Admin");
		return ptr;
	}

};


// Class Engine.ApexDestructibleActorSpawnable
// 0x0000
class ApexDestructibleActorSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApexDestructibleActorSpawnable");
		return ptr;
	}

};


// Class Engine.EmitterSpawnable
// 0x185BB90D680
class EmitterSpawnable
{
public:
	unsigned char                                      UnknownData00[0x185BB90D680];                             // 0x0000(0x185BB90D680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterSpawnable");
		return ptr;
	}

};


// Class Engine.ActorFactorySkeletalMeshCinematic
// 0x0000
class ActorFactorySkeletalMeshCinematic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactorySkeletalMeshCinematic");
		return ptr;
	}

};


// Class Engine.ActorFactorySkeletalMeshMAT
// 0x0000
class ActorFactorySkeletalMeshMAT
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorFactorySkeletalMeshMAT");
		return ptr;
	}

};


// Class Engine.SeqEvent_Death
// 0x0000
class SeqEvent_Death
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_Death");
		return ptr;
	}

};


// Class Engine.SeqAct_ToggleGodMode
// 0x0000
class SeqAct_ToggleGodMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleGodMode");
		return ptr;
	}

};


// Class Engine.SeqAct_ControlMovieTexture
// 0x185BB4F6BD0
class SeqAct_ControlMovieTexture
{
public:
	unsigned char                                      UnknownData00[0x185BB4F6BD0];                             // 0x0000(0x185BB4F6BD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ControlMovieTexture");
		return ptr;
	}

};


// Class Engine.CoverReplicator
// 0x185BB8FBC20
class CoverReplicator
{
public:
	unsigned char                                      UnknownData00[0x185BB8FBC20];                             // 0x0000(0x185BB8FBC20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CoverReplicator");
		return ptr;
	}

};


// Class Engine.GameMessage
// 0x185AD4D96F0
class GameMessage
{
public:
	unsigned char                                      UnknownData00[0x185AD4D96F0];                             // 0x0000(0x185AD4D96F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameMessage");
		return ptr;
	}

};


// Class Engine.DmgType_Suicided
// 0x0000
class DmgType_Suicided
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DmgType_Suicided");
		return ptr;
	}

};


// Class Engine.SeqAct_ToggleInput
// 0x185B6065000
class SeqAct_ToggleInput
{
public:
	unsigned char                                      UnknownData00[0x185B6065000];                             // 0x0000(0x185B6065000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleInput");
		return ptr;
	}

};


// Class Engine.SeqAct_ToggleHUD
// 0x185B85570C0
class SeqAct_ToggleHUD
{
public:
	unsigned char                                      UnknownData00[0x185B85570C0];                             // 0x0000(0x185B85570C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleHUD");
		return ptr;
	}

};


// Class Engine.SeqAct_ForceFeedback
// 0x185B606BD80
class SeqAct_ForceFeedback
{
public:
	unsigned char                                      UnknownData00[0x185B606BD80];                             // 0x0000(0x185B606BD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ForceFeedback");
		return ptr;
	}

};


// Class Engine.SeqAct_ToggleCinematicMode
// 0x185B85532E0
class SeqAct_ToggleCinematicMode
{
public:
	unsigned char                                      UnknownData00[0x185B85532E0];                             // 0x0000(0x185B85532E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleCinematicMode");
		return ptr;
	}

};


// Class Engine.SeqAct_ConsoleCommand
// 0x185B85539A0
class SeqAct_ConsoleCommand
{
public:
	unsigned char                                      UnknownData00[0x185B85539A0];                             // 0x0000(0x185B85539A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ConsoleCommand");
		return ptr;
	}

};


// Class Engine.SeqAct_FlyThroughHasEnded
// 0x0000
class SeqAct_FlyThroughHasEnded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_FlyThroughHasEnded");
		return ptr;
	}

};


// Class Engine.SeqAct_SetSoundMode
// 0x185B8555920
class SeqAct_SetSoundMode
{
public:
	unsigned char                                      UnknownData00[0x185B8555920];                             // 0x0000(0x185B8555920) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetSoundMode");
		return ptr;
	}

};


// Class Engine.SplineComponentSimplified
// 0x0000
class SplineComponentSimplified
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineComponentSimplified");
		return ptr;
	}

};


// Class Engine.AmbientSoundSimpleSplineNonLoop
// 0x0000
class AmbientSoundSimpleSplineNonLoop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSoundSimpleSplineNonLoop");
		return ptr;
	}

};


// Class Engine.DmgType_Fell
// 0x0000
class DmgType_Fell
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DmgType_Fell");
		return ptr;
	}

};


// Class Engine.DmgType_Telefragged
// 0x0000
class DmgType_Telefragged
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DmgType_Telefragged");
		return ptr;
	}

};


// Class Engine.DmgType_Crushed
// 0x0000
class DmgType_Crushed
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DmgType_Crushed");
		return ptr;
	}

};


// Class Engine.SeqAct_AssignController
// 0x185B7E0D780
class SeqAct_AssignController
{
public:
	unsigned char                                      UnknownData00[0x185B7E0D780];                             // 0x0000(0x185B7E0D780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AssignController");
		return ptr;
	}

};


// Class Engine.SeqAct_GiveInventory
// 0x185B7708780
class SeqAct_GiveInventory
{
public:
	unsigned char                                      UnknownData00[0x185B7708780];                             // 0x0000(0x185B7708780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_GiveInventory");
		return ptr;
	}

};


// Class Engine.AnimNotify_PlayFaceFXAnim
// 0x185C1DB1550
class AnimNotify_PlayFaceFXAnim
{
public:
	unsigned char                                      UnknownData00[0x185C1DB1550];                             // 0x0000(0x185C1DB1550) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlayFaceFXAnim");
		return ptr;
	}

};


// Class Engine.BroadcastHandler
// 0x185BB8DDBC0
class BroadcastHandler
{
public:
	unsigned char                                      UnknownData00[0x185BB8DDBC0];                             // 0x0000(0x185BB8DDBC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BroadcastHandler");
		return ptr;
	}

};


// Class Engine.HttpFactory
// 0x185BB8E99E0
class HttpFactory
{
public:
	unsigned char                                      UnknownData00[0x185BB8E99E0];                             // 0x0000(0x185BB8E99E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HttpFactory");
		return ptr;
	}

};


// Class Engine.CloudSaveSystemKVSInterface
// 0x185BB8EE420
class CloudSaveSystemKVSInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8EE420];                             // 0x0000(0x185BB8EE420) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudSaveSystemKVSInterface");
		return ptr;
	}

};


// Class Engine.CloudSaveSystemDataBlobStoreInterface
// 0x185BB8F0820
class CloudSaveSystemDataBlobStoreInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8F0820];                             // 0x0000(0x185BB8F0820) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudSaveSystemDataBlobStoreInterface");
		return ptr;
	}

};


// Class Engine.CloudStorageBaseCloudSaveSystemKVS
// 0x185BB8EF1A0
class CloudStorageBaseCloudSaveSystemKVS
{
public:
	unsigned char                                      UnknownData00[0x185BB8EF1A0];                             // 0x0000(0x185BB8EF1A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageBaseCloudSaveSystemKVS");
		return ptr;
	}

};


// Class Engine.ColorScaleVolume
// 0x185BB8EFF20
class ColorScaleVolume
{
public:
	unsigned char                                      UnknownData00[0x185BB8EFF20];                             // 0x0000(0x185BB8EFF20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ColorScaleVolume");
		return ptr;
	}

};


// Class Engine.VolumeTimer
// 0x185B6D01E90
class VolumeTimer
{
public:
	unsigned char                                      UnknownData00[0x185B6D01E90];                             // 0x0000(0x185B6D01E90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumeTimer");
		return ptr;
	}

};


// Class Engine.SeqAct_SetDamageInstigator
// 0x185B69D8490
class SeqAct_SetDamageInstigator
{
public:
	unsigned char                                      UnknownData00[0x185B69D8490];                             // 0x0000(0x185B69D8490) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetDamageInstigator");
		return ptr;
	}

};


// Class Engine.DynamicPhysicsVolume
// 0x185BB907800
class DynamicPhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x185BB907800];                             // 0x0000(0x185BB907800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicPhysicsVolume");
		return ptr;
	}

};


// Class Engine.DynamicSMActor_Spawnable
// 0x0000
class DynamicSMActor_Spawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicSMActor_Spawnable");
		return ptr;
	}

};


// Class Engine.DynamicTriggerVolume
// 0x185BB9052E0
class DynamicTriggerVolume
{
public:
	unsigned char                                      UnknownData00[0x185BB9052E0];                             // 0x0000(0x185BB9052E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicTriggerVolume");
		return ptr;
	}

};


// Class Engine.SeqAct_SetParticleSysParam
// 0x185B69F5290
class SeqAct_SetParticleSysParam
{
public:
	unsigned char                                      UnknownData00[0x185B69F5290];                             // 0x0000(0x185B69F5290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetParticleSysParam");
		return ptr;
	}

};


// Class Engine.ExponentialHeightFog
// 0x185BB912420
class ExponentialHeightFog
{
public:
	unsigned char                                      UnknownData00[0x185BB912420];                             // 0x0000(0x185BB912420) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFog");
		return ptr;
	}

};


// Class Engine.FailedConnect
// 0x185BB914A60
class FailedConnect
{
public:
	unsigned char                                      UnknownData00[0x185BB914A60];                             // 0x0000(0x185BB914A60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FailedConnect");
		return ptr;
	}

};


// Class Engine.FracturedSMActorSpawnable
// 0x0000
class FracturedSMActorSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedSMActorSpawnable");
		return ptr;
	}

};


// Class Engine.FracturedStaticMeshActor_Spawnable
// 0x0000
class FracturedStaticMeshActor_Spawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FracturedStaticMeshActor_Spawnable");
		return ptr;
	}

};


// Class Engine.SeqEvent_PlayerSpawned
// 0x185B65D0330
class SeqEvent_PlayerSpawned
{
public:
	unsigned char                                      UnknownData00[0x185B65D0330];                             // 0x0000(0x185B65D0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_PlayerSpawned");
		return ptr;
	}

};


// Class Engine.HeightFog
// 0x185AD4F07F0
class HeightFog
{
public:
	unsigned char                                      UnknownData00[0x185AD4F07F0];                             // 0x0000(0x185AD4F07F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HeightFog");
		return ptr;
	}

};


// Class Engine.InterpActor_ForCinematic
// 0x0000
class InterpActor_ForCinematic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpActor_ForCinematic");
		return ptr;
	}

};


// Class Engine.MaterialInstanceTimeVaryingActor
// 0x185BCA0BD70
class MaterialInstanceTimeVaryingActor
{
public:
	unsigned char                                      UnknownData00[0x185BCA0BD70];                             // 0x0000(0x185BCA0BD70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceTimeVaryingActor");
		return ptr;
	}

};


// Class Engine.NavMeshBoundsVolume
// 0x0000
class NavMeshBoundsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMeshBoundsVolume");
		return ptr;
	}

};


// Class Engine.OnlineEventsInterface
// 0x185BB8995A0
class OnlineEventsInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB8995A0];                             // 0x0000(0x185BB8995A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineEventsInterface");
		return ptr;
	}

};


// Class Engine.OnlineGameDownloadInterface
// 0x185BB898280
class OnlineGameDownloadInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB898280];                             // 0x0000(0x185BB898280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineGameDownloadInterface");
		return ptr;
	}

};


// Class Engine.OnlinePlaylistGameTypeProvider
// 0x185B9D7E0A0
class OnlinePlaylistGameTypeProvider
{
public:
	unsigned char                                      UnknownData00[0x185B9D7E0A0];                             // 0x0000(0x185B9D7E0A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlinePlaylistGameTypeProvider");
		return ptr;
	}

};


// Class Engine.OnlineRecentPlayersList
// 0x185BB8BA9C0
class OnlineRecentPlayersList
{
public:
	unsigned char                                      UnknownData00[0x185BB8BA9C0];                             // 0x0000(0x185BB8BA9C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineRecentPlayersList");
		return ptr;
	}

};


// Class Engine.OnlineSuppliedUIInterface
// 0x185BB882140
class OnlineSuppliedUIInterface
{
public:
	unsigned char                                      UnknownData00[0x185BB882140];                             // 0x0000(0x185BB882140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSuppliedUIInterface");
		return ptr;
	}

};


// Class Engine.PathNode_Dynamic
// 0x185B853E280
class PathNode_Dynamic
{
public:
	unsigned char                                      UnknownData00[0x185B853E280];                             // 0x0000(0x185B853E280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathNode_Dynamic");
		return ptr;
	}

};


// Class Engine.SeqEvent_AIReachedRouteActor
// 0x0000
class SeqEvent_AIReachedRouteActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_AIReachedRouteActor");
		return ptr;
	}

};


// Class Engine.SeqEvent_PickupStatusChange
// 0x0000
class SeqEvent_PickupStatusChange
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_PickupStatusChange");
		return ptr;
	}

};


// Class Engine.RadialBlurActor
// 0x185B4892620
class RadialBlurActor
{
public:
	unsigned char                                      UnknownData00[0x185B4892620];                             // 0x0000(0x185B4892620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialBlurActor");
		return ptr;
	}

};


// Class Engine.SeqAct_ToggleConstraintDrive
// 0x185B489B4A0
class SeqAct_ToggleConstraintDrive
{
public:
	unsigned char                                      UnknownData00[0x185B489B4A0];                             // 0x0000(0x185B489B4A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleConstraintDrive");
		return ptr;
	}

};


// Class Engine.RB_BSJointActor
// 0x0000
class RB_BSJointActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_BSJointActor");
		return ptr;
	}

};


// Class Engine.RB_ConstraintActorSpawnable
// 0x0000
class RB_ConstraintActorSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_ConstraintActorSpawnable");
		return ptr;
	}

};


// Class Engine.RB_HingeActor
// 0x0000
class RB_HingeActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_HingeActor");
		return ptr;
	}

};


// Class Engine.RB_PrismaticActor
// 0x0000
class RB_PrismaticActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_PrismaticActor");
		return ptr;
	}

};


// Class Engine.RB_PulleyJointActor
// 0x0000
class RB_PulleyJointActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RB_PulleyJointActor");
		return ptr;
	}

};


// Class Engine.ReverbVolumeToggleable
// 0x185B8550040
class ReverbVolumeToggleable
{
public:
	unsigned char                                      UnknownData00[0x185B8550040];                             // 0x0000(0x185B8550040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbVolumeToggleable");
		return ptr;
	}

};


// Class Engine.SeqAct_AddRemoveFaceFXAnimSet
// 0x185B48AB0A0
class SeqAct_AddRemoveFaceFXAnimSet
{
public:
	unsigned char                                      UnknownData00[0x185B48AB0A0];                             // 0x0000(0x185B48AB0A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AddRemoveFaceFXAnimSet");
		return ptr;
	}

};


// Class Engine.SeqAct_AIAbortMoveToActor
// 0x0000
class SeqAct_AIAbortMoveToActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_AIAbortMoveToActor");
		return ptr;
	}

};


// Class Engine.SeqAct_ConcatenateStrings
// 0x185B8556100
class SeqAct_ConcatenateStrings
{
public:
	unsigned char                                      UnknownData00[0x185B8556100];                             // 0x0000(0x185B8556100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ConcatenateStrings");
		return ptr;
	}

};


// Class Engine.SeqAct_MITV_Activate
// 0x185B8554CC0
class SeqAct_MITV_Activate
{
public:
	unsigned char                                      UnknownData00[0x185B8554CC0];                             // 0x0000(0x185B8554CC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_MITV_Activate");
		return ptr;
	}

};


// Class Engine.SeqAct_SetMatInstTexParam
// 0x185B48B79A0
class SeqAct_SetMatInstTexParam
{
public:
	unsigned char                                      UnknownData00[0x185B48B79A0];                             // 0x0000(0x185B48B79A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetMatInstTexParam");
		return ptr;
	}

};


// Class Engine.SeqAct_SetMatInstVectorParam
// 0x185B8556460
class SeqAct_SetMatInstVectorParam
{
public:
	unsigned char                                      UnknownData00[0x185B8556460];                             // 0x0000(0x185B8556460) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetMatInstVectorParam");
		return ptr;
	}

};


// Class Engine.SeqAct_SetSkelControlTarget
// 0x185B48B96E0
class SeqAct_SetSkelControlTarget
{
public:
	unsigned char                                      UnknownData00[0x185B48B96E0];                             // 0x0000(0x185B48B96E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetSkelControlTarget");
		return ptr;
	}

};


// Class Engine.SeqAct_SetVector
// 0x185B85566A0
class SeqAct_SetVector
{
public:
	unsigned char                                      UnknownData00[0x185B85566A0];                             // 0x0000(0x185B85566A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_SetVector");
		return ptr;
	}

};


// Class Engine.SeqAct_ToggleAffectedByHitEffects
// 0x0000
class SeqAct_ToggleAffectedByHitEffects
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_ToggleAffectedByHitEffects");
		return ptr;
	}

};


// Class Engine.SeqAct_UpdatePhysBonesFromAnim
// 0x185B8553640
class SeqAct_UpdatePhysBonesFromAnim
{
public:
	unsigned char                                      UnknownData00[0x185B8553640];                             // 0x0000(0x185B8553640) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqAct_UpdatePhysBonesFromAnim");
		return ptr;
	}

};


// Class Engine.SeqEvent_LOS
// 0x185B8557D20
class SeqEvent_LOS
{
public:
	unsigned char                                      UnknownData00[0x185B8557D20];                             // 0x0000(0x185B8557D20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqEvent_LOS");
		return ptr;
	}

};


// Class Engine.SeqVar_Byte
// 0x0000
class SeqVar_Byte
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Byte");
		return ptr;
	}

};


// Class Engine.SeqVar_Name
// 0x0000
class SeqVar_Name
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Name");
		return ptr;
	}

};


// Class Engine.SeqVar_Union
// 0x0000
class SeqVar_Union
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SeqVar_Union");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActorMATSpawnable
// 0x0000
class SkeletalMeshActorMATSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActorMATSpawnable");
		return ptr;
	}

};


// Class Engine.SkeletalMeshActorMATWalkable
// 0x0000
class SkeletalMeshActorMATWalkable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActorMATWalkable");
		return ptr;
	}

};


// Class Engine.Trigger_Dynamic
// 0x0000
class Trigger_Dynamic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Trigger_Dynamic");
		return ptr;
	}

};


// Class Engine.Trigger_LOS
// 0x185B85706E0
class Trigger_LOS
{
public:
	unsigned char                                      UnknownData00[0x185B85706E0];                             // 0x0000(0x185B85706E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Trigger_LOS");
		return ptr;
	}

};


// Class Engine.TriggeredPath
// 0x185B8570B60
class TriggeredPath
{
public:
	unsigned char                                      UnknownData00[0x185B8570B60];                             // 0x0000(0x185B8570B60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggeredPath");
		return ptr;
	}

};


// Class Engine.TriggerStreamingLevel
// 0x185B8571B20
class TriggerStreamingLevel
{
public:
	unsigned char                                      UnknownData00[0x185B8571B20];                             // 0x0000(0x185B8571B20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerStreamingLevel");
		return ptr;
	}

};


// Class Engine.UICharacterSummary
// 0x185B84D9DA0
class UICharacterSummary
{
public:
	unsigned char                                      UnknownData00[0x185B84D9DA0];                             // 0x0000(0x185B84D9DA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UICharacterSummary");
		return ptr;
	}

};


// Class Engine.UIGameInfoSummary
// 0x185B84F05A0
class UIGameInfoSummary
{
public:
	unsigned char                                      UnknownData00[0x185B84F05A0];                             // 0x0000(0x185B84F05A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIGameInfoSummary");
		return ptr;
	}

};


// Class Engine.UIMapSummary
// 0x185B84F50A0
class UIMapSummary
{
public:
	unsigned char                                      UnknownData00[0x185B84F50A0];                             // 0x0000(0x185B84F50A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIMapSummary");
		return ptr;
	}

};


// Class Engine.UIWeaponSummary
// 0x185B84F7320
class UIWeaponSummary
{
public:
	unsigned char                                      UnknownData00[0x185B84F7320];                             // 0x0000(0x185B84F7320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UIWeaponSummary");
		return ptr;
	}

};


// Class Engine.UserCloudFileCloudSaveSystemDataBlobStore
// 0x185B853A6E0
class UserCloudFileCloudSaveSystemDataBlobStore
{
public:
	unsigned char                                      UnknownData00[0x185B853A6E0];                             // 0x0000(0x185B853A6E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserCloudFileCloudSaveSystemDataBlobStore");
		return ptr;
	}

};


// Class Engine.WaterVolume
// 0x185B6D04B90
class WaterVolume
{
public:
	unsigned char                                      UnknownData00[0x185B6D04B90];                             // 0x0000(0x185B6D04B90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WaterVolume");
		return ptr;
	}

};


// Class Engine.WindDirectionalSource
// 0x185B84FB5E0
class WindDirectionalSource
{
public:
	unsigned char                                      UnknownData00[0x185B84FB5E0];                             // 0x0000(0x185B84FB5E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
