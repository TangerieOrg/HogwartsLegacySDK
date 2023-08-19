#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolWithinDistanceToCamera.hpp"
#include "UFunction.hpp"
UFXAutoTriggerBoolWithinDistanceToCamera* UFXAutoTriggerBoolWithinDistanceToCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolWithinDistanceToCamera");
    return (UFXAutoTriggerBoolWithinDistanceToCamera*)res;
}
void UFXAutoTriggerBoolWithinDistanceToCamera::SetMaxCameraDistanceMeters(float MaxCameraDistanceMeters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FXAutoTriggerBoolWithinDistanceToCamera.SetMaxCameraDistanceMeters"));
    struct Params_SetMaxCameraDistanceMeters {
        float MaxCameraDistanceMeters; // 0x0
    }; // Size: 0x4
    Params_SetMaxCameraDistanceMeters params{};
    params.MaxCameraDistanceMeters = (float)MaxCameraDistanceMeters;
    ProcessEvent(func, &params);
}
