#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
#include "UUI_InGameIndicatorComponent.hpp"
UUI_InGameIndicatorComponent* UUI_InGameIndicatorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UI_InGameIndicatorComponent");
    return (UUI_InGameIndicatorComponent*)res;
}
void UUI_InGameIndicatorComponent::SetShowPointer(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_InGameIndicatorComponent.SetShowPointer"));
    struct Params_SetShowPointer {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_SetShowPointer params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
bool UUI_InGameIndicatorComponent::GetShowPointer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_InGameIndicatorComponent.GetShowPointer"));
    struct Params_GetShowPointer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowPointer params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
