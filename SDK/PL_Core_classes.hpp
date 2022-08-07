#pragma once

// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_Core_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Core.Object
// 0x0060
class UObject
{
public:
	static TArray<UObject*>*                           GObjects;                                                 // 0x0000(0x0000)
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
	class UClass*                                      Class;                                                    // 0x0050(0x0008) (Const, Native, EditConst)
	class UObject*                                     ObjectArchetype;                                          // 0x0058(0x0008) (Edit, Const, Native, EditConst)

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


	void ProfNodeEvent(const struct FString& EventName);
	void ProfNodeSetDepthThreshold(int Depth);
	void ProfNodeSetTimeThresholdSeconds(float Threshold);
	void ProfNodeStop(int AssumedTimerIndex);
	int ProfNodeStart(const struct FString& TimerName);
	struct FString GetStringFromGuid(struct FGuid* InGuid);
	struct FGuid GetGuidFromString(struct FString* InGuidString);
	struct FGuid CreateGuid();
	bool IsGuidValid(struct FGuid* InGuid);
	void InvalidateGuid(struct FGuid* InGuid);
	struct FString GetLanguage();
	int GetRandomOptionSumFrequency(TArray<float>* FreqList);
	int GetBuildChangelistNumber();
	int GetEngineVersion();
	void GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec);
	struct FString TimeStamp();
	struct FVector TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, bool bInverse);
	struct FName GetPackageName();
	bool IsPendingKill();
	float ByteToFloat(unsigned char inputByte, bool bSigned);
	unsigned char FloatToByte(float inputFloat, bool bSigned);
	float UnwindHeading(float A);
	float FindDeltaAngle(float A1, float A2);
	float GetHeadingAngle(const struct FVector& Dir);
	void GetAngularDegreesFromRadians(struct FVector2D* OutFOV);
	void GetAngularFromDotDist(const struct FVector2D& DotDist, struct FVector2D* OutAngDist);
	bool GetAngularDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutAngularDist);
	bool GetDotDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutDotDist);
	struct FVector PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C);
	float PointDistToPlane(const struct FVector& Point, const struct FRotator& Orientation, const struct FVector& Origin, struct FVector* out_ClosestPoint);
	float PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector* OutClosestPoint);
	float PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector* OutClosestPoint);
	bool GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray<struct FString>* out_SectionNames);
	void ImportJSON(const struct FString& PropertyName, struct FString* JSON);
	void StaticSaveConfig();
	void SaveConfig();
	class UObject* FindObject(const struct FString& ObjectName, class UClass* ObjectClass);
	class UObject* DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail);
	struct FName GetEnum(class UObject* E, int I);
	void Disable(const struct FName& ProbeFunc);
	void Enable(const struct FName& ProbeFunc);
	void ContinuedState();
	void PausedState();
	void PoppedState();
	void PushedState();
	void EndState(const struct FName& NextStateName);
	void BeginState(const struct FName& PreviousStateName);
	void DumpStateStack();
	void PopState(bool bPopAll);
	void PushState(const struct FName& NewState, const struct FName& NewLabel);
	struct FName GetStateName();
	bool IsChildState(const struct FName& TestState, const struct FName& TestParentState);
	bool IsInState(const struct FName& TestState, bool bTestStateStack);
	void GotoState(const struct FName& NewState, const struct FName& Label, bool bForceEvents, bool bKeepStack);
	bool IsUTracing();
	void SetUTracing(bool bShouldUTrace);
	struct FName GetFuncName();
	void DebugBreak(int UserFlags, TEnumAsByte<EDebugBreakType> DebuggerType);
	struct FString GetScriptTrace();
	void ScriptTrace();
	struct FString ParseLocalizedPropertyPath(const struct FString& PathName);
	struct FString Localize(const struct FString& SectionName, const struct FString& KeyName, const struct FString& PackageName);
	void logr(const struct FString& S);
	void WarnInternal(const struct FString& S);
	void LogInternal(const struct FString& S, const struct FName& Tag);
	struct FLinearColor Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	struct FLinearColor Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult);
	struct FLinearColor ColorToLinearColor(const struct FColor& OldColor);
	struct FLinearColor MakeLinearColor(float R, float G, float B, float A);
	struct FColor LerpColor(const struct FColor& A, const struct FColor& B, float Alpha);
	struct FColor MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A);
	struct FColor Add_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FColor Multiply_ColorFloat(const struct FColor& A, float B);
	struct FColor Multiply_FloatColor(float A, const struct FColor& B);
	struct FColor Subtract_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FVector2D EvalInterpCurveVector2D(float InVal, struct FInterpCurveVector2D* Vector2DCurve);
	struct FVector EvalInterpCurveVector(float InVal, struct FInterpCurveVector* VectorCurve);
	float EvalInterpCurveFloat(float InVal, struct FInterpCurveFloat* FloatCurve);
	struct FVector2D vect2d(float InX, float InY);
	float GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value);
	float GetRangePctByValue(const struct FVector2D& Range, float Value);
	float GetRangeValueByPct(const struct FVector2D& Range, float Pct);
	struct FVector2D SubtractEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A);
	struct FVector2D AddEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A);
	struct FVector2D DivideEqual_Vector2DFloat(float B, struct FVector2D* A);
	struct FVector2D MultiplyEqual_Vector2DFloat(float B, struct FVector2D* A);
	struct FVector2D Divide_Vector2DFloat(const struct FVector2D& A, float B);
	struct FVector2D Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	struct FVector2D Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FQuat Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	struct FQuat Add_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	struct FQuat QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, bool bShortestPath);
	struct FRotator QuatToRotator(const struct FQuat& A);
	struct FQuat QuatFromRotator(const struct FRotator& A);
	struct FQuat QuatFromAxisAndAngle(const struct FVector& Axis, float Angle);
	struct FQuat QuatFindBetween(const struct FVector& A, const struct FVector& B);
	struct FVector QuatRotateVector(const struct FQuat& A, const struct FVector& B);
	struct FQuat QuatInvert(const struct FQuat& A);
	float QuatDot(const struct FQuat& A, const struct FQuat& B);
	struct FQuat QuatProduct(const struct FQuat& A, const struct FQuat& B);
	struct FVector MatrixGetAxis(const struct FMatrix& TM, TEnumAsByte<EAxis> Axis);
	struct FVector MatrixGetOrigin(const struct FMatrix& TM);
	struct FRotator MatrixGetRotator(const struct FMatrix& TM);
	struct FMatrix MakeRotationMatrix(const struct FRotator& Rotation);
	struct FMatrix MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation);
	struct FVector InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A);
	struct FVector TransformNormal(const struct FMatrix& TM, const struct FVector& A);
	struct FVector InverseTransformVector(const struct FMatrix& TM, const struct FVector& A);
	struct FVector TransformVector(const struct FMatrix& TM, const struct FVector& A);
	struct FMatrix Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);
	bool NotEqual_NameName(const struct FName& A, const struct FName& B);
	bool EqualEqual_NameName(const struct FName& A, const struct FName& B);
	bool IsA(const struct FName& ClassName);
	bool ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	bool NotEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B);
	bool EqualEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B);
	bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
	bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	struct FString PathName(class UObject* CheckObject);
	TArray<struct FString> SplitString(const struct FString& Source, const struct FString& Delimiter, bool bCullEmpty);
	void ParseStringIntoArray(const struct FString& BaseString, const struct FString& delim, bool bCullEmpty, TArray<struct FString>* Pieces);
	void JoinArray(TArray<struct FString> StringArray, const struct FString& delim, bool bIgnoreBlanks, struct FString* out_Result);
	struct FString GetRightMost(const struct FString& Text);
	struct FString Split(const struct FString& Text, const struct FString& SplitStr, bool bOmitSplitStr);
	struct FString Repl(const struct FString& Src, const struct FString& Match, const struct FString& With, bool bCaseSensitive);
	int Asc(const struct FString& S);
	struct FString Chr(int I);
	struct FString Locs(const struct FString& S);
	struct FString Caps(const struct FString& S);
	struct FString Right(const struct FString& S, int I);
	struct FString Left(const struct FString& S, int I);
	struct FString Mid(const struct FString& S, int I, int J);
	int InStr(const struct FString& S, const struct FString& T, bool bSearchFromRight, bool bIgnoreCase, int StartPos);
	int Len(const struct FString& S);
	struct FString SubtractEqual_StrStr(const struct FString& B, struct FString* A);
	struct FString AtEqual_StrStr(const struct FString& B, struct FString* A);
	struct FString ConcatEqual_StrStr(const struct FString& B, struct FString* A);
	bool ComplementEqual_StrStr(const struct FString& A, const struct FString& B);
	bool NotEqual_StrStr(const struct FString& A, const struct FString& B);
	bool EqualEqual_StrStr(const struct FString& A, const struct FString& B);
	bool GreaterEqual_StrStr(const struct FString& A, const struct FString& B);
	bool LessEqual_StrStr(const struct FString& A, const struct FString& B);
	bool Greater_StrStr(const struct FString& A, const struct FString& B);
	bool Less_StrStr(const struct FString& A, const struct FString& B);
	struct FString At_StrStr(const struct FString& A, const struct FString& B);
	struct FString Concat_StrStr(const struct FString& A, const struct FString& B);
	struct FRotator MakeRotator(int Pitch, int Yaw, int Roll);
	bool SClampRotAxis(float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis);
	int ClampRotAxisFromRange(int Current, int Min, int Max);
	int ClampRotAxisFromBase(int Current, int Center, int MaxDelta);
	void ClampRotAxis(int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis);
	float RSize(const struct FRotator& R);
	float RDiff(const struct FRotator& A, const struct FRotator& B);
	int NormalizeRotAxis(int Angle);
	struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, bool bConstantInterpSpeed);
	struct FRotator RTransform(const struct FRotator& R, const struct FRotator& RBasis);
	struct FRotator RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath);
	struct FRotator Normalize(const struct FRotator& Rot);
	struct FRotator OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z);
	struct FRotator RotRand(bool bRoll);
	struct FVector GetRotatorAxis(const struct FRotator& A, int Axis);
	void GetUnAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	void GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	bool ClockwiseFrom_IntInt(int A, int B);
	struct FRotator SubtractEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A);
	struct FRotator AddEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A);
	struct FRotator Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FRotator Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FRotator DivideEqual_RotatorFloat(float B, struct FRotator* A);
	struct FRotator MultiplyEqual_RotatorFloat(float B, struct FRotator* A);
	struct FRotator Divide_RotatorFloat(const struct FRotator& A, float B);
	struct FRotator Multiply_FloatRotator(float A, const struct FRotator& B);
	struct FRotator Multiply_RotatorFloat(const struct FRotator& A, float B);
	bool NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool InCylinder(const struct FVector& Origin, const struct FRotator& Dir, float Width, const struct FVector& A, bool bIgnoreZ);
	float NoZDot(const struct FVector& A, const struct FVector& B);
	struct FVector ClampLength(const struct FVector& V, float MaxLength);
	struct FVector VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	bool IsZero(const struct FVector& A);
	struct FVector ProjectOnTo(const struct FVector& X, const struct FVector& Y);
	struct FVector MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	struct FVector VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians);
	struct FVector VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians);
	struct FVector VRand();
	struct FVector VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	struct FVector Normal2D(const struct FVector& A);
	struct FVector Normal(const struct FVector& A);
	float VSizeSq2D(const struct FVector& A);
	float VSizeSq(const struct FVector& A);
	float VSize2D(const struct FVector& A);
	float VSize(const struct FVector& A);
	struct FVector SubtractEqual_VectorVector(const struct FVector& B, struct FVector* A);
	struct FVector AddEqual_VectorVector(const struct FVector& B, struct FVector* A);
	struct FVector DivideEqual_VectorFloat(float B, struct FVector* A);
	struct FVector MultiplyEqual_VectorVector(const struct FVector& B, struct FVector* A);
	struct FVector MultiplyEqual_VectorFloat(float B, struct FVector* A);
	struct FVector Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	float Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	bool NotEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	bool EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	struct FVector LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	struct FVector Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Add_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Divide_VectorFloat(const struct FVector& A, float B);
	struct FVector Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Multiply_FloatVector(float A, const struct FVector& B);
	struct FVector Multiply_VectorFloat(const struct FVector& A, float B);
	struct FVector Subtract_PreVector(const struct FVector& A);
	float FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FPctByRange(float Value, float InMin, float InMax);
	float RandRange(float InMin, float InMax);
	float FInterpEaseInOut(float A, float B, float Alpha, float Exp);
	float FInterpEaseOut(float A, float B, float Alpha, float Exp);
	float FInterpEaseIn(float A, float B, float Alpha, float Exp);
	float FCubicInterp(float P0, float T0, float P1, float T1, float A);
	int FCeil(float A);
	int FFloor(float A);
	int Round(float A);
	float Lerp(float A, float B, float Alpha);
	float FClamp(float V, float A, float B);
	float FMax(float A, float B);
	float FMin(float A, float B);
	float FRand();
	float Square(float A);
	float Sqrt(float A);
	float Loge(float A);
	float Exp(float A);
	float Atan2(float A, float B);
	float Atan(float A);
	float Tan(float A);
	float Acos(float A);
	float Cos(float A);
	float Asin(float A);
	float Sin(float A);
	float Abs(float A);
	float SubtractEqual_FloatFloat(float B, float* A);
	float AddEqual_FloatFloat(float B, float* A);
	float DivideEqual_FloatFloat(float B, float* A);
	float MultiplyEqual_FloatFloat(float B, float* A);
	bool NotEqual_FloatFloat(float A, float B);
	bool ComplementEqual_FloatFloat(float A, float B);
	bool EqualEqual_FloatFloat(float A, float B);
	bool GreaterEqual_FloatFloat(float A, float B);
	bool LessEqual_FloatFloat(float A, float B);
	bool Greater_FloatFloat(float A, float B);
	bool Less_FloatFloat(float A, float B);
	float Subtract_FloatFloat(float A, float B);
	float Add_FloatFloat(float A, float B);
	float Percent_FloatFloat(float A, float B);
	float Divide_FloatFloat(float A, float B);
	float Multiply_FloatFloat(float A, float B);
	float MultiplyMultiply_FloatFloat(float Base, float Exp);
	float Subtract_PreFloat(float A);
	struct FString ToHex(int A);
	int Clamp(int V, int A, int B);
	int Max(int A, int B);
	int Min(int A, int B);
	int Rand(int Max);
	int SubtractSubtract_Int(int* A);
	int AddAdd_Int(int* A);
	int SubtractSubtract_PreInt(int* A);
	int AddAdd_PreInt(int* A);
	int SubtractEqual_IntInt(int B, int* A);
	int AddEqual_IntInt(int B, int* A);
	int DivideEqual_IntFloat(float B, int* A);
	int MultiplyEqual_IntFloat(float B, int* A);
	int Or_IntInt(int A, int B);
	int Xor_IntInt(int A, int B);
	int And_IntInt(int A, int B);
	bool NotEqual_IntInt(int A, int B);
	bool EqualEqual_IntInt(int A, int B);
	bool GreaterEqual_IntInt(int A, int B);
	bool LessEqual_IntInt(int A, int B);
	bool Greater_IntInt(int A, int B);
	bool Less_IntInt(int A, int B);
	int GreaterGreaterGreater_IntInt(int A, int B);
	int GreaterGreater_IntInt(int A, int B);
	int LessLess_IntInt(int A, int B);
	int Subtract_IntInt(int A, int B);
	int Add_IntInt(int A, int B);
	int Percent_IntInt(int A, int B);
	int Divide_IntInt(int A, int B);
	int Multiply_IntInt(int A, int B);
	int Subtract_PreInt(int A);
	int Complement_PreInt(int A);
	unsigned char SubtractSubtract_Byte(unsigned char* A);
	unsigned char AddAdd_Byte(unsigned char* A);
	unsigned char SubtractSubtract_PreByte(unsigned char* A);
	unsigned char AddAdd_PreByte(unsigned char* A);
	unsigned char SubtractEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char AddEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char DivideEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char MultiplyEqual_ByteFloat(float B, unsigned char* A);
	unsigned char MultiplyEqual_ByteByte(unsigned char B, unsigned char* A);
	bool OrOr_BoolBool(bool A, bool B);
	bool XorXor_BoolBool(bool A, bool B);
	bool AndAnd_BoolBool(bool A, bool B);
	bool NotEqual_BoolBool(bool A, bool B);
	bool EqualEqual_BoolBool(bool A, bool B);
	bool Not_PreBool(bool A);
};


