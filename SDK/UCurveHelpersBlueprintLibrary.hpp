#pragma once
#include <cstdint>
#include "ERichCurveInterpMode.hpp"
#include "FBlueprintCurveKey.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FRuntimeFloatCurve;
class USplineComponent;
class UCurveFloat;
class AActor;
#pragma pack(push, 1)
class UCurveHelpersBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UCurveHelpersBlueprintLibrary* StaticClass();
    static void ShiftCurve(FRuntimeFloatCurve& RuntimeFloatCurve, float DeltaTime);
    static void SetSplineHasBeenEdited(USplineComponent* Spline, bool bEdited);
    static void SetExternalCurve(FRuntimeFloatCurve& RuntimeFloatCurve, UCurveFloat* ExternalCurve, bool bCopyToInternal);
    static void SetCurveKeys(FRuntimeFloatCurve& RuntimeFloatCurve, TArray<FBlueprintCurveKey>& Keys);
    static void SetCurveDefaultValue(FRuntimeFloatCurve& RuntimeFloatCurve, float DefaultValue);
    static void ScaleCurve(FRuntimeFloatCurve& RuntimeFloatCurve, float ScaleOrigin, float ScaleFactor);
    static void RunConstructionScripts(AActor* Actor);
    static void ResetCurve(FRuntimeFloatCurve& RuntimeFloatCurve);
    static void RemoveRedundantCurveKeys(FRuntimeFloatCurve& RuntimeFloatCurve, float Tolerance);
    static void MakeLinearCurveKey(float Time, float Value, FBlueprintCurveKey& Key);
    static void MakeCurveKeysTriplet(TArray<FBlueprintCurveKey>& Keys, float StartTime, float StartValue, float MidTime, float MidValue, float EndTime, float EndValue, bool bLinear);
    static void MakeCurveKeysSimple(TArray<FBlueprintCurveKey>& Keys, float StartTime, float StartValue, float EndTime, float EndValue, bool bLinear);
    static void MakeCurveKey(float Time, float Value, FBlueprintCurveKey& Key, ERichCurveInterpMode InterpMode, float ArriveTangent, float LeaveTangent);
    static void IsUsingExternalCurve(FRuntimeFloatCurve& RuntimeFloatCurve, bool& bExternalCurve);
    static void InsertCurveKeys(FRuntimeFloatCurve& RuntimeFloatCurve, TArray<FBlueprintCurveKey>& Keys);
    static void InsertCurveKey(FRuntimeFloatCurve& RuntimeFloatCurve, FBlueprintCurveKey& Key);
    static void GetSplineHasBeenEdited(USplineComponent* Spline, bool& bEdited);
    static void GetExternalCurve(FRuntimeFloatCurve& RuntimeFloatCurve, UCurveFloat*& ExternalCurve);
    static void GetCurveValueRange(FRuntimeFloatCurve& RuntimeFloatCurve, float& MinValue, float& MaxValue);
    static void GetCurveTimeRange(FRuntimeFloatCurve& RuntimeFloatCurve, float& MinTime, float& MaxTime);
    static void GetCurveKeyTimeValue(FRuntimeFloatCurve& RuntimeFloatCurve, int32_t KeyIndex, float& Time, float& Value, bool& bInRange);
    static void GetCurveKeys(FRuntimeFloatCurve& RuntimeFloatCurve, TArray<FBlueprintCurveKey>& Keys, int32_t& KeyCount);
    static void GetCurveKeyCount(FRuntimeFloatCurve& RuntimeFloatCurve, int32_t& KeyCount);
    static void GetCurveKey(FRuntimeFloatCurve& RuntimeFloatCurve, int32_t KeyIndex, FBlueprintCurveKey& Key, bool& bInRange);
    static void GetCurveDefaultValue(FRuntimeFloatCurve& RuntimeFloatCurve, float& DefaultValue);
    static void EvalCurve(FRuntimeFloatCurve& RuntimeFloatCurve, float Time, float& Value);
    static void CurveKeyIndexInRange(FRuntimeFloatCurve& RuntimeFloatCurve, int32_t KeyIndex, bool& bInRange);
    static void CurveHasAnyData(FRuntimeFloatCurve& RuntimeFloatCurve, bool& bHasAnyData);
    static void ConvertExternalCurve(FRuntimeFloatCurve& RuntimeFloatCurve);
    static void CloneCurve(FRuntimeFloatCurve& SourceRuntimeFloatCurve, FRuntimeFloatCurve& NewRuntimeFloatCurve);
    static void ClearCurveDefaultValue(FRuntimeFloatCurve& RuntimeFloatCurve);
    static void AutoSetCurveTangents(FRuntimeFloatCurve& RuntimeFloatCurve, float Tension);
    static void AppendCurveKey(FRuntimeFloatCurve& RuntimeFloatCurve, FBlueprintCurveKey& Key);
}; // Size: 0x28
#pragma pack(pop)
