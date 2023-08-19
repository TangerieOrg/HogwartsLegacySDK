#include "APlayerController.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateChildSize.hpp"
#include "FSlateColor.hpp"
#include "UAvaUserWidget.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UHorizontalBoxSlot.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UProgressBar.hpp"
#include "USlider.hpp"
#include "UUI_BP_SettingsSliderButton_Snapping_C.hpp"
#include "UUI_BP_SliderDot_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_SettingsSliderButton_Snapping_C::VisualiseSliderSteps(int32_t StepsNumber, bool VisualiseSteps, FSlateChildSize K2Node_MakeStruct_SlateChildSize, FSlateChildSize K2Node_MakeStruct_SlateChildSize_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize_2, APlayerController* CallFunc_GetOwningPlayer_ReturnValue, uint8_t CallFunc_MakeLiteralByte_ReturnValue, UUI_BP_SliderDot_C* CallFunc_Create_ReturnValue, APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, UUI_BP_SliderDot_C* CallFunc_Create_ReturnValue_1, APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, UUI_BP_SliderDot_C* CallFunc_Create_ReturnValue_2, uint8_t CallFunc_MakeLiteralByte_ReturnValue_1, int32_t Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.VisualiseSliderSteps"));
    struct Params_VisualiseSliderSteps {
        int32_t StepsNumber; // 0x0
        bool VisualiseSteps; // 0x4
        char pad_5[0x3];
        FSlateChildSize K2Node_MakeStruct_SlateChildSize; // 0x8
        FSlateChildSize K2Node_MakeStruct_SlateChildSize_1; // 0x10
        FSlateChildSize K2Node_MakeStruct_SlateChildSize_2; // 0x18
        APlayerController* CallFunc_GetOwningPlayer_ReturnValue; // 0x20
        uint8_t CallFunc_MakeLiteralByte_ReturnValue; // 0x28
        char pad_29[0x7];
        UUI_BP_SliderDot_C* CallFunc_Create_ReturnValue; // 0x30
        APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1; // 0x38
        UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue; // 0x40
        UUI_BP_SliderDot_C* CallFunc_Create_ReturnValue_1; // 0x48
        APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2; // 0x50
        UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1; // 0x58
        UUI_BP_SliderDot_C* CallFunc_Create_ReturnValue_2; // 0x60
        uint8_t CallFunc_MakeLiteralByte_ReturnValue_1; // 0x68
        char pad_69[0x3];
        int32_t Temp_int_Variable; // 0x6c
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x70
        char pad_71[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x74
        UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2; // 0x78
    }; // Size: 0x80
    Params_VisualiseSliderSteps params{};
    params.StepsNumber = (int32_t)StepsNumber;
    params.VisualiseSteps = (bool)VisualiseSteps;
    params.K2Node_MakeStruct_SlateChildSize = (FSlateChildSize)K2Node_MakeStruct_SlateChildSize;
    params.K2Node_MakeStruct_SlateChildSize_1 = (FSlateChildSize)K2Node_MakeStruct_SlateChildSize_1;
    params.K2Node_MakeStruct_SlateChildSize_2 = (FSlateChildSize)K2Node_MakeStruct_SlateChildSize_2;
    params.CallFunc_GetOwningPlayer_ReturnValue = (APlayerController*)CallFunc_GetOwningPlayer_ReturnValue;
    params.CallFunc_MakeLiteralByte_ReturnValue = (uint8_t)CallFunc_MakeLiteralByte_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_SliderDot_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_GetOwningPlayer_ReturnValue_1 = (APlayerController*)CallFunc_GetOwningPlayer_ReturnValue_1;
    params.CallFunc_AddChildToHorizontalBox_ReturnValue = (UHorizontalBoxSlot*)CallFunc_AddChildToHorizontalBox_ReturnValue;
    params.CallFunc_Create_ReturnValue_1 = (UUI_BP_SliderDot_C*)CallFunc_Create_ReturnValue_1;
    params.CallFunc_GetOwningPlayer_ReturnValue_2 = (APlayerController*)CallFunc_GetOwningPlayer_ReturnValue_2;
    params.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = (UHorizontalBoxSlot*)CallFunc_AddChildToHorizontalBox_ReturnValue_1;
    params.CallFunc_Create_ReturnValue_2 = (UUI_BP_SliderDot_C*)CallFunc_Create_ReturnValue_2;
    params.CallFunc_MakeLiteralByte_ReturnValue_1 = (uint8_t)CallFunc_MakeLiteralByte_ReturnValue_1;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_AddChildToHorizontalBox_ReturnValue_2 = (UHorizontalBoxSlot*)CallFunc_AddChildToHorizontalBox_ReturnValue_2;
    ProcessEvent(func, &params);
}
UUI_BP_SettingsSliderButton_Snapping_C* UUI_BP_SettingsSliderButton_Snapping_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C");
    return (UUI_BP_SettingsSliderButton_Snapping_C*)res;
}
bool UUI_BP_SettingsSliderButton_Snapping_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BlueprintOnUMGInputAction"));
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
void UUI_BP_SettingsSliderButton_Snapping_C::StepDown(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.StepDown"));
    struct Params_StepDown {
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x0
        float CallFunc_FMax_ReturnValue; // 0x4
    }; // Size: 0x8
    Params_StepDown params{};
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_FMax_ReturnValue = (float)CallFunc_FMax_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::StepUp(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.StepUp"));
    struct Params_StepUp {
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x0
        float CallFunc_FMin_ReturnValue; // 0x4
    }; // Size: 0x8
    Params_StepUp params{};
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_FMin_ReturnValue = (float)CallFunc_FMin_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::UpdateSliderValue(float NewVal, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_SliderValToPercent_Percent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.UpdateSliderValue"));
    struct Params_UpdateSliderValue {
        float NewVal; // 0x0
        bool CallFunc_NotEqual_FloatFloat_ReturnValue; // 0x4
        char pad_5[0x3];
        float CallFunc_SliderValToPercent_Percent; // 0x8
    }; // Size: 0xc
    Params_UpdateSliderValue params{};
    params.NewVal = (float)NewVal;
    params.CallFunc_NotEqual_FloatFloat_ReturnValue = (bool)CallFunc_NotEqual_FloatFloat_ReturnValue;
    params.CallFunc_SliderValToPercent_Percent = (float)CallFunc_SliderValToPercent_Percent;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::SettingsSliderFinished__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton, float EndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SettingsSliderFinished__DelegateSignature"));
    struct Params_SettingsSliderFinished__DelegateSignature {
        UUI_BP_SettingsSliderButton_Snapping_C* SliderButton; // 0x0
        float EndValue; // 0x8
    }; // Size: 0xc
    Params_SettingsSliderFinished__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_Snapping_C*)SliderButton;
    params.EndValue = (float)EndValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::SliderValToPercent(float SliderVal, float& Percent, float K2Node_MathExpression_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SliderValToPercent"));
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
void UUI_BP_SettingsSliderButton_Snapping_C::SetSliderVals(float MinVal, float MaxVal, float StepSize, float CurrentVal, float CallFunc_Subtract_FloatFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, float CallFunc_SliderValToPercent_Percent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SetSliderVals"));
    struct Params_SetSliderVals {
        float MinVal; // 0x0
        float MaxVal; // 0x4
        float StepSize; // 0x8
        float CurrentVal; // 0xc
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x10
        int32_t CallFunc_FTrunc_ReturnValue; // 0x14
        float CallFunc_SliderValToPercent_Percent; // 0x18
    }; // Size: 0x1c
    Params_SetSliderVals params{};
    params.MinVal = (float)MinVal;
    params.MaxVal = (float)MaxVal;
    params.StepSize = (float)StepSize;
    params.CurrentVal = (float)CurrentVal;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_FTrunc_ReturnValue = (int32_t)CallFunc_FTrunc_ReturnValue;
    params.CallFunc_SliderValToPercent_Percent = (float)CallFunc_SliderValToPercent_Percent;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::SetSliderSteps(float NumSteps, int32_t CallFunc_FTrunc_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SetSliderSteps"));
    struct Params_SetSliderSteps {
        float NumSteps; // 0x0
        int32_t CallFunc_FTrunc_ReturnValue; // 0x4
    }; // Size: 0x8
    Params_SetSliderSteps params{};
    params.NumSteps = (float)NumSteps;
    params.CallFunc_FTrunc_ReturnValue = (int32_t)CallFunc_FTrunc_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::SetSelectedText() {}
void UUI_BP_SettingsSliderButton_Snapping_C::ExecuteUbergraph_UI_BP_SettingsSliderButton_Snapping(int32_t EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, float K2Node_ComponentBoundEvent_Value, FString CallFunc_GetObjectName_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.ExecuteUbergraph_UI_BP_SettingsSliderButton_Snapping"));
    struct Params_ExecuteUbergraph_UI_BP_SettingsSliderButton_Snapping {
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
        ESlateVisibility K2Node_Select_Default_1; // 0x39
    }; // Size: 0x3a
    Params_ExecuteUbergraph_UI_BP_SettingsSliderButton_Snapping params{};
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
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::PopulateSliderOptions(float SliderValue, float CallFunc_SliderValToPercent_Percent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.PopulateSliderOptions"));
    struct Params_PopulateSliderOptions {
        float SliderValue; // 0x0
        float CallFunc_SliderValToPercent_Percent; // 0x4
    }; // Size: 0x8
    Params_PopulateSliderOptions params{};
    params.SliderValue = (float)SliderValue;
    params.CallFunc_SliderValToPercent_Percent = (float)CallFunc_SliderValToPercent_Percent;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature"));
    struct Params_BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature {
        float Value; // 0x0
    }; // Size: 0x4
    Params_BndEvt__optionSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::SettingsSliderChanged__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SettingsSliderChanged__DelegateSignature"));
    struct Params_SettingsSliderChanged__DelegateSignature {
        UUI_BP_SettingsSliderButton_Snapping_C* SliderButton; // 0x0
        float NewValue; // 0x8
    }; // Size: 0xc
    Params_SettingsSliderChanged__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_Snapping_C*)SliderButton;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_optionSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_RightArrowButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_SettingsSliderButton_Snapping_LeftArrowButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::SettingsSliderUnhovered__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SettingsSliderUnhovered__DelegateSignature"));
    struct Params_SettingsSliderUnhovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_Snapping_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_SettingsSliderUnhovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_Snapping_C*)SliderButton;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsSliderButton_Snapping_C::SettingsSliderHovered__DelegateSignature(UUI_BP_SettingsSliderButton_Snapping_C* SliderButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SettingsSliderButton_Snapping.UI_BP_SettingsSliderButton_Snapping_C.SettingsSliderHovered__DelegateSignature"));
    struct Params_SettingsSliderHovered__DelegateSignature {
        UUI_BP_SettingsSliderButton_Snapping_C* SliderButton; // 0x0
    }; // Size: 0x8
    Params_SettingsSliderHovered__DelegateSignature params{};
    params.SliderButton = (UUI_BP_SettingsSliderButton_Snapping_C*)SliderButton;
    ProcessEvent(func, &params);
}
