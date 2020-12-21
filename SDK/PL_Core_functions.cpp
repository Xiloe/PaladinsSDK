// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Core_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

std::string UObject::GetFullName() const
{
	std::string name;

	if (Class != nullptr)
	{
		std::string temp;
		for (auto p = Outer; p; p = p->Outer)
		{
			temp = p->GetName() + "." + temp;
		}

		name = Class->GetName();
		name += " ";
		name += temp;
		name += GetName();
	}

	return name;
}

bool UObject::IsA(UClass* cmp) const
{
	for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
	{
		if (super == cmp)
		{
			return true;
		}
	}

	return false;
}

// Function Core.Object.ProfNodeEvent
// (Final, Defined, Latent, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 EventName                      (Parm, NeedCtorLink)

void UObject::STATIC_ProfNodeEvent(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeEvent");

	UObject_ProfNodeEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeSetDepthThreshold
// (Iterator, Latent, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            Depth                          (Parm)

void UObject::STATIC_ProfNodeSetDepthThreshold(int Depth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeSetDepthThreshold");

	UObject_ProfNodeSetDepthThreshold_Params params;
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeSetTimeThresholdSeconds
// (Final, Iterator, Latent, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          Threshold                      (Parm)

void UObject::STATIC_ProfNodeSetTimeThresholdSeconds(float Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeSetTimeThresholdSeconds");

	UObject_ProfNodeSetTimeThresholdSeconds_Params params;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeStop
// (Final, Defined, Iterator, Latent, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            AssumedTimerIndex              (OptionalParm, Parm)

void UObject::STATIC_ProfNodeStop(int AssumedTimerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeStop");

	UObject_ProfNodeStop_Params params;
	params.AssumedTimerIndex = AssumedTimerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeStart
// (Defined, Iterator, Latent, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 TimerName                      (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_ProfNodeStart(const struct FString& TimerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeStart");

	UObject_ProfNodeStart_Params params;
	params.TimerName = TimerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetStringFromGuid
// (Final, Iterator, Latent, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FGuid                   InGuid                         (Const, Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_GetStringFromGuid(struct FGuid* InGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetStringFromGuid");

	UObject_GetStringFromGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InGuid != nullptr)
		*InGuid = params.InGuid;

	return params.ReturnValue;
}


// Function Core.Object.GetGuidFromString
// (PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 InGuidString                   (Const, Parm, OutParm, NeedCtorLink)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGuid UObject::STATIC_GetGuidFromString(struct FString* InGuidString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetGuidFromString");

	UObject_GetGuidFromString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InGuidString != nullptr)
		*InGuidString = params.InGuidString;

	return params.ReturnValue;
}


// Function Core.Object.CreateGuid
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FGuid                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGuid UObject::STATIC_CreateGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.CreateGuid");

	UObject_CreateGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsGuidValid
// (Final, Latent, Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FGuid                   InGuid                         (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_IsGuidValid(struct FGuid* InGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsGuidValid");

	UObject_IsGuidValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InGuid != nullptr)
		*InGuid = params.InGuid;

	return params.ReturnValue;
}


// Function Core.Object.InvalidateGuid
// (Final, Defined, Latent, PreOperator, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FGuid                   InGuid                         (Parm, OutParm)

void UObject::STATIC_InvalidateGuid(struct FGuid* InGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InvalidateGuid");

	UObject_InvalidateGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InGuid != nullptr)
		*InGuid = params.InGuid;
}


// Function Core.Object.GetLanguage
// (Defined, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_GetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetLanguage");

	UObject_GetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRandomOptionSumFrequency
// (Defined, Iterator, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// TArray<float>                  FreqList                       (Const, Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_GetRandomOptionSumFrequency(TArray<float>* FreqList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRandomOptionSumFrequency");

	UObject_GetRandomOptionSumFrequency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FreqList != nullptr)
		*FreqList = params.FreqList;

	return params.ReturnValue;
}


// Function Core.Object.GetBuildChangelistNumber
// (Defined, Latent, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_GetBuildChangelistNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetBuildChangelistNumber");

	UObject_GetBuildChangelistNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetEngineVersion
// (Iterator, Latent, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_GetEngineVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetEngineVersion");

	UObject_GetEngineVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetSystemTime
// (Defined, Iterator, Latent, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            Year                           (Parm, OutParm)
// int                            Month                          (Parm, OutParm)
// int                            DayOfWeek                      (Parm, OutParm)
// int                            Day                            (Parm, OutParm)
// int                            Hour                           (Parm, OutParm)
// int                            Min                            (Parm, OutParm)
// int                            Sec                            (Parm, OutParm)
// int                            MSec                           (Parm, OutParm)

void UObject::STATIC_GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetSystemTime");

	UObject_GetSystemTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Year != nullptr)
		*Year = params.Year;
	if (Month != nullptr)
		*Month = params.Month;
	if (DayOfWeek != nullptr)
		*DayOfWeek = params.DayOfWeek;
	if (Day != nullptr)
		*Day = params.Day;
	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Min != nullptr)
		*Min = params.Min;
	if (Sec != nullptr)
		*Sec = params.Sec;
	if (MSec != nullptr)
		*MSec = params.MSec;
}


// Function Core.Object.TimeStamp
// (Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_TimeStamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TimeStamp");

	UObject_TimeStamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TransformVectorByRotation
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                SourceRotation                 (Parm)
// struct FVector                 SourceVector                   (Parm)
// bool                           bInverse                       (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, bool bInverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformVectorByRotation");

	UObject_TransformVectorByRotation_Params params;
	params.SourceRotation = SourceRotation;
	params.SourceVector = SourceVector;
	params.bInverse = bInverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetPackageName
// (Iterator, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UObject::STATIC_GetPackageName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetPackageName");

	UObject_GetPackageName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsPendingKill
// (Final, Defined, Latent, Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_IsPendingKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsPendingKill");

	UObject_IsPendingKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ByteToFloat
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  inputByte                      (Parm)
// bool                           bSigned                        (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_ByteToFloat(unsigned char inputByte, bool bSigned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ByteToFloat");

	UObject_ByteToFloat_Params params;
	params.inputByte = inputByte;
	params.bSigned = bSigned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FloatToByte
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          inputFloat                     (Parm)
// bool                           bSigned                        (OptionalParm, Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_FloatToByte(float inputFloat, bool bSigned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FloatToByte");

	UObject_FloatToByte_Params params;
	params.inputFloat = inputFloat;
	params.bSigned = bSigned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.UnwindHeading
// (Iterator, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_UnwindHeading(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.UnwindHeading");

	UObject_UnwindHeading_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FindDeltaAngle
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A1                             (Parm)
// float                          A2                             (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FindDeltaAngle(float A1, float A2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FindDeltaAngle");

	UObject_FindDeltaAngle_Params params;
	params.A1 = A1;
	params.A2 = A2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetHeadingAngle
// (Final, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 Dir                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_GetHeadingAngle(const struct FVector& Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetHeadingAngle");

	UObject_GetHeadingAngle_Params params;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetAngularDegreesFromRadians
// (Defined, Iterator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               OutFOV                         (Parm, OutParm)

void UObject::STATIC_GetAngularDegreesFromRadians(struct FVector2D* OutFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularDegreesFromRadians");

	UObject_GetAngularDegreesFromRadians_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFOV != nullptr)
		*OutFOV = params.OutFOV;
}


// Function Core.Object.GetAngularFromDotDist
// (Latent, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               OutAngDist                     (Parm, OutParm)
// struct FVector2D               DotDist                        (Parm)

