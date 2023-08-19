#include "FOptionalTriplet.hpp"
#include "UCameraStackLimitsInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
bool UCameraStackLimitsInterface::GetArmOriginLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLimitsInterface.GetArmOriginLimits"));
    struct Params_GetArmOriginLimits {
        FOptionalTriplet OutMin; // 0x0
        FOptionalTriplet OutMax; // 0x18
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetArmOriginLimits params{};
    params.OutMin = (FOptionalTriplet)OutMin;
    params.OutMax = (FOptionalTriplet)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
UCameraStackLimitsInterface* UCameraStackLimitsInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackLimitsInterface");
    return (UCameraStackLimitsInterface*)res;
}
bool UCameraStackLimitsInterface::GetCameraSpaceRotationLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLimitsInterface.GetCameraSpaceRotationLimits"));
    struct Params_GetCameraSpaceRotationLimits {
        FOptionalTriplet OutMin; // 0x0
        FOptionalTriplet OutMax; // 0x18
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetCameraSpaceRotationLimits params{};
    params.OutMin = (FOptionalTriplet)OutMin;
    params.OutMax = (FOptionalTriplet)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
bool UCameraStackLimitsInterface::GetRotationLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLimitsInterface.GetRotationLimits"));
    struct Params_GetRotationLimits {
        FOptionalTriplet OutMin; // 0x0
        FOptionalTriplet OutMax; // 0x18
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetRotationLimits params{};
    params.OutMin = (FOptionalTriplet)OutMin;
    params.OutMax = (FOptionalTriplet)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
bool UCameraStackLimitsInterface::GetFocusDistanceLimits(float& OutMin, float& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLimitsInterface.GetFocusDistanceLimits"));
    struct Params_GetFocusDistanceLimits {
        float OutMin; // 0x0
        float OutMax; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetFocusDistanceLimits params{};
    params.OutMin = (float)OutMin;
    params.OutMax = (float)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
bool UCameraStackLimitsInterface::GetFieldOfViewLimits(float& OutMin, float& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLimitsInterface.GetFieldOfViewLimits"));
    struct Params_GetFieldOfViewLimits {
        float OutMin; // 0x0
        float OutMax; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetFieldOfViewLimits params{};
    params.OutMin = (float)OutMin;
    params.OutMax = (float)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
bool UCameraStackLimitsInterface::GetCameraSpaceTranslationLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLimitsInterface.GetCameraSpaceTranslationLimits"));
    struct Params_GetCameraSpaceTranslationLimits {
        FOptionalTriplet OutMin; // 0x0
        FOptionalTriplet OutMax; // 0x18
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetCameraSpaceTranslationLimits params{};
    params.OutMin = (FOptionalTriplet)OutMin;
    params.OutMax = (FOptionalTriplet)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
bool UCameraStackLimitsInterface::GetArmLengthLimits(float& OutMin, float& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLimitsInterface.GetArmLengthLimits"));
    struct Params_GetArmLengthLimits {
        float OutMin; // 0x0
        float OutMax; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetArmLengthLimits params{};
    params.OutMin = (float)OutMin;
    params.OutMax = (float)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
bool UCameraStackLimitsInterface::GetApertureLimits(float& OutMin, float& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLimitsInterface.GetApertureLimits"));
    struct Params_GetApertureLimits {
        float OutMin; // 0x0
        float OutMax; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetApertureLimits params{};
    params.OutMin = (float)OutMin;
    params.OutMax = (float)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
