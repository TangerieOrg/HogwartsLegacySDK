#include "EInstallManagerState.hpp"
#include "UFunction.hpp"
#include "UInstallManagerProgressBar.hpp"
#include "UUserWidget.hpp"
UInstallManagerProgressBar* UInstallManagerProgressBar::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InstallManagerProgressBar");
    return (UInstallManagerProgressBar*)res;
}
void UInstallManagerProgressBar::StartPendingLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManagerProgressBar.StartPendingLoad"));
    struct Params_StartPendingLoad {
    }; // Size: 0x0
    Params_StartPendingLoad params{};
    ProcessEvent(func, &params);
}
FString UInstallManagerProgressBar::GetInstallMessageText() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManagerProgressBar.GetInstallMessageText"));
    struct Params_GetInstallMessageText {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetInstallMessageText params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
float UInstallManagerProgressBar::GetInstallPercentage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManagerProgressBar.GetInstallPercentage"));
    struct Params_GetInstallPercentage {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetInstallPercentage params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EInstallManagerState UInstallManagerProgressBar::GetInstallManagerState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstallManagerProgressBar.GetInstallManagerState"));
    struct Params_GetInstallManagerState {
        EInstallManagerState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInstallManagerState params{};
    ProcessEvent(func, &params);
    return (EInstallManagerState)params.ReturnValue;
}
