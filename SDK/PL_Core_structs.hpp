#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Basic.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_InvAspectRatio16x10                                0.625
#define CONST_INDEX_NONE                                         -1
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio16x10                                   1.6
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_UnrRotToDeg                                        0.00549316540360483
#define CONST_DegToUnrRot                                        182.0444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt                                             0x7fffffff

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Core.Object.EDebugBreakType
enum class EDebugBreakType : uint8_t
{
	DEBUGGER_NativeOnly            = 0,
	DEBUGGER_ScriptOnly            = 1,
	DEBUGGER_Both                  = 2,
	DEBUGGER_MAX                   = 3
};


// Enum Core.Object.EAutomatedRunResult
enum class EAutomatedRunResult : uint8_t
{
	ARR_Unknown                    = 0,
	ARR_OOM                        = 1,
	ARR_Passed                     = 2,
	ARR_MAX                        = 3
};


// Enum Core.Object.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3
};


// Enum Core.Object.EInterpMethodType
enum class EInterpMethodType : uint8_t
{
	IMT_UseFixedTangentEvalAndNewAutoTangents = 0,
	IMT_UseFixedTangentEval        = 1,
	IMT_UseBrokenTangentEval       = 2,
	IMT_MAX                        = 3
};


// Enum Core.Object.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6
};


// Enum Core.Object.EAxis
enum class EAxis : uint8_t
{
	AXIS_NONE                      = 0,
	AXIS_X                         = 1,
	AXIS_Y                         = 2,
	AXIS_BLANK                     = 3,
	AXIS_Z                         = 4,
	AXIS_MAX                       = 5
};


// Enum Core.Object.EAsyncLoadPriority
enum class EAsyncLoadPriority : uint8_t
{
	ALP_None                       = 0,
	ALP_Lowest                     = 1,
	ALP_Low                        = 2,
	ALP_Default                    = 3,
	ALP_High                       = 4,
	ALP_Highest                    = 5,
	ALP_Immediate                  = 6,
	ALP_InProgress                 = 7,
	ALP_MAX                        = 8
};


// Enum Core.Object.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PreAsyncWork                = 0,
	TG_DuringAsyncWorkThreaded     = 1,
	TG_DuringAsyncWork             = 2,
	TG_PostAsyncWork               = 3,
	TG_PostUpdateWork              = 4,
	TG_EffectsUpdateWork           = 5,
	TG_MAX                         = 6
};


// Enum Core.Object.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5
};


// Enum Core.Object.AlphaBlendType
enum class EAlphaBlendType : uint8_t
{
	ABT_Linear                     = 0,
	ABT_Cubic                      = 1,
	ABT_Sinusoidal                 = 2,
	ABT_EaseInOutExponent2         = 3,
	ABT_EaseInOutExponent3         = 4,
	ABT_EaseInOutExponent4         = 5,
	ABT_EaseInOutExponent5         = 6,
	ABT_MAX                        = 7
};


// Enum Core.DistributionVector.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5
};


// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Core.Object.Guid
// 0x185BD0E7DA0
struct FGuid
{
	unsigned char                                      UnknownData00[0x185BD0E7DA0];                             // 0x0000(0x185BD0E7DA0) MISSED OFFSET
};

// ScriptStruct Core.Object.InlinePointerArray_Mirror
// 0x185B66378A0
struct FInlinePointerArray_Mirror
{
	unsigned char                                      UnknownData00[0x185B66378A0];                             // 0x0000(0x185B66378A0) MISSED OFFSET
};

// ScriptStruct Core.Object.Rotator
// 0x185BD0E6A20
struct FRotator
{
	unsigned char                                      UnknownData00[0x185BD0E6A20];                             // 0x0000(0x185BD0E6A20) MISSED OFFSET
};

// ScriptStruct Core.Object.Vector
// 0x185BD0E5220
struct FVector
{
	unsigned char                                      UnknownData00[0x185BD0E5220];                             // 0x0000(0x185BD0E5220) MISSED OFFSET
};

// ScriptStruct Core.Object.Pointer
// 0x185B6635620
struct FPointer
{
	unsigned char                                      UnknownData00[0x185B6635620];                             // 0x0000(0x185B6635620) MISSED OFFSET
};

// ScriptStruct Core.Object.QWord
// 0x185B66B7C30
struct FQWord
{
	unsigned char                                      UnknownData00[0x185B66B7C30];                             // 0x0000(0x185B66B7C30) MISSED OFFSET
};

