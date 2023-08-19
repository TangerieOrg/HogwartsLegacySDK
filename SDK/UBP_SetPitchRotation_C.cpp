#include "FCameraData.hpp"
#include "FRotator.hpp"
#include "UBP_SetPitchRotation_C.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UFunction.hpp"
bool UBP_SetPitchRotation_C::OnWriteCameraDataEvent(FCameraData& CameraData, FRotator CallFunc_GetRotation_OutValue, FRotator CallFunc_GetRotation_OutVelocity, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_SetPitchRotation.BP_SetPitchRotation_C.OnWriteCameraDataEvent"));
    struct Params_OnWriteCameraDataEvent {
        FCameraData CameraData; // 0x0
        bool ReturnValue; // 0xb0
        char pad_b1[0x3];
        FRotator CallFunc_GetRotation_OutValue; // 0xb4
        FRotator CallFunc_GetRotation_OutVelocity; // 0xc0
        float CallFunc_BreakRotator_Roll; // 0xcc
        float CallFunc_BreakRotator_Pitch; // 0xd0
        float CallFunc_BreakRotator_Yaw; // 0xd4
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0xd8
        FRotator CallFunc_MakeRotator_ReturnValue; // 0xdc
    }; // Size: 0xe8
    Params_OnWriteCameraDataEvent params{};
    params.CameraData = (FCameraData)CameraData;
    params.CallFunc_GetRotation_OutValue = (FRotator)CallFunc_GetRotation_OutValue;
    params.CallFunc_GetRotation_OutVelocity = (FRotator)CallFunc_GetRotation_OutVelocity;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    ProcessEvent(func, &params);
    CameraData = params.CameraData;
    return (bool)params.ReturnValue;
}
UBP_SetPitchRotation_C* UBP_SetPitchRotation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_SetPitchRotation.BP_SetPitchRotation_C");
    return (UBP_SetPitchRotation_C*)res;
}
bool UBP_SetPitchRotation_C::OnActivateEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_SetPitchRotation.BP_SetPitchRotation_C.OnActivateEvent"));
    struct Params_OnActivateEvent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_OnActivateEvent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UBP_SetPitchRotation_C::OnGetDebugStatsEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_SetPitchRotation.BP_SetPitchRotation_C.OnGetDebugStatsEvent"));
    struct Params_OnGetDebugStatsEvent {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_OnGetDebugStatsEvent params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UBP_SetPitchRotation_C::OnUpdateEvent(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_SetPitchRotation.BP_SetPitchRotation_C.OnUpdateEvent"));
    struct Params_OnUpdateEvent {
        float DeltaSeconds; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_OnUpdateEvent params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
