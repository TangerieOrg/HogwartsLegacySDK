#pragma once
#include <cstdint>
#include "EKeyLayout.hpp"
#include "ESlateVisibility.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FInputAxisKeyMapping.hpp"
#include "FInputGroupHeader.hpp"
#include "FKey.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "USettingsTabWidget.hpp"
class UUI_BP_SettingsCheckboxButton_C;
class UWidgetAnimation;
class UPhoenixTextBlock;
class UPhoenixImage;
class UVerticalBox;
class UUI_BP_SimpleScrollBox_C;
class UUI_BP_InputHeader_Row_C;
class UUI_BP_InputActionAlt_Row_C;
class UUI_BP_InputAxisAlt_Row_C;
class UUI_BP_MKBInput_C;
class UPhoenixUserWidget;
class ULegend;
class UPhoenixGameSettings;
class ULegendItem;
class UWidget;
class UUI_BP_KeyMapping_ConflictItem_C;
class UUI_BP_KeyMapping_ConflictItemGroupHeader_C;
class UVerticalBoxSlot;
#pragma pack(push, 1)
class UUI_BP_KeyMapping_C : public USettingsTabWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3f0
    UWidgetAnimation* hideBindingPopup; // 0x3f8
    UWidgetAnimation* showBindingPopup; // 0x400
    UPhoenixTextBlock* ActionNameBox; // 0x408
    UUI_BP_SimpleScrollBox_C* ActionScroll; // 0x410
    UVerticalBox* ActionScrollContent; // 0x418
    UUI_BP_InputHeader_Row_C* BindingConflictTitle; // 0x420
    UVerticalBox* ConflictList; // 0x428
    UPhoenixImage* NoBindingIcon; // 0x430
    UUI_BP_InputHeader_Row_C* ShowAlternativePrompts; // 0x438
    UUI_BP_SettingsCheckboxButton_C* ShowAlternatives; // 0x440
    UUI_BP_SimpleScrollBox_C* UI_BP_SimpleScrollBox; // 0x448
    UVerticalBox* UnassignedMessaging; // 0x450
    UUI_BP_InputActionAlt_Row_C* CurrentActionRow; // 0x458
    UUI_BP_InputAxisAlt_Row_C* CurrentAxisRow; // 0x460
    TArray<FKey> ForbiddenKeys; // 0x468
    TArray<FName> OneDirectionalAxes; // 0x478
    bool HeaderUseTopPadding; // 0x488
    bool RebindIsAxis; // 0x489
    char pad_48a[0x6];
    UUI_BP_MKBInput_C* InputKey_Presentation; // 0x490
    FName NameFromLoop; // 0x498
    bool HoveredBindingIsPrimary; // 0x4a0
    char pad_4a1[0x7];
    TArray<UPhoenixUserWidget*> CachedConflictItems; // 0x4a8
    ULegend* ParentLegend; // 0x4b8
    bool UnbindPromptVisible; // 0x4c0
    char pad_4c1[0x7];
    static UUI_BP_KeyMapping_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, ULegendItem* CallFunc_GetLegendItem_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, UPhoenixUserWidget* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_3, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void UpdateLegend(FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, TArray<FLegendItemData>& K2Node_MakeArray_Array, TArray<FLegendItemData>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, FInputAxisKeyMapping K2Node_Select_Default, bool CallFunc_IsAxisKeyValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FInputActionKeyMapping K2Node_Select_Default_1, bool CallFunc_IsActionKeyValid_ReturnValue);
    void GetAxisRow(FName AxisName, bool PositiveAxis, UUI_BP_InputAxisAlt_Row_C*& AxisRow, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_InputAxisAlt_Row_C* K2Node_DynamicCast_AsUI_BP_Input_Axis_Alt_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void GetHasAnyUnboundActions(bool& HasAnyUnbound);
    void IsAxisRowUnassigned(UUI_BP_InputAxisAlt_Row_C* Row, bool& isUnassigned, bool CallFunc_Key_IsValid_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue_1, bool CallFunc_Key_IsValid_ReturnValue_2, bool K2Node_MathExpression_ReturnValue);
    void IsActionRowUnassigned(UUI_BP_InputActionAlt_Row_C* Row, bool& isUnassigned, bool CallFunc_Key_IsValid_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue_1, bool K2Node_MathExpression_ReturnValue);
    void UpdateConflictMessage(FMargin ItemMargin, FMargin HeaderMargin, FName LastAddedGroup, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_KeyMapping_ConflictItem_C* CallFunc_Create_ReturnValue, UUI_BP_KeyMapping_ConflictItem_C* CallFunc_Create_ReturnValue_1, ESlateVisibility Temp_byte_Variable, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_GetHasAnyUnboundActions_HasAnyUnbound, ESlateVisibility K2Node_Select_Default, UUI_BP_KeyMapping_ConflictItemGroupHeader_C* CallFunc_Create_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_2, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UUI_BP_KeyMapping_ConflictItemGroupHeader_C* CallFunc_Create_ReturnValue_3, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_3, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_3, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_InputAxisAlt_Row_C* K2Node_DynamicCast_AsUI_BP_Input_Axis_Alt_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsAxisRowUnassigned_isUnassigned, UUI_BP_InputActionAlt_Row_C* K2Node_DynamicCast_AsUI_BP_Input_Action_Alt_Row, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsActionRowUnassigned_isUnassigned, bool CallFunc_EqualEqual_NameName_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void ShouldCancelRowCreation(FInputAxisKeyMapping Primary, FInputAxisKeyMapping Alternative, bool& Ignore, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void BuldHeaderRow(FString Header, bool Large, FString CallFunc_Concat_StrStr_ReturnValue, FMargin K2Node_MakeStruct_Margin, UUI_BP_InputHeader_Row_C* CallFunc_Create_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
    void ToggleRebindingMode(bool Rebinding, bool RebindingIsPrimary, UUI_BP_MKBInput_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void HandleRebuildAllRows(UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue);
    void HandleResetToDefaults();
    void HandleInputAxisUnhovered(UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void HandleInputAxisHovered(UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary);
    void HandleInputAxisClicked(UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary);
    void HandleInputActionUnhovered(UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void HandleInputActionHovered(UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary);
    void HandleInputActionClicked(UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary);
    void BuildAxisRow(FName AxisName, FInputAxisKeyMapping Primary, FInputAxisKeyMapping FakeLockedPrimary, FInputAxisKeyMapping Alternative, bool IsBiDirectionalAxis, bool IsPositiveAxis, FName GroupName);
    void Build_Action_Row(FInputActionKeyMapping Primary, FInputActionKeyMapping Alternative, FName ActionName, FName GroupName);
    void BuildRowsForGroup(FName GroupName, TArray<FName>& Actions, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, FName CallFunc_Array_Get_Item, FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutPosMain, FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutFakePosMain, FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutPosAlt, FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutNegMain, FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutFakeNegMain, FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutNegAlt, bool CallFunc_GetMutatedMKBAxisMappingsByName_ReturnValue, FInputActionKeyMapping CallFunc_GetMKBActionPairByName_OutPrimary, FInputActionKeyMapping CallFunc_GetMKBActionPairByName_OutAlternative, bool CallFunc_GetMKBActionPairByName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void BuildAllRows(FString PreviousActionName, FInputActionKeyMapping NextKeyboardMapping, FInputAxisKeyMapping CurrentAxisMapping, FInputActionKeyMapping CurrentKeyboardMapping, FString CurrentActionName, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, TArray<FInputGroupHeader>& CallFunc_GetPCInputGroupHeaders_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FInputGroupHeader CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, TArray<FName>& CallFunc_GetGroupMappingNames_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<FName>& CallFunc_GetGroupMappingNames_ReturnValue_1, bool CallFunc_IsPackagedForDistribution_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue);
    void BndEvt__UI_BP_KeyMapping_UI_BP_SettingsCheckboxButton_K2Node_ComponentBoundEvent_1_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button);
    void Construct();
    void KeyLayoutChanged(EKeyLayout OldLayout, EKeyLayout NewLayout);
    void BndEvt__UI_BP_KeyMapping_ShowAlternatives_K2Node_ComponentBoundEvent_0_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button);
    void OnLegendItemHoldEnd(ULegendItem* LegendItem, bool HoldWasCompleted);
    void ExecuteUbergraph_UI_BP_KeyMapping(int32_t EntryPoint, ULegendItem* K2Node_Event_LegendItem, bool K2Node_Event_HoldWasCompleted, bool K2Node_ComponentBoundEvent_isChecked, UUI_BP_SettingsCheckboxButton_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_1, bool CallFunc_GetAltTooltipsEnabled_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_2, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_4, bool Temp_bool_Variable);
}; // Size: 0x4c8
#pragma pack(pop)
