#include "UFunction.hpp"
#include "USettingsTabWidget.hpp"
#include "UTabPageWidget.hpp"
void USettingsTabWidget::InitForSettingsLocation(bool IsInFieldGuide) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SettingsTabWidget.InitForSettingsLocation"));
    struct Params_InitForSettingsLocation {
        bool IsInFieldGuide; // 0x0
    }; // Size: 0x1
    Params_InitForSettingsLocation params{};
    params.IsInFieldGuide = (bool)IsInFieldGuide;
    ProcessEvent(func, &params);
}
USettingsTabWidget* USettingsTabWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SettingsTabWidget");
    return (USettingsTabWidget*)res;
}
