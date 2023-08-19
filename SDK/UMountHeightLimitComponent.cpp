#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMountHeightLimitComponent.hpp"
#include "UMountRegionHeights.hpp"
void UMountHeightLimitComponent::SetHeightOverrides(float InTargetHeight, float InHeightBuffer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MountHeightLimitComponent.SetHeightOverrides"));
    struct Params_SetHeightOverrides {
        float InTargetHeight; // 0x0
        float InHeightBuffer; // 0x4
    }; // Size: 0x8
    Params_SetHeightOverrides params{};
    params.InTargetHeight = (float)InTargetHeight;
    params.InHeightBuffer = (float)InHeightBuffer;
    ProcessEvent(func, &params);
}
UMountHeightLimitComponent* UMountHeightLimitComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MountHeightLimitComponent");
    return (UMountHeightLimitComponent*)res;
}
float UMountHeightLimitComponent::GetFlyHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MountHeightLimitComponent.GetFlyHeight"));
    struct Params_GetFlyHeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFlyHeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMountHeightLimitComponent::ClearHeightOverrides() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MountHeightLimitComponent.ClearHeightOverrides"));
    struct Params_ClearHeightOverrides {
    }; // Size: 0x0
    Params_ClearHeightOverrides params{};
    ProcessEvent(func, &params);
}
