#include "ACameraStackActor.hpp"
#include "FCameraData.hpp"
#include "UCameraStack.hpp"
#include "UCameraStackBehavior.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
float UCameraStackBehavior::GetSecondsActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehavior.GetSecondsActive"));
    struct Params_GetSecondsActive {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSecondsActive params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UCameraStackBehavior* UCameraStackBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehavior");
    return (UCameraStackBehavior*)res;
}
void UCameraStackBehavior::SetPaused(bool bInPaused) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehavior.SetPaused"));
    struct Params_SetPaused {
        bool bInPaused; // 0x0
    }; // Size: 0x1
    Params_SetPaused params{};
    params.bInPaused = (bool)bInPaused;
    ProcessEvent(func, &params);
}
void UCameraStackBehavior::SetDisabled(bool bInDisabled, bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehavior.SetDisabled"));
    struct Params_SetDisabled {
        bool bInDisabled; // 0x0
        bool bForce; // 0x1
    }; // Size: 0x2
    Params_SetDisabled params{};
    params.bInDisabled = (bool)bInDisabled;
    params.bForce = (bool)bForce;
    ProcessEvent(func, &params);
}
bool UCameraStackBehavior::GetPreviousValues(FCameraData& OutData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehavior.GetPreviousValues"));
    struct Params_GetPreviousValues {
        FCameraData OutData; // 0x0
        bool ReturnValue; // 0xb0
    }; // Size: 0xb1
    Params_GetPreviousValues params{};
    params.OutData = (FCameraData)OutData;
    ProcessEvent(func, &params);
    OutData = params.OutData;
    return (bool)params.ReturnValue;
}
bool UCameraStackBehavior::IsPaused() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehavior.IsPaused"));
    struct Params_IsPaused {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPaused params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCameraStackBehavior::IsDisabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehavior.IsDisabled"));
    struct Params_IsDisabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDisabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCameraStackBehavior::IsActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehavior.IsActive"));
    struct Params_IsActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ACameraStackActor* UCameraStackBehavior::GetOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehavior.GetOwner"));
    struct Params_GetOwner {
        ACameraStackActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwner params{};
    ProcessEvent(func, &params);
    return (ACameraStackActor*)params.ReturnValue;
}
UCameraStack* UCameraStackBehavior::GetBehaviorList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehavior.GetBehaviorList"));
    struct Params_GetBehaviorList {
        UCameraStack* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBehaviorList params{};
    ProcessEvent(func, &params);
    return (UCameraStack*)params.ReturnValue;
}
bool UCameraStackBehavior::GetAllPreviousValues(FCameraData& OutData, bool bInUseUnblendedStackValues) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehavior.GetAllPreviousValues"));
    struct Params_GetAllPreviousValues {
        FCameraData OutData; // 0x0
        bool bInUseUnblendedStackValues; // 0xb0
        bool ReturnValue; // 0xb1
    }; // Size: 0xb2
    Params_GetAllPreviousValues params{};
    params.OutData = (FCameraData)OutData;
    params.bInUseUnblendedStackValues = (bool)bInUseUnblendedStackValues;
    ProcessEvent(func, &params);
    OutData = params.OutData;
    return (bool)params.ReturnValue;
}
