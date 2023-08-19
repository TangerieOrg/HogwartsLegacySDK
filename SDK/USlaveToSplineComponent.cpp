#include "ESlaveToSplineUpdateMode.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USlaveToSplineComponent.hpp"
#include "USplineComponent.hpp"
void USlaveToSplineComponent::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SlaveToSplineComponent.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
USlaveToSplineComponent* USlaveToSplineComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SlaveToSplineComponent");
    return (USlaveToSplineComponent*)res;
}
USplineComponent* USlaveToSplineComponent::GetFollowSpline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SlaveToSplineComponent.GetFollowSpline"));
    struct Params_GetFollowSpline {
        USplineComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFollowSpline params{};
    ProcessEvent(func, &params);
    return (USplineComponent*)params.ReturnValue;
}
void USlaveToSplineComponent::SetSplineT(float newT, bool& Done) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SlaveToSplineComponent.SetSplineT"));
    struct Params_SetSplineT {
        float newT; // 0x0
        bool Done; // 0x4
    }; // Size: 0x5
    Params_SetSplineT params{};
    params.newT = (float)newT;
    params.Done = (bool)Done;
    ProcessEvent(func, &params);
    Done = params.Done;
}
