#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UHorizontalBoxSlot.hpp"
#include "UImage.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UProgressBar.hpp"
#include "USettingsSliderButtonBase.hpp"
#include "USlider.hpp"
#include "USpacer.hpp"
#include "UUI_BP_SettingsSliderButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_SettingsSliderButton_C* UUI_BP_SettingsSliderButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C");
    return (UUI_BP_SettingsSliderButton_C*)res;
}
void UUI_BP_SettingsSliderButton_C::StepUp(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.StepUp"));
    struct Params_StepUp {
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x0
        float CallFunc_FMin_ReturnValue; // 0x4
    }; // Size: 0x8
    Params_StepUp params{};
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_FMin_ReturnValue = (float)CallFunc_FMin_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::SettingsSliderUnhovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SettingsSliderUnhovered__DelegateSignature"));
    struct Params_SettingsSliderUnhovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_SettingsSliderUnhovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature"));
    struct Params_BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature {
        float Value; // 0x0
    }; // Size: 0x4
    Params_BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::StepDown(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.StepDown"));
    struct Params_StepDown {
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x0
        float CallFunc_FMax_ReturnValue; // 0x4
    }; // Size: 0x8
    Params_StepDown params{};
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_FMax_ReturnValue = (float)CallFunc_FMax_ReturnValue;
    ProcessEvent(func, &params);
}
bool UUI_BP_SettingsSliderButton_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x5
        bool CallFunc_BooleanOR_ReturnValue; // 0x6
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x7
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x8
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x9
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0xa
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0xb
    }; // Size: 0xc
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_SettingsSliderButton_C::OnSliderChanged(float NewVal, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_SliderValToPercent_Percent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.OnSliderChanged"));
    struct Params_OnSliderChanged {
        float NewVal; // 0x0
        bool CallFunc_NotEqual_FloatFloat_ReturnValue; // 0x4
        char pad_5[0x3];
        float CallFunc_SliderValToPercent_Percent; // 0x8
    }; // Size: 0xc
    Params_OnSliderChanged params{};
    params.NewVal = (float)NewVal;
    params.CallFunc_NotEqual_FloatFloat_ReturnValue = (bool)CallFunc_NotEqual_FloatFloat_ReturnValue;
    params.CallFunc_SliderValToPercent_Percent = (float)CallFunc_SliderValToPercent_Percent;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::SetNumberText() {}
TArray<FString> UUI_BP_SettingsSliderButton_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_SettingsSliderButton_C::BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::SliderValToPercent(float SliderVal, float& Percent, float K2Node_MathExpression_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SliderValToPercent"));
    struct Params_SliderValToPercent {
        float SliderVal; // 0x0
        float Percent; // 0x4
        float K2Node_MathExpression_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_SliderValToPercent params{};
    params.SliderVal = (float)SliderVal;
    params.Percent = (float)Percent;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    ProcessEvent(func, &params);
    Percent = params.Percent;
}
void UUI_BP_SettingsSliderButton_C::SetSliderVals(float MinVal, float MaxVal, float StepSize, float CurrentVal, float CallFunc_SliderValToPercent_Percent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SetSliderVals"));
    struct Params_SetSliderVals {
        float MinVal; // 0x0
        float MaxVal; // 0x4
        float StepSize; // 0x8
        float CurrentVal; // 0xc
        float CallFunc_SliderValToPercent_Percent; // 0x10
    }; // Size: 0x14
    Params_SetSliderVals params{};
    params.MinVal = (float)MinVal;
    params.MaxVal = (float)MaxVal;
    params.StepSize = (float)StepSize;
    params.CurrentVal = (float)CurrentVal;
    params.CallFunc_SliderValToPercent_Percent = (float)CallFunc_SliderValToPercent_Percent;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::SetSliderSteps(float NumSteps) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SetSliderSteps"));
    struct Params_SetSliderSteps {
        float NumSteps; // 0x0
    }; // Size: 0x4
    Params_SetSliderSteps params{};
    params.NumSteps = (float)NumSteps;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::SetSelectedText() {}
void UUI_BP_SettingsSliderButton_C::PopulateSliderOptions(float SliderValue, float CallFunc_SliderValToPercent_Percent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.PopulateSliderOptions"));
    struct Params_PopulateSliderOptions {
        float SliderValue; // 0x0
        float CallFunc_SliderValToPercent_Percent; // 0x4
    }; // Size: 0x8
    Params_PopulateSliderOptions params{};
    params.SliderValue = (float)SliderValue;
    params.CallFunc_SliderValToPercent_Percent = (float)CallFunc_SliderValToPercent_Percent;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_SettingsSliderButton_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::ExecuteUbergraph_UI_BP_SettingsSliderButton(int32_t EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, float K2Node_ComponentBoundEvent_Value, FString CallFunc_GetObjectName_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, ESlateVisibility K2Node_Select_Default, FVector2D CallFunc_MakeVector2D_ReturnValue, ESlateVisibility K2Node_Select_Default_1, UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, FMargin K2Node_MakeStruct_Margin) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.ExecuteUbergraph_UI_BP_SettingsSliderButton"));
    struct Params_ExecuteUbergraph_UI_BP_SettingsSliderButton {
        int32_t EntryPoint; // 0x0
        bool Temp_bool_Variable; // 0x4
        ESlateVisibility Temp_byte_Variable; // 0x5
        ESlateVisibility Temp_byte_Variable_1; // 0x6
        bool Temp_bool_Variable_1; // 0x7
        ESlateVisibility Temp_byte_Variable_2; // 0x8
        ESlateVisibility Temp_byte_Variable_3; // 0x9
        bool K2Node_Event_IsDesignTime; // 0xa
        char pad_b[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0xc
        float K2Node_ComponentBoundEvent_Value; // 0x10
        char pad_14[0x4];
        FString CallFunc_GetObjectName_ReturnValue; // 0x18
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x28
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x30
        ESlateVisibility K2Node_Select_Default; // 0x38
        char pad_39[0x3];
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x3c
        ESlateVisibility K2Node_Select_Default_1; // 0x44
        char pad_45[0x3];
        UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue; // 0x48
        FMargin K2Node_MakeStruct_Margin; // 0x50
    }; // Size: 0x60
    Params_ExecuteUbergraph_UI_BP_SettingsSliderButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.K2Node_ComponentBoundEvent_Value = (float)K2Node_ComponentBoundEvent_Value;
    params.CallFunc_GetObjectName_ReturnValue = (FString)CallFunc_GetObjectName_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    params.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = (UHorizontalBoxSlot*)CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SettingsSliderFinished__DelegateSignature"));
    struct Params_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SettingsSliderChanged__DelegateSignature"));
    struct Params_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_C::SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton.UI_BP_SettingsSliderButton_C.SettingsSliderHovered__DelegateSignature"));
    struct Params_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_C*)SliderButton;
    ProcessEvent(func, &params);
}
