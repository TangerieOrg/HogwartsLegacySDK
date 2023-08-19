#include "APlayerController.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FCurtainStageOptions.hpp"
#include "FEventReply.hpp"
#include "FGeometry.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FInputEvent.hpp"
#include "FKey.hpp"
#include "FKeyEvent.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UCurtainSubsystem.hpp"
#include "UFunction.hpp"
#include "ULoadingcreen.hpp"
#include "UOverlay.hpp"
#include "UOverlaySlot.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "USizeBox.hpp"
#include "UTextBlock.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_AutoSave_C.hpp"
#include "UUI_BP_LoadingBackgroundFX_C.hpp"
#include "UUI_BP_NewLoadingScreen_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
FEventReply UUI_BP_NewLoadingScreen_C::OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent, FInputEvent CallFunc_GetInputEventFromKeyEvent_ReturnValue, FKey CallFunc_GetKey_ReturnValue, bool CallFunc_InputEvent_IsRepeat_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, FEventReply CallFunc_Handled_ReturnValue_1, FEventReply CallFunc_Handled_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnKeyDown"));
    struct Params_OnKeyDown {
        FGeometry MyGeometry; // 0x0
        FKeyEvent InKeyEvent; // 0x38
        FEventReply ReturnValue; // 0x70
        FInputEvent CallFunc_GetInputEventFromKeyEvent_ReturnValue; // 0x128
        FKey CallFunc_GetKey_ReturnValue; // 0x140
        bool CallFunc_InputEvent_IsRepeat_ReturnValue; // 0x158
        bool CallFunc_Array_Contains_ReturnValue; // 0x159
        bool CallFunc_Not_PreBool_ReturnValue; // 0x15a
        char pad_15b[0x5];
        FEventReply CallFunc_Handled_ReturnValue; // 0x160
        bool CallFunc_Array_Contains_ReturnValue_1; // 0x218
        char pad_219[0x7];
        FEventReply CallFunc_Handled_ReturnValue_1; // 0x220
        FEventReply CallFunc_Handled_ReturnValue_2; // 0x2d8
    }; // Size: 0x390
    Params_OnKeyDown params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InKeyEvent = (FKeyEvent)InKeyEvent;
    params.CallFunc_GetInputEventFromKeyEvent_ReturnValue = (FInputEvent)CallFunc_GetInputEventFromKeyEvent_ReturnValue;
    params.CallFunc_GetKey_ReturnValue = (FKey)CallFunc_GetKey_ReturnValue;
    params.CallFunc_InputEvent_IsRepeat_ReturnValue = (bool)CallFunc_InputEvent_IsRepeat_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Handled_ReturnValue = (FEventReply)CallFunc_Handled_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue_1 = (bool)CallFunc_Array_Contains_ReturnValue_1;
    params.CallFunc_Handled_ReturnValue_1 = (FEventReply)CallFunc_Handled_ReturnValue_1;
    params.CallFunc_Handled_ReturnValue_2 = (FEventReply)CallFunc_Handled_ReturnValue_2;
    ProcessEvent(func, &params);
    return (FEventReply)params.ReturnValue;
}
UUI_BP_NewLoadingScreen_C* UUI_BP_NewLoadingScreen_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C");
    return (UUI_BP_NewLoadingScreen_C*)res;
}
TArray<FString> UUI_BP_NewLoadingScreen_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_NewLoadingScreen_C::UpdateSpinnerState() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.UpdateSpinnerState"));
    struct Params_UpdateSpinnerState {
    }; // Size: 0x0
    Params_UpdateSpinnerState params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NewLoadingScreen_C::UpdateTipsState() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.UpdateTipsState"));
    struct Params_UpdateTipsState {
    }; // Size: 0x0
    Params_UpdateTipsState params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NewLoadingScreen_C::AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FMargin K2Node_MakeStruct_Margin_4, FMargin K2Node_MakeStruct_Margin_5, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.AdjustForViewportWidth"));
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
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x70
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x74
        FMargin K2Node_MakeStruct_Margin_4; // 0x78
        FMargin K2Node_MakeStruct_Margin_5; // 0x88
        float K2Node_MathExpression_ReturnValue_1; // 0x98
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x9c
        char pad_9d[0x3];
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0xa0
        float CallFunc_BreakVector2D_X; // 0xa8
        float CallFunc_BreakVector2D_Y; // 0xac
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0xb0
    }; // Size: 0xb4
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
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.K2Node_MakeStruct_Margin_4 = (FMargin)K2Node_MakeStruct_Margin_4;
    params.K2Node_MakeStruct_Margin_5 = (FMargin)K2Node_MakeStruct_Margin_5;
    params.K2Node_MathExpression_ReturnValue_1 = (float)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
