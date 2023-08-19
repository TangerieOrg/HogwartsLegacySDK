#include "ACameraStackManager.hpp"
#include "APhoenixCameraStackManager.hpp"
#include "UFunction.hpp"
void APhoenixCameraStackManager::EnableForceFadeAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackManager.EnableForceFadeAll"));
    struct Params_EnableForceFadeAll {
    }; // Size: 0x0
    Params_EnableForceFadeAll params{};
    ProcessEvent(func, &params);
}
APhoenixCameraStackManager* APhoenixCameraStackManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixCameraStackManager");
    return (APhoenixCameraStackManager*)res;
}
void APhoenixCameraStackManager::StartFadeToZeroOpacity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackManager.StartFadeToZeroOpacity"));
    struct Params_StartFadeToZeroOpacity {
    }; // Size: 0x0
    Params_StartFadeToZeroOpacity params{};
    ProcessEvent(func, &params);
}
void APhoenixCameraStackManager::FinishFadeToZeroOpacity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackManager.FinishFadeToZeroOpacity"));
    struct Params_FinishFadeToZeroOpacity {
    }; // Size: 0x0
    Params_FinishFadeToZeroOpacity params{};
    ProcessEvent(func, &params);
}
void APhoenixCameraStackManager::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackManager.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
void APhoenixCameraStackManager::DisableForceFadeAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackManager.DisableForceFadeAll"));
    struct Params_DisableForceFadeAll {
    }; // Size: 0x0
    Params_DisableForceFadeAll params{};
    ProcessEvent(func, &params);
}
