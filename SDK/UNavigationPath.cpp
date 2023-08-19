#include "ENavigationOptionFlag\Type.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UNavigationPath.hpp"
#include "UObject.hpp"
bool UNavigationPath::IsStringPulled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationPath.IsStringPulled"));
    struct Params_IsStringPulled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStringPulled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UNavigationPath* UNavigationPath::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavigationPath");
    return (UNavigationPath*)res;
}
bool UNavigationPath::IsValid() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationPath.IsValid"));
    struct Params_IsValid {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsValid params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UNavigationPath::GetDebugString() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationPath.GetDebugString"));
    struct Params_GetDebugString {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDebugString params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UNavigationPath::IsPartial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationPath.IsPartial"));
    struct Params_IsPartial {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPartial params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UNavigationPath::GetPathLength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationPath.GetPathLength"));
    struct Params_GetPathLength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPathLength params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UNavigationPath::GetPathCost() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationPath.GetPathCost"));
    struct Params_GetPathCost {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPathCost params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing"));
    struct Params_EnableDebugDrawing {
        bool bShouldDrawDebugData; // 0x0
        char pad_1[0x3];
        FLinearColor PathColor; // 0x4
    }; // Size: 0x14
    Params_EnableDebugDrawing params{};
    params.bShouldDrawDebugData = (bool)bShouldDrawDebugData;
    params.PathColor = (FLinearColor)PathColor;
    ProcessEvent(func, &params);
}
void UNavigationPath::EnableRecalculationOnInvalidation(ENavigationOptionFlag::Type DoRecalculation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation"));
    struct Params_EnableRecalculationOnInvalidation {
        ENavigationOptionFlag::Type DoRecalculation; // 0x0
    }; // Size: 0x1
    Params_EnableRecalculationOnInvalidation params{};
    params.DoRecalculation = (ENavigationOptionFlag::Type)DoRecalculation;
    ProcessEvent(func, &params);
}
