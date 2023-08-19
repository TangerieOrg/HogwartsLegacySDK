#include "AActor.hpp"
#include "APlayerController.hpp"
#include "EGenderEnum.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "E_AVA_DungeonEntrance\Type.hpp"
#include "FCharacterSaveGameInfo.hpp"
#include "FGearName.hpp"
#include "FLegendItemData.hpp"
#include "FMOTD.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_MissionSkipDisplayNames.hpp"
#include "FSlateBrush.hpp"
#include "FVector2D.hpp"
#include "HouseIds.hpp"
#include "UAsyncTaskDownloadImage.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UClass.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UFrontEnd_MenuWidget.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "ULegendItem.hpp"
#include "UMenuCursorWidget.hpp"
#include "UObject.hpp"
#include "UOverlaySlot.hpp"
#include "UPersistentData.hpp"
#include "UPhoenixGameInstance.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPopupScreen.hpp"
#include "USizeBox.hpp"
#include "UTexture2DDynamic.hpp"
#include "UUIManager.hpp"
#include "UUIOnlineManager.hpp"
#include "UUI_BP_CharacterSelectButton_C.hpp"
#include "UUI_BP_CinematicPicker_C.hpp"
#include "UUI_BP_FG_DetailsPanelBack_C.hpp"
#include "UUI_BP_FrontEndDetails_C.hpp"
#include "UUI_BP_FrontEnd_Menu_C.hpp"
#include "UUI_BP_InstallManagerProgressBar_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_LoadMenu_C.hpp"
#include "UUI_BP_MenuTextButton_C.hpp"
#include "UUI_BP_PhxComboBox_C.hpp"
#include "UUI_BP_RewardNotification_C.hpp"
#include "UUI_BP_ScrollingTextBlock_C.hpp"
#include "UUI_BP_SettingsDropDownButton_C.hpp"
#include "UUI_BP_StartPage_C.hpp"
#include "UUI_BP_Store_C.hpp"
#include "UUI_BP_SystemMenu_C.hpp"
#include "UUI_BP_TempFEButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
#include "UWidgetSwitcher.hpp"
void UUI_BP_FrontEnd_Menu_C::ShowSettings() {}
void UUI_BP_FrontEnd_Menu_C::ShowDeleteCharacterPopup() {}
UUI_BP_FrontEnd_Menu_C* UUI_BP_FrontEnd_Menu_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C");
    return (UUI_BP_FrontEnd_Menu_C*)res;
}
bool UUI_BP_FrontEnd_Menu_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool HandledSubscreenHoldOperation, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle, FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc, bool CallFunc_SettingsNeedExitConfirmed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, bool CallFunc_IsPackagedForDistribution_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, FLegendItemData CallFunc_Array_Get_Item, ULegendItem* CallFunc_GetLegendItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, int32_t CallFunc_GetHoveredCharacterButtonID_CharacterID, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t CallFunc_GetHoveredCharacterButtonID_CharacterID_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, FLegendItemData CallFunc_Array_Get_Item_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Back_BackedOut, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool HandledSubscreenHoldOperation; // 0x3
        char pad_4[0x4];
        FString CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle; // 0x8
        FString CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc; // 0x18
        bool CallFunc_SettingsNeedExitConfirmed_ReturnValue; // 0x28
        bool CallFunc_BooleanAND_ReturnValue; // 0x29
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x2a
        char pad_2b[0x5];
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x30
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x60
        bool CallFunc_IsPackagedForDistribution_ReturnValue; // 0x90
        char pad_91[0x7];
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x98
        bool CallFunc_Not_PreBool_ReturnValue; // 0xa8
        char pad_a9[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0xac
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0xb0
        char pad_b1[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0xb4
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xb8
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xbc
        int32_t Temp_int_Loop_Counter_Variable; // 0xc0
        int32_t Temp_int_Array_Index_Variable; // 0xc4
        bool CallFunc_Less_IntInt_ReturnValue; // 0xc8
        char pad_c9[0x7];
        FLegendItemData CallFunc_Array_Get_Item; // 0xd0
        ULegendItem* CallFunc_GetLegendItem_ReturnValue; // 0x100
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x108
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x109
        char pad_10a[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10c
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x110
        bool CallFunc_Not_PreBool_ReturnValue_2; // 0x114
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x115
        bool CallFunc_BooleanAND_ReturnValue_2; // 0x116
        char pad_117[0x1];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x118
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x11c
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x11d
        char pad_11e[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_2; // 0x120
        int32_t CallFunc_GetHoveredCharacterButtonID_CharacterID; // 0x124
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x128
        char pad_129[0x3];
        int32_t CallFunc_GetHoveredCharacterButtonID_CharacterID_1; // 0x12c
        bool CallFunc_NotEqual_IntInt_ReturnValue_1; // 0x130
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x131
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x132
        char pad_133[0x1];
        int32_t Temp_int_Array_Index_Variable_1; // 0x134
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x138
        char pad_139[0x7];
        FLegendItemData CallFunc_Array_Get_Item_1; // 0x140
        ULegendItem* CallFunc_GetLegendItem_ReturnValue_1; // 0x170
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_7; // 0x178
        bool CallFunc_BooleanAND_ReturnValue_3; // 0x179
        bool CallFunc_Back_BackedOut; // 0x17a
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_8; // 0x17b
    }; // Size: 0x17c
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.HandledSubscreenHoldOperation = (bool)HandledSubscreenHoldOperation;
    params.CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle = (FString)CallFunc_SettingsNeedExitConfirmed_OutConfirmTitle;
    params.CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc = (FString)CallFunc_SettingsNeedExitConfirmed_OutConfirmDesc;
    params.CallFunc_SettingsNeedExitConfirmed_ReturnValue = (bool)CallFunc_SettingsNeedExitConfirmed_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.CallFunc_IsPackagedForDistribution_ReturnValue = (bool)CallFunc_IsPackagedForDistribution_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FLegendItemData)CallFunc_Array_Get_Item;
    params.CallFunc_GetLegendItem_ReturnValue = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Not_PreBool_ReturnValue_2 = (bool)CallFunc_Not_PreBool_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue_2 = (bool)CallFunc_BooleanAND_ReturnValue_2;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_PostEventAtLocation_ReturnValue_2 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_2;
    params.CallFunc_GetHoveredCharacterButtonID_CharacterID = (int32_t)CallFunc_GetHoveredCharacterButtonID_CharacterID;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.CallFunc_GetHoveredCharacterButtonID_CharacterID_1 = (int32_t)CallFunc_GetHoveredCharacterButtonID_CharacterID_1;
    params.CallFunc_NotEqual_IntInt_ReturnValue_1 = (bool)CallFunc_NotEqual_IntInt_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_Array_Get_Item_1 = (FLegendItemData)CallFunc_Array_Get_Item_1;
    params.CallFunc_GetLegendItem_ReturnValue_1 = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_7;
    params.CallFunc_BooleanAND_ReturnValue_3 = (bool)CallFunc_BooleanAND_ReturnValue_3;
    params.CallFunc_Back_BackedOut = (bool)CallFunc_Back_BackedOut;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_8;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    return (bool)params.ReturnValue;
}
void UUI_BP_FrontEnd_Menu_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::HoverListItem(UUI_BP_TempFEButton_C* Button, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.HoverListItem"));
    struct Params_HoverListItem {
        UUI_BP_TempFEButton_C* Button; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_HoverListItem params{};
    params.Button = (UUI_BP_TempFEButton_C*)Button;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::DisplayNextRewardNotification(bool FirstCall, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_RewardNotification_C* CallFunc_Create_ReturnValue) {}
void UUI_BP_FrontEnd_Menu_C::AdjustForViewportResolution(float IdealRatio, float IdealWidth, float CurrentRatio, float CurrentWidth, FMargin K2Node_MakeStruct_Margin, float CallFunc_Subtract_FloatFloat_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, float K2Node_MathExpression_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.AdjustForViewportResolution"));
    struct Params_AdjustForViewportResolution {
        float IdealRatio; // 0x0
        float IdealWidth; // 0x4
        float CurrentRatio; // 0x8
        float CurrentWidth; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x20
        char pad_24[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x28
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x30
        FMargin K2Node_MakeStruct_Margin_1; // 0x34
        float K2Node_MathExpression_ReturnValue; // 0x44
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x48
        char pad_49[0x3];
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x4c
        float CallFunc_BreakVector2D_X; // 0x54
        float CallFunc_BreakVector2D_Y; // 0x58
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x5c
    }; // Size: 0x60
    Params_AdjustForViewportResolution params{};
    params.IdealRatio = (float)IdealRatio;
    params.IdealWidth = (float)IdealWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.CurrentWidth = (float)CurrentWidth;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature"));
    struct Params_BndEvt__characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::GetHoveredCharacterButtonID(int32_t& CharacterID, UUI_BP_CharacterSelectButton_C* CallFunc_GetHoveredCharacterButton_HoveredButton, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.GetHoveredCharacterButtonID"));
    struct Params_GetHoveredCharacterButtonID {
        int32_t CharacterID; // 0x0
        char pad_4[0x4];
        UUI_BP_CharacterSelectButton_C* CallFunc_GetHoveredCharacterButton_HoveredButton; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetHoveredCharacterButtonID params{};
    params.CharacterID = (int32_t)CharacterID;
    params.CallFunc_GetHoveredCharacterButton_HoveredButton = (UUI_BP_CharacterSelectButton_C*)CallFunc_GetHoveredCharacterButton_HoveredButton;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    CharacterID = params.CharacterID;
}
void UUI_BP_FrontEnd_Menu_C::OnCharacterDeletedAsync(UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUI_BP_CharacterSelectButton_C* CallFunc_GetHoveredCharacterButton_HoveredButton, bool CallFunc_IsValid_ReturnValue, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, UPersistentData* CallFunc_GetInstance_ReturnValue) {}
void UUI_BP_FrontEnd_Menu_C::DeleteCharacterTooltipDismissed(UPopupScreen* Popup, int32_t Response, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.DeleteCharacterTooltipDismissed"));
    struct Params_DeleteCharacterTooltipDismissed {
        UPopupScreen* Popup; // 0x0
        int32_t Response; // 0x8
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0xc
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DeleteCharacterTooltipDismissed params{};
    params.Popup = (UPopupScreen*)Popup;
    params.Response = (int32_t)Response;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_FrontEnd_Menu_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_FrontEnd_Menu_C::BndEvt__characterSlot3_K2Node_ComponentBoundEvent_14_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot3_K2Node_ComponentBoundEvent_14_OnCharacterClicked__DelegateSignature"));
    struct Params_BndEvt__characterSlot3_K2Node_ComponentBoundEvent_14_OnCharacterClicked__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__characterSlot3_K2Node_ComponentBoundEvent_14_OnCharacterClicked__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__characterSlot2_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot2_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature"));
    struct Params_BndEvt__characterSlot2_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__characterSlot2_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
FString UUI_BP_FrontEnd_Menu_C::GetCurrentlySelectedSkipOption(int32_t CallFunc_GetSelectedIndex_SelectedIndex, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.GetCurrentlySelectedSkipOption"));
    struct Params_GetCurrentlySelectedSkipOption {
        FString ReturnValue; // 0x0
        int32_t CallFunc_GetSelectedIndex_SelectedIndex; // 0x10
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x14
        char pad_15[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetCurrentlySelectedSkipOption params{};
    params.CallFunc_GetSelectedIndex_SelectedIndex = (int32_t)CallFunc_GetSelectedIndex_SelectedIndex;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UUI_BP_FrontEnd_Menu_C::GetSkipOptionDisplayStrings(TArray<FString>& SkipOptions, TArray<FString>& OutDisplayStrings, TArray<FString> DisplayStrings, FString Temp_string_Variable, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FSTR_MissionSkipDisplayNames CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.GetSkipOptionDisplayStrings"));
    struct Params_GetSkipOptionDisplayStrings {
        TArray<FString> SkipOptions; // 0x0
        TArray<FString> OutDisplayStrings; // 0x10
        TArray<FString> DisplayStrings; // 0x20
        FString Temp_string_Variable; // 0x30
        int32_t Temp_int_Array_Index_Variable; // 0x40
        int32_t Temp_int_Loop_Counter_Variable; // 0x44
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x48
        char pad_4c[0x4];
        FString CallFunc_Array_Get_Item; // 0x50
        int32_t CallFunc_Array_Add_ReturnValue; // 0x60
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x64
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x68
        int32_t CallFunc_Array_Length_ReturnValue; // 0x70
        char pad_74[0x4];
        FSTR_MissionSkipDisplayNames CallFunc_GetDataTableRowFromName_OutRow; // 0x78
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x88
        bool CallFunc_Less_IntInt_ReturnValue; // 0x89
        char pad_8a[0x2];
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0x8c
    }; // Size: 0x90
    Params_GetSkipOptionDisplayStrings params{};
    params.SkipOptions = (TArray<FString>)SkipOptions;
    params.OutDisplayStrings = (TArray<FString>)OutDisplayStrings;
    params.DisplayStrings = (TArray<FString>)DisplayStrings;
    params.Temp_string_Variable = (FString)Temp_string_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FSTR_MissionSkipDisplayNames)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    ProcessEvent(func, &params);
    SkipOptions = params.SkipOptions;
    OutDisplayStrings = params.OutDisplayStrings;
}
void UUI_BP_FrontEnd_Menu_C::LegendHoldComplete(ULegendItem* LegendItem, bool HoldWasCompleted, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.LegendHoldComplete"));
    struct Params_LegendHoldComplete {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
        bool CallFunc_BooleanAND_ReturnValue; // 0x9
    }; // Size: 0xa
    Params_LegendHoldComplete params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::GetHoveredCharacterButton(UUI_BP_CharacterSelectButton_C*& hoveredButton, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UUI_BP_CharacterSelectButton_C*>& K2Node_MakeArray_Array, int32_t CallFunc_Array_Length_ReturnValue, UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsHovered_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.GetHoveredCharacterButton"));
    struct Params_GetHoveredCharacterButton {
        UUI_BP_CharacterSelectButton_C* hoveredButton; // 0x0
        bool Temp_bool_True_if_break_was_hit_Variable; // 0x8
        char pad_9[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0xc
        bool CallFunc_Not_PreBool_ReturnValue; // 0x10
        char pad_11[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        char pad_1c[0x4];
        TArray<UUI_BP_CharacterSelectButton_C*> K2Node_MakeArray_Array; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x30
        char pad_34[0x4];
        UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item; // 0x38
        bool CallFunc_Less_IntInt_ReturnValue; // 0x40
        bool CallFunc_BooleanAND_ReturnValue; // 0x41
        bool CallFunc_IsHovered_ReturnValue; // 0x42
    }; // Size: 0x43
    Params_GetHoveredCharacterButton params{};
    params.hoveredButton = (UUI_BP_CharacterSelectButton_C*)hoveredButton;
    params.Temp_bool_True_if_break_was_hit_Variable = (bool)Temp_bool_True_if_break_was_hit_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<UUI_BP_CharacterSelectButton_C*>)K2Node_MakeArray_Array;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_CharacterSelectButton_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_IsHovered_ReturnValue = (bool)CallFunc_IsHovered_ReturnValue;
    ProcessEvent(func, &params);
    hoveredButton = params.hoveredButton;
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UUI_BP_FrontEnd_Menu_C::ResolutionSettingsApplied(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.ResolutionSettingsApplied"));
    struct Params_ResolutionSettingsApplied {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ResolutionSettingsApplied params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::SetLegend(TArray<FLegendItemData>& LegendData, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FLegendItemData CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, ULegendItem* CallFunc_GetLegendItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {}
void UUI_BP_FrontEnd_Menu_C::On_Character_Loaded(AActor* Actor, EGenderEnum Gender, UCustomizableCharacterComponent* CallFunc_GetComponentByClass_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, UObject* Temp_object_Variable, TArray<void*>& CallFunc_GetGearAppearanceItemDefinitions_ReturnValue) {}
void UUI_BP_FrontEnd_Menu_C::SetDefaultCharSlotTooltipLegend(bool IsEmptySlot, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, TArray<FLegendItemData>& K2Node_MakeArray_Array, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, TArray<FLegendItemData>& K2Node_MakeArray_Array_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SetDefaultCharSlotTooltipLegend"));
    struct Params_SetDefaultCharSlotTooltipLegend {
        bool IsEmptySlot; // 0x0
        char pad_1[0x7];
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x8
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x38
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x68
        FLegendItemData K2Node_MakeStruct_LegendItemData_2; // 0x78
        FLegendItemData K2Node_MakeStruct_LegendItemData_3; // 0xa8
        TArray<FLegendItemData> K2Node_MakeArray_Array_1; // 0xd8
    }; // Size: 0xe8
    Params_SetDefaultCharSlotTooltipLegend params{};
    params.IsEmptySlot = (bool)IsEmptySlot;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    params.K2Node_MakeStruct_LegendItemData_2 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_2;
    params.K2Node_MakeStruct_LegendItemData_3 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_3;
    params.K2Node_MakeArray_Array_1 = (TArray<FLegendItemData>)K2Node_MakeArray_Array_1;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    K2Node_MakeArray_Array_1 = params.K2Node_MakeArray_Array_1;
}
void UUI_BP_FrontEnd_Menu_C::Set_Default_Legend_Data(TArray<FLegendItemData> DefaultLegendLocal, bool Temp_bool_Variable, TArray<FLegendItemData>& Temp_struct_Variable, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, TArray<FLegendItemData>& K2Node_MakeArray_Array, TArray<FLegendItemData>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable_1, TArray<FLegendItemData>& Temp_struct_Variable_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, bool CallFunc_IsPackagedForDistribution_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array_2, TArray<FLegendItemData>& K2Node_Select_Default, TArray<FLegendItemData>& K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.Set Default Legend Data"));
    struct Params_Set_Default_Legend_Data {
        TArray<FLegendItemData> DefaultLegendLocal; // 0x0
        bool Temp_bool_Variable; // 0x10
        char pad_11[0x7];
        TArray<FLegendItemData> Temp_struct_Variable; // 0x18
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x28
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x58
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x88
        TArray<FLegendItemData> K2Node_MakeArray_Array_1; // 0x98
        bool Temp_bool_Variable_1; // 0xa8
        char pad_a9[0x7];
        TArray<FLegendItemData> Temp_struct_Variable_1; // 0xb0
        FLegendItemData K2Node_MakeStruct_LegendItemData_2; // 0xc0
        bool CallFunc_IsPackagedForDistribution_ReturnValue; // 0xf0
        char pad_f1[0x7];
        TArray<FLegendItemData> K2Node_MakeArray_Array_2; // 0xf8
        TArray<FLegendItemData> K2Node_Select_Default; // 0x108
        TArray<FLegendItemData> K2Node_Select_Default_1; // 0x118
    }; // Size: 0x128
    Params_Set_Default_Legend_Data params{};
    params.DefaultLegendLocal = (TArray<FLegendItemData>)DefaultLegendLocal;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_struct_Variable = (TArray<FLegendItemData>)Temp_struct_Variable;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    params.K2Node_MakeArray_Array_1 = (TArray<FLegendItemData>)K2Node_MakeArray_Array_1;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_struct_Variable_1 = (TArray<FLegendItemData>)Temp_struct_Variable_1;
    params.K2Node_MakeStruct_LegendItemData_2 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_2;
    params.CallFunc_IsPackagedForDistribution_ReturnValue = (bool)CallFunc_IsPackagedForDistribution_ReturnValue;
    params.K2Node_MakeArray_Array_2 = (TArray<FLegendItemData>)K2Node_MakeArray_Array_2;
    params.K2Node_Select_Default = (TArray<FLegendItemData>)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (TArray<FLegendItemData>)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
    Temp_struct_Variable = params.Temp_struct_Variable;
    Temp_struct_Variable_1 = params.Temp_struct_Variable_1;
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    K2Node_MakeArray_Array_1 = params.K2Node_MakeArray_Array_1;
    K2Node_MakeArray_Array_2 = params.K2Node_MakeArray_Array_2;
    K2Node_Select_Default = params.K2Node_Select_Default;
    K2Node_Select_Default_1 = params.K2Node_Select_Default_1;
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__characterSlot2_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot2_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature"));
    struct Params_BndEvt__characterSlot2_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__characterSlot2_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::SetPlayingFromFrontendBasedOnOverlandSelection(UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue, FString CallFunc_GetSelectedOption_SelectedOption, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue_6, bool CallFunc_EqualEqual_StrStr_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SetPlayingFromFrontendBasedOnOverlandSelection"));
    struct Params_SetPlayingFromFrontendBasedOnOverlandSelection {
        UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue; // 0x0
        FString CallFunc_GetSelectedOption_SelectedOption; // 0x8
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x18
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x19
        bool CallFunc_EqualEqual_StrStr_ReturnValue_2; // 0x1a
        bool CallFunc_EqualEqual_StrStr_ReturnValue_3; // 0x1b
        bool CallFunc_EqualEqual_StrStr_ReturnValue_4; // 0x1c
        bool CallFunc_EqualEqual_StrStr_ReturnValue_5; // 0x1d
        bool CallFunc_EqualEqual_StrStr_ReturnValue_6; // 0x1e
        bool CallFunc_EqualEqual_StrStr_ReturnValue_7; // 0x1f
        bool CallFunc_BooleanOR_ReturnValue; // 0x20
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x21
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x22
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x23
        bool CallFunc_BooleanOR_ReturnValue_4; // 0x24
        bool CallFunc_BooleanOR_ReturnValue_5; // 0x25
        bool CallFunc_BooleanOR_ReturnValue_6; // 0x26
    }; // Size: 0x27
    Params_SetPlayingFromFrontendBasedOnOverlandSelection params{};
    params.CallFunc_GetPhoenixGameInstance_ReturnValue = (UPhoenixGameInstance*)CallFunc_GetPhoenixGameInstance_ReturnValue;
    params.CallFunc_GetSelectedOption_SelectedOption = (FString)CallFunc_GetSelectedOption_SelectedOption;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_2 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_2;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_3 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_3;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_4 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_4;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_5 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_5;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_6 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_6;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_7 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_7;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue_4 = (bool)CallFunc_BooleanOR_ReturnValue_4;
    params.CallFunc_BooleanOR_ReturnValue_5 = (bool)CallFunc_BooleanOR_ReturnValue_5;
    params.CallFunc_BooleanOR_ReturnValue_6 = (bool)CallFunc_BooleanOR_ReturnValue_6;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::OnMenuButtonHovered(UUI_BP_MenuTextButton_C* hoveredButton, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, int32_t CallFunc_PostEventAtLocation_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnMenuButtonHovered"));
    struct Params_OnMenuButtonHovered {
        UUI_BP_MenuTextButton_C* hoveredButton; // 0x0
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x8
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x10
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x20
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x50
        char pad_54[0x4];
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x58
    }; // Size: 0x68
    Params_OnMenuButtonHovered params{};
    params.hoveredButton = (UUI_BP_MenuTextButton_C*)hoveredButton;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UUI_BP_FrontEnd_Menu_C::ShowLoadOptions() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.ShowLoadOptions"));
    struct Params_ShowLoadOptions {
    }; // Size: 0x0
    Params_ShowLoadOptions params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::AddDungeonLevels(TArray<FName>& Levels, TArray<FName> LocalDungeonList, E_AVA_DungeonEntrance::Type DungeonEnum, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<FName>& K2Node_MakeArray_Array, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.AddDungeonLevels"));
    struct Params_AddDungeonLevels {
        TArray<FName> Levels; // 0x0
        TArray<FName> LocalDungeonList; // 0x10
        E_AVA_DungeonEntrance::Type DungeonEnum; // 0x20
        char pad_21[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x24
        int32_t Temp_int_Loop_Counter_Variable; // 0x28
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x2c
        TArray<FName> K2Node_MakeArray_Array; // 0x30
        FName CallFunc_Array_Get_Item; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0x48
        bool CallFunc_Less_IntInt_ReturnValue; // 0x4c
        char pad_4d[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x50
    }; // Size: 0x54
    Params_AddDungeonLevels params{};
    params.Levels = (TArray<FName>)Levels;
    params.LocalDungeonList = (TArray<FName>)LocalDungeonList;
    params.DungeonEnum = (E_AVA_DungeonEntrance::Type)DungeonEnum;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<FName>)K2Node_MakeArray_Array;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    ProcessEvent(func, &params);
    Levels = params.Levels;
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UUI_BP_FrontEnd_Menu_C::SetDefaultHouseAndGender(int32_t CharacterID, FString& House, FString& Gender, HouseIds HouseEnum, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FString CallFunc_GetSelectedOption_SelectedOption, bool CallFunc_SetPlayerGenderVoice_ReturnValue, bool CallFunc_SetPlayerGenderVoice_ReturnValue_1, bool CallFunc_SetPlayerGenderPronoun_ReturnValue, bool CallFunc_SetPlayerGenderPronoun_ReturnValue_1, bool CallFunc_SetPlayerGenderPronoun_ReturnValue_2, bool CallFunc_SetPlayerGenderVoice_ReturnValue_2, bool CallFunc_SetPlayerGenderPronoun_ReturnValue_3, bool CallFunc_UpdatePlayableCharacterGender_ReturnValue, bool CallFunc_UpdatePlayableCharacterGender_ReturnValue_1, EGenderEnum CallFunc_GetFullBodyPreset_OutGender) {}
void UUI_BP_FrontEnd_Menu_C::OnCharacterClicked(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnCharacterClicked"));
    struct Params_OnCharacterClicked {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_OnCharacterClicked params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::AddDefaultInventory() {}
void UUI_BP_FrontEnd_Menu_C::Equip_Announce_Gear(FGearName DefaultIntroOutfit, FGearName DefaultAnnounceBack, FGearName DefaultAnnounceOutfit) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.Equip Announce Gear"));
    struct Params_Equip_Announce_Gear {
        FGearName DefaultIntroOutfit; // 0x0
        FGearName DefaultAnnounceBack; // 0x10
        FGearName DefaultAnnounceOutfit; // 0x20
    }; // Size: 0x30
    Params_Equip_Announce_Gear params{};
    params.DefaultIntroOutfit = (FGearName)DefaultIntroOutfit;
    params.DefaultAnnounceBack = (FGearName)DefaultAnnounceBack;
    params.DefaultAnnounceOutfit = (FGearName)DefaultAnnounceOutfit;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterHovered__DelegateSignature"));
    struct Params_BndEvt__characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterHovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterHovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_UI_BP_LoadMenu_K2Node_ComponentBoundEvent_23_OnLoadSave__DelegateSignature(FString Filename, int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_UI_BP_LoadMenu_K2Node_ComponentBoundEvent_23_OnLoadSave__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_UI_BP_LoadMenu_K2Node_ComponentBoundEvent_23_OnLoadSave__DelegateSignature {
        FString Filename; // 0x0
        int32_t CharacterID; // 0x10
    }; // Size: 0x14
    Params_BndEvt__UI_BP_FrontEnd_Menu_UI_BP_LoadMenu_K2Node_ComponentBoundEvent_23_OnLoadSave__DelegateSignature params{};
    params.Filename = (FString)Filename;
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::InitCharacterModel() {}
void UUI_BP_FrontEnd_Menu_C::BndEvt__characterSlot3_K2Node_ComponentBoundEvent_13_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot3_K2Node_ComponentBoundEvent_13_OnCharacterUnhovered__DelegateSignature"));
    struct Params_BndEvt__characterSlot3_K2Node_ComponentBoundEvent_13_OnCharacterUnhovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__characterSlot3_K2Node_ComponentBoundEvent_13_OnCharacterUnhovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::UpdateCharacterModel(int32_t CharacterID, EGenderEnum Temp_byte_Variable, FCharacterSaveGameInfo CallFunc_GetPlayableCharacter_ReturnValue) {}
void UUI_BP_FrontEnd_Menu_C::OnCharacterButtonHovered(UUI_BP_CharacterSelectButton_C* hoveredButton, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnCharacterButtonHovered"));
    struct Params_OnCharacterButtonHovered {
        UUI_BP_CharacterSelectButton_C* hoveredButton; // 0x0
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0xc
        bool CallFunc_Not_PreBool_ReturnValue; // 0x10
        bool CallFunc_BooleanAND_ReturnValue; // 0x11
        char pad_12[0x6];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_OnCharacterButtonHovered params{};
    params.hoveredButton = (UUI_BP_CharacterSelectButton_C*)hoveredButton;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::SetTooltipLegend(TArray<FLegendItemData>& Legends, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue) {}
void UUI_BP_FrontEnd_Menu_C::DeleteCharacterProfileAsync(int32_t CharacterID, bool CallFunc_AsyncRemovePlayableCharacter_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue) {}
void UUI_BP_FrontEnd_Menu_C::InitMainMenu(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_DoesCrossGenSaveDataExist_ReturnValue, FString CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetDisplayedUserTag_ReturnValue, ESlateVisibility K2Node_Select_Default) {}
void UUI_BP_FrontEnd_Menu_C::SelectListItemButtonSFX(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SelectListItemButtonSFX"));
    struct Params_SelectListItemButtonSFX {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_SelectListItemButtonSFX params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::DeleteCharacterProfile(int32_t CharacterID, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_RemovePlayableCharacter_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.DeleteCharacterProfile"));
    struct Params_DeleteCharacterProfile {
        int32_t CharacterID; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        bool CallFunc_RemovePlayableCharacter_ReturnValue; // 0x8
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x9
    }; // Size: 0xa
    Params_DeleteCharacterProfile params{};
    params.CharacterID = (int32_t)CharacterID;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_RemovePlayableCharacter_ReturnValue = (bool)CallFunc_RemovePlayableCharacter_ReturnValue;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::Back(bool& BackedOut, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue, ESlateVisibility K2Node_Select_Default, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.Back"));
    struct Params_Back {
        bool BackedOut; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable_1; // 0x2
        bool Temp_bool_Variable; // 0x3
        char pad_4[0x4];
        UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue; // 0x8
        ESlateVisibility K2Node_Select_Default; // 0x10
        char pad_11[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x14
    }; // Size: 0x18
    Params_Back params{};
    params.BackedOut = (bool)BackedOut;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_GetPhoenixGameInstance_ReturnValue = (UPhoenixGameInstance*)CallFunc_GetPhoenixGameInstance_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
    BackedOut = params.BackedOut;
}
void UUI_BP_FrontEnd_Menu_C::InitCharacterSlotButtons(int32_t tempSlotCount, TArray<UUI_BP_CharacterSelectButton_C*> SlotArray, HouseIds House, TArray<FCharacterSaveGameInfo> PlayableCharacters, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item, TArray<UUI_BP_CharacterSelectButton_C*>& K2Node_MakeArray_Array, UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item_2, FCharacterSaveGameInfo CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, TArray<FCharacterSaveGameInfo>& CallFunc_GetAllPlayableCharacters_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.InitCharacterSlotButtons"));
    struct Params_InitCharacterSlotButtons {
        int32_t tempSlotCount; // 0x0
        char pad_4[0x4];
        TArray<UUI_BP_CharacterSelectButton_C*> SlotArray; // 0x8
        HouseIds House; // 0x18
        char pad_19[0x7];
        TArray<FCharacterSaveGameInfo> PlayableCharacters; // 0x20
        int32_t Temp_int_Loop_Counter_Variable; // 0x30
        int32_t Temp_int_Variable; // 0x34
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x38
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x3c
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x40
        int32_t Temp_int_Array_Index_Variable; // 0x44
        int32_t CallFunc_Array_Length_ReturnValue; // 0x48
        bool CallFunc_Less_IntInt_ReturnValue; // 0x4c
        char pad_4d[0x3];
        UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item; // 0x50
        TArray<UUI_BP_CharacterSelectButton_C*> K2Node_MakeArray_Array; // 0x58
        UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item_1; // 0x68
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x70
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x74
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x78
        char pad_79[0x3];
        int32_t Temp_int_Array_Index_Variable_1; // 0x7c
        UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item_2; // 0x80
        FCharacterSaveGameInfo CallFunc_Array_Get_Item_3; // 0x88
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x3d8
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x3dc
        bool K2Node_SwitchString_CmpSuccess; // 0x3dd
        char pad_3de[0x2];
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0x3e0
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x3e4
        char pad_3e5[0x3];
        TArray<FCharacterSaveGameInfo> CallFunc_GetAllPlayableCharacters_ReturnValue; // 0x3e8
    }; // Size: 0x3f8
    Params_InitCharacterSlotButtons params{};
    params.tempSlotCount = (int32_t)tempSlotCount;
    params.SlotArray = (TArray<UUI_BP_CharacterSelectButton_C*>)SlotArray;
    params.House = (HouseIds)House;
    params.PlayableCharacters = (TArray<FCharacterSaveGameInfo>)PlayableCharacters;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_CharacterSelectButton_C*)CallFunc_Array_Get_Item;
    params.K2Node_MakeArray_Array = (TArray<UUI_BP_CharacterSelectButton_C*>)K2Node_MakeArray_Array;
    params.CallFunc_Array_Get_Item_1 = (UUI_BP_CharacterSelectButton_C*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Array_Get_Item_2 = (UUI_BP_CharacterSelectButton_C*)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Get_Item_3 = (FCharacterSaveGameInfo)CallFunc_Array_Get_Item_3;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.K2Node_SwitchString_CmpSuccess = (bool)K2Node_SwitchString_CmpSuccess;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_GetAllPlayableCharacters_ReturnValue = (TArray<FCharacterSaveGameInfo>)CallFunc_GetAllPlayableCharacters_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    CallFunc_GetAllPlayableCharacters_ReturnValue = params.CallFunc_GetAllPlayableCharacters_ReturnValue;
}
void UUI_BP_FrontEnd_Menu_C::CharacterButtonSelected(UUI_BP_CharacterSelectButton_C* SelectedButton, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.CharacterButtonSelected"));
    struct Params_CharacterButtonSelected {
        UUI_BP_CharacterSelectButton_C* SelectedButton; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_CharacterButtonSelected params{};
    params.SelectedButton = (UUI_BP_CharacterSelectButton_C*)SelectedButton;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__characterSlot4_K2Node_ComponentBoundEvent_16_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot4_K2Node_ComponentBoundEvent_16_OnCharacterUnhovered__DelegateSignature"));
    struct Params_BndEvt__characterSlot4_K2Node_ComponentBoundEvent_16_OnCharacterUnhovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__characterSlot4_K2Node_ComponentBoundEvent_16_OnCharacterUnhovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::OnMissionSelectionChanged(int32_t NewOptionIndex, UUI_BP_SettingsDropDownButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnMissionSelectionChanged"));
    struct Params_OnMissionSelectionChanged {
        int32_t NewOptionIndex; // 0x0
        char pad_4[0x4];
        UUI_BP_SettingsDropDownButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_OnMissionSelectionChanged params{};
    params.NewOptionIndex = (int32_t)NewOptionIndex;
    params.Button = (UUI_BP_SettingsDropDownButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::ShowCharacterToolTip(UUI_BP_CharacterSelectButton_C* Character) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.ShowCharacterToolTip"));
    struct Params_ShowCharacterToolTip {
        UUI_BP_CharacterSelectButton_C* Character; // 0x0
    }; // Size: 0x8
    Params_ShowCharacterToolTip params{};
    params.Character = (UUI_BP_CharacterSelectButton_C*)Character;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::OnLoadLookFromArraysComplete(AActor* Actor, bool Success) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnLoadLookFromArraysComplete"));
    struct Params_OnLoadLookFromArraysComplete {
        AActor* Actor; // 0x0
        bool Success; // 0x8
    }; // Size: 0x9
    Params_OnLoadLookFromArraysComplete params{};
    params.Actor = (AActor*)Actor;
    params.Success = (bool)Success;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::ShowActors(TArray<AActor*>& Array, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.ShowActors"));
    struct Params_ShowActors {
        TArray<AActor*> Array; // 0x0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x10
        int32_t Temp_int_Array_Index_Variable; // 0x14
        int32_t Temp_int_Loop_Counter_Variable; // 0x18
        char pad_1c[0x4];
        AActor* CallFunc_Array_Get_Item; // 0x20
        bool CallFunc_Less_IntInt_ReturnValue; // 0x28
        char pad_29[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x2c
    }; // Size: 0x30
    Params_ShowActors params{};
    params.Array = (TArray<AActor*>)Array;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Get_Item = (AActor*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    Array = params.Array;
}
void UUI_BP_FrontEnd_Menu_C::SetButtonText() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SetButtonText"));
    struct Params_SetButtonText {
    }; // Size: 0x0
    Params_SetButtonText params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::Select_List_Item(UUI_BP_MenuTextButton_C* SelectedButton, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FString CallFunc_GetSelectedOption_SelectedOption, HouseIds CallFunc_GetHouseIDFromRegistryID_ReturnValue, EGenderEnum CallFunc_GetFullBodyPreset_OutGender) {}
void UUI_BP_FrontEnd_Menu_C::InitList(bool InDeveloperMode, UUI_BP_MenuTextButton_C* tempLevelButton, TArray<FName> Levels) {}
void UUI_BP_FrontEnd_Menu_C::OnFail_86D2838448573BC41D7DE4A2119C5C12(UTexture2DDynamic* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnFail_86D2838448573BC41D7DE4A2119C5C12"));
    struct Params_OnFail_86D2838448573BC41D7DE4A2119C5C12 {
        UTexture2DDynamic* Texture; // 0x0
    }; // Size: 0x8
    Params_OnFail_86D2838448573BC41D7DE4A2119C5C12 params{};
    params.Texture = (UTexture2DDynamic*)Texture;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_1_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_1_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_1_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_1_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::OnSuccess_86D2838448573BC41D7DE4A2119C5C12(UTexture2DDynamic* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnSuccess_86D2838448573BC41D7DE4A2119C5C12"));
    struct Params_OnSuccess_86D2838448573BC41D7DE4A2119C5C12 {
        UTexture2DDynamic* Texture; // 0x0
    }; // Size: 0x8
    Params_OnSuccess_86D2838448573BC41D7DE4A2119C5C12 params{};
    params.Texture = (UTexture2DDynamic*)Texture;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__OverlandCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__OverlandCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__OverlandCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__OverlandCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__SanctuaryCustom_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__SanctuaryCustom_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__SanctuaryCustom_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__SanctuaryCustom_K2Node_ComponentBoundEvent_1_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::SetMenuLegend(TArray<FLegendItemData>& LegendArray) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SetMenuLegend"));
    struct Params_SetMenuLegend {
        TArray<FLegendItemData> LegendArray; // 0x0
    }; // Size: 0x10
    Params_SetMenuLegend params{};
    params.LegendArray = (TArray<FLegendItemData>)LegendArray;
    ProcessEvent(func, &params);
    LegendArray = params.LegendArray;
}
void UUI_BP_FrontEnd_Menu_C::DevMenuButton() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.DevMenuButton"));
    struct Params_DevMenuButton {
    }; // Size: 0x0
    Params_DevMenuButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__MissionCustom_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__MissionCustom_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__MissionCustom_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__MissionCustom_K2Node_ComponentBoundEvent_3_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::AsyncMOTDImage(FString Image_URL) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.AsyncMOTDImage"));
    struct Params_AsyncMOTDImage {
        FString Image_URL; // 0x0
    }; // Size: 0x10
    Params_AsyncMOTDImage params{};
    params.Image_URL = (FString)Image_URL;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__characterSlot4_K2Node_ComponentBoundEvent_18_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot4_K2Node_ComponentBoundEvent_18_OnCharacterClicked__DelegateSignature"));
    struct Params_BndEvt__characterSlot4_K2Node_ComponentBoundEvent_18_OnCharacterClicked__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__characterSlot4_K2Node_ComponentBoundEvent_18_OnCharacterClicked__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::MOTDLoaded(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.MOTDLoaded"));
    struct Params_MOTDLoaded {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_MOTDLoaded params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::NetworkChange(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.NetworkChange"));
    struct Params_NetworkChange {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_NetworkChange params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__characterSlot4_K2Node_ComponentBoundEvent_15_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot4_K2Node_ComponentBoundEvent_15_OnCharacterHovered__DelegateSignature"));
    struct Params_BndEvt__characterSlot4_K2Node_ComponentBoundEvent_15_OnCharacterHovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__characterSlot4_K2Node_ComponentBoundEvent_15_OnCharacterHovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::AsyncMOTDImageLoaded(FSlateBrush Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.AsyncMOTDImageLoaded"));
    struct Params_AsyncMOTDImageLoaded {
        FSlateBrush Texture; // 0x0
    }; // Size: 0x88
    Params_AsyncMOTDImageLoaded params{};
    params.Texture = (FSlateBrush)Texture;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterClicked__DelegateSignature"));
    struct Params_BndEvt__characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterClicked__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterClicked__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__characterSlot1_K2Node_ComponentBoundEvent_7_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot1_K2Node_ComponentBoundEvent_7_OnCharacterClicked__DelegateSignature"));
    struct Params_BndEvt__characterSlot1_K2Node_ComponentBoundEvent_7_OnCharacterClicked__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__characterSlot1_K2Node_ComponentBoundEvent_7_OnCharacterClicked__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__characterSlot1_K2Node_ComponentBoundEvent_6_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__characterSlot1_K2Node_ComponentBoundEvent_6_OnCharacterUnhovered__DelegateSignature"));
    struct Params_BndEvt__characterSlot1_K2Node_ComponentBoundEvent_6_OnCharacterUnhovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__characterSlot1_K2Node_ComponentBoundEvent_6_OnCharacterUnhovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::OnFullGameNotInstalledPopupClosed_Event(bool continueToGame) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnFullGameNotInstalledPopupClosed_Event"));
    struct Params_OnFullGameNotInstalledPopupClosed_Event {
        bool continueToGame; // 0x0
    }; // Size: 0x1
    Params_OnFullGameNotInstalledPopupClosed_Event params{};
    params.continueToGame = (bool)continueToGame;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::OnShowLoadOptions() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnShowLoadOptions"));
    struct Params_OnShowLoadOptions {
    }; // Size: 0x0
    Params_OnShowLoadOptions params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::CustomEvent(bool continueToGame) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.CustomEvent"));
    struct Params_CustomEvent {
        bool continueToGame; // 0x0
    }; // Size: 0x1
    Params_CustomEvent params{};
    params.continueToGame = (bool)continueToGame;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_CinematicBinkLauncher_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_CinematicBinkLauncher_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_CinematicBinkLauncher_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FrontEnd_Menu_CinematicBinkLauncher_K2Node_ComponentBoundEvent_2_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_K2Node_ComponentBoundEvent_19_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_K2Node_ComponentBoundEvent_19_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_K2Node_ComponentBoundEvent_19_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FrontEnd_Menu_DebugLoadingScreenButton_K2Node_ComponentBoundEvent_19_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::OnExitRequested() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnExitRequested"));
    struct Params_OnExitRequested {
    }; // Size: 0x0
    Params_OnExitRequested params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::SettingsRequestedNewLegend(TArray<FLegendItemData>& NewLegend) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.SettingsRequestedNewLegend"));
    struct Params_SettingsRequestedNewLegend {
        TArray<FLegendItemData> NewLegend; // 0x0
    }; // Size: 0x10
    Params_SettingsRequestedNewLegend params{};
    params.NewLegend = (TArray<FLegendItemData>)NewLegend;
    ProcessEvent(func, &params);
    NewLegend = params.NewLegend;
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_20_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_20_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_20_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_20_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_21_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_21_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_21_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_21_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_22_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_22_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_22_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_22_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_31_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_31_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_31_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_31_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_32_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_32_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_32_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_32_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_33_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_33_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_33_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_33_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_34_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_34_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_34_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FrontEnd_Menu_storeButton_K2Node_ComponentBoundEvent_34_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_35_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_35_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_35_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FrontEnd_Menu_crossGenSaveData_K2Node_ComponentBoundEvent_35_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_36_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_36_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_36_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_FrontEnd_Menu_exitButton_K2Node_ComponentBoundEvent_36_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::QuitGamePopupDismissed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.QuitGamePopupDismissed"));
    struct Params_QuitGamePopupDismissed {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_QuitGamePopupDismissed params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::OnRewardNotificationClosed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEnd_Menu.UI_BP_FrontEnd_Menu_C.OnRewardNotificationClosed"));
    struct Params_OnRewardNotificationClosed {
    }; // Size: 0x0
    Params_OnRewardNotificationClosed params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEnd_Menu_C::ExecuteUbergraph_UI_BP_FrontEnd_Menu(int32_t EntryPoint, FString CallFunc_GetSelectedOption_SelectedOption, bool K2Node_SwitchString_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button_13, int32_t CallFunc_AdjustCount_ReturnValue, TArray<FLegendItemData>& K2Node_Event_LegendArray, int32_t K2Node_Event_IntroType_1, float K2Node_Event_IntroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button_12, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_11, FString CallFunc_GetSelectedOption_SelectedOption_1, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_10, UUIOnlineManager* CallFunc_Get_ReturnValue, TArray<FMOTD>& CallFunc_GetMOTD_ReturnValue, UObject* K2Node_CustomEvent_Caller_2, int32_t K2Node_CustomEvent_Int_1, bool CallFunc_Greater_IntInt_ReturnValue, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_9, APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UUI_BP_Store_C* CallFunc_Create_ReturnValue, FString K2Node_CustomEvent_Image_URL, UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue) {}
