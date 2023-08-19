#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
struct FSceneRigParameters;
class UObject;
class USceneRigStageParameterBlock;
class ULevelSequence;
struct FTransform;
#pragma pack(push, 1)
class USceneRigBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static USceneRigBlueprintLibrary* StaticClass();
    static void SetWorldContext(FSceneRigParameters& InParameter, UObject* WorldContext);
    static void SetStageParameters(FSceneRigParameters& InParameter, USceneRigStageParameterBlock* StageParameterBlock);
    static void RebindSequencePossessableReferences(UObject* WorldContextObject, ULevelSequence* Sequence);
    static bool PlayCinematicFromPath(UObject* WorldContextObject, FString InSceneRigPath, FName LevelNameToReturnToWhenFinished, FName DefaultLevelName);
    static void PlayCinematic(UObject* InWorldContextObject);
    static void AssignTransformParameter(FSceneRigParameters& InParameter, FString ParameterName, FTransform& InValue);
    static void AssignStringParameter(FSceneRigParameters& InParameter, FString ParameterName, FString InValue);
    static void AssignObjectParameter(FSceneRigParameters& InParameter, FString ParameterName, UObject* InValue);
    static void AssignIntParameter(FSceneRigParameters& InParameter, FString ParameterName, int32_t InValue);
    static void AssignFloatParameter(FSceneRigParameters& InParameter, FString ParameterName, float InValue);
    static void AssignBoolParameter(FSceneRigParameters& InParameter, FString ParameterName, bool InValue);
}; // Size: 0x28
#pragma pack(pop)
