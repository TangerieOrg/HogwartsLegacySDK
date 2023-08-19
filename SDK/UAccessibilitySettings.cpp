#include "EHighContrastMode.hpp"
#include "UAccessibilitySettings.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
UAccessibilitySettings* UAccessibilitySettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AccessibilitySettings.AccessibilitySettings");
    return (UAccessibilitySettings*)res;
}
void UAccessibilitySettings::HighContrastModeEnabled(EHighContrastMode HighContrastMode, bool& bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AccessibilitySettings.AccessibilitySettings.HighContrastModeEnabled"));
    struct Params_HighContrastModeEnabled {
        EHighContrastMode HighContrastMode; // 0x0
        bool bEnabled; // 0x1
    }; // Size: 0x2
    Params_HighContrastModeEnabled params{};
    params.HighContrastMode = (EHighContrastMode)HighContrastMode;
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bEnabled = params.bEnabled;
}
void UAccessibilitySettings::GetHighContrastMode(int32_t& HighContrastMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AccessibilitySettings.AccessibilitySettings.GetHighContrastMode"));
    struct Params_GetHighContrastMode {
        int32_t HighContrastMode; // 0x0
    }; // Size: 0x4
    Params_GetHighContrastMode params{};
    params.HighContrastMode = (int32_t)HighContrastMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HighContrastMode = params.HighContrastMode;
}
