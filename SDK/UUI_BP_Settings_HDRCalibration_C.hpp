#pragma once
#include <cstdint>
#include "FFloatRange.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixTextBlock;
class UUI_BP_SettingsSliderButton_C;
class UPhoenixGameSettings;
#pragma pack(push, 1)
class UUI_BP_Settings_HDRCalibration_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* outro; // 0x330
    UPhoenixTextBlock* ScreenTitle; // 0x338
    UUI_BP_SettingsSliderButton_C* Slider_MaxBrightness; // 0x340
    UUI_BP_SettingsSliderButton_C* Slider_MidPoint; // 0x348
    UUI_BP_SettingsSliderButton_C* Slider_MinBrightness; // 0x350
    UUI_BP_SettingsSliderButton_C* Slider_UIBrightness; // 0x358
    UPhoenixTextBlock* Text_Tip1; // 0x360
    UPhoenixTextBlock* Text_Tip2; // 0x368
    UPhoenixTextBlock* Text_Tip3; // 0x370
    UPhoenixTextBlock* Text_Tip4; // 0x378
    FFloatRange BlackPointRange; // 0x380
    FFloatRange WhitePointRange; // 0x390
    FFloatRange MidPointRange; // 0x3a0
    FFloatRange UIBrightnessRange; // 0x3b0
    float SliderExponent; // 0x3c0
    float CurrentMaxBrightness; // 0x3c4
    float CurrentMinBrightness; // 0x3c8
    float CurrentUIBrightness; // 0x3cc
    float CurrentMidBrightness; // 0x3d0
    char pad_3d4[0x4];
    static UUI_BP_Settings_HDRCalibration_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetPostProcessVolume(bool bEnabled);
    void UpdateUI(int32_t CallFunc_FCeil_ReturnValue);
    void UpdateGameSettings(UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_SetHDRToneMapParameters_ReturnValue);
    void Resolve_Slider_Value(float InValue, FFloatRange Range, float Exponent, bool [Min__Max]____[0__1], float& Out, float CallFunc_FClamp_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1);
    void Get_Normalized_Slider_Value(float InValue, FFloatRange Range, float Exponent, float& Out, float K2Node_MathExpression_ReturnValue);
    void SetGetCVAR(FString Name, float NewValue, bool Set, float& OutValue, float CallFunc_GetConsoleVariableAsFloat_Value, bool CallFunc_GetConsoleVariableAsFloat_bExists, bool CallFunc_SetConsoleVariableAsFloat_bExists);
    void BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MaxBrightness_K2Node_ComponentBoundEvent_0_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue);
    void BndEvt__BP_UI_HDRCalibration_TestImage_Slider_MinBrightness_K2Node_ComponentBoundEvent_1_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue);
    void BndEvt__BP_UI_HDRCalibration_TestImage_Slider_UIBrightness_K2Node_ComponentBoundEvent_2_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue);
    void BndEvt__BP_UI_HDRCalibration_TestImage_Slider_OverallBrightness_K2Node_ComponentBoundEvent_4_SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue);
    void ShowHDRCalibrationScreen();
    void HideHDRCalibrationScreen();
    void Destruct();
    void BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_5_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton);
    void BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_6_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton);
    void BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_7_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton);
    void BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_8_SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton);
    void BndEvt__UI_BP_Settings_HDRCalibration_Slider_MaxBrightness_K2Node_ComponentBoundEvent_10_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue);
    void BndEvt__UI_BP_Settings_HDRCalibration_Slider_MinBrightness_K2Node_ComponentBoundEvent_11_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue);
    void BndEvt__UI_BP_Settings_HDRCalibration_Slider_MidPoint_K2Node_ComponentBoundEvent_12_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue);
    void BndEvt__UI_BP_Settings_HDRCalibration_Slider_UIBrightness_K2Node_ComponentBoundEvent_13_SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue);
    void OutroHDRAnimEvent();
    void ResetCalibration();
    void ExecuteUbergraph_UI_BP_Settings_HDRCalibration(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_11, float K2Node_ComponentBoundEvent_NewValue_3, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_10, float K2Node_ComponentBoundEvent_NewValue_2, float CallFunc_Resolve_Slider_Value_Out, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_9, float K2Node_ComponentBoundEvent_NewValue_1, float CallFunc_Resolve_Slider_Value_Out_1, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_8, float K2Node_ComponentBoundEvent_NewValue, float CallFunc_Resolve_Slider_Value_Out_2, float CallFunc_Resolve_Slider_Value_Out_3, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_7, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_6, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_5, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_4, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_3, float K2Node_ComponentBoundEvent_EndValue_3, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_2, float K2Node_ComponentBoundEvent_EndValue_2, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton_1, float K2Node_ComponentBoundEvent_EndValue_1, UUI_BP_SettingsSliderButton_C* K2Node_ComponentBoundEvent_SliderButton, float K2Node_ComponentBoundEvent_EndValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_1);
}; // Size: 0x3d8
#pragma pack(pop)
