#pragma once
#include <cstdint>
#include "ELerpVolumesInterpolantType.hpp"
#include "FLerpVolumesInterpolants.hpp"
#include "FLerpVolumesInterpolantsEvaluator.hpp"
#include "FVector.hpp"
#include "USceneComponent.hpp"
class ULerpVolumesLibrary;
struct FLinearColor;
#pragma pack(push, 1)
class ULerpVolumesLocalEvaluationComponent : public USceneComponent {
public:
    bool bUseDistanceThreshold; // 0x220
    bool bUpdatesEnabled; // 0x221
    char pad_222[0x16];
    ULerpVolumesLibrary* LocalLibrary; // 0x238
    FLerpVolumesInterpolants LocalInterpolantDefaults; // 0x240
    FLerpVolumesInterpolantsEvaluator LocalState; // 0x420
    float UpdateCountdown; // 0x608
    FVector LastPosition; // 0x60c
    bool bLastPositionValid; // 0x618
    char pad_619[0x7];
    static ULerpVolumesLocalEvaluationComponent* StaticClass();
    void SetUpdatesEnabled(bool Enable);
    void SetLocalLibrary(ULerpVolumesLibrary* NewLocalLibrary);
    bool IsLocalVector(FName VariableName);
    bool IsLocalUnitDirection(FName VariableName);
    bool IsLocalTag(FName VariableName);
    bool IsLocalScalar(FName VariableName);
    bool IsLocalInteger(FName VariableName);
    bool IsLocalColor(FName VariableName);
    bool GetLocalVector(FName VariableName, FVector& VariableValue);
    bool GetLocalUnitDirection(FName VariableName, FVector& VariableValue);
    void GetLocalType(FName VariableName, ELerpVolumesInterpolantType& VariableType);
    bool GetLocalTag(FName VariableName, FString& VariableValue);
    bool GetLocalScalar(FName VariableName, float& VariableValue);
    bool GetLocalInteger(FName VariableName, int32_t& VariableValue);
    bool GetLocalColor(FName VariableName, FLinearColor& VariableValue);
    void ForceUpdate();
    bool AreUpdatesEnabled();
}; // Size: 0x620
#pragma pack(pop)