// Class Core.TextBuffer
// 0x002C (0x008C - 0x0060)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0060(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBuffer");
		return ptr;
	}

};


// Class Core.Subsystem
// 0x0008 (0x0068 - 0x0060)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                            // 0x0060(0x0008) (Const, Native, NoExport)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Subsystem");
		return ptr;
	}

};


// Class Core.System
// 0x00F4 (0x015C - 0x0068)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                           // 0x0068(0x0004) (Config)
	int                                                MaxStaleCacheSize;                                        // 0x006C(0x0004) (Config)
	int                                                MaxOverallCacheSize;                                      // 0x0070(0x0004) (Config)
	int                                                PackageSizeSoftLimit;                                     // 0x0074(0x0004) (Config)
	float                                              AsyncIOBandwidthLimit;                                    // 0x0078(0x0004) (Config)
	struct FString                                     SavePath;                                                 // 0x007C(0x0010) (Config, NeedCtorLink)
	struct FString                                     CachePath;                                                // 0x008C(0x0010) (Config, NeedCtorLink)
	struct FString                                     CacheExt;                                                 // 0x009C(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             Paths;                                                    // 0x00AC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             SeekFreePCPaths;                                          // 0x00BC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             ScriptPaths;                                              // 0x00CC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             FRScriptPaths;                                            // 0x00DC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             CutdownPaths;                                             // 0x00EC(0x0010) (Config, NeedCtorLink)
	TArray<struct FName>                               Suppress;                                                 // 0x00FC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             Extensions;                                               // 0x010C(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             SeekFreePCExtensions;                                     // 0x011C(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             LocalizationPaths;                                        // 0x012C(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             ArchivePaths;                                             // 0x013C(0x0010) (Config, NeedCtorLink)
	struct FString                                     TextureFileCacheExtension;                                // 0x014C(0x0010) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.System");
		return ptr;
	}

};


