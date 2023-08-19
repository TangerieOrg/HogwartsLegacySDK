#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UTargetComponent.hpp"
bool UTargetComponent::IsEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetComponent.IsEnabled"));
    struct Params_IsEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UTargetComponent* UTargetComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TargetComponent");
    return (UTargetComponent*)res;
}
void UTargetComponent::SetSendTargetPriority(uint8_t InPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetComponent.SetSendTargetPriority"));
    struct Params_SetSendTargetPriority {
        uint8_t InPriority; // 0x0
    }; // Size: 0x1
    Params_SetSendTargetPriority params{};
    params.InPriority = (uint8_t)InPriority;
    ProcessEvent(func, &params);
}
void UTargetComponent::SetEnabled(bool bInEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetComponent.SetEnabled"));
    struct Params_SetEnabled {
        bool bInEnabled; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.bInEnabled = (bool)bInEnabled;
    ProcessEvent(func, &params);
}
uint8_t UTargetComponent::GetSendTargetPriority() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetComponent.GetSendTargetPriority"));
    struct Params_GetSendTargetPriority {
        uint8_t ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSendTargetPriority params{};
    ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
