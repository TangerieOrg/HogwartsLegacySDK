#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ECreaturePregnancyState.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FEventReply.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UCreatureDefinition.hpp"
#include "UCreatureManager.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UImage.hpp"
#include "UMenuCursorWidget.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UOverlaySlot.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UScaleBox.hpp"
#include "UScreen.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_CreatureAddToNurtureSpaceTooltip_C.hpp"
#include "UUI_BP_CreatureButton_C.hpp"
#include "UUI_BP_CreatureInNurtureSpaceTooltip_C.hpp"
#include "UUI_BP_CreatureManagementScreen_C.hpp"
#include "UUI_BP_CreatureManagement_DetailsPanel_C.hpp"
#include "UUI_BP_InventoryIconButton_C.hpp"
#include "UUI_BP_ItemScrollBox_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUniformGridPanel.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_CreatureManagementScreen_C::OnCreatureClicked(UUI_BP_CreatureButton_C* CreatureButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnCreatureClicked"));
    struct Params_OnCreatureClicked {
        UUI_BP_CreatureButton_C* CreatureButton; // 0x0
    }; // Size: 0x8
    Params_OnCreatureClicked params{};
    params.CreatureButton = (UUI_BP_CreatureButton_C*)CreatureButton;
    ProcessEvent(func, &params);
}
UUI_BP_CreatureManagementScreen_C* UUI_BP_CreatureManagementScreen_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C");
    return (UUI_BP_CreatureManagementScreen_C*)res;
}
void UUI_BP_CreatureManagementScreen_C::AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.AdjustForViewportWidth"));
    struct Params_AdjustForViewportWidth {
        float CurrentWidth; // 0x0
        float CurrentRatio; // 0x4
        float IdealWidth; // 0x8
        float IdealRatio; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        FMargin K2Node_MakeStruct_Margin_1; // 0x20
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x30
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x38
        float K2Node_MathExpression_ReturnValue; // 0x40
        FMargin K2Node_MakeStruct_Margin_2; // 0x44
        FMargin K2Node_MakeStruct_Margin_3; // 0x54
        float K2Node_MathExpression_ReturnValue_1; // 0x64
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x68
        char pad_69[0x3];
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x6c
        float CallFunc_BreakVector2D_X; // 0x74
        float CallFunc_BreakVector2D_Y; // 0x78
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x7c
    }; // Size: 0x80
    Params_AdjustForViewportWidth params{};
    params.CurrentWidth = (float)CurrentWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.IdealWidth = (float)IdealWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.K2Node_MathExpression_ReturnValue_1 = (float)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::IsNewCreature(FName CreatureID, FName Variation, bool& IsNew, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, TArray<FName>& CallFunc_GetNewIndicatorCategory_NewIndicatorItems, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.IsNewCreature"));
    struct Params_IsNewCreature {
        FName CreatureID; // 0x0
        FName Variation; // 0x8
        bool IsNew; // 0x10
        char pad_11[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0x18
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x20
        TArray<FName> CallFunc_GetNewIndicatorCategory_NewIndicatorItems; // 0x30
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x40
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x50
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x60
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x70
        int32_t CallFunc_Array_Find_ReturnValue; // 0x78
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x7c
    }; // Size: 0x7d
    Params_IsNewCreature params{};
    params.CreatureID = (FName)CreatureID;
    params.Variation = (FName)Variation;
    params.IsNew = (bool)IsNew;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetNewIndicatorCategory_NewIndicatorItems = (TArray<FName>)CallFunc_GetNewIndicatorCategory_NewIndicatorItems;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    IsNew = params.IsNew;
    CallFunc_GetNewIndicatorCategory_NewIndicatorItems = params.CallFunc_GetNewIndicatorCategory_NewIndicatorItems;
}
TArray<FString> UUI_BP_CreatureManagementScreen_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_CreatureManagementScreen_C::OnInventoryButtonHovered(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnInventoryButtonHovered"));
    struct Params_OnInventoryButtonHovered {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_OnInventoryButtonHovered params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::ClearNewStatus(FName CreatureID, FName Variation, UUI_BP_InventoryIconButton_C* Button, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.ClearNewStatus"));
    struct Params_ClearNewStatus {
        FName CreatureID; // 0x0
        FName Variation; // 0x8
        UUI_BP_InventoryIconButton_C* Button; // 0x10
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x18
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x20
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x30
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x40
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x50
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x60
    }; // Size: 0x68
    Params_ClearNewStatus params{};
    params.CreatureID = (FName)CreatureID;
    params.Variation = (FName)Variation;
    params.Button = (UUI_BP_InventoryIconButton_C*)Button;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::OnCreatureChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnCreatureChanged"));
    struct Params_OnCreatureChanged {
    }; // Size: 0x0
    Params_OnCreatureChanged params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::GetNurtureSpaceCreaturesToDisplay(TArray<UCreatureState*>& CreatureStates) {}
void UUI_BP_CreatureManagementScreen_C::SaveSNC_02ReleasedCreature(UCreatureState* CreatureState, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, FName CallFunc_GetTypeID_ReturnValue) {}
void UUI_BP_CreatureManagementScreen_C::ViewCreatureDetails(UUI_BP_CreatureButton_C* CreatureButton, UCreatureState* CreatureState, UCreatureState* CallFunc_GetCreatureState_CreatureState, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_GetMotherUID_ReturnValue, bool CallFunc_IsUnbornCreature_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByUID_ReturnValue, int32_t CallFunc_GetCreatureUID_ReturnValue, bool CallFunc_Get_Can_View_Creature_Details_CanMoveCreature, FString CallFunc_Get_Can_View_Creature_Details_ErrorMsgKey) {}
void UUI_BP_CreatureManagementScreen_C::FilterOutSNC_02SelectedCreatures(TArray<FInventoryResult>& InventoryResultsArray, TArray<FInventoryResult>& FilteredArray, TArray<FInventoryResult> FilteredResultsArray, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, FInventoryResult CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, int32_t CallFunc_GetCreatureUIDFromVariationName_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.FilterOutSNC_02SelectedCreatures"));
    struct Params_FilterOutSNC_02SelectedCreatures {
        TArray<FInventoryResult> InventoryResultsArray; // 0x0
        TArray<FInventoryResult> FilteredArray; // 0x10
        TArray<FInventoryResult> FilteredResultsArray; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x30
        int32_t Temp_int_Array_Index_Variable; // 0x34
        int32_t Temp_int_Loop_Counter_Variable; // 0x38
        char pad_3c[0x4];
        FInventoryResult CallFunc_Array_Get_Item; // 0x40
        bool CallFunc_Less_IntInt_ReturnValue; // 0xc8
        char pad_c9[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xcc
        UCreatureManager* CallFunc_Get_ReturnValue; // 0xd0
        int32_t CallFunc_GetCreatureUIDFromVariationName_ReturnValue; // 0xd8
        int32_t CallFunc_Array_Add_ReturnValue; // 0xdc
        bool CallFunc_Array_Contains_ReturnValue; // 0xe0
    }; // Size: 0xe1
    Params_FilterOutSNC_02SelectedCreatures params{};
    params.InventoryResultsArray = (TArray<FInventoryResult>)InventoryResultsArray;
    params.FilteredArray = (TArray<FInventoryResult>)FilteredArray;
    params.FilteredResultsArray = (TArray<FInventoryResult>)FilteredResultsArray;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Get_Item = (FInventoryResult)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetCreatureUIDFromVariationName_ReturnValue = (int32_t)CallFunc_GetCreatureUIDFromVariationName_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    ProcessEvent(func, &params);
    InventoryResultsArray = params.InventoryResultsArray;
    FilteredArray = params.FilteredArray;
}
void UUI_BP_CreatureManagementScreen_C::BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_2_OnButtonUnhovered__DelegateSignature(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_2_OnButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_2_OnButtonUnhovered__DelegateSignature {
        UIconButtonWidget* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_2_OnButtonUnhovered__DelegateSignature params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::UpdateCreatureTooltipDescription(UCreatureState* HoveredCreatureState, FString& CreatureDescription, FString TempDescription, FString CallFunc_GetCreatureDisplayName_OutName, bool CallFunc_GetCreatureDisplayName_OutIsLocalizationKey, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsUnbornCreature_ReturnValue, bool CallFunc_IsPregnant_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.UpdateCreatureTooltipDescription"));
    struct Params_UpdateCreatureTooltipDescription {
        UCreatureState* HoveredCreatureState; // 0x0
        FString CreatureDescription; // 0x8
        FString TempDescription; // 0x18
        FString CallFunc_GetCreatureDisplayName_OutName; // 0x28
        bool CallFunc_GetCreatureDisplayName_OutIsLocalizationKey; // 0x38
        char pad_39[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x40
        bool CallFunc_IsUnbornCreature_ReturnValue; // 0x50
        bool CallFunc_IsPregnant_ReturnValue; // 0x51
    }; // Size: 0x52
    Params_UpdateCreatureTooltipDescription params{};
    params.HoveredCreatureState = (UCreatureState*)HoveredCreatureState;
    params.CreatureDescription = (FString)CreatureDescription;
    params.TempDescription = (FString)TempDescription;
    params.CallFunc_GetCreatureDisplayName_OutName = (FString)CallFunc_GetCreatureDisplayName_OutName;
    params.CallFunc_GetCreatureDisplayName_OutIsLocalizationKey = (bool)CallFunc_GetCreatureDisplayName_OutIsLocalizationKey;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_IsUnbornCreature_ReturnValue = (bool)CallFunc_IsUnbornCreature_ReturnValue;
    params.CallFunc_IsPregnant_ReturnValue = (bool)CallFunc_IsPregnant_ReturnValue;
    ProcessEvent(func, &params);
    CreatureDescription = params.CreatureDescription;
}
void UUI_BP_CreatureManagementScreen_C::UpdateInventoryButtonEnabled(UUI_BP_InventoryIconButton_C* IconButton) {}
void UUI_BP_CreatureManagementScreen_C::UpdateCreatureInInventoryTooltip(UCreatureState* CreatureState, bool CallFunc_Not_PreBool_ReturnValue) {}
bool UUI_BP_CreatureManagementScreen_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, TArray<EUMGInputAction> SNC_02_DisallowedActions, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue, UCreatureState* CallFunc_GetCreatureState_CreatureState, bool CallFunc_Get_Can_Summon_Creature_CanMoveCreature, FString CallFunc_Get_Can_Summon_Creature_ErrorMsgKey, bool CallFunc_IsHovered_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, FString CallFunc_SummonCreature_OutErrorKey, bool CallFunc_SummonCreature_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FEventReply CallFunc_ReturnCreatureToInventory_Return_Value, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, TArray<EUMGInputAction>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x5];
        TArray<EUMGInputAction> SNC_02_DisallowedActions; // 0x8
        bool CallFunc_Array_Contains_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x19
        char pad_1a[0x6];
        UCreatureState* CallFunc_GetCreatureState_CreatureState; // 0x20
        bool CallFunc_Get_Can_Summon_Creature_CanMoveCreature; // 0x28
        char pad_29[0x7];
        FString CallFunc_Get_Can_Summon_Creature_ErrorMsgKey; // 0x30
        bool CallFunc_IsHovered_ReturnValue; // 0x40
        char pad_41[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x48
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x50
        FString CallFunc_SummonCreature_OutErrorKey; // 0x58
        bool CallFunc_SummonCreature_ReturnValue; // 0x68
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x69
        char pad_6a[0x6];
        FEventReply CallFunc_ReturnCreatureToInventory_Return_Value; // 0x70
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x128
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x129
        bool CallFunc_IsValid_ReturnValue_1; // 0x12a
        bool CallFunc_BooleanOR_ReturnValue; // 0x12b
        bool CallFunc_IsHovered_ReturnValue_1; // 0x12c
        char pad_12d[0x3];
        TArray<EUMGInputAction> K2Node_MakeArray_Array; // 0x130
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x140
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x141
    }; // Size: 0x142
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.SNC_02_DisallowedActions = (TArray<EUMGInputAction>)SNC_02_DisallowedActions;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetCreatureState_CreatureState = (UCreatureState*)CallFunc_GetCreatureState_CreatureState;
    params.CallFunc_Get_Can_Summon_Creature_CanMoveCreature = (bool)CallFunc_Get_Can_Summon_Creature_CanMoveCreature;
    params.CallFunc_Get_Can_Summon_Creature_ErrorMsgKey = (FString)CallFunc_Get_Can_Summon_Creature_ErrorMsgKey;
    params.CallFunc_IsHovered_ReturnValue = (bool)CallFunc_IsHovered_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_SummonCreature_OutErrorKey = (FString)CallFunc_SummonCreature_OutErrorKey;
    params.CallFunc_SummonCreature_ReturnValue = (bool)CallFunc_SummonCreature_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_ReturnCreatureToInventory_Return_Value = (FEventReply)CallFunc_ReturnCreatureToInventory_Return_Value;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_IsHovered_ReturnValue_1 = (bool)CallFunc_IsHovered_ReturnValue_1;
    params.K2Node_MakeArray_Array = (TArray<EUMGInputAction>)K2Node_MakeArray_Array;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    return (bool)params.ReturnValue;
}
void UUI_BP_CreatureManagementScreen_C::PlayScreenIntro(bool FromSubScreen) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.PlayScreenIntro"));
    struct Params_PlayScreenIntro {
        bool FromSubScreen; // 0x0
    }; // Size: 0x1
    Params_PlayScreenIntro params{};
    params.FromSubScreen = (bool)FromSubScreen;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::ReturnCreatureToInventory(UUI_BP_CreatureButton_C* ButtonPressed, FEventReply& Return_Value, UCreatureState* CurrentCreatureState, UCreatureState* CallFunc_GetCreatureState_CreatureState, int32_t CallFunc_GetCreatureUID_ReturnValue, UCreatureDefinition* CallFunc_GetDefinition_ReturnValue, bool CallFunc_IsUnbornCreature_ReturnValue, bool CallFunc_IsEgg_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue) {}
void UUI_BP_CreatureManagementScreen_C::AddCreatureToNurtureSpace(UCreatureState* CreatureState, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_GetCreatureUID_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, FString CallFunc_CanReleaseCreatureToNurturingSpace_OutErrorKey, bool CallFunc_CanReleaseCreatureToNurturingSpace_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.AddCreatureToNurtureSpace"));
    struct Params_AddCreatureToNurtureSpace {
        UCreatureState* CreatureState; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t CallFunc_GetCreatureUID_ReturnValue; // 0xc
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue_1; // 0x18
        char pad_19[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x20
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x28
        FString CallFunc_CanReleaseCreatureToNurturingSpace_OutErrorKey; // 0x30
        bool CallFunc_CanReleaseCreatureToNurturingSpace_ReturnValue; // 0x40
    }; // Size: 0x41
    Params_AddCreatureToNurtureSpace params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetCreatureUID_ReturnValue = (int32_t)CallFunc_GetCreatureUID_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_CanReleaseCreatureToNurturingSpace_OutErrorKey = (FString)CallFunc_CanReleaseCreatureToNurturingSpace_OutErrorKey;
    params.CallFunc_CanReleaseCreatureToNurturingSpace_ReturnValue = (bool)CallFunc_CanReleaseCreatureToNurturingSpace_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::TriggerExitScreen(bool ToFollowScreen, bool Temp_bool_Variable, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t K2Node_Select_Default, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.TriggerExitScreen"));
    struct Params_TriggerExitScreen {
        bool ToFollowScreen; // 0x0
        bool Temp_bool_Variable; // 0x1
        char pad_2[0x2];
        int32_t Temp_int_Variable; // 0x4
        int32_t Temp_int_Variable_1; // 0x8
        int32_t K2Node_Select_Default; // 0xc
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x10
    }; // Size: 0x14
    Params_TriggerExitScreen params{};
    params.ToFollowScreen = (bool)ToFollowScreen;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.K2Node_Select_Default = (int32_t)K2Node_Select_Default;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::Update_Creature_in_Nurture_Space_Tooltip(UCreatureState* CreatureState, TArray<FLegendItemData> Local_LegendData, bool Local_CanMoveOutOfNurtureSpace, bool Local_EnoughInventorySpaceForMove, bool CallFunc_GetCanMoveCreatureOutOfNurtureSpace_CanMoveCreature, FString CallFunc_GetCanMoveCreatureOutOfNurtureSpace_ErrorMsgKey, FLegendItemData K2Node_MakeStruct_LegendItemData, bool CallFunc_Get_Can_Summon_Creature_CanMoveCreature, FString CallFunc_Get_Can_Summon_Creature_ErrorMsgKey, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, bool CallFunc_Get_Can_View_Creature_Details_CanMoveCreature, FString CallFunc_Get_Can_View_Creature_Details_ErrorMsgKey, FLegendItemData K2Node_MakeStruct_LegendItemData_3, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.Update Creature in Nurture Space Tooltip"));
    struct Params_Update_Creature_in_Nurture_Space_Tooltip {
        UCreatureState* CreatureState; // 0x0
        TArray<FLegendItemData> Local_LegendData; // 0x8
        bool Local_CanMoveOutOfNurtureSpace; // 0x18
        bool Local_EnoughInventorySpaceForMove; // 0x19
        bool CallFunc_GetCanMoveCreatureOutOfNurtureSpace_CanMoveCreature; // 0x1a
        char pad_1b[0x5];
        FString CallFunc_GetCanMoveCreatureOutOfNurtureSpace_ErrorMsgKey; // 0x20
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x30
        bool CallFunc_Get_Can_Summon_Creature_CanMoveCreature; // 0x60
        char pad_61[0x7];
        FString CallFunc_Get_Can_Summon_Creature_ErrorMsgKey; // 0x68
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x78
        FLegendItemData K2Node_MakeStruct_LegendItemData_2; // 0xa8
        bool CallFunc_Get_Can_View_Creature_Details_CanMoveCreature; // 0xd8
        char pad_d9[0x7];
        FString CallFunc_Get_Can_View_Creature_Details_ErrorMsgKey; // 0xe0
        FLegendItemData K2Node_MakeStruct_LegendItemData_3; // 0xf0
        int32_t CallFunc_Array_Add_ReturnValue; // 0x120
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x124
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0x128
        int32_t CallFunc_Array_Add_ReturnValue_3; // 0x12c
    }; // Size: 0x130
    Params_Update_Creature_in_Nurture_Space_Tooltip params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    params.Local_LegendData = (TArray<FLegendItemData>)Local_LegendData;
    params.Local_CanMoveOutOfNurtureSpace = (bool)Local_CanMoveOutOfNurtureSpace;
    params.Local_EnoughInventorySpaceForMove = (bool)Local_EnoughInventorySpaceForMove;
    params.CallFunc_GetCanMoveCreatureOutOfNurtureSpace_CanMoveCreature = (bool)CallFunc_GetCanMoveCreatureOutOfNurtureSpace_CanMoveCreature;
    params.CallFunc_GetCanMoveCreatureOutOfNurtureSpace_ErrorMsgKey = (FString)CallFunc_GetCanMoveCreatureOutOfNurtureSpace_ErrorMsgKey;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.CallFunc_Get_Can_Summon_Creature_CanMoveCreature = (bool)CallFunc_Get_Can_Summon_Creature_CanMoveCreature;
    params.CallFunc_Get_Can_Summon_Creature_ErrorMsgKey = (FString)CallFunc_Get_Can_Summon_Creature_ErrorMsgKey;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.K2Node_MakeStruct_LegendItemData_2 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_2;
    params.CallFunc_Get_Can_View_Creature_Details_CanMoveCreature = (bool)CallFunc_Get_Can_View_Creature_Details_CanMoveCreature;
    params.CallFunc_Get_Can_View_Creature_Details_ErrorMsgKey = (FString)CallFunc_Get_Can_View_Creature_Details_ErrorMsgKey;
    params.K2Node_MakeStruct_LegendItemData_3 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_3;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    params.CallFunc_Array_Add_ReturnValue_3 = (int32_t)CallFunc_Array_Add_ReturnValue_3;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::DisplayErrorMessage(FString Message, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.DisplayErrorMessage"));
    struct Params_DisplayErrorMessage {
        FString Message; // 0x0
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_DisplayErrorMessage params{};
    params.Message = (FString)Message;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::InitCreatureButton(UUI_BP_CreatureButton_C* ButtonWidget, UCreatureState* CreatureState) {}
void UUI_BP_CreatureManagementScreen_C::PopulateCreatureList(TArray<UCreatureState*>& CreatureStates, int32_t MaxNumCreatures, int32_t MaxNumSpecies) {}
void UUI_BP_CreatureManagementScreen_C::InitForNurturingSpace(bool PlayAddAnimation, TArray<FInventoryResult> InventoryResultsArray, UUI_BP_InventoryIconButton_C* CurrentInventoryButton, int32_t LastNumNurturingSpaceCreatures, int32_t LastNumInventoryCreatures, int32_t MaxNumSpecies, int32_t MaxNumCreatures, int32_t CallFunc_Multiply_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_Array_LastIndex_ReturnValue, UIconButtonWidget* CallFunc_Array_Get_Item, int32_t Temp_int_Variable, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, UIconButtonWidget* CallFunc_Array_Get_Item_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_GetHolderMaxSlotsBP_ReturnValue, TArray<UCreatureState*>& CallFunc_GetNurtureSpaceCreaturesToDisplay_CreatureStates) {}
void UUI_BP_CreatureManagementScreen_C::Finished_E8409943489DCF8C0282D6A9FFD4BE36() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.Finished_E8409943489DCF8C0282D6A9FFD4BE36"));
    struct Params_Finished_E8409943489DCF8C0282D6A9FFD4BE36 {
    }; // Size: 0x0
    Params_Finished_E8409943489DCF8C0282D6A9FFD4BE36 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::OnCreatureHovered(UUI_BP_CreatureButton_C* CreatureButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnCreatureHovered"));
    struct Params_OnCreatureHovered {
        UUI_BP_CreatureButton_C* CreatureButton; // 0x0
    }; // Size: 0x8
    Params_OnCreatureHovered params{};
    params.CreatureButton = (UUI_BP_CreatureButton_C*)CreatureButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::OnCreatureUnhovered(UUI_BP_CreatureButton_C* CreatureButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnCreatureUnhovered"));
    struct Params_OnCreatureUnhovered {
        UUI_BP_CreatureButton_C* CreatureButton; // 0x0
    }; // Size: 0x8
    Params_OnCreatureUnhovered params{};
    params.CreatureButton = (UUI_BP_CreatureButton_C*)CreatureButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::OnInventoryButtonUnhovered(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnInventoryButtonUnhovered"));
    struct Params_OnInventoryButtonUnhovered {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_OnInventoryButtonUnhovered params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::OnInventoryButtonClicked(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnInventoryButtonClicked"));
    struct Params_OnInventoryButtonClicked {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_OnInventoryButtonClicked params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::OnCreatureSummoned() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.OnCreatureSummoned"));
    struct Params_OnCreatureSummoned {
    }; // Size: 0x0
    Params_OnCreatureSummoned params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::SNC_02_BeastReleaseStarted(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.SNC_02_BeastReleaseStarted"));
    struct Params_SNC_02_BeastReleaseStarted {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_SNC_02_BeastReleaseStarted params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature {
        UIconButtonWidget* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature(UIconButtonWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagementScreen.UI_BP_CreatureManagementScreen_C.BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature {
        UIconButtonWidget* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature params{};
    params.Button = (UIconButtonWidget*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagementScreen_C::ExecuteUbergraph_UI_BP_CreatureManagementScreen(int32_t EntryPoint, UIconButtonWidget* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, TArray<UCreatureState*>& K2Node_MakeArray_Array, int32_t Temp_int_Loop_Counter_Variable, UUI_BP_CreatureButton_C* K2Node_CustomEvent_CreatureButton_2, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_CreatureButton_C* K2Node_CustomEvent_CreatureButton_1, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue, FName CallFunc_GetCurrentCreatureNurturingSpaceID_ReturnValue) {}