// Class Core.PackageMap
// 0x00A0 (0x0100 - 0x0060)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0060(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.PackageMap");
		return ptr;
	}

};


// Class Core.ObjectSerializer
// 0x0010 (0x0070 - 0x0060)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectSerializer");
		return ptr;
	}

};


// Class Core.ObjectRedirector
// 0x0008 (0x0068 - 0x0060)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectRedirector");
		return ptr;
	}

};


// Class Core.MetaData
// 0x0048 (0x00A8 - 0x0060)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0060(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MetaData");
		return ptr;
	}

};


// Class Core.Linker
// 0x0168 (0x01C8 - 0x0060)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0060(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Linker");
		return ptr;
	}

};


// Class Core.LinkerSave
// 0x00B4 (0x027C - 0x01C8)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x01C8(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerSave");
		return ptr;
	}

};


// Class Core.LinkerLoad
// 0x0604 (0x07CC - 0x01C8)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[0x604];                                     // 0x01C8(0x0604) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerLoad");
		return ptr;
	}

};


// Class Core.Interface
// 0x0000 (0x0060 - 0x0060)
class UInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Interface");
		return ptr;
	}

};


// Class Core.Field
// 0x0008 (0x0068 - 0x0060)
class UField : public UObject
{
public:
	class UField*                                      Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Field");
		return ptr;
	}

};


