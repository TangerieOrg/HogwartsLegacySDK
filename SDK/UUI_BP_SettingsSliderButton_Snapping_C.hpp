#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateChildSize.hpp"
#include "FSlateColor.hpp"
#include "UAvaUserWidget.hpp"
class UWidgetAnimation;
class UButton;
class UPhoenixTextBlock;
class UImage;
class USlider;
class UProgressBar;
class UHorizontalBox;
class UWidget;
class APlayerController;
class UUI_BP_SliderDot_C;
class UUMGSequencePlayer;
class UHorizontalBoxSlot;
#pragma pack(push, 1)
class UUI_BP_SettingsSliderButton_Snapping_C : public UAvaUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnHover; // 0x330
    UButton* LeftArrowButton; // 0x338
    UImage* leftArrowImage; // 0x340
    USlider* optionSlider; // 0x348
    UButton* RightArrowButton; // 0x350
    UImage* rightArrowImage; // 0x358
    UPhoenixTextBlock* selectionText; // 0x360
    UProgressBar* sliderFill; // 0x368
    UHorizontalBox* sliderOutline; // 0x370
    UButton* TheButton; // 0x378
    UPhoenixTextBlock* titleSeparator; // 0x380
    UPhoenixTextBlock* TitleText; // 0x388
    char pad_390[0x20];
    FString SliderTitle; // 0x3b0
    char pad_3c0[0x10];
    bool changed; // 0x3d0
    bool Visualise_Steps; // 0x3d1
    bool ShowSelectionText; // 0x3d2
    char pad_3d3[0x1];
    float LastValue; // 0x3d4
    float sliderStepSize; // 0x3d8
    char pad_3dc[0x4];
    UWidget* SliderPoint; // 0x3e0
    char pad_3e8[0x10];
    bool ShowFill; // 0x3f8
    char pad_3f9[0x7];
    FSlateColor ArrowHoverTint; // 0x400
    FSlateColor ArrowNormalTint; // 0x428
    static UUI_BP_SettingsSliderButton_Snapping_C* StaticClass();
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6);
    void StepUp(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue);
    void StepDown(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
    void UpdateSliderValue(float NewVal, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_SliderValToPercent_Percent);
    void VisualiseSliderSteps(int32_t StepsNumber, bool VisualiseSteps, FSlateChildSize K2Node_MakeStruct_SlateChildSize, FSlateChildSize K2Node_MakeStruct_SlateChildSize_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize_2, APlayerController* CallFunc_GetOwningPlayer_ReturnValue, uint8_t CallFunc_MakeLiteralByte_ReturnValue, UUI_BP_SliderDot_C* CallFunc_Create_ReturnValue, APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, UUI_BP_SliderDot_C* CallFunc_Create_ReturnValue_1, APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, UUI_BP_SliderDot_C* CallFunc_Create_ReturnValue_2, uint8_t CallFunc_MakeLiteralByte_ReturnValue_1, int32_t Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2);
    void SliderValToPercent(float SliderVal, float& Percent, float K2Node_MathExpression_ReturnValue);
    void SetSliderVals(float MinVal, float MaxVal, float StepSize, float CurrentVal, float CallFunc_Subtract_FloatFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, float CallFunc_SliderValToPercent_Percent);
    void SetSliderSteps(float NumSteps, int32_t CallFunc_FTrunc_ReturnValue);
    void SetSelectedText();
    void PopulateSliderOptions(float SliderValue, float CallFunc_SliderValToPercent_Percent);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature();
    void BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_SettingsSliderButton_Snapping(int32_t EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, float K2Node_ComponentBoundEvent_Value, FString CallFunc_GetObjectName_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton, float EndValue);
    void SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton, float NewValue);
    void SettingsSliderUnhovered__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton);
    void SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton);
}; // Size: 0x450
#pragma pack(pop)
