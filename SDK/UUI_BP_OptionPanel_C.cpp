#include "AActor.hpp"
#include "AHUD.hpp"
#include "APlayerController.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "EUMGInputAction.hpp"
#include "FAudioDialogueLineData.hpp"
#include "FConversationOption.hpp"
#include "FGeometry.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UI_BP_UIPlacementEnum\Type.hpp"
#include "UObject.hpp"
#include "UOverlaySlot.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "USceneRigPlayer.hpp"
#include "UScreen.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_BasicToolTipPopout_C.hpp"
#include "UUI_BP_InteractButton_C.hpp"
#include "UUI_BP_LegendItem_C.hpp"
#include "UUI_BP_OptionPanel_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_OptionPanel_C* UUI_BP_OptionPanel_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C");
    return (UUI_BP_OptionPanel_C*)res;
}
void UUI_BP_OptionPanel_C::OnOptionHovered(UUI_BP_InteractButton_C* Button, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_SetCurrentActiveOption_OptionChanged) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.OnOptionHovered"));
    struct Params_OnOptionHovered {
        UUI_BP_InteractButton_C* Button; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        int32_t CallFunc_Array_Find_ReturnValue; // 0xc
        bool CallFunc_SetCurrentActiveOption_OptionChanged; // 0x10
    }; // Size: 0x11
    Params_OnOptionHovered params{};
    params.Button = (UUI_BP_InteractButton_C*)Button;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    params.CallFunc_SetCurrentActiveOption_OptionChanged = (bool)CallFunc_SetCurrentActiveOption_OptionChanged;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::OnOptionButtonClicked(UUI_BP_InteractButton_C* OptionButton, int32_t CallFunc_Array_Find_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.OnOptionButtonClicked"));
    struct Params_OnOptionButtonClicked {
        UUI_BP_InteractButton_C* OptionButton; // 0x0
        int32_t CallFunc_Array_Find_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_OnOptionButtonClicked params{};
    params.OptionButton = (UUI_BP_InteractButton_C*)OptionButton;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::AbortInteraction__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.AbortInteraction__DelegateSignature"));
    struct Params_AbortInteraction__DelegateSignature {
    }; // Size: 0x0
    Params_AbortInteraction__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::DialogueMode(bool DialogueMode, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.DialogueMode"));
    struct Params_DialogueMode {
        bool DialogueMode; // 0x0
        bool CallFunc_Not_PreBool_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_DialogueMode params{};
    params.DialogueMode = (bool)DialogueMode;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::SetCurrentActiveOption(int32_t NewCurrentIndex, bool& OptionChanged, bool CallFunc_Array_IsValidIndex_ReturnValue, UUI_BP_InteractButton_C* CallFunc_Array_Get_Item, UUI_BP_InteractButton_C* CallFunc_Array_Get_Item_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.SetCurrentActiveOption"));
    struct Params_SetCurrentActiveOption {
        int32_t NewCurrentIndex; // 0x0
        bool OptionChanged; // 0x4
        bool CallFunc_Array_IsValidIndex_ReturnValue; // 0x5
        char pad_6[0x2];
        UUI_BP_InteractButton_C* CallFunc_Array_Get_Item; // 0x8
        UUI_BP_InteractButton_C* CallFunc_Array_Get_Item_1; // 0x10
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x19
        bool CallFunc_BooleanAND_ReturnValue; // 0x1a
    }; // Size: 0x1b
    Params_SetCurrentActiveOption params{};
    params.NewCurrentIndex = (int32_t)NewCurrentIndex;
    params.OptionChanged = (bool)OptionChanged;
    params.CallFunc_Array_IsValidIndex_ReturnValue = (bool)CallFunc_Array_IsValidIndex_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_InteractButton_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (UUI_BP_InteractButton_C*)CallFunc_Array_Get_Item_1;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    OptionChanged = params.OptionChanged;
}
void UUI_BP_OptionPanel_C::SetTargetName(FName Character, FString CallFunc_Conv_NameToString_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.SetTargetName"));
    struct Params_SetTargetName {
        FName Character; // 0x0
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x8
    }; // Size: 0x18
    Params_SetTargetName params{};
    params.Character = (FName)Character;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::AdjustConversationForViewportWidth(float FixedPadding, float IdealWidth, float CurrentRatio, float CurrentWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, float CallFunc_Subtract_FloatFloat_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, float K2Node_MathExpression_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.AdjustConversationForViewportWidth"));
    struct Params_AdjustConversationForViewportWidth {
        float FixedPadding; // 0x0
        float IdealWidth; // 0x4
        float CurrentRatio; // 0x8
        float CurrentWidth; // 0xc
        float IdealRatio; // 0x10
        FMargin K2Node_MakeStruct_Margin; // 0x14
        char pad_24[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x28
        FMargin K2Node_MakeStruct_Margin_1; // 0x30
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x40
        char pad_44[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x48
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x50
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x54
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x58
        FMargin K2Node_MakeStruct_Margin_2; // 0x5c
        FMargin K2Node_MakeStruct_Margin_3; // 0x6c
        float K2Node_MathExpression_ReturnValue; // 0x7c
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x80
        char pad_81[0x3];
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x84
        float CallFunc_BreakVector2D_X; // 0x8c
        float CallFunc_BreakVector2D_Y; // 0x90
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x94
    }; // Size: 0x98
    Params_AdjustConversationForViewportWidth params{};
    params.FixedPadding = (float)FixedPadding;
    params.IdealWidth = (float)IdealWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.CurrentWidth = (float)CurrentWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::Maximize(APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, bool CallFunc_SetCurrentActiveOption_OptionChanged) {}
TArray<FString> UUI_BP_OptionPanel_C::GatherMenuReaderStrings(int32_t DepthLevel, UUI_BP_InteractButton_C* TempSelectedOption, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, UUI_BP_InteractButton_C* CallFunc_Array_Get_Item, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.GatherMenuReaderStrings"));
    struct Params_GatherMenuReaderStrings {
        int32_t DepthLevel; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
        UUI_BP_InteractButton_C* TempSelectedOption; // 0x18
        TArray<FString> TempGatheredStrings; // 0x20
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue; // 0x30
        UUI_BP_InteractButton_C* CallFunc_Array_Get_Item; // 0x40
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_1; // 0x48
    }; // Size: 0x58
    Params_GatherMenuReaderStrings params{};
    params.DepthLevel = (int32_t)DepthLevel;
    params.TempSelectedOption = (UUI_BP_InteractButton_C*)TempSelectedOption;
    params.TempGatheredStrings = (TArray<FString>)TempGatheredStrings;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_InteractButton_C*)CallFunc_Array_Get_Item;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_1 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GatherMenuReaderStrings_ReturnValue = params.CallFunc_GatherMenuReaderStrings_ReturnValue;
    CallFunc_GatherMenuReaderStrings_ReturnValue_1 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    return (TArray<FString>)params.ReturnValue;
}
void UUI_BP_OptionPanel_C::CalculateStartingCursorPos(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, ESlateVisibility K2Node_Select_Default, UUI_BP_InteractButton_C* CallFunc_Array_Get_Item, FVector2D CallFunc_GetViewportSize_ReturnValue, FGeometry CallFunc_GetCachedGeometry_ReturnValue, FVector2D CallFunc_LocalToViewport_PixelPosition, FVector2D CallFunc_LocalToViewport_ViewportPosition, FVector2D CallFunc_GetAbsoluteSize_ReturnValue, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue, FVector2D CallFunc_Divide_Vector2DVector2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.CalculateStartingCursorPos"));
    struct Params_CalculateStartingCursorPos {
        ESlateVisibility Temp_byte_Variable; // 0x0
        ESlateVisibility Temp_byte_Variable_1; // 0x1
        bool Temp_bool_Variable; // 0x2
        EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue; // 0x3
        char pad_4[0x4];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x10
        char pad_11[0x7];
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x18
        ESlateVisibility K2Node_Select_Default; // 0x20
        char pad_21[0x7];
        UUI_BP_InteractButton_C* CallFunc_Array_Get_Item; // 0x28
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x30
        FGeometry CallFunc_GetCachedGeometry_ReturnValue; // 0x38
        FVector2D CallFunc_LocalToViewport_PixelPosition; // 0x70
        FVector2D CallFunc_LocalToViewport_ViewportPosition; // 0x78
        FVector2D CallFunc_GetAbsoluteSize_ReturnValue; // 0x80
        FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue; // 0x88
        FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue; // 0x90
        FVector2D CallFunc_Divide_Vector2DVector2D_ReturnValue; // 0x98
    }; // Size: 0xa0
    Params_CalculateStartingCursorPos params{};
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_GetUIPlatformInputDevice_ReturnValue = (EUIPlatformInputDevice)CallFunc_GetUIPlatformInputDevice_ReturnValue;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_Array_Get_Item = (UUI_BP_InteractButton_C*)CallFunc_Array_Get_Item;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_GetCachedGeometry_ReturnValue = (FGeometry)CallFunc_GetCachedGeometry_ReturnValue;
    params.CallFunc_LocalToViewport_PixelPosition = (FVector2D)CallFunc_LocalToViewport_PixelPosition;
    params.CallFunc_LocalToViewport_ViewportPosition = (FVector2D)CallFunc_LocalToViewport_ViewportPosition;
    params.CallFunc_GetAbsoluteSize_ReturnValue = (FVector2D)CallFunc_GetAbsoluteSize_ReturnValue;
    params.CallFunc_Multiply_Vector2DFloat_ReturnValue = (FVector2D)CallFunc_Multiply_Vector2DFloat_ReturnValue;
    params.CallFunc_Add_Vector2DVector2D_ReturnValue = (FVector2D)CallFunc_Add_Vector2DVector2D_ReturnValue;
    params.CallFunc_Divide_Vector2DVector2D_ReturnValue = (FVector2D)CallFunc_Divide_Vector2DVector2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::SetLastLineTextWithSpeaker(FString LastLineTextID) {}
void UUI_BP_OptionPanel_C::GetCurrentActiveOption(UUI_BP_InteractButton_C*& SelectedOption, UUI_BP_InteractButton_C* CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.GetCurrentActiveOption"));
    struct Params_GetCurrentActiveOption {
        UUI_BP_InteractButton_C* SelectedOption; // 0x0
        UUI_BP_InteractButton_C* CallFunc_Array_Get_Item; // 0x8
    }; // Size: 0x10
    Params_GetCurrentActiveOption params{};
    params.SelectedOption = (UUI_BP_InteractButton_C*)SelectedOption;
    params.CallFunc_Array_Get_Item = (UUI_BP_InteractButton_C*)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
    SelectedOption = params.SelectedOption;
}
void UUI_BP_OptionPanel_C::Translate_Cleanup(FString Button, FString& TranslatedButton, FString Debug_Button_String, FString Translated_Button_String) {}
void UUI_BP_OptionPanel_C::GatherMastermindExtraScreenStrings(TArray<FString>& outExtraScreenStrings, TArray<FString> ExtraStrings, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FConversationOption CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_SelectString_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.GatherMastermindExtraScreenStrings"));
    struct Params_GatherMastermindExtraScreenStrings {
        TArray<FString> outExtraScreenStrings; // 0x0
        TArray<FString> ExtraStrings; // 0x10
        int32_t Temp_int_Array_Index_Variable; // 0x20
        int32_t Temp_int_Loop_Counter_Variable; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x28
        int32_t CallFunc_Array_Length_ReturnValue; // 0x2c
        FConversationOption CallFunc_Array_Get_Item; // 0x30
        bool CallFunc_Less_IntInt_ReturnValue; // 0x78
        char pad_79[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x80
        FString CallFunc_SelectString_ReturnValue; // 0x90
        int32_t CallFunc_Array_Add_ReturnValue; // 0xa0
    }; // Size: 0xa4
    Params_GatherMastermindExtraScreenStrings params{};
    params.outExtraScreenStrings = (TArray<FString>)outExtraScreenStrings;
    params.ExtraStrings = (TArray<FString>)ExtraStrings;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FConversationOption)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_SelectString_ReturnValue = (FString)CallFunc_SelectString_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    ProcessEvent(func, &params);
    outExtraScreenStrings = params.outExtraScreenStrings;
}
void UUI_BP_OptionPanel_C::OptionsAnimationsFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.OptionsAnimationsFinished"));
    struct Params_OptionsAnimationsFinished {
    }; // Size: 0x0
    Params_OptionsAnimationsFinished params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::ShowLine() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.ShowLine"));
    struct Params_ShowLine {
    }; // Size: 0x0
    Params_ShowLine params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::TranslateSubtitleText(FAudioDialogueLineData SubtitleData, FName TargetName, FString TranslatedString, bool CallFunc_NotEqual_NameName_ReturnValue, FName CallFunc_GetDbId_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {}
bool UUI_BP_OptionPanel_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UUI_BP_InteractButton_C* CallFunc_GetCurrentActiveOption_SelectedOption, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_Not_PreBool_ReturnValue; // 0x3
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x4
        char pad_5[0x3];
        UUI_BP_InteractButton_C* CallFunc_GetCurrentActiveOption_SelectedOption; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x11
        char pad_12[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x14
        bool CallFunc_Not_PreBool_ReturnValue_2; // 0x18
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x19
        char pad_1a[0x6];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x20
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x30
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x31
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x32
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x33
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x34
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x35
    }; // Size: 0x36
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_GetCurrentActiveOption_SelectedOption = (UUI_BP_InteractButton_C*)CallFunc_GetCurrentActiveOption_SelectedOption;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_2 = (bool)CallFunc_Not_PreBool_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_OptionPanel_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::EmptyActionsEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.EmptyActionsEvent"));
    struct Params_EmptyActionsEvent {
    }; // Size: 0x0
    Params_EmptyActionsEvent params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::InitializeButtonLegend(FString Button, FString Text, FLegendItemData K2Node_MakeStruct_LegendItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.InitializeButtonLegend"));
    struct Params_InitializeButtonLegend {
        FString Button; // 0x0
        FString Text; // 0x10
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x20
    }; // Size: 0x50
    Params_InitializeButtonLegend params{};
    params.Button = (FString)Button;
    params.Text = (FString)Text;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::Minimize(bool NoAnim) {}
void UUI_BP_OptionPanel_C::OptionSelected(int32_t SelectedIndex, int32_t Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, FConversationOption CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUI_BP_InteractButton_C* CallFunc_Array_Get_Item_1, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.OptionSelected"));
    struct Params_OptionSelected {
        int32_t SelectedIndex; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x4
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0xc
        FConversationOption CallFunc_Array_Get_Item; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x58
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x5c
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x60
        char pad_64[0x4];
        UUI_BP_InteractButton_C* CallFunc_Array_Get_Item_1; // 0x68
        bool CallFunc_Not_PreBool_ReturnValue; // 0x70
        char pad_71[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x78
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x80
        char pad_84[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x88
        bool CallFunc_Less_IntInt_ReturnValue; // 0x90
    }; // Size: 0x91
    Params_OptionSelected params{};
    params.SelectedIndex = (int32_t)SelectedIndex;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Get_Item = (FConversationOption)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (UUI_BP_InteractButton_C*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::PreviousOption(bool CallFunc_SetCurrentActiveOption_OptionChanged, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_SetCurrentActiveOption_OptionChanged_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.PreviousOption"));
    struct Params_PreviousOption {
        bool CallFunc_SetCurrentActiveOption_OptionChanged; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x8
        bool CallFunc_Greater_IntInt_ReturnValue; // 0xc
        bool CallFunc_SetCurrentActiveOption_OptionChanged_1; // 0xd
    }; // Size: 0xe
    Params_PreviousOption params{};
    params.CallFunc_SetCurrentActiveOption_OptionChanged = (bool)CallFunc_SetCurrentActiveOption_OptionChanged;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_SetCurrentActiveOption_OptionChanged_1 = (bool)CallFunc_SetCurrentActiveOption_OptionChanged_1;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::WidgetAnimationEvt_maximizeConversation_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.WidgetAnimationEvt_maximizeConversation_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_maximizeConversation_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_maximizeConversation_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::NextOption(int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_SetCurrentActiveOption_OptionChanged, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetCurrentActiveOption_OptionChanged_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.NextOption"));
    struct Params_NextOption {
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x0
        bool CallFunc_SetCurrentActiveOption_OptionChanged; // 0x4
        bool CallFunc_Less_IntInt_ReturnValue; // 0x5
        char pad_6[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        bool CallFunc_SetCurrentActiveOption_OptionChanged_1; // 0xc
    }; // Size: 0xd
    Params_NextOption params{};
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_SetCurrentActiveOption_OptionChanged = (bool)CallFunc_SetCurrentActiveOption_OptionChanged;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_SetCurrentActiveOption_OptionChanged_1 = (bool)CallFunc_SetCurrentActiveOption_OptionChanged_1;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::BuildOptions(TArray<FConversationOption>& OPTIONS, TArray<UUI_BP_InteractButton_C*>& Button_Array, FString TranslatedString, bool PreviouslyUsed, FString ToolTipReason, bool Disabled, FString IconName, FString PreTranslatedButtonString) {}
void UUI_BP_OptionPanel_C::AbortConversation__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.AbortConversation__DelegateSignature"));
    struct Params_AbortConversation__DelegateSignature {
    }; // Size: 0x0
    Params_AbortConversation__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::OnActionHandler(FName Action, bool K2Node_SwitchName_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.OnActionHandler"));
    struct Params_OnActionHandler {
        FName Action; // 0x0
        bool K2Node_SwitchName_CmpSuccess; // 0x8
    }; // Size: 0x9
    Params_OnActionHandler params{};
    params.Action = (FName)Action;
    params.K2Node_SwitchName_CmpSuccess = (bool)K2Node_SwitchName_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::DelaySkipping() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.DelaySkipping"));
    struct Params_DelaySkipping {
    }; // Size: 0x0
    Params_DelaySkipping params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::AudioDialogueLineStartedData(UObject* Caller, FAudioDialogueLineData& AudioDialogueLineData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.AudioDialogueLineStartedData"));
    struct Params_AudioDialogueLineStartedData {
        UObject* Caller; // 0x0
        FAudioDialogueLineData AudioDialogueLineData; // 0x8
    }; // Size: 0x58
    Params_AudioDialogueLineStartedData params{};
    params.Caller = (UObject*)Caller;
    params.AudioDialogueLineData = (FAudioDialogueLineData)AudioDialogueLineData;
    ProcessEvent(func, &params);
    AudioDialogueLineData = params.AudioDialogueLineData;
}
void UUI_BP_OptionPanel_C::MinimizeAnimationFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.MinimizeAnimationFinished"));
    struct Params_MinimizeAnimationFinished {
    }; // Size: 0x0
    Params_MinimizeAnimationFinished params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::ExecuteUbergraph_UI_BP_OptionPanel(int32_t EntryPoint) {}
void UUI_BP_OptionPanel_C::SelectionMade__DelegateSignature(int32_t OptionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.SelectionMade__DelegateSignature"));
    struct Params_SelectionMade__DelegateSignature {
        int32_t OptionIndex; // 0x0
    }; // Size: 0x4
    Params_SelectionMade__DelegateSignature params{};
    params.OptionIndex = (int32_t)OptionIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_OptionPanel_C::Cleanup__DelegateSignature(int32_t Selection, AActor* Actor_Reference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_OptionPanel.UI_BP_OptionPanel_C.Cleanup__DelegateSignature"));
    struct Params_Cleanup__DelegateSignature {
        int32_t Selection; // 0x0
        char pad_4[0x4];
        AActor* Actor_Reference; // 0x8
    }; // Size: 0x10
    Params_Cleanup__DelegateSignature params{};
    params.Selection = (int32_t)Selection;
    params.Actor_Reference = (AActor*)Actor_Reference;
    ProcessEvent(func, &params);
}