// Class Core.Struct
// 0x0068 (0x00D0 - 0x0068)
class UStruct : public UField
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


// Class Core.ScriptStruct
// 0x0024 (0x00F4 - 0x00D0)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00D0(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ScriptStruct");
		return ptr;
	}

};


// Class Core.Function
// 0x0028 (0x00F8 - 0x00D0)
class UFunction : public UStruct
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


// Class Core.Property
// 0x0030 (0x0098 - 0x0068)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Property");
		return ptr;
	}

};


// Class Core.StructProperty
// 0x0008 (0x00A0 - 0x0098)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StructProperty");
		return ptr;
	}

};


// Class Core.StrProperty
// 0x0000 (0x0098 - 0x0098)
class UStrProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StrProperty");
		return ptr;
	}

};


// Class Core.ObjectProperty
// 0x0008 (0x00A0 - 0x0098)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectProperty");
		return ptr;
	}

};


// Class Core.SafeObjectProperty
// 0x0000 (0x00A0 - 0x00A0)
class USafeObjectProperty : public UObjectProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.SafeObjectProperty");
		return ptr;
	}

};


// Class Core.ComponentProperty
// 0x0000 (0x00A0 - 0x00A0)
class UComponentProperty : public UObjectProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ComponentProperty");
		return ptr;
	}

};


