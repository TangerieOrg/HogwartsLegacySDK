#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "ULegendItem.hpp"
#include "UObject.hpp"
#include "UOverlaySlot.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_FirstPlayCalibration_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_Settings_Calibration_C.hpp"
#include "UUI_BP_Settings_HDRCalibration_C.hpp"
#include "UWidgetSwitcher.hpp"
void UUI_BP_FirstPlayCalibration_C::AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.AdjustForViewportWidth"));
    struct Params_AdjustForViewportWidth {
        float CurrentWidth; // 0x0
        float CurrentRatio; // 0x4
        float IdealWidth; // 0x8
        float IdealRatio; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        float K2Node_MathExpression_ReturnValue; // 0x20
        FMargin K2Node_MakeStruct_Margin_1; // 0x24
        char pad_34[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x38
        float K2Node_MathExpression_ReturnValue_1; // 0x40
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x44
        char pad_45[0x3];
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x48
        float CallFunc_BreakVector2D_X; // 0x50
        float CallFunc_BreakVector2D_Y; // 0x54
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x58
    }; // Size: 0x5c
    Params_AdjustForViewportWidth params{};
    params.CurrentWidth = (float)CurrentWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.IdealWidth = (float)IdealWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.K2Node_MathExpression_ReturnValue_1 = (float)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_FirstPlayCalibration_C* UUI_BP_FirstPlayCalibration_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C");
    return (UUI_BP_FirstPlayCalibration_C*)res;
}
void UUI_BP_FirstPlayCalibration_C::ExecuteUbergraph_UI_BP_FirstPlayCalibration(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue) {}
void UUI_BP_FirstPlayCalibration_C::CallBrightnessAccepted() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.CallBrightnessAccepted"));
    struct Params_CallBrightnessAccepted {
    }; // Size: 0x0
    Params_CallBrightnessAccepted params{};
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_FirstPlayCalibration_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.GatherMenuReaderStrings"));
    struct Params_GatherMenuReaderStrings {
        int32_t DepthLevel; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
        TArray<FString> TempGatheredStrings; // 0x18
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue; // 0x28
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_1; // 0x38
        bool K2Node_SwitchInteger_CmpSuccess; // 0x48
        char pad_49[0x7];
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_2; // 0x50
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_3; // 0x60
    }; // Size: 0x70
    Params_GatherMenuReaderStrings params{};
    params.DepthLevel = (int32_t)DepthLevel;
    params.TempGatheredStrings = (TArray<FString>)TempGatheredStrings;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_1 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_2 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_2;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_3 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_3;
    ProcessEvent(func, &params);
    CallFunc_GatherMenuReaderStrings_ReturnValue = params.CallFunc_GatherMenuReaderStrings_ReturnValue;
    CallFunc_GatherMenuReaderStrings_ReturnValue_1 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    CallFunc_GatherMenuReaderStrings_ReturnValue_2 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_2;
    CallFunc_GatherMenuReaderStrings_ReturnValue_3 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_3;
    return (TArray<FString>)params.ReturnValue;
}
bool UUI_BP_FirstPlayCalibration_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x5
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x6
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x7
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xc
    }; // Size: 0x10
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_FirstPlayCalibration_C::ShowCalibrationActor() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.ShowCalibrationActor"));
    struct Params_ShowCalibrationActor {
    }; // Size: 0x0
    Params_ShowCalibrationActor params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstPlayCalibration_C::InitCalibration() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.InitCalibration"));
    struct Params_InitCalibration {
    }; // Size: 0x0
    Params_InitCalibration params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstPlayCalibration_C::HideCalibrationActor() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.HideCalibrationActor"));
    struct Params_HideCalibrationActor {
    }; // Size: 0x0
    Params_HideCalibrationActor params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstPlayCalibration_C::BlueprintFocusAcquired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.BlueprintFocusAcquired"));
    struct Params_BlueprintFocusAcquired {
    }; // Size: 0x0
    Params_BlueprintFocusAcquired params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstPlayCalibration_C::BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_0_SliderHovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_0_SliderHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_0_SliderHovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_0_SliderHovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstPlayCalibration_C::BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_1_SliderUnhovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_1_SliderUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_1_SliderUnhovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FirstPlayCalibration_UI_BP_Settings_Calibration_K2Node_ComponentBoundEvent_1_SliderUnhovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstPlayCalibration_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstPlayCalibration_C::ResolutionSettingsApplied(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.ResolutionSettingsApplied"));
    struct Params_ResolutionSettingsApplied {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ResolutionSettingsApplied params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstPlayCalibration_C::OnResetHoldReleased(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.OnResetHoldReleased"));
    struct Params_OnResetHoldReleased {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_OnResetHoldReleased params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstPlayCalibration_C::HDRBrightnessAccepted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.HDRBrightnessAccepted__DelegateSignature"));
    struct Params_HDRBrightnessAccepted__DelegateSignature {
    }; // Size: 0x0
    Params_HDRBrightnessAccepted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstPlayCalibration_C::BrightnessAccepted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstPlayCalibration.UI_BP_FirstPlayCalibration_C.BrightnessAccepted__DelegateSignature"));
    struct Params_BrightnessAccepted__DelegateSignature {
    }; // Size: 0x0
    Params_BrightnessAccepted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