// ScriptStruct Core.Object.Plane
// 0x185B8FB3950
struct FPlane
{
	struct FPointer                                    VfTableObject;                                            // 0x0000(0x0008) (Const, Native, EditConst, NoExport)
	struct FPointer                                    HashNext;                                                 // 0x0008(0x0008) (Const, Native, EditConst)
	struct FQWord                                      ObjectFlags;                                              // 0x0010(0x0008) (Const, Native, EditConst)
	struct FPointer                                    HashOuterNext;                                            // 0x0018(0x0008) (Const, Native, EditConst)
	struct FPointer                                    StateFrame;                                               // 0x0020(0x0008) (Const, Native, EditConst)
	class UObject*                                     Linker;                                                   // 0x0028(0x0008) (Const, Native, EditConst, NoExport)
	struct FPointer                                    LinkerIndex;                                              // 0x0030(0x0008) (Const, Native, EditConst, NoExport)
	int                                                ObjectInternalInteger;                                    // 0x0038(0x0004) (Const, Native, EditConst, NoExport)
	int                                                NetIndex;                                                 // 0x003C(0x0004) (Const, Native, EditConst, NoExport)
	class UObject*                                     Outer;                                                    // 0x0040(0x0008) (Const, Native, EditConst)
	struct FName                                       Name;                                                     // 0x0048(0x0008) (Edit, Const, Native, EditConst)
	class UObject*                                     Class;                                                    // 0x0050(0x0008) (Const, Native, EditConst)
	class UObject*                                     ObjectArchetype;                                          // 0x0058(0x0008) (Edit, Const, Native, EditConst)
	unsigned char                                      UnknownData00[0x185B8FB38F0];                             // 0x0060(0x185B8FB38F0) MISSED OFFSET
};

// ScriptStruct Core.Object.Vector2D
// 0x185BD0E8E20
struct FVector2D
{
	unsigned char                                      UnknownData00[0x185BD0E8E20];                             // 0x0000(0x185BD0E8E20) MISSED OFFSET
};

// ScriptStruct Core.Object.Vector4
// 0x185B6637960
struct FVector4
{
	unsigned char                                      UnknownData00[0x185B6637960];                             // 0x0000(0x185B6637960) MISSED OFFSET
};

// ScriptStruct Core.Object.LinearColor
// 0x185BD0EBD60
struct FLinearColor
{
	unsigned char                                      UnknownData00[0x185BD0EBD60];                             // 0x0000(0x185BD0EBD60) MISSED OFFSET
};

// ScriptStruct Core.Object.Color
// 0x185BD0EE3A0
struct FColor
{
	unsigned char                                      UnknownData00[0x185BD0EE3A0];                             // 0x0000(0x185BD0EE3A0) MISSED OFFSET