// Class Core.ClassProperty
// 0x0008 (0x00A8 - 0x00A0)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ClassProperty");
		return ptr;
	}

};


// Class Core.NameProperty
// 0x0000 (0x0098 - 0x0098)
class UNameProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.NameProperty");
		return ptr;
	}

};


// Class Core.MapProperty
// 0x0010 (0x00A8 - 0x0098)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MapProperty");
		return ptr;
	}

};


// Class Core.IntProperty
// 0x0000 (0x0098 - 0x0098)
class UIntProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.IntProperty");
		return ptr;
	}

};


// Class Core.InterfaceProperty
// 0x0008 (0x00A0 - 0x0098)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.InterfaceProperty");
		return ptr;
	}

};


// Class Core.FloatProperty
// 0x0000 (0x0098 - 0x0098)
class UFloatProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.FloatProperty");
		return ptr;
	}

};


// Class Core.DelegateProperty
// 0x0010 (0x00A8 - 0x0098)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DelegateProperty");
		return ptr;
	}

};


// Class Core.ByteProperty
// 0x0008 (0x00A0 - 0x0098)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ByteProperty");
		return ptr;
	}

};


// Class Core.BoolProperty
// 0x0004 (0x009C - 0x0098)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0098(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.BoolProperty");
		return ptr;
	}

};


