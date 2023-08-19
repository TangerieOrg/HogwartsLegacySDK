#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "ULegendItem.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UOverlaySlot.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_Benchmark_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_SystemMenu_C.hpp"
UUI_BP_Benchmark_C* UUI_BP_Benchmark_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C");
    return (UUI_BP_Benchmark_C*)res;
}
void UUI_BP_Benchmark_C::BlueprintFocusAcquired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.BlueprintFocusAcquired"));
    struct Params_BlueprintFocusAcquired {
    }; // Size: 0x0
    Params_BlueprintFocusAcquired params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Benchmark_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Benchmark_C::AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.AdjustForViewportWidth"));
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
void UUI_BP_Benchmark_C::BenchmarkAccepted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.BenchmarkAccepted__DelegateSignature"));
    struct Params_BenchmarkAccepted__DelegateSignature {
    }; // Size: 0x0
    Params_BenchmarkAccepted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Benchmark_C::ToggleSettingsVisibility(bool Visible, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.ToggleSettingsVisibility"));
    struct Params_ToggleSettingsVisibility {
        bool Visible; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x8
        bool CallFunc_IsVisible_ReturnValue; // 0xc
    }; // Size: 0xd
    Params_ToggleSettingsVisibility params{};
    params.Visible = (bool)Visible;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_IsVisible_ReturnValue = (bool)CallFunc_IsVisible_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Benchmark_C::SetMenuLegend(TArray<FLegendItemData>& LegendData, TArray<FLegendItemData> ModifiedLegendData, int32_t Temp_int_Array_Index_Variable) {}
TArray<FString> UUI_BP_Benchmark_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2) {}
void UUI_BP_Benchmark_C::SetDescText(FString Text) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.SetDescText"));
    struct Params_SetDescText {
        FString Text; // 0x0
    }; // Size: 0x10
    Params_SetDescText params{};
    params.Text = (FString)Text;
    ProcessEvent(func, &params);
}
bool UUI_BP_Benchmark_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool HandledSubscreenHoldOperation, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FLegendItemData CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FLegendItemData CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc, bool CallFunc_SettingsNeedExitConfirmed_ReturnValue, bool CallFunc_IsVisible_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool HandledSubscreenHoldOperation; // 0x3
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x9
        char pad_a[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xc
        int32_t Temp_int_Array_Index_Variable; // 0x10
        bool CallFunc_IsVisible_ReturnValue; // 0x14
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x15
        bool CallFunc_IsVisible_ReturnValue_1; // 0x16
        char pad_17[0x1];
        ULegendItem* CallFunc_GetLegendItem_ReturnValue; // 0x18
        bool CallFunc_Not_PreBool_ReturnValue; // 0x20
        char pad_21[0x7];
        FLegendItemData CallFunc_Array_Get_Item; // 0x28
        int32_t CallFunc_Array_Length_ReturnValue; // 0x58
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x5c
        int32_t Temp_int_Loop_Counter_Variable; // 0x60
        bool CallFunc_Less_IntInt_ReturnValue; // 0x64
        char pad_65[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x68
        int32_t Temp_int_Array_Index_Variable_1; // 0x6c
        FLegendItemData CallFunc_Array_Get_Item_1; // 0x70
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0xa0
        bool CallFunc_BooleanAND_ReturnValue; // 0xa1
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0xa2
        bool CallFunc_BooleanAND_ReturnValue_1; // 0xa3
        char pad_a4[0x4];
        ULegendItem* CallFunc_GetLegendItem_ReturnValue_1; // 0xa8
        int32_t Temp_int_Loop_Counter_Variable_1; // 0xb0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0xb4
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0xb5
        char pad_b6[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0xb8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0xbc
        char pad_bd[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_2; // 0xc0
        char pad_c4[0x4];
        FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle; // 0xc8
        FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc; // 0xd8
        bool CallFunc_SettingsNeedExitConfirmed_ReturnValue; // 0xe8
        bool CallFunc_IsVisible_ReturnValue_2; // 0xe9
    }; // Size: 0xea
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.HandledSubscreenHoldOperation = (bool)HandledSubscreenHoldOperation;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_IsVisible_ReturnValue = (bool)CallFunc_IsVisible_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_IsVisible_ReturnValue_1 = (bool)CallFunc_IsVisible_ReturnValue_1;
    params.CallFunc_GetLegendItem_ReturnValue = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Array_Get_Item = (FLegendItemData)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Array_Get_Item_1 = (FLegendItemData)CallFunc_Array_Get_Item_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_GetLegendItem_ReturnValue_1 = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_PostEventAtLocation_ReturnValue_2 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_2;
    params.CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle = (FString)CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle;
    params.CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc = (FString)CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc;
    params.CallFunc_SettingsNeedExitConfirmed_ReturnValue = (bool)CallFunc_SettingsNeedExitConfirmed_ReturnValue;
    params.CallFunc_IsVisible_ReturnValue_2 = (bool)CallFunc_IsVisible_ReturnValue_2;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_Benchmark_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_Benchmark_C::OnLegendItemHoldComplete(ULegendItem* LegendItem, bool HoldCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.OnLegendItemHoldComplete"));
    struct Params_OnLegendItemHoldComplete {
        ULegendItem* LegendItem; // 0x0
        bool HoldCompleted; // 0x8
    }; // Size: 0x9
    Params_OnLegendItemHoldComplete params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldCompleted = (bool)HoldCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_Benchmark_C::BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_0_BackOutPromptConfirmed__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_0_BackOutPromptConfirmed__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_0_BackOutPromptConfirmed__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_0_BackOutPromptConfirmed__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Benchmark_C::BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_1_NewButtonLegendRequested__DelegateSignature(TArray<FLegendItemData>& NewLegend) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_1_NewButtonLegendRequested__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_1_NewButtonLegendRequested__DelegateSignature {
        TArray<FLegendItemData> NewLegend; // 0x0
    }; // Size: 0x10
    Params_BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_1_NewButtonLegendRequested__DelegateSignature params{};
    params.NewLegend = (TArray<FLegendItemData>)NewLegend;
    ProcessEvent(func, &params);
    NewLegend = params.NewLegend;
}
void UUI_BP_Benchmark_C::BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_2_HDRScreenToggled__DelegateSignature(bool IsShown) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_2_HDRScreenToggled__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_2_HDRScreenToggled__DelegateSignature {
        bool IsShown; // 0x0
    }; // Size: 0x1
    Params_BndEvt__UI_BP_Benchmark_settingsMenu_K2Node_ComponentBoundEvent_2_HDRScreenToggled__DelegateSignature params{};
    params.IsShown = (bool)IsShown;
    ProcessEvent(func, &params);
}
void UUI_BP_Benchmark_C::ResolutionSettingsApplied(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.ResolutionSettingsApplied"));
    struct Params_ResolutionSettingsApplied {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ResolutionSettingsApplied params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Benchmark_C::ExecuteUbergraph_UI_BP_Benchmark(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsPCPlatform_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_IsHardwareBenchmarkApplied_ReturnValue, bool CallFunc_IsEditor_ReturnValue, bool CallFunc_IsVisible_ReturnValue, ULegendItem* K2Node_CustomEvent_LegendItem, bool K2Node_CustomEvent_HoldCompleted, bool CallFunc_IsVisible_ReturnValue_1, TArray<FLegendItemData>& K2Node_ComponentBoundEvent_NewLegend) {}
void UUI_BP_Benchmark_C::DesiredCursorStateChanged__DelegateSignature(bool WantsCursor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.DesiredCursorStateChanged__DelegateSignature"));
    struct Params_DesiredCursorStateChanged__DelegateSignature {
        bool WantsCursor; // 0x0
    }; // Size: 0x1
    Params_DesiredCursorStateChanged__DelegateSignature params{};
    params.WantsCursor = (bool)WantsCursor;
    ProcessEvent(func, &params);
}
void UUI_BP_Benchmark_C::OnHDRScreenToggled__DelegateSignature(bool IsShown) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_Benchmark.UI_BP_Benchmark_C.OnHDRScreenToggled__DelegateSignature"));
    struct Params_OnHDRScreenToggled__DelegateSignature {
        bool IsShown; // 0x0
    }; // Size: 0x1
    Params_OnHDRScreenToggled__DelegateSignature params{};
    params.IsShown = (bool)IsShown;
    ProcessEvent(func, &params);
}
