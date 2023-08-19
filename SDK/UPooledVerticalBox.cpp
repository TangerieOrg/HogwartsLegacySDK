#include "ESlateVisibility.hpp"
#include "FMargin.hpp"
#include "UFunction.hpp"
#include "UPooledVerticalBox.hpp"
#include "UVerticalBox.hpp"
#include "UWidget.hpp"
UPooledVerticalBox* UPooledVerticalBox::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PooledVerticalBox");
    return (UPooledVerticalBox*)res;
}
bool UPooledVerticalBox::IsChildActive(UWidget* ChildWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PooledVerticalBox.IsChildActive"));
    struct Params_IsChildActive {
        UWidget* ChildWidget; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsChildActive params{};
    params.ChildWidget = (UWidget*)ChildWidget;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPooledVerticalBox::SetChildWidgetPool(TArray<UWidget*> ChildWidgets, FMargin Padding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PooledVerticalBox.SetChildWidgetPool"));
    struct Params_SetChildWidgetPool {
        TArray<UWidget*> ChildWidgets; // 0x0
        FMargin Padding; // 0x10
    }; // Size: 0x20
    Params_SetChildWidgetPool params{};
    params.ChildWidgets = (TArray<UWidget*>)ChildWidgets;
    params.Padding = (FMargin)Padding;
    ProcessEvent(func, &params);
}
UWidget* UPooledVerticalBox::GetNextAvailableChild() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PooledVerticalBox.GetNextAvailableChild"));
    struct Params_GetNextAvailableChild {
        UWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetNextAvailableChild params{};
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
void UPooledVerticalBox::SetChildActive(UWidget* ChildWidget, bool IsActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PooledVerticalBox.SetChildActive"));
    struct Params_SetChildActive {
        UWidget* ChildWidget; // 0x0
        bool IsActive; // 0x8
    }; // Size: 0x9
    Params_SetChildActive params{};
    params.ChildWidget = (UWidget*)ChildWidget;
    params.IsActive = (bool)IsActive;
    ProcessEvent(func, &params);
}
bool UPooledVerticalBox::IsChildAvailable(UWidget* ChildWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PooledVerticalBox.IsChildAvailable"));
    struct Params_IsChildAvailable {
        UWidget* ChildWidget; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsChildAvailable params{};
    params.ChildWidget = (UWidget*)ChildWidget;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
