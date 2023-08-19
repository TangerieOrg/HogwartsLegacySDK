#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_BrightnessSlider_C.hpp"
#include "UUI_BP_Settings_Calibration_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_Settings_Calibration_C::outroBrightnessAnimEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.outroBrightnessAnimEvent"));
    struct Params_outroBrightnessAnimEvent {
    }; // Size: 0x0
    Params_outroBrightnessAnimEvent params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Calibration_C::GammaValueChanged__DelegateSignature(float NewGamma) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.GammaValueChanged__DelegateSignature"));
    struct Params_GammaValueChanged__DelegateSignature {
        float NewGamma; // 0x0
    }; // Size: 0x4
    Params_GammaValueChanged__DelegateSignature params{};
    params.NewGamma = (float)NewGamma;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Calibration_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
UUI_BP_Settings_Calibration_C* UUI_BP_Settings_Calibration_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C");
    return (UUI_BP_Settings_Calibration_C*)res;
}
TArray<FString> UUI_BP_Settings_Calibration_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_Settings_Calibration_C::SetCalibration(float CalibrationPercent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.SetCalibration"));
    struct Params_SetCalibration {
        float CalibrationPercent; // 0x0
    }; // Size: 0x4
    Params_SetCalibration params{};
    params.CalibrationPercent = (float)CalibrationPercent;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Calibration_C::BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature(UUI_BP_BrightnessSlider_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature {
        UUI_BP_BrightnessSlider_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_BrightnessSlider_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Calibration_C::ResetCalibration() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.ResetCalibration"));
    struct Params_ResetCalibration {
    }; // Size: 0x0
    Params_ResetCalibration params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Calibration_C::InitializeAllSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.InitializeAllSettings"));
    struct Params_InitializeAllSettings {
    }; // Size: 0x0
    Params_InitializeAllSettings params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Calibration_C::BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature(UUI_BP_BrightnessSlider_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature {
        UUI_BP_BrightnessSlider_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_BrightnessSlider_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Calibration_C::BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_6_SettingsSliderUnhovered__DelegateSignature(UUI_BP_BrightnessSlider_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_6_SettingsSliderUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_6_SettingsSliderUnhovered__DelegateSignature {
        UUI_BP_BrightnessSlider_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_6_SettingsSliderUnhovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_BrightnessSlider_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Calibration_C::BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_7_SettingsSliderFinished__DelegateSignature(UUI_BP_BrightnessSlider_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_7_SettingsSliderFinished__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_7_SettingsSliderFinished__DelegateSignature {
        UUI_BP_BrightnessSlider_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_7_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_BrightnessSlider_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Calibration_C::ExecuteUbergraph_UI_BP_Settings_Calibration(int32_t EntryPoint, UUI_BP_BrightnessSlider_C* K2Node_ComponentBoundEvent_SliderButton, float K2Node_ComponentBoundEvent_EndValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_1, float CallFunc_GetBrightness_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_3, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUI_BP_BrightnessSlider_C* K2Node_ComponentBoundEvent_SliderButton_3, float K2Node_ComponentBoundEvent_NewValue, float CallFunc_Lerp_ReturnValue, UUI_BP_BrightnessSlider_C* K2Node_ComponentBoundEvent_SliderButton_2, UUI_BP_BrightnessSlider_C* K2Node_ComponentBoundEvent_SliderButton_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.ExecuteUbergraph_UI_BP_Settings_Calibration"));
    struct Params_ExecuteUbergraph_UI_BP_Settings_Calibration {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUI_BP_BrightnessSlider_C* K2Node_ComponentBoundEvent_SliderButton; // 0x8
        float K2Node_ComponentBoundEvent_EndValue; // 0x10
        bool Temp_bool_Has_Been_Initd_Variable; // 0x14
        bool Temp_bool_IsClosed_Variable; // 0x15
        char pad_16[0x2];
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x18
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_1; // 0x20
        float CallFunc_GetBrightness_ReturnValue; // 0x28
        char pad_2c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x30
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_2; // 0x38
        float CallFunc_NormalizeToRange_ReturnValue; // 0x40
        char pad_44[0x4];
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_3; // 0x48
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x50
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x54
        UUI_BP_BrightnessSlider_C* K2Node_ComponentBoundEvent_SliderButton_3; // 0x58
        float K2Node_ComponentBoundEvent_NewValue; // 0x60
        float CallFunc_Lerp_ReturnValue; // 0x64
        UUI_BP_BrightnessSlider_C* K2Node_ComponentBoundEvent_SliderButton_2; // 0x68
        UUI_BP_BrightnessSlider_C* K2Node_ComponentBoundEvent_SliderButton_1; // 0x70
    }; // Size: 0x78
    Params_ExecuteUbergraph_UI_BP_Settings_Calibration params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_ComponentBoundEvent_SliderButton = (UUI_BP_BrightnessSlider_C*)K2Node_ComponentBoundEvent_SliderButton;
    params.K2Node_ComponentBoundEvent_EndValue = (float)K2Node_ComponentBoundEvent_EndValue;
    params.Temp_bool_Has_Been_Initd_Variable = (bool)Temp_bool_Has_Been_Initd_Variable;
    params.Temp_bool_IsClosed_Variable = (bool)Temp_bool_IsClosed_Variable;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue_1 = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue_1;
    params.CallFunc_GetBrightness_ReturnValue = (float)CallFunc_GetBrightness_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue_2 = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue_2;
    params.CallFunc_NormalizeToRange_ReturnValue = (float)CallFunc_NormalizeToRange_ReturnValue;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue_3 = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue_3;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.K2Node_ComponentBoundEvent_SliderButton_3 = (UUI_BP_BrightnessSlider_C*)K2Node_ComponentBoundEvent_SliderButton_3;
    params.K2Node_ComponentBoundEvent_NewValue = (float)K2Node_ComponentBoundEvent_NewValue;
    params.CallFunc_Lerp_ReturnValue = (float)CallFunc_Lerp_ReturnValue;
    params.K2Node_ComponentBoundEvent_SliderButton_2 = (UUI_BP_BrightnessSlider_C*)K2Node_ComponentBoundEvent_SliderButton_2;
    params.K2Node_ComponentBoundEvent_SliderButton_1 = (UUI_BP_BrightnessSlider_C*)K2Node_ComponentBoundEvent_SliderButton_1;
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Calibration_C::SliderUnhovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.SliderUnhovered__DelegateSignature"));
    struct Params_SliderUnhovered__DelegateSignature {
    }; // Size: 0x0
    Params_SliderUnhovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Settings_Calibration_C::SliderHovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_Settings_Calibration.UI_BP_Settings_Calibration_C.SliderHovered__DelegateSignature"));
    struct Params_SliderHovered__DelegateSignature {
    }; // Size: 0x0
    Params_SliderHovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
