#include "ATransfigurationPreviewActor.hpp"
#include "UActorComponent.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UTransformationSpellToolComponent.hpp"
float UTransformationSpellToolComponent::GetNormalizedObjectSizeRatio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellToolComponent.GetNormalizedObjectSizeRatio"));
    struct Params_GetNormalizedObjectSizeRatio {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNormalizedObjectSizeRatio params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UTransformationSpellToolComponent* UTransformationSpellToolComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransformationSpellToolComponent");
    return (UTransformationSpellToolComponent*)res;
}
void UTransformationSpellToolComponent::InitialCameraBlendIsComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellToolComponent.InitialCameraBlendIsComplete"));
    struct Params_InitialCameraBlendIsComplete {
    }; // Size: 0x0
    Params_InitialCameraBlendIsComplete params{};
    ProcessEvent(func, &params);
}
void UTransformationSpellToolComponent::AdjustDistance(float InAdjust) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellToolComponent.AdjustDistance"));
    struct Params_AdjustDistance {
        float InAdjust; // 0x0
    }; // Size: 0x4
    Params_AdjustDistance params{};
    params.InAdjust = (float)InAdjust;
    ProcessEvent(func, &params);
}
float UTransformationSpellToolComponent::GetTargetPointScreenPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellToolComponent.GetTargetPointScreenPosition"));
    struct Params_GetTargetPointScreenPosition {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTargetPointScreenPosition params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UTransformationSpellToolComponent::GetCurrentColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellToolComponent.GetCurrentColor"));
    struct Params_GetCurrentColor {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentColor params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