// Class Core.ArrayProperty
// 0x0008 (0x00A0 - 0x0098)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ArrayProperty");
		return ptr;
	}

};


// Class Core.Enum
// 0x0010 (0x0078 - 0x0068)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Enum");
		return ptr;
	}

};


// Class Core.Const
// 0x0010 (0x0078 - 0x0068)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Const");
		return ptr;
	}

};


// Class Core.Factory
// 0x0048 (0x00A8 - 0x0060)
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                           // 0x0060(0x0008)
	class UClass*                                      ContextClass;                                             // 0x0068(0x0008)
	struct FString                                     Description;                                              // 0x0070(0x0010) (NeedCtorLink)
	TArray<struct FString>                             Formats;                                                  // 0x0080(0x0010) (NeedCtorLink)
	unsigned long                                      bCreateNew : 1;                                           // 0x0090(0x0004)
	unsigned long                                      bEditAfterNew : 1;                                        // 0x0090(0x0004)
	unsigned long                                      bEditorImport : 1;                                        // 0x0090(0x0004)
	unsigned long                                      bText : 1;                                                // 0x0090(0x0004)
	int                                                AutoPriority;                                             // 0x0094(0x0004)
	TArray<struct FString>                             ValidGameNames;                                           // 0x0098(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Factory");
		return ptr;
	}

};


