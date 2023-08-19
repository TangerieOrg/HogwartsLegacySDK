#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FFocusEvent.hpp"
#include "FGeometry.hpp"
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
#include "UUIManager.hpp"
#include "UUI_BP_FirstFlowAccessibility_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_Settings_Accessibility_C.hpp"
void UUI_BP_FirstFlowAccessibility_C::RefreshLegend(int32_t TempResetLegendItemIndex, TArray<FLegendItemData> TempLegendItems, bool Temp_bool_Variable) {}
UUI_BP_FirstFlowAccessibility_C* UUI_BP_FirstFlowAccessibility_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C");
    return (UUI_BP_FirstFlowAccessibility_C*)res;
}
void UUI_BP_FirstFlowAccessibility_C::ToggleMenuReader(int32_t CallFunc_SelectInt_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.ToggleMenuReader"));
    struct Params_ToggleMenuReader {
        int32_t CallFunc_SelectInt_ReturnValue; // 0x0
        char pad_4[0x4];
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x8
        bool CallFunc_Not_PreBool_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ToggleMenuReader params{};
    params.CallFunc_SelectInt_ReturnValue = (int32_t)CallFunc_SelectInt_ReturnValue;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstFlowAccessibility_C::OnResetHoldReleased(ULegendItem* LegendItem, bool HoldWasCompleted, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.OnResetHoldReleased"));
    struct Params_OnResetHoldReleased {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
        char pad_9[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0xc
    }; // Size: 0x10
    Params_OnResetHoldReleased params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstFlowAccessibility_C::ExitSpecialMode() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.ExitSpecialMode"));
    struct Params_ExitSpecialMode {
    }; // Size: 0x0
    Params_ExitSpecialMode params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstFlowAccessibility_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
bool UUI_BP_FirstFlowAccessibility_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool HandledSubscreenHoldOperation, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool HandledSubscreenHoldOperation; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x5
        bool CallFunc_Not_PreBool_ReturnValue; // 0x6
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x7
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x8
        char pad_9[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0xc
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x14
        bool CallFunc_Not_PreBool_ReturnValue_2; // 0x15
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x16
        char pad_17[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_2; // 0x18
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x1c
    }; // Size: 0x1d
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.HandledSubscreenHoldOperation = (bool)HandledSubscreenHoldOperation;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_Not_PreBool_ReturnValue_2 = (bool)CallFunc_Not_PreBool_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_PostEventAtLocation_ReturnValue_2 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FString> UUI_BP_FirstFlowAccessibility_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {}
void UUI_BP_FirstFlowAccessibility_C::AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, FMargin K2Node_MakeStruct_Margin_4, float CallFunc_Add_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_5, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.AdjustForViewportWidth"));
    struct Params_AdjustForViewportWidth {
        float CurrentWidth; // 0x0
        float CurrentRatio; // 0x4
        float IdealWidth; // 0x8
        float IdealRatio; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        FMargin K2Node_MakeStruct_Margin_1; // 0x20
        FMargin K2Node_MakeStruct_Margin_2; // 0x30
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x40
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x48
        float K2Node_MathExpression_ReturnValue; // 0x50
        FMargin K2Node_MakeStruct_Margin_3; // 0x54
        char pad_64[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2; // 0x68
        FMargin K2Node_MakeStruct_Margin_4; // 0x70
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x80
        FMargin K2Node_MakeStruct_Margin_5; // 0x84
        float K2Node_MathExpression_ReturnValue_1; // 0x94
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x98
        char pad_99[0x3];
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x9c
        float CallFunc_BreakVector2D_X; // 0xa4
        float CallFunc_BreakVector2D_Y; // 0xa8
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0xac
    }; // Size: 0xb0
    Params_AdjustForViewportWidth params{};
    params.CurrentWidth = (float)CurrentWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.IdealWidth = (float)IdealWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_2 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_2;
    params.K2Node_MakeStruct_Margin_4 = (FMargin)K2Node_MakeStruct_Margin_4;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.K2Node_MakeStruct_Margin_5 = (FMargin)K2Node_MakeStruct_Margin_5;
    params.K2Node_MathExpression_ReturnValue_1 = (float)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstFlowAccessibility_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstFlowAccessibility_C::StartSpecialMenuReaderFlow() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.StartSpecialMenuReaderFlow"));
    struct Params_StartSpecialMenuReaderFlow {
    }; // Size: 0x0
    Params_StartSpecialMenuReaderFlow params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstFlowAccessibility_C::OnFocusLost(FFocusEvent InFocusEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.OnFocusLost"));
    struct Params_OnFocusLost {
        FFocusEvent InFocusEvent; // 0x0
    }; // Size: 0x8
    Params_OnFocusLost params{};
    params.InFocusEvent = (FFocusEvent)InFocusEvent;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstFlowAccessibility_C::ExecuteUbergraph_UI_BP_FirstFlowAccessibility(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_IsMenuReaderCurrentLanguageSupported_ReturnValue, bool CallFunc_IsMenuReaderSupported_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsMenuReaderEnabled_ReturnValue, bool CallFunc_SetMenuReaderEnabled_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_2, bool CallFunc_IsMenuReaderBusy_ReturnValue, FFocusEvent K2Node_Event_InFocusEvent, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue) {}
void UUI_BP_FirstFlowAccessibility_C::BlueprintFocusAcquired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.BlueprintFocusAcquired"));
    struct Params_BlueprintFocusAcquired {
    }; // Size: 0x0
    Params_BlueprintFocusAcquired params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstFlowAccessibility_C::BndEvt__UI_BP_FirstFlowAccessibility_UI_BP_Settings_Accessibility_K2Node_ComponentBoundEvent_1_OnMenuReaderSettingToggled__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.BndEvt__UI_BP_FirstFlowAccessibility_UI_BP_Settings_Accessibility_K2Node_ComponentBoundEvent_1_OnMenuReaderSettingToggled__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FirstFlowAccessibility_UI_BP_Settings_Accessibility_K2Node_ComponentBoundEvent_1_OnMenuReaderSettingToggled__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FirstFlowAccessibility_UI_BP_Settings_Accessibility_K2Node_ComponentBoundEvent_1_OnMenuReaderSettingToggled__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FirstFlowAccessibility_C::ResolutionSettingsApplied(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.ResolutionSettingsApplied"));
    struct Params_ResolutionSettingsApplied {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ResolutionSettingsApplied params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstFlowAccessibility_C::UserProfileChange(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.UserProfileChange"));
    struct Params_UserProfileChange {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_UserProfileChange params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstFlowAccessibility_C::CursorChangeRequested__DelegateSignature(bool WantsToShowCursor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.CursorChangeRequested__DelegateSignature"));
    struct Params_CursorChangeRequested__DelegateSignature {
        bool WantsToShowCursor; // 0x0
    }; // Size: 0x1
    Params_CursorChangeRequested__DelegateSignature params{};
    params.WantsToShowCursor = (bool)WantsToShowCursor;
    ProcessEvent(func, &params);
}
void UUI_BP_FirstFlowAccessibility_C::ChangesComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_FirstFlowAccessibility.UI_BP_FirstFlowAccessibility_C.ChangesComplete__DelegateSignature"));
    struct Params_ChangesComplete__DelegateSignature {
    }; // Size: 0x0
    Params_ChangesComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
