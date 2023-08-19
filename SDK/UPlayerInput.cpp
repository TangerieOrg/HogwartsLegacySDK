#include "FKey.hpp"
#include "FKeyBind.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPlayerInput.hpp"
void UPlayerInput::SetBind(FName BindName, FString Command) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerInput.SetBind"));
    struct Params_SetBind {
        FName BindName; // 0x0
        FString Command; // 0x8
    }; // Size: 0x18
    Params_SetBind params{};
    params.BindName = (FName)BindName;
    params.Command = (FString)Command;
    ProcessEvent(func, &params);
}
UPlayerInput* UPlayerInput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlayerInput");
    return (UPlayerInput*)res;
}
void UPlayerInput::SetMouseSensitivity(float Sensitivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerInput.SetMouseSensitivity"));
    struct Params_SetMouseSensitivity {
        float Sensitivity; // 0x0
    }; // Size: 0x4
    Params_SetMouseSensitivity params{};
    params.Sensitivity = (float)Sensitivity;
    ProcessEvent(func, &params);
}
void UPlayerInput::InvertAxisKey(FKey AxisKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerInput.InvertAxisKey"));
    struct Params_InvertAxisKey {
        FKey AxisKey; // 0x0
    }; // Size: 0x18
    Params_InvertAxisKey params{};
    params.AxisKey = (FKey)AxisKey;
    ProcessEvent(func, &params);
}
void UPlayerInput::InvertAxis(FName AxisName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerInput.InvertAxis"));
    struct Params_InvertAxis {
        FName AxisName; // 0x0
    }; // Size: 0x8
    Params_InvertAxis params{};
    params.AxisName = (FName)AxisName;
    ProcessEvent(func, &params);
}
void UPlayerInput::ClearSmoothing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerInput.ClearSmoothing"));
    struct Params_ClearSmoothing {
    }; // Size: 0x0
    Params_ClearSmoothing params{};
    ProcessEvent(func, &params);
}
