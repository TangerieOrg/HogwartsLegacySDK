#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ELerpVolumesGetTagValueMode.hpp"
#include "ELerpVolumesInterpolantType.hpp"
#include "FLerpVolumesInterpolants.hpp"
#include "FLerpVolumesInterpolantsEvaluator.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
class ULerpVolumeInterpolant;
class ULerpVolumeFinalInterpolant;
class UObject;
#pragma pack(push, 1)
class ALerpVolumesSingleton : public AActor {
public:
    char pad_248[0x8];
    TArray<ULerpVolumeInterpolant*> Interpolants; // 0x250
    TArray<ULerpVolumeFinalInterpolant*> FinalInterpolants; // 0x260
    float Priority; // 0x270
    char pad_274[0x4];
    FLerpVolumesInterpolants InterpolantDefaults; // 0x278
    FLerpVolumesInterpolantsEvaluator CurrentState; // 0x458
    char pad_640[0xa8];
    FLerpVolumesInterpolantsEvaluator LocalState; // 0x6e8
    FVector LastLocalStatePosition; // 0x8d0
    bool bLastLocalStateValid; // 0x8dc
    char pad_8dd[0x3];
    static ALerpVolumesSingleton* StaticClass();
    static void LerpVolumesSetWorldVectorDefault(UObject* WorldContextObject, FName VariableName, FVector VariableValue);
    static void LerpVolumesSetWorldUnitDirectionDefault(UObject* WorldContextObject, FName VariableName, FVector VariableValue);
    static void LerpVolumesSetWorldTagDefaultName(UObject* WorldContextObject, FName VariableName, FName VariableValue);
    static void LerpVolumesSetWorldTagDefault(UObject* WorldContextObject, FName VariableName, FString VariableValue);
    static void LerpVolumesSetWorldScalarDefault(UObject* WorldContextObject, FName VariableName, float VariableValue);
    static void LerpVolumesSetWorldIntegerDefault(UObject* WorldContextObject, FName VariableName, int32_t VariableValue);
    static void LerpVolumesSetWorldColorDefault(UObject* WorldContextObject, FName VariableName, FLinearColor VariableValue);
    static void LerpVolumesIsWorldVector(UObject* WorldContextObject, FName VariableName, bool& bExists);
    static void LerpVolumesIsWorldUnitDirection(UObject* WorldContextObject, FName VariableName, bool& bExists);
    static void LerpVolumesIsWorldTag(UObject* WorldContextObject, FName VariableName, bool& bExists);
    static void LerpVolumesIsWorldScalar(UObject* WorldContextObject, FName VariableName, bool& bExists);
    static void LerpVolumesIsWorldInteger(UObject* WorldContextObject, FName VariableName, bool& bExists);
    static void LerpVolumesIsWorldColor(UObject* WorldContextObject, FName VariableName, bool& bExists);
    static bool LerpVolumesGetWorldVector(UObject* WorldContextObject, FName VariableName, FVector& VariableValue);
    static bool LerpVolumesGetWorldUnitDirection(UObject* WorldContextObject, FName VariableName, FVector& VariableValue);
    static void LerpVolumesGetWorldType(UObject* WorldContextObject, FName VariableName, ELerpVolumesInterpolantType& VariableType);
    static bool LerpVolumesGetWorldTag(UObject* WorldContextObject, FName VariableName, FString& VariableValue, ELerpVolumesGetTagValueMode ValueMode);
    static bool LerpVolumesGetWorldScalar(UObject* WorldContextObject, FName VariableName, float& VariableValue);
    static bool LerpVolumesGetWorldInteger(UObject* WorldContextObject, FName VariableName, int32_t& VariableValue);
    static bool LerpVolumesGetWorldColor(UObject* WorldContextObject, FName VariableName, FLinearColor& VariableValue);
    static bool LerpVolumesGetVectorAtPosition(UObject* WorldContextObject, FVector Position, FName VariableName, FVector& VariableValue);
    static bool LerpVolumesGetUnitDirectionAtPosition(UObject* WorldContextObject, FVector Position, FName VariableName, FVector& VariableValue);
    static bool LerpVolumesGetTagAtPosition(UObject* WorldContextObject, FVector Position, FName VariableName, FString& VariableValue, ELerpVolumesGetTagValueMode ValueMode);
    static bool LerpVolumesGetScalarAtPosition(UObject* WorldContextObject, FVector Position, FName VariableName, float& VariableValue);
    static bool LerpVolumesGetIntegerAtPosition(UObject* WorldContextObject, FVector Position, FName VariableName, int32_t& VariableValue);
    static bool LerpVolumesGetColorAtPosition(UObject* WorldContextObject, FVector Position, FName VariableName, FLinearColor& VariableValue);
}; // Size: 0x8e0
#pragma pack(pop)