	inline FColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FColor(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

};

// ScriptStruct Core.Object.InterpCurveVector2D
// 0x185BD0DF8E0
struct FInterpCurveVector2D
{
	unsigned char                                      UnknownData00[0x185BD0DF8E0];                             // 0x0000(0x185BD0DF8E0) MISSED OFFSET
};

// ScriptStruct Core.Object.InterpCurvePointVector2D
// 0x185BD0DF160
struct FInterpCurvePointVector2D
{
	unsigned char                                      UnknownData00[0x185BD0DF160];                             // 0x0000(0x185BD0DF160) MISSED OFFSET
};

// ScriptStruct Core.Object.InterpCurveFloat
// 0x185BD0DFEE0
struct FInterpCurveFloat
{
	unsigned char                                      UnknownData00[0x185BD0DFEE0];                             // 0x0000(0x185BD0DFEE0) MISSED OFFSET
};

// ScriptStruct Core.Object.Cylinder
// 0x185B6633220
struct FCylinder
{
	unsigned char                                      UnknownData00[0x185B6633220];                             // 0x0000(0x185B6633220) MISSED OFFSET
};

// ScriptStruct Core.Object.InterpCurveVector
// 0x185BD0E0BA0
struct FInterpCurveVector
{
	unsigned char                                      UnknownData00[0x185BD0E0BA0];                             // 0x0000(0x185BD0E0BA0) MISSED OFFSET
};

// ScriptStruct Core.Object.InterpCurvePointVector
// 0x185BD0DF9A0
struct FInterpCurvePointVector
{
	unsigned char                                      UnknownData00[0x185BD0DF9A0];                             // 0x0000(0x185BD0DF9A0) MISSED OFFSET
};

// ScriptStruct Core.Object.InterpCurvePointFloat
// 0x185BD0E13E0
struct FInterpCurvePointFloat
{
	unsigned char                                      UnknownData00[0x185BD0E13E0];                             // 0x0000(0x185BD0E13E0) MISSED OFFSET
};

// ScriptStruct Core.Object.Quat
// 0x185B8FB3C50
struct FQuat
{
	unsigned char                                      UnknownData00[0x185B8FB3C50];                             // 0x0000(0x185B8FB3C50) MISSED OFFSET
};

// ScriptStruct Core.Object.Matrix
// 0x185B8FB3590
struct FMatrix
{
	unsigned char                                      UnknownData00[0x185B8FB3590];                             // 0x0000(0x185B8FB3590) MISSED OFFSET
};

// ScriptStruct Core.Object.TAlphaBlend
// 0x185B6633FA0
struct FTAlphaBlend
{
	unsigned char                                      UnknownData00[0x185B6633FA0];                             // 0x0000(0x185B6633FA0) MISSED OFFSET
};

// ScriptStruct Core.Object.BoxSphereBounds
// 0x185B66339A0
struct FBoxSphereBounds
{
	unsigned char                                      UnknownData00[0x185B66339A0];                             // 0x0000(0x185B66339A0) MISSED OFFSET
};

// ScriptStruct Core.Object.TwoVectors
// 0x185B6634DE0
struct FTwoVectors
{
	unsigned char                                      UnknownData00[0x185B6634DE0];                             // 0x0000(0x185B6634DE0) MISSED OFFSET
};

// ScriptStruct Core.Object.BoneAtom
// 0x185B6632560
struct FBoneAtom
{
	unsigned char                                      UnknownData00[0x185B6632560];                             // 0x0000(0x185B6632560) MISSED OFFSET
};

// ScriptStruct Core.Object.OctreeElementId
// 0x185B6635920
struct FOctreeElementId
{
	unsigned char                                      UnknownData00[0x185B6635920];                             // 0x0000(0x185B6635920) MISSED OFFSET
};

// ScriptStruct Core.Object.RenderCommandFence
// 0x185B6633520
struct FRenderCommandFence
{
	unsigned char                                      UnknownData00[0x185B6633520];                             // 0x0000(0x185B6633520) MISSED OFFSET
};

// ScriptStruct Core.Object.RawDistribution
// 0x185B66332E0
struct FRawDistribution
{
	unsigned char                                      UnknownData00[0x185B66332E0];                             // 0x0000(0x185B66332E0) MISSED OFFSET
};

// ScriptStruct Core.Object.InterpCurveLinearColor
// 0x185B6633160
struct FInterpCurveLinearColor
{
	unsigned char                                      UnknownData00[0x185B6633160];                             // 0x0000(0x185B6633160) MISSED OFFSET
};

// ScriptStruct Core.Object.InterpCurvePointLinearColor
// 0x185B6634F60
struct FInterpCurvePointLinearColor
{
	unsigned char                                      UnknownData00[0x185B6634F60];                             // 0x0000(0x185B6634F60) MISSED OFFSET
};

// ScriptStruct Core.Object.InterpCurveQuat
// 0x185B66353E0
struct FInterpCurveQuat
{
	unsigned char                                      UnknownData00[0x185B66353E0];                             // 0x0000(0x185B66353E0) MISSED OFFSET
};

// ScriptStruct Core.Object.InterpCurvePointQuat
// 0x185B6634AE0
struct FInterpCurvePointQuat
{
	unsigned char                                      UnknownData00[0x185B6634AE0];                             // 0x0000(0x185B6634AE0) MISSED OFFSET
};

// ScriptStruct Core.Object.InterpCurveTwoVectors
// 0x185B6634120
struct FInterpCurveTwoVectors
{
	unsigned char                                      UnknownData00[0x185B6634120];                             // 0x0000(0x185B6634120) MISSED OFFSET
};

// ScriptStruct Core.Object.InterpCurvePointTwoVectors
// 0x185B6635AA0
struct FInterpCurvePointTwoVectors
{
	unsigned char                                      UnknownData00[0x185B6635AA0];                             // 0x0000(0x185B6635AA0) MISSED OFFSET
};

// ScriptStruct Core.Object.Box
// 0x185B6633B20
struct FBox
{
	unsigned char                                      UnknownData00[0x185B6633B20];                             // 0x0000(0x185B6633B20) MISSED OFFSET
};

// ScriptStruct Core.Object.TPOV
// 0x185B6635260
struct FTPOV
{
	unsigned char                                      UnknownData00[0x185B6635260];                             // 0x0000(0x185B6635260) MISSED OFFSET
};

// ScriptStruct Core.Object.SHVectorRGB
// 0x185B6635860
struct FSHVectorRGB
{
	unsigned char                                      UnknownData00[0x185B6635860];                             // 0x0000(0x185B6635860) MISSED OFFSET
};

// ScriptStruct Core.Object.SHVector
// 0x185B6635CE0
struct FSHVector
{
	unsigned char                                      UnknownData00[0x185B6635CE0];                             // 0x0000(0x185B6635CE0) MISSED OFFSET
};

// ScriptStruct Core.Object.IntPoint
// 0x185B6634660
struct FIntPoint
{
	unsigned char                                      UnknownData00[0x185B6634660];                             // 0x0000(0x185B6634660) MISSED OFFSET
};

// ScriptStruct Core.Object.PackedNormal
// 0x185B6636BE0
struct FPackedNormal
{
	unsigned char                                      UnknownData00[0x185B6636BE0];                             // 0x0000(0x185B6636BE0) MISSED OFFSET
};

// ScriptStruct Core.Object.Array_Mirror
// 0x185B6637A20
struct FArray_Mirror
{
	unsigned char                                      UnknownData00[0x185B6637A20];                             // 0x0000(0x185B6637A20) MISSED OFFSET
};

// ScriptStruct Core.Object.IndirectArray_Mirror
// 0x185B66366A0
struct FIndirectArray_Mirror
{
	unsigned char                                      UnknownData00[0x185B66366A0];                             // 0x0000(0x185B66366A0) MISSED OFFSET
};

// ScriptStruct Core.Object.FColorVertexBuffer_Mirror
// 0x185B6637BA0
struct FFColorVertexBuffer_Mirror
{
	unsigned char                                      UnknownData00[0x185B6637BA0];                             // 0x0000(0x185B6637BA0) MISSED OFFSET
};

// ScriptStruct Core.Object.RenderCommandFence_Mirror
// 0x185B6637360
struct FRenderCommandFence_Mirror
{
	unsigned char                                      UnknownData00[0x185B6637360];                             // 0x0000(0x185B6637360) MISSED OFFSET
};

// ScriptStruct Core.Object.UntypedBulkData_Mirror
// 0x185B6636E20
struct FUntypedBulkData_Mirror
{
	unsigned char                                      UnknownData00[0x185B6636E20];                             // 0x0000(0x185B6636E20) MISSED OFFSET
};

// ScriptStruct Core.Object.MultiMap_Mirror
// 0x185B66363A0
struct FMultiMap_Mirror
{
	unsigned char                                      UnknownData00[0x185B66363A0];                             // 0x0000(0x185B66363A0) MISSED OFFSET
};

// ScriptStruct Core.Object.Map_Mirror
// 0x185B66B6EB0
struct FMap_Mirror
{
	unsigned char                                      UnknownData00[0x185B66B6EB0];                             // 0x0000(0x185B66B6EB0) MISSED OFFSET
};

// ScriptStruct Core.Object.Set_Mirror
// 0x185B6636B20
struct FSet_Mirror
{
	unsigned char                                      UnknownData00[0x185B6636B20];                             // 0x0000(0x185B6636B20) MISSED OFFSET
};

// ScriptStruct Core.Object.SparseArray_Mirror
// 0x185B66B7330
struct FSparseArray_Mirror
{
	unsigned char                                      UnknownData00[0x185B66B7330];                             // 0x0000(0x185B66B7330) MISSED OFFSET
};

// ScriptStruct Core.Object.BitArray_Mirror
// 0x185B66B7570
struct FBitArray_Mirror
{
	unsigned char                                      UnknownData00[0x185B66B7570];                             // 0x0000(0x185B66B7570) MISSED OFFSET
};

// ScriptStruct Core.Object.ThreadSafeCounter
// 0x185B66B70F0
struct FThreadSafeCounter
{
	unsigned char                                      UnknownData00[0x185B66B70F0];                             // 0x0000(0x185B66B70F0) MISSED OFFSET
};

// ScriptStruct Core.Object.Double
// 0x185B66B5770
struct FDouble
{
	unsigned char                                      UnknownData00[0x185B66B5770];                             // 0x0000(0x185B66B5770) MISSED OFFSET
};

// ScriptStruct Core.Object.IpAddr
// 0x185B66B7270
struct FIpAddr
{
	unsigned char                                      UnknownData00[0x185B66B7270];                             // 0x0000(0x185B66B7270) MISSED OFFSET
};

// ScriptStruct Core.Object.dword
// 0x185B66B58F0
struct Fdword
{
	unsigned char                                      UnknownData00[0x185B66B58F0];                             // 0x0000(0x185B66B58F0) MISSED OFFSET
};

// ScriptStruct Core.Object.HatPointer
// 0x185B66B62B0
struct FHatPointer
{
	unsigned char                                      UnknownData00[0x185B66B62B0];                             // 0x0000(0x185B66B62B0) MISSED OFFSET
};

// ScriptStruct Core.DistributionFloat.RawDistributionFloat
// 0x185B66B77B0
struct FRawDistributionFloat
{
	struct FPointer                                    VfTableObject;                                            // 0x0000(0x0008) (Const, Native, EditConst, NoExport)
	struct FPointer                                    HashNext;                                                 // 0x0008(0x0008) (Const, Native, EditConst)
	struct FQWord                                      ObjectFlags;                                              // 0x0010(0x0008) (Const, Native, EditConst)
	struct FPointer                                    HashOuterNext;                                            // 0x0018(0x0008) (Const, Native, EditConst)
	struct FPointer                                    StateFrame;                                               // 0x0020(0x0008) (Const, Native, EditConst)
	class UObject*                                     Linker;                                                   // 0x0028(0x0008) (Const, Native, EditConst, NoExport)
	struct FPointer                                    LinkerIndex;                                              // 0x0030(0x0008) (Const, Native, EditConst, NoExport)
	int                                                ObjectInternalInteger;                                    // 0x0038(0x0004) (Const, Native, EditConst, NoExport)
	int                                                NetIndex;                                                 // 0x003C(0x0004) (Const, Native, EditConst, NoExport)
	class UObject*                                     Outer;                                                    // 0x0040(0x0008) (Const, Native, EditConst)
	struct FName                                       Name;                                                     // 0x0048(0x0008) (Edit, Const, Native, EditConst)
	class UObject*                                     Class;                                                    // 0x0050(0x0008) (Const, Native, EditConst)
	class UObject*                                     ObjectArchetype;                                          // 0x0058(0x0008) (Edit, Const, Native, EditConst)
	unsigned char                                      UnknownData00[0x185B66B7750];                             // 0x0060(0x185B66B7750) MISSED OFFSET
};

// ScriptStruct Core.DistributionFloat.MatineeRawDistributionFloat
// 0x185B66B7DB0
struct FMatineeRawDistributionFloat
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
	struct FPointer                                    VfTable_FCurveEdInterface;                                // 0x0070(0x0008) (Const, Native, NoExport)
	unsigned long                                      bCanBeBaked : 1;                                          // 0x0078(0x0004) (Edit)
	unsigned long                                      bIsDirty : 1;                                             // 0x0078(0x0004)
	unsigned char                                      UnknownData01[0x185B66B7D34];                             // 0x007C(0x185B66B7D34) MISSED OFFSET
};

