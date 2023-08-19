#include "UFunction.hpp"
#include "UPanelWidget.hpp"
#include "UWidget.hpp"
#include "UWidgetSwitcher.hpp"
UWidgetSwitcher* UWidgetSwitcher::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WidgetSwitcher");
    return (UWidgetSwitcher*)res;
}
void UWidgetSwitcher::SetActiveWidgetIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetSwitcher.SetActiveWidgetIndex"));
    struct Params_SetActiveWidgetIndex {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_SetActiveWidgetIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
void UWidgetSwitcher::SetActiveWidget(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetSwitcher.SetActiveWidget"));
    struct Params_SetActiveWidget {
        UWidget* Widget; // 0x0
    }; // Size: 0x8
    Params_SetActiveWidget params{};
    params.Widget = (UWidget*)Widget;
    ProcessEvent(func, &params);
}
int32_t UWidgetSwitcher::GetNumWidgets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetSwitcher.GetNumWidgets"));
    struct Params_GetNumWidgets {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumWidgets params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UWidget* UWidgetSwitcher::GetWidgetAtIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetSwitcher.GetWidgetAtIndex"));
    struct Params_GetWidgetAtIndex {
        int32_t Index; // 0x0
        char pad_4[0x4];
        UWidget* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetWidgetAtIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
int32_t UWidgetSwitcher::GetActiveWidgetIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetSwitcher.GetActiveWidgetIndex"));
    struct Params_GetActiveWidgetIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActiveWidgetIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UWidget* UWidgetSwitcher::GetActiveWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetSwitcher.GetActiveWidget"));
    struct Params_GetActiveWidget {
        UWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveWidget params{};
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