void UObject::STATIC_GetAngularFromDotDist(const struct FVector2D& DotDist, struct FVector2D* OutAngDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularFromDotDist");

	UObject_GetAngularFromDotDist_Params params;
	params.DotDist = DotDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngDist != nullptr)
		*OutAngDist = params.OutAngDist;
}


// Function Core.Object.GetAngularDistance
// (Final, Defined, Iterator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               OutAngularDist                 (Parm, OutParm)
// struct FVector                 Direction                      (Parm)
// struct FVector                 AxisX                          (Parm)
// struct FVector                 AxisY                          (Parm)
// struct FVector                 AxisZ                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_GetAngularDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutAngularDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularDistance");

	UObject_GetAngularDistance_Params params;
	params.Direction = Direction;
	params.AxisX = AxisX;
	params.AxisY = AxisY;
	params.AxisZ = AxisZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngularDist != nullptr)
		*OutAngularDist = params.OutAngularDist;

	return params.ReturnValue;
}


// Function Core.Object.GetDotDistance
// (Final, Defined, Latent, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               OutDotDist                     (Parm, OutParm)
// struct FVector                 Direction                      (Parm)
// struct FVector                 AxisX                          (Parm)
// struct FVector                 AxisY                          (Parm)
// struct FVector                 AxisZ                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_GetDotDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutDotDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetDotDistance");

	UObject_GetDotDistance_Params params;
	params.Direction = Direction;
	params.AxisX = AxisX;
	params.AxisY = AxisY;
	params.AxisZ = AxisZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDotDist != nullptr)
		*OutDotDist = params.OutDotDist;

	return params.ReturnValue;
}


// Function Core.Object.PointProjectToPlane
// (Final, Iterator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 C                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointProjectToPlane");

	UObject_PointProjectToPlane_Params params;
	params.Point = Point;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.PointDistToPlane
// (Defined, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FRotator                Orientation                    (Parm)
// struct FVector                 Origin                         (Parm)
// struct FVector                 out_ClosestPoint               (OptionalParm, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_PointDistToPlane(const struct FVector& Point, const struct FRotator& Orientation, const struct FVector& Origin, struct FVector* out_ClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToPlane");

	UObject_PointDistToPlane_Params params;
	params.Point = Point;
	params.Orientation = Orientation;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ClosestPoint != nullptr)
		*out_ClosestPoint = params.out_ClosestPoint;

	return params.ReturnValue;
}


// Function Core.Object.PointDistToSegment
// (Final, Defined, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 StartPoint                     (Parm)
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 OutClosestPoint                (OptionalParm, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector* OutClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToSegment");

	UObject_PointDistToSegment_Params params;
	params.Point = Point;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClosestPoint != nullptr)
		*OutClosestPoint = params.OutClosestPoint;

	return params.ReturnValue;
}


// Function Core.Object.PointDistToLine
// (Final, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 Line                           (Parm)
// struct FVector                 Origin                         (Parm)
// struct FVector                 OutClosestPoint                (OptionalParm, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector* OutClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToLine");

	UObject_PointDistToLine_Params params;
	params.Point = Point;
	params.Line = Line;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClosestPoint != nullptr)
		*OutClosestPoint = params.OutClosestPoint;

	return params.ReturnValue;
}


// Function Core.Object.GetPerObjectConfigSections
// (Final, Iterator, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// class UClass*                  SearchClass                    (Parm)
// TArray<struct FString>         out_SectionNames               (Parm, OutParm, NeedCtorLink)
// class UObject*                 ObjectOuter                    (OptionalParm, Parm)
// int                            MaxResults                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray<struct FString>* out_SectionNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetPerObjectConfigSections");

	UObject_GetPerObjectConfigSections_Params params;
	params.SearchClass = SearchClass;
	params.ObjectOuter = ObjectOuter;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_SectionNames != nullptr)
		*out_SectionNames = params.out_SectionNames;

	return params.ReturnValue;
}


// Function Core.Object.ImportJSON
// (Defined, Latent, PreOperator, Singular, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 PropertyName                   (Parm, NeedCtorLink)
// struct FString                 JSON                           (Const, Parm, OutParm, NeedCtorLink)

void UObject::STATIC_ImportJSON(const struct FString& PropertyName, struct FString* JSON)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ImportJSON");

	UObject_ImportJSON_Params params;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JSON != nullptr)
		*JSON = params.JSON;
}


// Function Core.Object.StaticSaveConfig
// (Final, Latent, Net, Simulated, Exec, Operator, Static, HasOptionalParms, Const)

void UObject::STATIC_StaticSaveConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.StaticSaveConfig");

	UObject_StaticSaveConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SaveConfig
// (Defined, Latent, Net, Native, Operator, HasOptionalParms)

void UObject::SaveConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SaveConfig");

	UObject_SaveConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FindObject
// (PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)
// class UClass*                  ObjectClass                    (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UObject::STATIC_FindObject(const struct FString& ObjectName, class UClass* ObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FindObject");

	UObject_FindObject_Params params;
	params.ObjectName = ObjectName;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DynamicLoadObject
// (Iterator, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)
// class UClass*                  ObjectClass                    (Parm)
// bool                           MayFail                        (OptionalParm, Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UObject::STATIC_DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DynamicLoadObject");

	UObject_DynamicLoadObject_Params params;
	params.ObjectName = ObjectName;
	params.ObjectClass = ObjectClass;
	params.MayFail = MayFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetEnum
// (Final, Iterator, Latent, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// class UObject*                 E                              (Parm)
// int                            I                              (Parm, CoerceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UObject::STATIC_GetEnum(class UObject* E, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetEnum");

	UObject_GetEnum_Params params;
	params.E = E;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Disable
// (Iterator, Singular, Exec, Event, HasOptionalParms)
// Parameters:
// struct FName                   ProbeFunc                      (Parm)

