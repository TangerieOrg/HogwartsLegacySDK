#include "FCameraData.hpp"
#include "FRotator.hpp"
#include "UBP_AddRotation_C.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UFunction.hpp"
UBP_AddRotation_C* UBP_AddRotation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_AddRotation.BP_AddRotation_C");
    return (UBP_AddRotation_C*)res;
}
bool UBP_AddRotation_C::OnUpdateEvent(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_AddRotation.BP_AddRotation_C.OnUpdateEvent"));
    struct Params_OnUpdateEvent {
        float DeltaSeconds; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_OnUpdateEvent params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBP_AddRotation_C::OnActivateEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_AddRotation.BP_AddRotation_C.OnActivateEvent"));
    struct Params_OnActivateEvent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_OnActivateEvent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UBP_AddRotation_C::OnGetDebugStatsEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_AddRotation.BP_AddRotation_C.OnGetDebugStatsEvent"));
    struct Params_OnGetDebugStatsEvent {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_OnGetDebugStatsEvent params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UBP_AddRotation_C::OnWriteCameraDataEvent(FCameraData& CameraData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_AddRotation.BP_AddRotation_C.OnWriteCameraDataEvent"));
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
