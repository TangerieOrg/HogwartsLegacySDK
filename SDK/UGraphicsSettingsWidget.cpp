#include "UFunction.hpp"
#include "UGraphicsSettingsWidget.hpp"
#include "USettingsTabWidget.hpp"
UGraphicsSettingsWidget* UGraphicsSettingsWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GraphicsSettingsWidget");
    return (UGraphicsSettingsWidget*)res;
}
void UGraphicsSettingsWidget::SyncDisplaySettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GraphicsSettingsWidget.SyncDisplaySettings"));
    struct Params_SyncDisplaySettings {
    }; // Size: 0x0
    Params_SyncDisplaySettings params{};
    ProcessEvent(func, &params);
}
void UGraphicsSettingsWidget::RevertVideoChanges() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GraphicsSettingsWidget.RevertVideoChanges"));
    struct Params_RevertVideoChanges {
    }; // Size: 0x0
    Params_RevertVideoChanges params{};
    ProcessEvent(func, &params);
}
void UGraphicsSettingsWidget::AcceptVideoChanges() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GraphicsSettingsWidget.AcceptVideoChanges"));
    struct Params_AcceptVideoChanges {
    }; // Size: 0x0
    Params_AcceptVideoChanges params{};
    ProcessEvent(func, &params);
}
