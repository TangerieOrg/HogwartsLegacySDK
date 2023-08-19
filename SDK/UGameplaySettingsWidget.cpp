#include "UFunction.hpp"
#include "UGameplaySettingsWidget.hpp"
#include "UTabPageWidget.hpp"
void UGameplaySettingsWidget::SuppressDifficultySetting() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GameplaySettingsWidget.SuppressDifficultySetting"));
    struct Params_SuppressDifficultySetting {
    }; // Size: 0x0
    Params_SuppressDifficultySetting params{};
    ProcessEvent(func, &params);
}
UGameplaySettingsWidget* UGameplaySettingsWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GameplaySettingsWidget");
    return (UGameplaySettingsWidget*)res;
}
