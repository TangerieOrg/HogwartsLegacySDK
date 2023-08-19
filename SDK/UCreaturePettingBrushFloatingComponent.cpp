#include "ECreaturePettingBrushFloatingState.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UCreaturePettingBrushFloatingComponent.hpp"
#include "UFunction.hpp"
UCreaturePettingBrushFloatingComponent* UCreaturePettingBrushFloatingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreaturePettingBrushFloatingComponent");
    return (UCreaturePettingBrushFloatingComponent*)res;
}
void UCreaturePettingBrushFloatingComponent::SetTargetTransformAndVelocity(FTransform& InTargetTransform, FVector& InVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePettingBrushFloatingComponent.SetTargetTransformAndVelocity"));
    struct Params_SetTargetTransformAndVelocity {
        FTransform InTargetTransform; // 0x0
        FVector InVelocity; // 0x30
    }; // Size: 0x3c
    Params_SetTargetTransformAndVelocity params{};
    params.InTargetTransform = (FTransform)InTargetTransform;
    params.InVelocity = (FVector)InVelocity;
    ProcessEvent(func, &params);
    InTargetTransform = params.InTargetTransform;
    InVelocity = params.InVelocity;
}
void UCreaturePettingBrushFloatingComponent::SetOscillationEnabled(bool bInEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePettingBrushFloatingComponent.SetOscillationEnabled"));
    struct Params_SetOscillationEnabled {
        bool bInEnabled; // 0x0
    }; // Size: 0x1
    Params_SetOscillationEnabled params{};
    params.bInEnabled = (bool)bInEnabled;
    ProcessEvent(func, &params);
}
void UCreaturePettingBrushFloatingComponent::SetFloatingState(ECreaturePettingBrushFloatingState InFloatingState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePettingBrushFloatingComponent.SetFloatingState"));
    struct Params_SetFloatingState {
        ECreaturePettingBrushFloatingState InFloatingState; // 0x0
    }; // Size: 0x1
    Params_SetFloatingState params{};
    params.InFloatingState = (ECreaturePettingBrushFloatingState)InFloatingState;
    ProcessEvent(func, &params);
}
