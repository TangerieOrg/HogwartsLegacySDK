#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "USettingsSliderButtonBase.hpp"
class UWidgetAnimation;
class USlider;
class UUMGSequencePlayer;
class UPhoenixImage;
class UButton;
class UImage;
class UProgressBar;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_BrightnessSlider_C : public USettingsSliderButtonBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnHover; // 0x330
    UPhoenixImage* BackGorund; // 0x338
    UImage* Border; // 0x340
    UImage* BorderMotiveL; // 0x348
    UImage* BorderMotiveR; // 0x350
    USlider* optionSlider; // 0x358
    UProgressBar* sliderFill; // 0x360
    UButton* TheButton; // 0x368
    UPhoenixTextBlock* TitleText; // 0x370
    char pad_378[0x20];
    FString SliderTitle; // 0x398
    char pad_3a8[0x10];
    bool changed; // 0x3b8
    char pad_3b9[0x3];
    float LastValue; // 0x3bc
    bool ShowSelectionText; // 0x3c0
    char pad_3c1[0x3];
    float sliderStepSize; // 0x3c4
    char pad_3c8[0x10];
    bool HaveNumberSpace; // 0x3d8
    char pad_3d9[0x3];
    float NumberSpaceSizeX; // 0x3dc
    float DividerLeftPadding; // 0x3e0
    bool MouseUsesStep; // 0x3e4
    char pad_3e5[0x3];
    static UUI_BP_BrightnessSlider_C* StaticClass();
    void StepUp(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue);
    void StepDown(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
    void OnSliderChanged(float NewVal, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_SliderValToPercent_Percent);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SliderValToPercent(float SliderVal, float& Percent, float K2Node_MathExpression_ReturnValue);
    void SetSliderVals(float MinVal, float MaxVal, float StepSize, float CurrentVal, float CallFunc_SliderValToPercent_Percent);
    void SetSliderSteps(float NumSteps);
    void PopulateSliderOptions(float SliderValue, float CallFunc_SliderValToPercent_Percent);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_BrightnessSlider(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, float K2Node_ComponentBoundEvent_Value, FString CallFunc_GetObjectName_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void SettingsSliderFinished__DelegateSignature(UUI_BP_BrightnessSlider_C* SliderButton, float EndValue);
    void SettingsSliderChanged__DelegateSignature(UUI_BP_BrightnessSlider_C* SliderButton, float NewValue);
    void SettingsSliderUnhovered__DelegateSignature(UUI_BP_BrightnessSlider_C* SliderButton);
    void SettingsSliderHovered__DelegateSignature(UUI_BP_BrightnessSlider_C* SliderButton);
}; // Size: 0x3e8
#pragma pack(pop)
