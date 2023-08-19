#include "ELastCameraInput.hpp"
#include "FVector2D.hpp"
#include "UCameraStackInput.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCameraStackInput* UCameraStackInput::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackInput");
    return (UCameraStackInput*)res;
}
bool UCameraStackInput::HasAnyLookInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.HasAnyLookInput"));
    struct Params_HasAnyLookInput {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasAnyLookInput params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCameraStackInput::IsLooking() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.IsLooking"));
    struct Params_IsLooking {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLooking params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ELastCameraInput UCameraStackInput::GetLastCameraInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.GetLastCameraInput"));
    struct Params_GetLastCameraInput {
        ELastCameraInput ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLastCameraInput params{};
    ProcessEvent(func, &params);
    return (ELastCameraInput)params.ReturnValue;
}
bool UCameraStackInput::HasAnyMouseLookInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.HasAnyMouseLookInput"));
    struct Params_HasAnyMouseLookInput {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasAnyMouseLookInput params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UCameraStackInput::GetZoom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.GetZoom"));
    struct Params_GetZoom {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetZoom params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector2D UCameraStackInput::GetWalk(bool bInvertX, bool bInvertY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.GetWalk"));
    struct Params_GetWalk {
        bool bInvertX; // 0x0
        bool bInvertY; // 0x1
        char pad_2[0x2];
        FVector2D ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetWalk params{};
    params.bInvertX = (bool)bInvertX;
    params.bInvertY = (bool)bInvertY;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector2D UCameraStackInput::GetTilt() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.GetTilt"));
    struct Params_GetTilt {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTilt params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float UCameraStackInput::GetRoll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.GetRoll"));
    struct Params_GetRoll {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRoll params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UCameraStackInput::GetResetPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.GetResetPressed"));
    struct Params_GetResetPressed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetResetPressed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCameraStackInput::GetQuickTurnPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.GetQuickTurnPressed"));
    struct Params_GetQuickTurnPressed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetQuickTurnPressed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UCameraStackInput::GetPedestal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.GetPedestal"));
    struct Params_GetPedestal {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPedestal params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector2D UCameraStackInput::GetMouseLook(bool bInvertX, bool bInvertY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.GetMouseLook"));
    struct Params_GetMouseLook {
        bool bInvertX; // 0x0
        bool bInvertY; // 0x1
        char pad_2[0x2];
        FVector2D ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetMouseLook params{};
    params.bInvertX = (bool)bInvertX;
    params.bInvertY = (bool)bInvertY;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector2D UCameraStackInput::GetLook(bool bInvertX, bool bInvertY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.GetLook"));
    struct Params_GetLook {
        bool bInvertX; // 0x0
        bool bInvertY; // 0x1
        char pad_2[0x2];
        FVector2D ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetLook params{};
    params.bInvertX = (bool)bInvertX;
    params.bInvertY = (bool)bInvertY;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float UCameraStackInput::GetFocusDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.GetFocusDistance"));
    struct Params_GetFocusDistance {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFocusDistance params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector2D UCameraStackInput::GetDollyAndTruck() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInput.GetDollyAndTruck"));
    struct Params_GetDollyAndTruck {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDollyAndTruck params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
