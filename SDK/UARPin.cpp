#include "EARTrackingState.hpp"
#include "FLinearColor.hpp"
#include "FTransform.hpp"
#include "UARPin.hpp"
#include "UARTrackedGeometry.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UWorld.hpp"
UARPin* UARPin::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARPin");
    return (UARPin*)res;
}
void UARPin::DebugDraw(UWorld* World, FLinearColor& Color, float Scale, float PersistForSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPin.DebugDraw"));
    struct Params_DebugDraw {
        UWorld* World; // 0x0
        FLinearColor Color; // 0x8
        float Scale; // 0x18
        float PersistForSeconds; // 0x1c
    }; // Size: 0x20
    Params_DebugDraw params{};
    params.World = (UWorld*)World;
    params.Color = (FLinearColor)Color;
    params.Scale = (float)Scale;
    params.PersistForSeconds = (float)PersistForSeconds;
    ProcessEvent(func, &params);
    Color = params.Color;
}
FTransform UARPin::GetLocalToTrackingTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPin.GetLocalToTrackingTransform"));
    struct Params_GetLocalToTrackingTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetLocalToTrackingTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
UARTrackedGeometry* UARPin::GetTrackedGeometry() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPin.GetTrackedGeometry"));
    struct Params_GetTrackedGeometry {
        UARTrackedGeometry* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTrackedGeometry params{};
    ProcessEvent(func, &params);
    return (UARTrackedGeometry*)params.ReturnValue;
}
EARTrackingState UARPin::GetTrackingState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPin.GetTrackingState"));
    struct Params_GetTrackingState {
        EARTrackingState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTrackingState params{};
    ProcessEvent(func, &params);
    return (EARTrackingState)params.ReturnValue;
}
FName UARPin::GetDebugName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPin.GetDebugName"));
    struct Params_GetDebugName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDebugName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
USceneComponent* UARPin::GetPinnedComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPin.GetPinnedComponent"));
    struct Params_GetPinnedComponent {
        USceneComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPinnedComponent params{};
    ProcessEvent(func, &params);
    return (USceneComponent*)params.ReturnValue;
}
FTransform UARPin::GetLocalToWorldTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPin.GetLocalToWorldTransform"));
    struct Params_GetLocalToWorldTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetLocalToWorldTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