bool UUI_BP_NewLoadingScreen_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_NewLoadingScreen_C::UpdateStaticImageState() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.UpdateStaticImageState"));
    struct Params_UpdateStaticImageState {
    }; // Size: 0x0
    Params_UpdateStaticImageState params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NewLoadingScreen_C::InitKeyDownArrays(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, TArray<FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, FInputActionKeyMapping CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_1, int32_t CallFunc_Array_Length_ReturnValue_1, FInputActionKeyMapping CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.InitKeyDownArrays"));
    struct Params_InitKeyDownArrays {
        int32_t Temp_int_Loop_Counter_Variable; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t Temp_int_Array_Index_Variable_1; // 0xc
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x10
        char pad_14[0x4];
        TArray<FInputActionKeyMapping> CallFunc_GetActionMappingByName_OutMappings; // 0x18
        FInputActionKeyMapping CallFunc_Array_Get_Item; // 0x28
        int32_t CallFunc_Array_Length_ReturnValue; // 0x60
        bool CallFunc_Less_IntInt_ReturnValue; // 0x64
        char pad_65[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x68
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x6c
        TArray<FInputActionKeyMapping> CallFunc_GetActionMappingByName_OutMappings_1; // 0x70
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x80
        char pad_84[0x4];
        FInputActionKeyMapping CallFunc_Array_Get_Item_1; // 0x88
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0xc0
        char pad_c1[0x3];
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0xc4
    }; // Size: 0xc8
    Params_InitKeyDownArrays params{};
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_GetActionMappingByName_OutMappings = (TArray<FInputActionKeyMapping>)CallFunc_GetActionMappingByName_OutMappings;
    params.CallFunc_Array_Get_Item = (FInputActionKeyMapping)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_GetActionMappingByName_OutMappings_1 = (TArray<FInputActionKeyMapping>)CallFunc_GetActionMappingByName_OutMappings_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (FInputActionKeyMapping)CallFunc_Array_Get_Item_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GetActionMappingByName_OutMappings = params.CallFunc_GetActionMappingByName_OutMappings;
    CallFunc_GetActionMappingByName_OutMappings_1 = params.CallFunc_GetActionMappingByName_OutMappings_1;
}
void UUI_BP_NewLoadingScreen_C::UpdateLienholdersWidget(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UCurtainSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, FString CallFunc_GetLienholderNames_ReturnValue) {}
void UUI_BP_NewLoadingScreen_C::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NewLoadingScreen_C::OnCurtainStageOptionsChanged(FCurtainStageOptions CurtainStageOptions) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnCurtainStageOptionsChanged"));
    struct Params_OnCurtainStageOptionsChanged {
        FCurtainStageOptions CurtainStageOptions; // 0x0
    }; // Size: 0x4
    Params_OnCurtainStageOptionsChanged params{};
    params.CurtainStageOptions = (FCurtainStageOptions)CurtainStageOptions;
    ProcessEvent(func, &params);
}
void UUI_BP_NewLoadingScreen_C::OnDisplayNextTip0(FString TipKey) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnDisplayNextTip"));
    struct Params_OnDisplayNextTip {
        FString TipKey; // 0x0
    }; // Size: 0x10
    Params_OnDisplayNextTip params{};
    params.TipKey = (FString)TipKey;
    ProcessEvent(func, &params);
}
void UUI_BP_NewLoadingScreen_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NewLoadingScreen_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_NewLoadingScreen_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_NewLoadingScreen_C::OnCurtainLienholdersChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnCurtainLienholdersChanged"));
    struct Params_OnCurtainLienholdersChanged {
    }; // Size: 0x0
    Params_OnCurtainLienholdersChanged params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NewLoadingScreen_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/LoadingScreen/UI_BP_NewLoadingScreen.UI_BP_NewLoadingScreen_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_NewLoadingScreen_C::ExecuteUbergraph_UI_BP_NewLoadingScreen(int32_t EntryPoint, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FCurtainStageOptions K2Node_CustomEvent_CurtainStageOptions, FString K2Node_Event_TipKey, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_IsDebugLoadingScreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, int32_t K2Node_Event_OutroType, APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue_1, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, UCurtainSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, UCurtainSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UCurtainSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UCurtainSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_NotEqual_BoolBool_ReturnValue_2) {}
