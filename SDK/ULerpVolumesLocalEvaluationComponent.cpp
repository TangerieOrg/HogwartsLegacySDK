#include "ELerpVolumesInterpolantType.hpp"
#include "FLerpVolumesInterpolants.hpp"
#include "FLerpVolumesInterpolantsEvaluator.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULerpVolumesLibrary.hpp"
#include "ULerpVolumesLocalEvaluationComponent.hpp"
#include "USceneComponent.hpp"
bool ULerpVolumesLocalEvaluationComponent::IsLocalInteger(FName VariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.IsLocalInteger"));
    struct Params_IsLocalInteger {
        FName VariableName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsLocalInteger params{};
    params.VariableName = (FName)VariableName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ULerpVolumesLocalEvaluationComponent* ULerpVolumesLocalEvaluationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent");
    return (ULerpVolumesLocalEvaluationComponent*)res;
}
bool ULerpVolumesLocalEvaluationComponent::IsLocalVector(FName VariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.IsLocalVector"));
    struct Params_IsLocalVector {
        FName VariableName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsLocalVector params{};
    params.VariableName = (FName)VariableName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULerpVolumesLocalEvaluationComponent::SetUpdatesEnabled(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.SetUpdatesEnabled"));
    struct Params_SetUpdatesEnabled {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetUpdatesEnabled params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void ULerpVolumesLocalEvaluationComponent::SetLocalLibrary(ULerpVolumesLibrary* NewLocalLibrary) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.SetLocalLibrary"));
    struct Params_SetLocalLibrary {
        ULerpVolumesLibrary* NewLocalLibrary; // 0x0
    }; // Size: 0x8
    Params_SetLocalLibrary params{};
    params.NewLocalLibrary = (ULerpVolumesLibrary*)NewLocalLibrary;
    ProcessEvent(func, &params);
}
bool ULerpVolumesLocalEvaluationComponent::IsLocalUnitDirection(FName VariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.IsLocalUnitDirection"));
    struct Params_IsLocalUnitDirection {
        FName VariableName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsLocalUnitDirection params{};
    params.VariableName = (FName)VariableName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULerpVolumesLocalEvaluationComponent::IsLocalTag(FName VariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.IsLocalTag"));
    struct Params_IsLocalTag {
        FName VariableName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsLocalTag params{};
    params.VariableName = (FName)VariableName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULerpVolumesLocalEvaluationComponent::IsLocalScalar(FName VariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.IsLocalScalar"));
    struct Params_IsLocalScalar {
        FName VariableName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsLocalScalar params{};
    params.VariableName = (FName)VariableName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULerpVolumesLocalEvaluationComponent::IsLocalColor(FName VariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.IsLocalColor"));
    struct Params_IsLocalColor {
        FName VariableName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsLocalColor params{};
    params.VariableName = (FName)VariableName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULerpVolumesLocalEvaluationComponent::GetLocalVector(FName VariableName, FVector& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalVector"));
    struct Params_GetLocalVector {
        FName VariableName; // 0x0
        FVector VariableValue; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetLocalVector params{};
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FVector)VariableValue;
    ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ULerpVolumesLocalEvaluationComponent::GetLocalUnitDirection(FName VariableName, FVector& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalUnitDirection"));
    struct Params_GetLocalUnitDirection {
        FName VariableName; // 0x0
        FVector VariableValue; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetLocalUnitDirection params{};
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FVector)VariableValue;
    ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
void ULerpVolumesLocalEvaluationComponent::GetLocalType(FName VariableName, ELerpVolumesInterpolantType& VariableType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalType"));
    struct Params_GetLocalType {
        FName VariableName; // 0x0
        ELerpVolumesInterpolantType VariableType; // 0x8
    }; // Size: 0x9
    Params_GetLocalType params{};
    params.VariableName = (FName)VariableName;
    params.VariableType = (ELerpVolumesInterpolantType)VariableType;
    ProcessEvent(func, &params);
    VariableType = params.VariableType;
}
bool ULerpVolumesLocalEvaluationComponent::GetLocalTag(FName VariableName, FString& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalTag"));
    struct Params_GetLocalTag {
        FName VariableName; // 0x0
        FString VariableValue; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetLocalTag params{};
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FString)VariableValue;
    ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ULerpVolumesLocalEvaluationComponent::GetLocalScalar(FName VariableName, float& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalScalar"));
    struct Params_GetLocalScalar {
        FName VariableName; // 0x0
        float VariableValue; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetLocalScalar params{};
    params.VariableName = (FName)VariableName;
    params.VariableValue = (float)VariableValue;
    ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ULerpVolumesLocalEvaluationComponent::GetLocalInteger(FName VariableName, int32_t& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalInteger"));
    struct Params_GetLocalInteger {
        FName VariableName; // 0x0
        int32_t VariableValue; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetLocalInteger params{};
    params.VariableName = (FName)VariableName;
    params.VariableValue = (int32_t)VariableValue;
    ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
bool ULerpVolumesLocalEvaluationComponent::GetLocalColor(FName VariableName, FLinearColor& VariableValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalColor"));
    struct Params_GetLocalColor {
        FName VariableName; // 0x0
        FLinearColor VariableValue; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetLocalColor params{};
    params.VariableName = (FName)VariableName;
    params.VariableValue = (FLinearColor)VariableValue;
    ProcessEvent(func, &params);
    VariableValue = params.VariableValue;
    return (bool)params.ReturnValue;
}
void ULerpVolumesLocalEvaluationComponent::ForceUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.ForceUpdate"));
    struct Params_ForceUpdate {
    }; // Size: 0x0
    Params_ForceUpdate params{};
    ProcessEvent(func, &params);
}
bool ULerpVolumesLocalEvaluationComponent::AreUpdatesEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LerpVolumes.LerpVolumesLocalEvaluationComponent.AreUpdatesEnabled"));
    struct Params_AreUpdatesEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AreUpdatesEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
