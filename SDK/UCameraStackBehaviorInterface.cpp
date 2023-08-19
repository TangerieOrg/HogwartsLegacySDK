#include "FCameraData.hpp"
#include "UCameraStackBehaviorInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
bool UCameraStackBehaviorInterface::OnWriteCameraDataEvent(FCameraData& CameraData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorInterface.OnWriteCameraDataEvent"));
    struct Params_OnWriteCameraDataEvent {
        FCameraData CameraData; // 0x0
        bool ReturnValue; // 0xb0
    }; // Size: 0xb1
    Params_OnWriteCameraDataEvent params{};
    params.CameraData = (FCameraData)CameraData;
    ProcessEvent(func, &params);
    CameraData = params.CameraData;
    return (bool)params.ReturnValue;
}
UCameraStackBehaviorInterface* UCameraStackBehaviorInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorInterface");
    return (UCameraStackBehaviorInterface*)res;
}
bool UCameraStackBehaviorInterface::OnActivateEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorInterface.OnActivateEvent"));
    struct Params_OnActivateEvent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_OnActivateEvent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCameraStackBehaviorInterface::OnUpdateEvent(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorInterface.OnUpdateEvent"));
    struct Params_OnUpdateEvent {
        float DeltaSeconds; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_OnUpdateEvent params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UCameraStackBehaviorInterface::OnGetDebugStatsEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorInterface.OnGetDebugStatsEvent"));
    struct Params_OnGetDebugStatsEvent {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_OnGetDebugStatsEvent params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