// ScriptStruct Core.DistributionVector.RawDistributionVector
// 0x185B66B68B0
struct FRawDistributionVector
{
	struct FPointer                                    VfTableObject;                                            // 0x0000(0x0008) (Const, Native, EditConst, NoExport)
	struct FPointer                                    HashNext;                                                 // 0x0008(0x0008) (Const, Native, EditConst)
	struct FQWord                                      ObjectFlags;                                              // 0x0010(0x0008) (Const, Native, EditConst)
	struct FPointer                                    HashOuterNext;                                            // 0x0018(0x0008) (Const, Native, EditConst)
	struct FPointer                                    StateFrame;                                               // 0x0020(0x0008) (Const, Native, EditConst)
	class UObject*                                     Linker;                                                   // 0x0028(0x0008) (Const, Native, EditConst, NoExport)
	struct FPointer                                    LinkerIndex;                                              // 0x0030(0x0008) (Const, Native, EditConst, NoExport)
	int                                                ObjectInternalInteger;                                    // 0x0038(0x0004) (Const, Native, EditConst, NoExport)
	int                                                NetIndex;                                                 // 0x003C(0x0004) (Const, Native, EditConst, NoExport)
	class UObject*                                     Outer;                                                    // 0x0040(0x0008) (Const, Native, EditConst)
	struct FName                                       Name;                                                     // 0x0048(0x0008) (Edit, Const, Native, EditConst)
	class UObject*                                     Class;                                                    // 0x0050(0x0008) (Const, Native, EditConst)
	class UObject*                                     ObjectArchetype;                                          // 0x0058(0x0008) (Edit, Const, Native, EditConst)
	unsigned char                                      UnknownData00[0x185B66B6850];                             // 0x0060(0x185B66B6850) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