void UObject::Disable(const struct FName& ProbeFunc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Disable");

	UObject_Disable_Params params;
	params.ProbeFunc = ProbeFunc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Enable
// (Final, Defined, Singular, Exec, Event, HasOptionalParms)
// Parameters:
// struct FName                   ProbeFunc                      (Parm)

void UObject::Enable(const struct FName& ProbeFunc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Enable");

	UObject_Enable_Params params;
	params.ProbeFunc = ProbeFunc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ContinuedState
// (Iterator, Latent, Net, Simulated, Exec)

void UObject::ContinuedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ContinuedState");

	UObject_ContinuedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PausedState
// (Final, Defined, Latent, Net, Simulated, Exec)

void UObject::PausedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PausedState");

	UObject_PausedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PoppedState
// (Defined, Iterator, Latent, NetReliable, Simulated)

void UObject::PoppedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PoppedState");

	UObject_PoppedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PushedState
// (Final, Defined, Iterator, Latent, NetReliable, Simulated)

void UObject::PushedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PushedState");

	UObject_PushedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EndState
// (Defined, Iterator, PreOperator, Singular, Simulated)
// Parameters:
// struct FName                   NextStateName                  (Parm)

void UObject::EndState(const struct FName& NextStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EndState");

	UObject_EndState_Params params;
	params.NextStateName = NextStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.BeginState
// (Final, Iterator, PreOperator, Singular, Simulated)
// Parameters:
// struct FName                   PreviousStateName              (Parm)

void UObject::BeginState(const struct FName& PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.BeginState");

	UObject_BeginState_Params params;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DumpStateStack
// (Defined, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)

void UObject::STATIC_DumpStateStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DumpStateStack");

	UObject_DumpStateStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PopState
// (Final, Defined, Iterator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           bPopAll                        (OptionalParm, Parm)

void UObject::STATIC_PopState(bool bPopAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PopState");

	UObject_PopState_Params params;
	params.bPopAll = bPopAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PushState
// (Final, PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FName                   NewState                       (Parm)
// struct FName                   NewLabel                       (OptionalParm, Parm)

void UObject::STATIC_PushState(const struct FName& NewState, const struct FName& NewLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PushState");

	UObject_PushState_Params params;
	params.NewState = NewState;
	params.NewLabel = NewLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetStateName
// (Iterator, Latent, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UObject::STATIC_GetStateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetStateName");

	UObject_GetStateName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsChildState
// (Defined, Iterator, Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FName                   TestState                      (Parm)
// struct FName                   TestParentState                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_IsChildState(const struct FName& TestState, const struct FName& TestParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsChildState");

	UObject_IsChildState_Params params;
	params.TestState = TestState;
	params.TestParentState = TestParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsInState
// (Defined, Latent, Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FName                   TestState                      (Parm)
// bool                           bTestStateStack                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_IsInState(const struct FName& TestState, bool bTestStateStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsInState");

	UObject_IsInState_Params params;
	params.TestState = TestState;
	params.bTestStateStack = bTestStateStack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GotoState
// (Final, Singular, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FName                   NewState                       (OptionalParm, Parm)
// struct FName                   Label                          (OptionalParm, Parm)
// bool                           bForceEvents                   (OptionalParm, Parm)
// bool                           bKeepStack                     (OptionalParm, Parm)

void UObject::STATIC_GotoState(const struct FName& NewState, const struct FName& Label, bool bForceEvents, bool bKeepStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GotoState");

	UObject_GotoState_Params params;
	params.NewState = NewState;
	params.Label = Label;
	params.bForceEvents = bForceEvents;
	params.bKeepStack = bKeepStack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.IsUTracing
// (Final, Iterator, Latent, Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_IsUTracing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsUTracing");

	UObject_IsUTracing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SetUTracing
// (Defined, Latent, PreOperator, Singular, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           bShouldUTrace                  (Parm)

void UObject::STATIC_SetUTracing(bool bShouldUTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SetUTracing");

	UObject_SetUTracing_Params params;
	params.bShouldUTrace = bShouldUTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetFuncName
// (Final, Defined, Iterator, Latent, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UObject::STATIC_GetFuncName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetFuncName");

	UObject_GetFuncName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DebugBreak
// (Final, Defined, Singular, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            UserFlags                      (OptionalParm, Parm)
// TEnumAsByte<EDebugBreakType>   DebuggerType                   (OptionalParm, Parm)

void UObject::STATIC_DebugBreak(int UserFlags, TEnumAsByte<EDebugBreakType> DebuggerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DebugBreak");

	UObject_DebugBreak_Params params;
	params.UserFlags = UserFlags;
	params.DebuggerType = DebuggerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetScriptTrace
// (Final, Defined, Latent, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_GetScriptTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetScriptTrace");

	UObject_GetScriptTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ScriptTrace
// (Iterator, PreOperator, Singular, Simulated, Exec, Operator, Static, HasOptionalParms, Const)

void UObject::STATIC_ScriptTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ScriptTrace");

	UObject_ScriptTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ParseLocalizedPropertyPath
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 PathName                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_ParseLocalizedPropertyPath(const struct FString& PathName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ParseLocalizedPropertyPath");

	UObject_ParseLocalizedPropertyPath_Params params;
	params.PathName = PathName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Localize
// (Iterator, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 SectionName                    (Parm, NeedCtorLink)
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// struct FString                 PackageName                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Localize(const struct FString& SectionName, const struct FString& KeyName, const struct FString& PackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Localize");

	UObject_Localize_Params params;
	params.SectionName = SectionName;
	params.KeyName = KeyName;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.logr
// (Final, Latent, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)

void UObject::STATIC_logr(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.logr");

	UObject_logr_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.WarnInternal
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)

void UObject::STATIC_WarnInternal(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.WarnInternal");

	UObject_WarnInternal_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.LogInternal
// (Latent, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FName                   Tag                            (OptionalParm, Parm)

void UObject::STATIC_LogInternal(const struct FString& S, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LogInternal");

	UObject_LogInternal_Params params;
	params.S = S;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_LinearColorLinearColor
// (PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FLinearColor            A                              (Parm)
// struct FLinearColor            B                              (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_LinearColorLinearColor");

	UObject_Subtract_LinearColorLinearColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_LinearColorFloat
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FLinearColor            LC                             (Parm)
// float                          Mult                           (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_LinearColorFloat");

	UObject_Multiply_LinearColorFloat_Params params;
	params.LC = LC;
	params.Mult = Mult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ColorToLinearColor
// (Final, Defined, PreOperator, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FColor                  OldColor                       (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_ColorToLinearColor(const struct FColor& OldColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ColorToLinearColor");

	UObject_ColorToLinearColor_Params params;
	params.OldColor = OldColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeLinearColor
// (Final, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          R                              (Parm)
// float                          G                              (Parm)
// float                          B                              (Parm)
// float                          A                              (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_MakeLinearColor(float R, float G, float B, float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeLinearColor");

	UObject_MakeLinearColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LerpColor
// (Final, Latent, PreOperator, Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FColor                  A                              (Parm)
// struct FColor                  B                              (Parm)
// float                          Alpha                          (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_LerpColor(const struct FColor& A, const struct FColor& B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LerpColor");

	UObject_LerpColor_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeColor
// (PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  R                              (Parm)
// unsigned char                  G                              (Parm)
// unsigned char                  B                              (Parm)
// unsigned char                  A                              (OptionalParm, Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeColor");

	UObject_MakeColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_ColorColor
// (Final, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FColor                  A                              (Parm)
// struct FColor                  B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_Add_ColorColor(const struct FColor& A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_ColorColor");

	UObject_Add_ColorColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_ColorFloat
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FColor                  A                              (Parm)
// float                          B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_Multiply_ColorFloat(const struct FColor& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_ColorFloat");

	UObject_Multiply_ColorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatColor
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// struct FColor                  B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_Multiply_FloatColor(float A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatColor");

	UObject_Multiply_FloatColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_ColorColor
// (PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FColor                  A                              (Parm)
// struct FColor                  B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_Subtract_ColorColor(const struct FColor& A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_ColorColor");

	UObject_Subtract_ColorColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EvalInterpCurveVector2D
// (Latent, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FInterpCurveVector2D    Vector2DCurve                  (Const, Parm, OutParm, NeedCtorLink)
// float                          InVal                          (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_EvalInterpCurveVector2D(float InVal, struct FInterpCurveVector2D* Vector2DCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveVector2D");

	UObject_EvalInterpCurveVector2D_Params params;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vector2DCurve != nullptr)
		*Vector2DCurve = params.Vector2DCurve;

	return params.ReturnValue;
}


// Function Core.Object.EvalInterpCurveVector
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FInterpCurveVector      VectorCurve                    (Const, Parm, OutParm, NeedCtorLink)
// float                          InVal                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_EvalInterpCurveVector(float InVal, struct FInterpCurveVector* VectorCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveVector");

	UObject_EvalInterpCurveVector_Params params;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VectorCurve != nullptr)
		*VectorCurve = params.VectorCurve;

	return params.ReturnValue;
}


// Function Core.Object.EvalInterpCurveFloat
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FInterpCurveFloat       FloatCurve                     (Const, Parm, OutParm, NeedCtorLink)
// float                          InVal                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_EvalInterpCurveFloat(float InVal, struct FInterpCurveFloat* FloatCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveFloat");

	UObject_EvalInterpCurveFloat_Params params;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FloatCurve != nullptr)
		*FloatCurve = params.FloatCurve;

	return params.ReturnValue;
}


// Function Core.Object.vect2d
// (Final, Defined, Latent, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          InX                            (Parm)
// float                          InY                            (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_vect2d(float InX, float InY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.vect2d");

	UObject_vect2d_Params params;
	params.InX = InX;
	params.InY = InY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetMappedRangeValue
// (Final, Defined, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               InputRange                     (Parm)
// struct FVector2D               OutputRange                    (Parm)
// float                          Value                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetMappedRangeValue");

	UObject_GetMappedRangeValue_Params params;
	params.InputRange = InputRange;
	params.OutputRange = OutputRange;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRangePctByValue
// (Final, Defined, Iterator, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               Range                          (Parm)
// float                          Value                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_GetRangePctByValue(const struct FVector2D& Range, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRangePctByValue");

	UObject_GetRangePctByValue_Params params;
	params.Range = Range;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRangeValueByPct
// (Latent, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               Range                          (Parm)
// float                          Pct                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_GetRangeValueByPct(const struct FVector2D& Range, float Pct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRangeValueByPct");

	UObject_GetRangeValueByPct_Params params;
	params.Range = Range;
	params.Pct = Pct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_Vector2DVector2D
// (Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               A                              (Parm, OutParm)
// struct FVector2D               B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_SubtractEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_Vector2DVector2D");

	UObject_SubtractEqual_Vector2DVector2D_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_Vector2DVector2D
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               A                              (Parm, OutParm)
// struct FVector2D               B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_AddEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_Vector2DVector2D");

	UObject_AddEqual_Vector2DVector2D_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_Vector2DFloat
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_DivideEqual_Vector2DFloat(float B, struct FVector2D* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_Vector2DFloat");

	UObject_DivideEqual_Vector2DFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_Vector2DFloat
// (Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_MultiplyEqual_Vector2DFloat(float B, struct FVector2D* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_Vector2DFloat");

	UObject_MultiplyEqual_Vector2DFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Divide_Vector2DFloat
// (Latent, Singular, Net, Exec, Event, HasOptionalParms)
// Parameters:
// struct FVector2D               A                              (Parm)
// float                          B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::Divide_Vector2DFloat(const struct FVector2D& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_Vector2DFloat");

	UObject_Divide_Vector2DFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_Vector2DFloat
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               A                              (Parm)
// float                          B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_Multiply_Vector2DFloat(const struct FVector2D& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_Vector2DFloat");

	UObject_Multiply_Vector2DFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_Vector2DVector2D
// (PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               A                              (Parm)
// struct FVector2D               B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_Vector2DVector2D");

	UObject_Subtract_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_Vector2DVector2D
// (Final, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector2D               A                              (Parm)
// struct FVector2D               B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_Vector2DVector2D");

	UObject_Add_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_QuatQuat
// (PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_QuatQuat");

	UObject_Subtract_QuatQuat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_QuatQuat
// (Final, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_Add_QuatQuat(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_QuatQuat");

	UObject_Add_QuatQuat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatSlerp
// (Final, Latent, PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// float                          Alpha                          (Parm)
// bool                           bShortestPath                  (OptionalParm, Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, bool bShortestPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatSlerp");

	UObject_QuatSlerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.bShortestPath = bShortestPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatToRotator
// (Defined, Latent, PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_QuatToRotator(const struct FQuat& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatToRotator");

	UObject_QuatToRotator_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatFromRotator
// (Final, Iterator, PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_QuatFromRotator(const struct FRotator& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFromRotator");

	UObject_QuatFromRotator_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatFromAxisAndAngle
// (Iterator, PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 Axis                           (Parm)
// float                          Angle                          (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_QuatFromAxisAndAngle(const struct FVector& Axis, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFromAxisAndAngle");

	UObject_QuatFromAxisAndAngle_Params params;
	params.Axis = Axis;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatFindBetween
// (Final, Defined, PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_QuatFindBetween(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFindBetween");

	UObject_QuatFindBetween_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatRotateVector
// (Latent, PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_QuatRotateVector(const struct FQuat& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatRotateVector");

	UObject_QuatRotateVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatInvert
// (Defined, Iterator, PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_QuatInvert(const struct FQuat& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatInvert");

	UObject_QuatInvert_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatDot
// (Defined, PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_QuatDot(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatDot");

	UObject_QuatDot_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatProduct
// (Final, Defined, Iterator, PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_QuatProduct(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatProduct");

	UObject_QuatProduct_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MatrixGetAxis
// (Final, Latent, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// TEnumAsByte<EAxis>             Axis                           (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_MatrixGetAxis(const struct FMatrix& TM, TEnumAsByte<EAxis> Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetAxis");

	UObject_MatrixGetAxis_Params params;
	params.TM = TM;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MatrixGetOrigin
// (Defined, Latent, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_MatrixGetOrigin(const struct FMatrix& TM)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetOrigin");

	UObject_MatrixGetOrigin_Params params;
	params.TM = TM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MatrixGetRotator
// (Final, Defined, Latent, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_MatrixGetRotator(const struct FMatrix& TM)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetRotator");

	UObject_MatrixGetRotator_Params params;
	params.TM = TM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeRotationMatrix
// (Defined, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                Rotation                       (Parm)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UObject::STATIC_MakeRotationMatrix(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotationMatrix");

	UObject_MakeRotationMatrix_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeRotationTranslationMatrix
// (Final, Defined, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 Translation                    (Parm)
// struct FRotator                Rotation                       (Parm)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UObject::STATIC_MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotationTranslationMatrix");

	UObject_MakeRotationTranslationMatrix_Params params;
	params.Translation = Translation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InverseTransformNormal
// (Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InverseTransformNormal");

	UObject_InverseTransformNormal_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TransformNormal
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_TransformNormal(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformNormal");

	UObject_TransformNormal_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InverseTransformVector
// (Final, Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_InverseTransformVector(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InverseTransformVector");

	UObject_InverseTransformVector_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TransformVector
// (Final, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_TransformVector(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformVector");

	UObject_TransformVector_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_MatrixMatrix
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FMatrix                 A                              (Parm)
// struct FMatrix                 B                              (Parm)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UObject::STATIC_Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_MatrixMatrix");

	UObject_Multiply_MatrixMatrix_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_NameName
// (Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FName                   A                              (Parm)
// struct FName                   B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_NotEqual_NameName(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_NameName");

	UObject_NotEqual_NameName_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_NameName
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FName                   A                              (Parm)
// struct FName                   B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_EqualEqual_NameName(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_NameName");

	UObject_EqualEqual_NameName_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsA
// (Final, Iterator, Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FName                   ClassName                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_IsA(const struct FName& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsA");

	UObject_IsA_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClassIsChildOf
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// class UClass*                  TestClass                      (Parm)
// class UClass*                  ParentClass                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClassIsChildOf");

	UObject_ClassIsChildOf_Params params;
	params.TestClass = TestClass;
	params.ParentClass = ParentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_InterfaceInterface
// (Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// TScriptInterface<class UInterface> A                              (Parm)
// TScriptInterface<class UInterface> B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_NotEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_InterfaceInterface");

	UObject_NotEqual_InterfaceInterface_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_InterfaceInterface
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// TScriptInterface<class UInterface> A                              (Parm)
// TScriptInterface<class UInterface> B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_EqualEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_InterfaceInterface");

	UObject_EqualEqual_InterfaceInterface_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_ObjectObject
// (Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// class UObject*                 A                              (Parm)
// class UObject*                 B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_NotEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_ObjectObject");

	UObject_NotEqual_ObjectObject_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_ObjectObject
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// class UObject*                 A                              (Parm)
// class UObject*                 B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_EqualEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_ObjectObject");

	UObject_EqualEqual_ObjectObject_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.PathName
// (Defined, Iterator, Latent, Net, Exec, Event, HasOptionalParms)
// Parameters:
// class UObject*                 CheckObject                    (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::PathName(class UObject* CheckObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PathName");

	UObject_PathName_Params params;
	params.CheckObject = CheckObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SplitString
// (Defined, Net, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 Source                         (Parm, NeedCtorLink)
// struct FString                 Delimiter                      (OptionalParm, Parm, NeedCtorLink)
// bool                           bCullEmpty                     (OptionalParm, Parm)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UObject::STATIC_SplitString(const struct FString& Source, const struct FString& Delimiter, bool bCullEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SplitString");

	UObject_SplitString_Params params;
	params.Source = Source;
	params.Delimiter = Delimiter;
	params.bCullEmpty = bCullEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ParseStringIntoArray
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 BaseString                     (Parm, NeedCtorLink)
// TArray<struct FString>         Pieces                         (Parm, OutParm, NeedCtorLink)
// struct FString                 delim                          (Parm, NeedCtorLink)
// bool                           bCullEmpty                     (Parm)

void UObject::STATIC_ParseStringIntoArray(const struct FString& BaseString, const struct FString& delim, bool bCullEmpty, TArray<struct FString>* Pieces)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ParseStringIntoArray");

	UObject_ParseStringIntoArray_Params params;
	params.BaseString = BaseString;
	params.delim = delim;
	params.bCullEmpty = bCullEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pieces != nullptr)
		*Pieces = params.Pieces;
}


// Function Core.Object.JoinArray
// (PreOperator, Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// TArray<struct FString>         StringArray                    (Parm, NeedCtorLink)
// struct FString                 out_Result                     (Parm, OutParm, NeedCtorLink)
// struct FString                 delim                          (OptionalParm, Parm, NeedCtorLink)
// bool                           bIgnoreBlanks                  (OptionalParm, Parm)

void UObject::STATIC_JoinArray(TArray<struct FString> StringArray, const struct FString& delim, bool bIgnoreBlanks, struct FString* out_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.JoinArray");

	UObject_JoinArray_Params params;
	params.StringArray = StringArray;
	params.delim = delim;
	params.bIgnoreBlanks = bIgnoreBlanks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Result != nullptr)
		*out_Result = params.out_Result;
}


// Function Core.Object.GetRightMost
// (Final, Latent, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_GetRightMost(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRightMost");

	UObject_GetRightMost_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Split
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// struct FString                 SplitStr                       (Parm, CoerceParm, NeedCtorLink)
// bool                           bOmitSplitStr                  (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Split(const struct FString& Text, const struct FString& SplitStr, bool bOmitSplitStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Split");

	UObject_Split_Params params;
	params.Text = Text;
	params.SplitStr = SplitStr;
	params.bOmitSplitStr = bOmitSplitStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Repl
// (Defined, Iterator, Singular, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 Src                            (Parm, CoerceParm, NeedCtorLink)
// struct FString                 Match                          (Parm, CoerceParm, NeedCtorLink)
// struct FString                 With                           (Parm, CoerceParm, NeedCtorLink)
// bool                           bCaseSensitive                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Repl(const struct FString& Src, const struct FString& Match, const struct FString& With, bool bCaseSensitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Repl");

	UObject_Repl_Params params;
	params.Src = Src;
	params.Match = Match;
	params.With = With;
	params.bCaseSensitive = bCaseSensitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Asc
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Asc(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Asc");

	UObject_Asc_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Chr
// (Defined, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            I                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Chr(int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Chr");

	UObject_Chr_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Locs
// (Defined, Iterator, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Locs(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Locs");

	UObject_Locs_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Caps
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Caps(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Caps");

	UObject_Caps_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Right
// (Defined, PreOperator, NetReliable, Simulated, Event, HasOptionalParms)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// int                            I                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Right(const struct FString& S, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Right");

	UObject_Right_Params params;
	params.S = S;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Left
// (PreOperator, NetReliable, Simulated, Event, HasOptionalParms)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// int                            I                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Left(const struct FString& S, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Left");

	UObject_Left_Params params;
	params.S = S;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Mid
// (Iterator, Singular, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// int                            I                              (Parm)
// int                            J                              (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Mid(const struct FString& S, int I, int J)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Mid");

	UObject_Mid_Params params;
	params.S = S;
	params.I = I;
	params.J = J;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InStr
// (Defined, Iterator, Latent, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 T                              (Parm, CoerceParm, NeedCtorLink)
// bool                           bSearchFromRight               (OptionalParm, Parm)
// bool                           bIgnoreCase                    (OptionalParm, Parm)
// int                            StartPos                       (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_InStr(const struct FString& S, const struct FString& T, bool bSearchFromRight, bool bIgnoreCase, int StartPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InStr");

	UObject_InStr_Params params;
	params.S = S;
	params.T = T;
	params.bSearchFromRight = bSearchFromRight;
	params.bIgnoreCase = bIgnoreCase;
	params.StartPos = StartPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Len
// (Final, Defined, Iterator, PreOperator, Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Len(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Len");

	UObject_Len_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_StrStr
// (Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 A                              (Parm, OutParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_SubtractEqual_StrStr(const struct FString& B, struct FString* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_StrStr");

	UObject_SubtractEqual_StrStr_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AtEqual_StrStr
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 A                              (Parm, OutParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_AtEqual_StrStr(const struct FString& B, struct FString* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AtEqual_StrStr");

	UObject_AtEqual_StrStr_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.ConcatEqual_StrStr
// (Defined, Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 A                              (Parm, OutParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_ConcatEqual_StrStr(const struct FString& B, struct FString* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ConcatEqual_StrStr");

	UObject_ConcatEqual_StrStr_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.ComplementEqual_StrStr
// (Iterator, Latent, Singular, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_ComplementEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ComplementEqual_StrStr");

	UObject_ComplementEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_StrStr
// (Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_NotEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_StrStr");

	UObject_NotEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_StrStr
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_EqualEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_StrStr");

	UObject_EqualEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_StrStr
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_GreaterEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_StrStr");

	UObject_GreaterEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_StrStr
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_LessEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_StrStr");

	UObject_LessEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_StrStr
// (Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_Greater_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_StrStr");

	UObject_Greater_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_StrStr
// (Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_Less_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_StrStr");

	UObject_Less_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.At_StrStr
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 A                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_At_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.At_StrStr");

	UObject_At_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Concat_StrStr
// (Final, Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 A                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Concat_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Concat_StrStr");

	UObject_Concat_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeRotator
// (Iterator, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            Pitch                          (Parm)
// int                            Yaw                            (Parm)
// int                            Roll                           (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_MakeRotator(int Pitch, int Yaw, int Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotator");

	UObject_MakeRotator_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SClampRotAxis
// (Final, Defined, PreOperator, Singular, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          DeltaTime                      (Parm)
// int                            ViewAxis                       (Parm)
// int                            out_DeltaViewAxis              (Parm, OutParm)
// int                            MaxLimit                       (Parm)
// int                            MinLimit                       (Parm)
// float                          InterpolationSpeed             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_SClampRotAxis(float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SClampRotAxis");

	UObject_SClampRotAxis_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewAxis = ViewAxis;
	params.MaxLimit = MaxLimit;
	params.MinLimit = MinLimit;
	params.InterpolationSpeed = InterpolationSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_DeltaViewAxis != nullptr)
		*out_DeltaViewAxis = params.out_DeltaViewAxis;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotAxisFromRange
// (Defined, Iterator, Latent, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            Current                        (Parm)
// int                            Min                            (Parm)
// int                            Max                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_ClampRotAxisFromRange(int Current, int Min, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxisFromRange");

	UObject_ClampRotAxisFromRange_Params params;
	params.Current = Current;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotAxisFromBase
// (Final, Iterator, Latent, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            Current                        (Parm)
// int                            Center                         (Parm)
// int                            MaxDelta                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_ClampRotAxisFromBase(int Current, int Center, int MaxDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxisFromBase");

	UObject_ClampRotAxisFromBase_Params params;
	params.Current = Current;
	params.Center = Center;
	params.MaxDelta = MaxDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotAxis
// (Iterator, Latent, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            ViewAxis                       (Parm)
// int                            out_DeltaViewAxis              (Parm, OutParm)
// int                            MaxLimit                       (Parm)
// int                            MinLimit                       (Parm)

void UObject::STATIC_ClampRotAxis(int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxis");

	UObject_ClampRotAxis_Params params;
	params.ViewAxis = ViewAxis;
	params.MaxLimit = MaxLimit;
	params.MinLimit = MinLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_DeltaViewAxis != nullptr)
		*out_DeltaViewAxis = params.out_DeltaViewAxis;
}


// Function Core.Object.RSize
// (Final, Iterator, Latent, Singular, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                R                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_RSize(const struct FRotator& R)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RSize");

	UObject_RSize_Params params;
	params.R = R;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RDiff
// (Final, Defined, Singular, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_RDiff(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RDiff");

	UObject_RDiff_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NormalizeRotAxis
// (Final, Latent, Net, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            Angle                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_NormalizeRotAxis(int Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NormalizeRotAxis");

	UObject_NormalizeRotAxis_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RInterpTo
// (Final, Latent, Singular, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                Current                        (Parm)
// struct FRotator                Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// bool                           bConstantInterpSpeed           (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, bool bConstantInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RInterpTo");

	UObject_RInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;
	params.bConstantInterpSpeed = bConstantInterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RTransform
// (Defined, Iterator, Latent, Singular, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                R                              (Parm)
// struct FRotator                RBasis                         (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_RTransform(const struct FRotator& R, const struct FRotator& RBasis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RTransform");

	UObject_RTransform_Params params;
	params.R = R;
	params.RBasis = RBasis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RLerp
// (Defined, Latent, Singular, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// float                          Alpha                          (Parm)
// bool                           bShortestPath                  (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RLerp");

	UObject_RLerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.bShortestPath = bShortestPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Normalize
// (Latent, Net, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                Rot                            (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_Normalize(const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normalize");

	UObject_Normalize_Params params;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.OrthoRotation
// (Defined, Iterator, Singular, Net, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 X                              (Parm)
// struct FVector                 Y                              (Parm)
// struct FVector                 Z                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.OrthoRotation");

	UObject_OrthoRotation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RotRand
// (Final, Defined, Latent, Singular, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           bRoll                          (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_RotRand(bool bRoll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RotRand");

	UObject_RotRand_Params params;
	params.bRoll = bRoll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRotatorAxis
// (Defined, Latent, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm)
// int                            Axis                           (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_GetRotatorAxis(const struct FRotator& A, int Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRotatorAxis");

	UObject_GetRotatorAxis_Params params;
	params.A = A;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetUnAxes
// (Final, Defined, Iterator, Latent, PreOperator, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FVector                 X                              (Parm, OutParm)
// struct FVector                 Y                              (Parm, OutParm)
// struct FVector                 Z                              (Parm, OutParm)

void UObject::STATIC_GetUnAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetUnAxes");

	UObject_GetUnAxes_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;
}


// Function Core.Object.GetAxes
// (Final, Latent, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FVector                 X                              (Parm, OutParm)
// struct FVector                 Y                              (Parm, OutParm)
// struct FVector                 Z                              (Parm, OutParm)

void UObject::STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAxes");

	UObject_GetAxes_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;
}


// Function Core.Object.ClockwiseFrom_IntInt
// (Final, PreOperator, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_ClockwiseFrom_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClockwiseFrom_IntInt");

	UObject_ClockwiseFrom_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_RotatorRotator
// (Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm, OutParm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_SubtractEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_RotatorRotator");

	UObject_SubtractEqual_RotatorRotator_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_RotatorRotator
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm, OutParm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_AddEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_RotatorRotator");

	UObject_AddEqual_RotatorRotator_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_RotatorRotator
// (PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_RotatorRotator");

	UObject_Subtract_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_RotatorRotator
// (Final, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_RotatorRotator");

	UObject_Add_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_RotatorFloat
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_DivideEqual_RotatorFloat(float B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_RotatorFloat");

	UObject_DivideEqual_RotatorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_RotatorFloat
// (Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_MultiplyEqual_RotatorFloat(float B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_RotatorFloat");

	UObject_MultiplyEqual_RotatorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Divide_RotatorFloat
// (Latent, Singular, Net, Exec, Event, HasOptionalParms)
// Parameters:
// struct FRotator                A                              (Parm)
// float                          B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::Divide_RotatorFloat(const struct FRotator& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_RotatorFloat");

	UObject_Divide_RotatorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatRotator
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_Multiply_FloatRotator(float A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatRotator");

	UObject_Multiply_FloatRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_RotatorFloat
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm)
// float                          B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_Multiply_RotatorFloat(const struct FRotator& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_RotatorFloat");

	UObject_Multiply_RotatorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_RotatorRotator
// (Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_RotatorRotator");

	UObject_NotEqual_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_RotatorRotator
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_RotatorRotator");

	UObject_EqualEqual_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InCylinder
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 Origin                         (Parm)
// struct FRotator                Dir                            (Parm)
// float                          Width                          (Parm)
// struct FVector                 A                              (Parm)
// bool                           bIgnoreZ                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_InCylinder(const struct FVector& Origin, const struct FRotator& Dir, float Width, const struct FVector& A, bool bIgnoreZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InCylinder");

	UObject_InCylinder_Params params;
	params.Origin = Origin;
	params.Dir = Dir;
	params.Width = Width;
	params.A = A;
	params.bIgnoreZ = bIgnoreZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NoZDot
// (Iterator, PreOperator, Net, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_NoZDot(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NoZDot");

	UObject_NoZDot_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampLength
// (Final, Defined, Latent, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 V                              (Parm)
// float                          MaxLength                      (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_ClampLength(const struct FVector& V, float MaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampLength");

	UObject_ClampLength_Params params;
	params.V = V;
	params.MaxLength = MaxLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VInterpTo
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 Current                        (Parm)
// struct FVector                 Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VInterpTo");

	UObject_VInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsZero
// (Final, Defined, Iterator, Latent, Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_IsZero(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsZero");

	UObject_IsZero_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ProjectOnTo
// (PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 X                              (Parm)
// struct FVector                 Y                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_ProjectOnTo(const struct FVector& X, const struct FVector& Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProjectOnTo");

	UObject_ProjectOnTo_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MirrorVectorByNormal
// (Final, Defined, Iterator, Singular, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 InVect                         (Parm)
// struct FVector                 InNormal                       (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MirrorVectorByNormal");

	UObject_MirrorVectorByNormal_Params params;
	params.InVect = InVect;
	params.InNormal = InNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VRandCone2
// (Defined, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 Dir                            (Parm)
// float                          HorizontalConeHalfAngleRadians (Parm)
// float                          VerticalConeHalfAngleRadians   (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRandCone2");

	UObject_VRandCone2_Params params;
	params.Dir = Dir;
	params.HorizontalConeHalfAngleRadians = HorizontalConeHalfAngleRadians;
	params.VerticalConeHalfAngleRadians = VerticalConeHalfAngleRadians;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VRandCone
// (Final, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 Dir                            (Parm)
// float                          ConeHalfAngleRadians           (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRandCone");

	UObject_VRandCone_Params params;
	params.Dir = Dir;
	params.ConeHalfAngleRadians = ConeHalfAngleRadians;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VRand
// (Latent, PreOperator, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRand");

	UObject_VRand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VLerp
// (Final, Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// float                          Alpha                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VLerp(const struct FVector& A, const struct FVector& B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VLerp");

	UObject_VLerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Normal2D
// (Final, Defined, Iterator, Net, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Normal2D(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normal2D");

	UObject_Normal2D_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Normal
// (Defined, Net, NetReliable, Event, HasOptionalParms)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::Normal(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normal");

	UObject_Normal_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSizeSq2D
// (Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_VSizeSq2D(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSizeSq2D");

	UObject_VSizeSq2D_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSizeSq
// (Final, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_VSizeSq(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSizeSq");

	UObject_VSizeSq_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSize2D
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_VSize2D(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSize2D");

	UObject_VSize2D_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSize
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_VSize(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSize");

	UObject_VSize_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_VectorVector
// (Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_SubtractEqual_VectorVector(const struct FVector& B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_VectorVector");

	UObject_SubtractEqual_VectorVector_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_VectorVector
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_AddEqual_VectorVector(const struct FVector& B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_VectorVector");

	UObject_AddEqual_VectorVector_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_VectorFloat
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_DivideEqual_VectorFloat(float B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_VectorFloat");

	UObject_DivideEqual_VectorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_VectorVector
// (Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_MultiplyEqual_VectorVector(const struct FVector& B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_VectorVector");

	UObject_MultiplyEqual_VectorVector_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_VectorFloat
// (Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_MultiplyEqual_VectorFloat(float B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_VectorFloat");

	UObject_MultiplyEqual_VectorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Cross_VectorVector
// (Final, Iterator, Latent, PreOperator, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Cross_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Cross_VectorVector");

	UObject_Cross_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Dot_VectorVector
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Dot_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Dot_VectorVector");

	UObject_Dot_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_VectorVector
// (Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_NotEqual_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_VectorVector");

	UObject_NotEqual_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_VectorVector
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_VectorVector");

	UObject_EqualEqual_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterGreater_VectorRotator
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreater_VectorRotator");

	UObject_GreaterGreater_VectorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessLess_VectorRotator
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessLess_VectorRotator");

	UObject_LessLess_VectorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_VectorVector
// (PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Subtract_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_VectorVector");

	UObject_Subtract_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_VectorVector
// (Final, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Add_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_VectorVector");

	UObject_Add_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_VectorFloat
// (Latent, Singular, Net, Exec, Event, HasOptionalParms)
// Parameters:
// struct FVector                 A                              (Parm)
// float                          B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::Divide_VectorFloat(const struct FVector& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_VectorFloat");

	UObject_Divide_VectorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_VectorVector
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Multiply_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_VectorVector");

	UObject_Multiply_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatVector
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Multiply_FloatVector(float A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatVector");

	UObject_Multiply_FloatVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_VectorFloat
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// float                          B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Multiply_VectorFloat(const struct FVector& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_VectorFloat");

	UObject_Multiply_VectorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_PreVector
// (PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Subtract_PreVector(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreVector");

	UObject_Subtract_PreVector_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpConstantTo
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          Current                        (Parm)
// float                          Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpConstantTo");

	UObject_FInterpConstantTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpTo
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          Current                        (Parm)
// float                          Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpTo");

	UObject_FInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FPctByRange
// (Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          Value                          (Parm)
// float                          InMin                          (Parm)
// float                          InMax                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FPctByRange(float Value, float InMin, float InMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FPctByRange");

	UObject_FPctByRange_Params params;
	params.Value = Value;
	params.InMin = InMin;
	params.InMax = InMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RandRange
// (Defined, Iterator, Latent, PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          InMin                          (Parm)
// float                          InMax                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_RandRange(float InMin, float InMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RandRange");

	UObject_RandRange_Params params;
	params.InMin = InMin;
	params.InMax = InMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpEaseInOut
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          Alpha                          (Parm)
// float                          Exp                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FInterpEaseInOut(float A, float B, float Alpha, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseInOut");

	UObject_FInterpEaseInOut_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpEaseOut
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          Alpha                          (Parm)
// float                          Exp                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FInterpEaseOut(float A, float B, float Alpha, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseOut");

	UObject_FInterpEaseOut_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpEaseIn
// (Defined, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          Alpha                          (Parm)
// float                          Exp                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FInterpEaseIn(float A, float B, float Alpha, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseIn");

	UObject_FInterpEaseIn_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FCubicInterp
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          P0                             (Parm)
// float                          T0                             (Parm)
// float                          P1                             (Parm)
// float                          T1                             (Parm)
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FCubicInterp(float P0, float T0, float P1, float T1, float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FCubicInterp");

	UObject_FCubicInterp_Params params;
	params.P0 = P0;
	params.T0 = T0;
	params.P1 = P1;
	params.T1 = T1;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FCeil
// (Defined, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_FCeil(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FCeil");

	UObject_FCeil_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FFloor
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_FFloor(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FFloor");

	UObject_FFloor_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Round
// (Iterator, Latent, Singular, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Round(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Round");

	UObject_Round_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Lerp
// (Latent, PreOperator, Singular, Net, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          Alpha                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Lerp(float A, float B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Lerp");

	UObject_Lerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FClamp
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          V                              (Parm)
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FClamp(float V, float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FClamp");

	UObject_FClamp_Params params;
	params.V = V;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FMax
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FMax(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FMax");

	UObject_FMax_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FMin
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FMin(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FMin");

	UObject_FMin_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FRand
// (Final, Defined, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FRand");

	UObject_FRand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Square
// (Iterator, Net, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Square(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Square");

	UObject_Square_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Sqrt
// (Final, Defined, Net, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Sqrt(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Sqrt");

	UObject_Sqrt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Loge
// (Final, Defined, Iterator, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Loge(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Loge");

	UObject_Loge_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Exp
// (Final, Latent, Singular, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Exp(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Exp");

	UObject_Exp_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Atan2
// (Defined, Latent, Net, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Atan2(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Atan2");

	UObject_Atan2_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Atan
// (Final, Latent, Net, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Atan(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Atan");

	UObject_Atan_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Tan
// (Defined, Iterator, Singular, Net, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Tan(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Tan");

	UObject_Tan_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Acos
// (Final, Defined, Latent, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Acos(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Acos");

	UObject_Acos_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Cos
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Cos(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Cos");

	UObject_Cos_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Asin
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Asin(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Asin");

	UObject_Asin_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Sin
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Sin(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Sin");

	UObject_Sin_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Abs
// (Defined, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Abs(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Abs");

	UObject_Abs_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_FloatFloat
// (Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm, OutParm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_SubtractEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_FloatFloat");

	UObject_SubtractEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_FloatFloat
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm, OutParm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_AddEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_FloatFloat");

	UObject_AddEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_FloatFloat
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm, OutParm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_DivideEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_FloatFloat");

	UObject_DivideEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_FloatFloat
// (Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm, OutParm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_MultiplyEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_FloatFloat");

	UObject_MultiplyEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_FloatFloat
// (Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_NotEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_FloatFloat");

	UObject_NotEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ComplementEqual_FloatFloat
// (Iterator, Latent, Singular, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_ComplementEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ComplementEqual_FloatFloat");

	UObject_ComplementEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_FloatFloat
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_EqualEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_FloatFloat");

	UObject_EqualEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_FloatFloat
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_GreaterEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_FloatFloat");

	UObject_GreaterEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_FloatFloat
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_LessEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_FloatFloat");

	UObject_LessEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_FloatFloat
// (Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_Greater_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_FloatFloat");

	UObject_Greater_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_FloatFloat
// (Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_Less_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_FloatFloat");

	UObject_Less_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_FloatFloat
// (PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Subtract_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_FloatFloat");

	UObject_Subtract_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_FloatFloat
// (Final, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Add_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_FloatFloat");

	UObject_Add_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Percent_FloatFloat
// (Final, Defined, Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Percent_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Percent_FloatFloat");

	UObject_Percent_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_FloatFloat
// (Latent, Singular, Net, Exec, Event, HasOptionalParms)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Divide_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_FloatFloat");

	UObject_Divide_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatFloat
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Multiply_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatFloat");

	UObject_Multiply_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyMultiply_FloatFloat
// (Final, Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          Base                           (Parm)
// float                          Exp                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_MultiplyMultiply_FloatFloat(float Base, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyMultiply_FloatFloat");

	UObject_MultiplyMultiply_FloatFloat_Params params;
	params.Base = Base;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_PreFloat
// (PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Subtract_PreFloat(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreFloat");

	UObject_Subtract_PreFloat_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ToHex
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_ToHex(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ToHex");

	UObject_ToHex_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Clamp
// (Defined, Latent, NetReliable, Simulated, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            V                              (Parm)
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Clamp(int V, int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Clamp");

	UObject_Clamp_Params params;
	params.V = V;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Max
// (Iterator, Latent, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Max(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Max");

	UObject_Max_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Min
// (Final, Iterator, Singular, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Min(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Min");

	UObject_Min_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Rand
// (Final, Iterator, Latent, PreOperator, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            Max                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Rand(int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Rand");

	UObject_Rand_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_Int
// (Final, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_SubtractSubtract_Int(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_Int");

	UObject_SubtractSubtract_Int_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_Int
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_AddAdd_Int(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_Int");

	UObject_AddAdd_Int_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_PreInt
// (Final, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_SubtractSubtract_PreInt(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_PreInt");

	UObject_SubtractSubtract_PreInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_PreInt
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_AddAdd_PreInt(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_PreInt");

	UObject_AddAdd_PreInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_IntInt
// (Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_SubtractEqual_IntInt(int B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_IntInt");

	UObject_SubtractEqual_IntInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_IntInt
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_AddEqual_IntInt(int B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_IntInt");

	UObject_AddEqual_IntInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_IntFloat
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm, OutParm)
// float                          B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_DivideEqual_IntFloat(float B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_IntFloat");

	UObject_DivideEqual_IntFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_IntFloat
// (Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm, OutParm)
// float                          B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_MultiplyEqual_IntFloat(float B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_IntFloat");

	UObject_MultiplyEqual_IntFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Or_IntInt
// (Final, Latent, Singular, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Or_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Or_IntInt");

	UObject_Or_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Xor_IntInt
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Xor_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Xor_IntInt");

	UObject_Xor_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.And_IntInt
// (Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_And_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.And_IntInt");

	UObject_And_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_IntInt
// (Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_NotEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_IntInt");

	UObject_NotEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_IntInt
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_EqualEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_IntInt");

	UObject_EqualEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_IntInt
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_GreaterEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_IntInt");

	UObject_GreaterEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_IntInt
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_LessEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_IntInt");

	UObject_LessEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_IntInt
// (Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_Greater_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_IntInt");

	UObject_Greater_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_IntInt
// (Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_Less_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_IntInt");

	UObject_Less_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterGreaterGreater_IntInt
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_GreaterGreaterGreater_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreaterGreater_IntInt");

	UObject_GreaterGreaterGreater_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterGreater_IntInt
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_GreaterGreater_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreater_IntInt");

	UObject_GreaterGreater_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessLess_IntInt
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_LessLess_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessLess_IntInt");

	UObject_LessLess_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_IntInt
// (PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Subtract_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_IntInt");

	UObject_Subtract_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_IntInt
// (Final, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Add_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_IntInt");

	UObject_Add_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Percent_IntInt
// (Final, Defined, Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Percent_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Percent_IntInt");

	UObject_Percent_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_IntInt
// (Latent, Singular, Net, Exec, Event, HasOptionalParms)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Divide_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_IntInt");

	UObject_Divide_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_IntInt
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Multiply_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_IntInt");

	UObject_Multiply_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_PreInt
// (PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Subtract_PreInt(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreInt");

	UObject_Subtract_PreInt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Complement_PreInt
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Complement_PreInt(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Complement_PreInt");

	UObject_Complement_PreInt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_Byte
// (Final, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_SubtractSubtract_Byte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_Byte");

	UObject_SubtractSubtract_Byte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_Byte
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_AddAdd_Byte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_Byte");

	UObject_AddAdd_Byte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_PreByte
// (Final, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_SubtractSubtract_PreByte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_PreByte");

	UObject_SubtractSubtract_PreByte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_PreByte
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_AddAdd_PreByte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_PreByte");

	UObject_AddAdd_PreByte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_ByteByte
// (Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_SubtractEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_ByteByte");

	UObject_SubtractEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_ByteByte
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_AddEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_ByteByte");

	UObject_AddEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_ByteByte
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_DivideEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_ByteByte");

	UObject_DivideEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_ByteFloat
// (Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// float                          B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_MultiplyEqual_ByteFloat(float B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_ByteFloat");

	UObject_MultiplyEqual_ByteFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_ByteByte
// (Iterator, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_MultiplyEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_ByteByte");

	UObject_MultiplyEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.OrOr_BoolBool
// (Defined, Latent, Singular, NetReliable, Simulated, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           A                              (Parm)
// bool                           B                              (Parm, SkipParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_OrOr_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.OrOr_BoolBool");

	UObject_OrOr_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.XorXor_BoolBool
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           A                              (Parm)
// bool                           B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_XorXor_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.XorXor_BoolBool");

	UObject_XorXor_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.AndAnd_BoolBool
// (Final, Latent, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           A                              (Parm)
// bool                           B                              (Parm, SkipParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_AndAnd_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AndAnd_BoolBool");

	UObject_AndAnd_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_BoolBool
// (Iterator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           A                              (Parm)
// bool                           B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_NotEqual_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_BoolBool");

	UObject_NotEqual_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_BoolBool
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           A                              (Parm)
// bool                           B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_EqualEqual_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_BoolBool");

	UObject_EqualEqual_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Not_PreBool
// (Final, Defined, Singular, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::STATIC_Not_PreBool(bool A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Not_PreBool");

	UObject_Not_PreBool_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.DistributionVector.GetVectorValue
// (Singular, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          F                              (OptionalParm, Parm)
// int                            LastExtreme                    (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UDistributionVector::STATIC_GetVectorValue(float F, int LastExtreme)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DistributionVector.GetVectorValue");

	UDistributionVector_GetVectorValue_Params params;
	params.F = F;
	params.LastExtreme = LastExtreme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.DistributionFloat.GetFloatValue
// (Defined, Iterator, Latent, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          F                              (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UDistributionFloat::STATIC_GetFloatValue(float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DistributionFloat.GetFloatValue");

	UDistributionFloat_GetFloatValue_Params params;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Commandlet.Main
// (Net, Simulated, Exec)
// Parameters:
// struct FString                 Params                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UCommandlet::Main(const struct FString& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Commandlet.Main");

	UCommandlet_Main_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.HelpCommandlet.Main
// (Net, Simulated, Exec)
// Parameters:
// struct FString                 Params                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHelpCommandlet::Main(const struct FString& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.HelpCommandlet.Main");

	UHelpCommandlet_Main_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
