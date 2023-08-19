#include "UFunction.hpp"
#include "USaveLoadSettingsWidget.hpp"
#include "USettingsTabWidget.hpp"
USaveLoadSettingsWidget* USaveLoadSettingsWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SaveLoadSettingsWidget");
    return (USaveLoadSettingsWidget*)res;
}
bool USaveLoadSettingsWidget::RestartFromLastSave() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveLoadSettingsWidget.RestartFromLastSave"));
    struct Params_RestartFromLastSave {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RestartFromLastSave params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USaveLoadSettingsWidget::QuitGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveLoadSettingsWidget.QuitGame"));
    struct Params_QuitGame {
    }; // Size: 0x0
    Params_QuitGame params{};
    ProcessEvent(func, &params);
}
void USaveLoadSettingsWidget::ExitToMain() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveLoadSettingsWidget.ExitToMain"));
    struct Params_ExitToMain {
    }; // Size: 0x0
    Params_ExitToMain params{};
    ProcessEvent(func, &params);
}
void USaveLoadSettingsWidget::ActivateHoverdrone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveLoadSettingsWidget.ActivateHoverdrone"));
    struct Params_ActivateHoverdrone {
    }; // Size: 0x0
    Params_ActivateHoverdrone params{};
    ProcessEvent(func, &params);
}
