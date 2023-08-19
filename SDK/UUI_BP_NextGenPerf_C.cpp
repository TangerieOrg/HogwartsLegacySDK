#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UOverlay.hpp"
#include "UOverlaySlot.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UPopupScreen.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_MenuTextButton_C.hpp"
#include "UUI_BP_NextGenPerf_C.hpp"
#include "UWidget.hpp"
void UUI_BP_NextGenPerf_C::PerfScreenDismissed__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.PerfScreenDismissed__DelegateSignature"));
    struct Params_PerfScreenDismissed__DelegateSignature {
    }; // Size: 0x0
    Params_PerfScreenDismissed__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::Performance_Button_Clicked(UUI_BP_MenuTextButton_C* ClickedButton, FString TempPerformanceMode, TArray<FString>& CallFunc_Map_Keys_Keys, TArray<UUI_BP_MenuTextButton_C*>& CallFunc_Map_Values_Values, int32_t CallFunc_Array_Find_ReturnValue, FString CallFunc_Array_Get_Item, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, UPopupScreen* CallFunc_ShowRaytracingRebootPopup_ReturnValue, bool CallFunc_PerformanceModeChangeRequiresReboot_ReturnValue, bool CallFunc_IsPerformanceModeSwitchingAvailable_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.Performance Button Clicked"));
    struct Params_Performance_Button_Clicked {
        UUI_BP_MenuTextButton_C* ClickedButton; // 0x0
        FString TempPerformanceMode; // 0x8
        TArray<FString> CallFunc_Map_Keys_Keys; // 0x18
        TArray<UUI_BP_MenuTextButton_C*> CallFunc_Map_Values_Values; // 0x28
        int32_t CallFunc_Array_Find_ReturnValue; // 0x38
        char pad_3c[0x4];
        FString CallFunc_Array_Get_Item; // 0x40
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x50
        UPopupScreen* CallFunc_ShowRaytracingRebootPopup_ReturnValue; // 0x58
        bool CallFunc_PerformanceModeChangeRequiresReboot_ReturnValue; // 0x60
        bool CallFunc_IsPerformanceModeSwitchingAvailable_ReturnValue; // 0x61
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x62
        bool CallFunc_IsValid_ReturnValue; // 0x63
    }; // Size: 0x64
    Params_Performance_Button_Clicked params{};
    params.ClickedButton = (UUI_BP_MenuTextButton_C*)ClickedButton;
    params.TempPerformanceMode = (FString)TempPerformanceMode;
    params.CallFunc_Map_Keys_Keys = (TArray<FString>)CallFunc_Map_Keys_Keys;
    params.CallFunc_Map_Values_Values = (TArray<UUI_BP_MenuTextButton_C*>)CallFunc_Map_Values_Values;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_ShowRaytracingRebootPopup_ReturnValue = (UPopupScreen*)CallFunc_ShowRaytracingRebootPopup_ReturnValue;
    params.CallFunc_PerformanceModeChangeRequiresReboot_ReturnValue = (bool)CallFunc_PerformanceModeChangeRequiresReboot_ReturnValue;
    params.CallFunc_IsPerformanceModeSwitchingAvailable_ReturnValue = (bool)CallFunc_IsPerformanceModeSwitchingAvailable_ReturnValue;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
    CallFunc_Map_Values_Values = params.CallFunc_Map_Values_Values;
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_17_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_17_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_17_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_17_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
UUI_BP_NextGenPerf_C* UUI_BP_NextGenPerf_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C");
    return (UUI_BP_NextGenPerf_C*)res;
}
void UUI_BP_NextGenPerf_C::BlueprintFocusAcquired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BlueprintFocusAcquired"));
    struct Params_BlueprintFocusAcquired {
    }; // Size: 0x0
    Params_BlueprintFocusAcquired params{};
    ProcessEvent(func, &params);
}
bool UUI_BP_NextGenPerf_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool HandledSubscreenHoldOperation, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool HandledSubscreenHoldOperation; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x5
        char pad_6[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.HandledSubscreenHoldOperation = (bool)HandledSubscreenHoldOperation;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_NextGenPerf_C::InitPerformanceButtons(FString tempButtonID, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, UUI_BP_MenuTextButton_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, TArray<FString>& CallFunc_GetAvailablePerformanceModesForBootFlow_ReturnValue, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_GetPerformanceMode_ReturnValue, UUI_BP_MenuTextButton_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.InitPerformanceButtons"));
    struct Params_InitPerformanceButtons {
        FString tempButtonID; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x10
        int32_t Temp_int_Loop_Counter_Variable; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        char pad_1c[0x4];
        UWidget* CallFunc_Map_Find_Value; // 0x20
        bool CallFunc_Map_Find_ReturnValue; // 0x28
        char pad_29[0x7];
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x30
        UUI_BP_MenuTextButton_C* CallFunc_Map_Find_Value_1; // 0x38
        bool CallFunc_Map_Find_ReturnValue_1; // 0x40
        char pad_41[0x7];
        TArray<FString> CallFunc_GetAvailablePerformanceModesForBootFlow_ReturnValue; // 0x48
        FString CallFunc_Array_Get_Item; // 0x58
        int32_t CallFunc_Array_Length_ReturnValue; // 0x68
        bool CallFunc_Less_IntInt_ReturnValue; // 0x6c
        char pad_6d[0x3];
        FString CallFunc_GetPerformanceMode_ReturnValue; // 0x70
        UUI_BP_MenuTextButton_C* CallFunc_Map_Find_Value_2; // 0x80
        bool CallFunc_Map_Find_ReturnValue_2; // 0x88
    }; // Size: 0x89
    Params_InitPerformanceButtons params{};
    params.tempButtonID = (FString)tempButtonID;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Map_Find_Value = (UWidget*)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_Map_Find_Value_1 = (UUI_BP_MenuTextButton_C*)CallFunc_Map_Find_Value_1;
    params.CallFunc_Map_Find_ReturnValue_1 = (bool)CallFunc_Map_Find_ReturnValue_1;
    params.CallFunc_GetAvailablePerformanceModesForBootFlow_ReturnValue = (TArray<FString>)CallFunc_GetAvailablePerformanceModesForBootFlow_ReturnValue;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetPerformanceMode_ReturnValue = (FString)CallFunc_GetPerformanceMode_ReturnValue;
    params.CallFunc_Map_Find_Value_2 = (UUI_BP_MenuTextButton_C*)CallFunc_Map_Find_Value_2;
    params.CallFunc_Map_Find_ReturnValue_2 = (bool)CallFunc_Map_Find_ReturnValue_2;
    ProcessEvent(func, &params);
    CallFunc_GetAvailablePerformanceModesForBootFlow_ReturnValue = params.CallFunc_GetAvailablePerformanceModesForBootFlow_ReturnValue;
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_11_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_11_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_11_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_11_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.AdjustForViewportWidth"));
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
void UUI_BP_NextGenPerf_C::ExecuteUbergraph_UI_BP_NextGenPerf(int32_t EntryPoint, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button_14) {}
TArray<FString> UUI_BP_NextGenPerf_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
void UUI_BP_NextGenPerf_C::SetMenuLegend(TArray<FLegendItemData>& LegendData, TArray<FLegendItemData> ModifiedLegendData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.SetMenuLegend"));
    struct Params_SetMenuLegend {
        TArray<FLegendItemData> LegendData; // 0x0
        TArray<FLegendItemData> ModifiedLegendData; // 0x10
    }; // Size: 0x20
    Params_SetMenuLegend params{};
    params.LegendData = (TArray<FLegendItemData>)LegendData;
    params.ModifiedLegendData = (TArray<FLegendItemData>)ModifiedLegendData;
    ProcessEvent(func, &params);
    LegendData = params.LegendData;
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_6_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_Performance_K2Node_ComponentBoundEvent_7_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_8_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_9_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_12_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_14_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_14_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_14_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_14_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_15_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_15_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_15_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_15_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_20_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_20_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_20_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_HFRPerformance_K2Node_ComponentBoundEvent_20_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_16_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_16_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_16_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_Fidelity_K2Node_ComponentBoundEvent_16_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_18_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_18_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_18_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_FidelityRT_K2Node_ComponentBoundEvent_18_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_NextGenPerf_C::BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_19_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_NextGenPerf.UI_BP_NextGenPerf_C.BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_19_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_19_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_NextGenPerf_btn_Balanced_K2Node_ComponentBoundEvent_19_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