// Class Core.TextBufferFactory
// 0x0000 (0x00A8 - 0x00A8)
class UTextBufferFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBufferFactory");
		return ptr;
	}

};


// Class Core.Exporter
// 0x0034 (0x0094 - 0x0060)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	TArray<struct FString>                             FormatExtension;                                          // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FString>                             FormatDescription;                                        // 0x0078(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0088(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Exporter");
		return ptr;
	}

};


// Class Core.Component
// 0x0010 (0x0070 - 0x0060)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                                       // 0x0060(0x0008) (Const, Native)
	struct FName                                       TemplateName;                                             // 0x0068(0x0008) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Component");
		return ptr;
	}

};


// Class Core.DistributionVector
// 0x000C (0x007C - 0x0070)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                // 0x0070(0x0008) (Const, Native, NoExport)
	unsigned long                                      bCanBeBaked : 1;                                          // 0x0078(0x0004) (Edit)
	unsigned long                                      bIsDirty : 1;                                             // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionVector");
		return ptr;
	}


	struct FVector GetVectorValue(float F, int LastExtreme);
};


// Class Core.DistributionFloat
// 0x000C (0x007C - 0x0070)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                // 0x0070(0x0008) (Const, Native, NoExport)
	unsigned long                                      bCanBeBaked : 1;                                          // 0x0078(0x0004) (Edit)
	unsigned long                                      bIsDirty : 1;                                             // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionFloat");
		return ptr;
	}


	float GetFloatValue(float F);
};


// Class Core.Commandlet
// 0x0054 (0x00B4 - 0x0060)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                          // 0x0060(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     HelpUsage;                                                // 0x0070(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     HelpWebLink;                                              // 0x0080(0x0010) (Const, Localized, NeedCtorLink)
	TArray<struct FString>                             HelpParamNames;                                           // 0x0090(0x0010) (Const, Localized, NeedCtorLink)
	TArray<struct FString>                             HelpParamDescriptions;                                    // 0x00A0(0x0010) (Const, Localized, NeedCtorLink)
	unsigned long                                      IsServer : 1;                                             // 0x00B0(0x0004)
	unsigned long                                      IsClient : 1;                                             // 0x00B0(0x0004)
	unsigned long                                      IsEditor : 1;                                             // 0x00B0(0x0004)
	unsigned long                                      LogToConsole : 1;                                         // 0x00B0(0x0004)
	unsigned long                                      ShowErrorCount : 1;                                       // 0x00B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Commandlet");
		return ptr;
	}


	int Main(const struct FString& Params);
};


// Class Core.HelpCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UHelpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.HelpCommandlet");
		return ptr;
	}


	int Main(const struct FString& Params);
};


// Class Core.State
// 0x0054 (0x0124 - 0x00D0)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x00D0(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.State");
		return ptr;
	}

};


// Class Core.Package
// 0x00D4 (0x0134 - 0x0060)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD4];                                      // 0x0060(0x00D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Package");
		return ptr;
	}

};


// Class Core.Class
// 0x00E0 (0x0204 - 0x0124)
class UClass : public UState
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
