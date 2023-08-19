#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UUI_BP_BrightnessSlider_C;
class UPhoenixTextBlock;
class UPhoenixGameSettings;
#pragma pack(push, 1)
class UUI_BP_Settings_Calibration_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* outro; // 0x330
    UUI_BP_BrightnessSlider_C* brightnessSlider; // 0x338
    UPhoenixTextBlock* calibrationText; // 0x340
    char pad_348[0x10];
    float CalibrationMin; // 0x358
    float CalibrationMax; // 0x35c
    bool changed; // 0x360
    char pad_361[0x3];
    float finalValue; // 0x364
    char pad_368[0x20];
    static UUI_BP_Settings_Calibration_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetCalibration(float CalibrationPercent);
    void Construct();
    void outroBrightnessAnimEvent();
    void ResetCalibration();
    void InitializeAllSettings();
    void BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature(UUI_BP_BrightnessSlider_C* SliderButton, float NewValue);
    void BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature(UUI_BP_BrightnessSlider_C* SliderButton);
    void BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_6_SettingsSliderUnhovered__DelegateSignature(UUI_BP_BrightnessSlider_C* SliderButton);
    void BndEvt__UI_BP_Settings_Calibration_brightnessSlider_K2Node_ComponentBoundEvent_7_SettingsSliderFinished__DelegateSignature(UUI_BP_BrightnessSlider_C* SliderButton, float EndValue);
    void ExecuteUbergraph_UI_BP_Settings_Calibration(int32_t EntryPoint, UUI_BP_BrightnessSlider_C* K2Node_ComponentBoundEvent_SliderButton, float K2Node_ComponentBoundEvent_EndValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_1, float CallFunc_GetBrightness_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_3, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUI_BP_BrightnessSlider_C* K2Node_ComponentBoundEvent_SliderButton_3, float K2Node_ComponentBoundEvent_NewValue, float CallFunc_Lerp_ReturnValue, UUI_BP_BrightnessSlider_C* K2Node_ComponentBoundEvent_SliderButton_2, UUI_BP_BrightnessSlider_C* K2Node_ComponentBoundEvent_SliderButton_1);
    void SliderUnhovered__DelegateSignature();
    void SliderHovered__DelegateSignature();
    void GammaValueChanged__DelegateSignature(float NewGamma);
}; // Size: 0x388
#pragma pack(pop)
