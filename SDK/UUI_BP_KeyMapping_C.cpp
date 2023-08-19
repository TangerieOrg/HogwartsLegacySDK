#include "EKeyLayout.hpp"
#include "ESlateVisibility.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FInputAxisKeyMapping.hpp"
#include "FInputGroupHeader.hpp"
#include "FKey.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "ULegend.hpp"
#include "ULegendItem.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "USettingsTabWidget.hpp"
#include "UUI_BP_InputActionAlt_Row_C.hpp"
#include "UUI_BP_InputAxisAlt_Row_C.hpp"
#include "UUI_BP_InputHeader_Row_C.hpp"
#include "UUI_BP_KeyMapping_C.hpp"
#include "UUI_BP_KeyMapping_ConflictItemGroupHeader_C.hpp"
#include "UUI_BP_KeyMapping_ConflictItem_C.hpp"
#include "UUI_BP_MKBInput_C.hpp"
#include "UUI_BP_SettingsCheckboxButton_C.hpp"
#include "UUI_BP_SimpleScrollBox_C.hpp"
#include "UVerticalBox.hpp"
#include "UVerticalBoxSlot.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
TArray<FString> UUI_BP_KeyMapping_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, ULegendItem* CallFunc_GetLegendItem_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, UPhoenixUserWidget* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_3, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
UUI_BP_KeyMapping_C* UUI_BP_KeyMapping_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C");
    return (UUI_BP_KeyMapping_C*)res;
}
void UUI_BP_KeyMapping_C::UpdateLegend(FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, TArray<FLegendItemData>& K2Node_MakeArray_Array, TArray<FLegendItemData>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, FInputAxisKeyMapping K2Node_Select_Default, bool CallFunc_IsAxisKeyValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FInputActionKeyMapping K2Node_Select_Default_1, bool CallFunc_IsActionKeyValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.UpdateLegend"));
    struct Params_UpdateLegend {
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x0
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x30
        FLegendItemData K2Node_MakeStruct_LegendItemData_2; // 0x60
        FLegendItemData K2Node_MakeStruct_LegendItemData_3; // 0x90
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0xc0
        TArray<FLegendItemData> K2Node_MakeArray_Array_1; // 0xd0
        bool Temp_bool_Variable; // 0xe0
        bool Temp_bool_Variable_1; // 0xe1
        bool CallFunc_IsValid_ReturnValue; // 0xe2
        char pad_e3[0x5];
        FInputAxisKeyMapping K2Node_Select_Default; // 0xe8
        bool CallFunc_IsAxisKeyValid_ReturnValue; // 0x120
        bool CallFunc_IsValid_ReturnValue_1; // 0x121
        char pad_122[0x6];
        FInputActionKeyMapping K2Node_Select_Default_1; // 0x128
        bool CallFunc_IsActionKeyValid_ReturnValue; // 0x160
    }; // Size: 0x161
    Params_UpdateLegend params{};
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.K2Node_MakeStruct_LegendItemData_2 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_2;
    params.K2Node_MakeStruct_LegendItemData_3 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_3;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    params.K2Node_MakeArray_Array_1 = (TArray<FLegendItemData>)K2Node_MakeArray_Array_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.K2Node_Select_Default = (FInputAxisKeyMapping)K2Node_Select_Default;
    params.CallFunc_IsAxisKeyValid_ReturnValue = (bool)CallFunc_IsAxisKeyValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.K2Node_Select_Default_1 = (FInputActionKeyMapping)K2Node_Select_Default_1;
    params.CallFunc_IsActionKeyValid_ReturnValue = (bool)CallFunc_IsActionKeyValid_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    K2Node_MakeArray_Array_1 = params.K2Node_MakeArray_Array_1;
}
void UUI_BP_KeyMapping_C::BuldHeaderRow(FString Header, bool Large, FString CallFunc_Concat_StrStr_ReturnValue, FMargin K2Node_MakeStruct_Margin, UUI_BP_InputHeader_Row_C* CallFunc_Create_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.BuldHeaderRow"));
    struct Params_BuldHeaderRow {
        FString Header; // 0x0
        bool Large; // 0x10
        char pad_11[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x18
        FMargin K2Node_MakeStruct_Margin; // 0x28
        UUI_BP_InputHeader_Row_C* CallFunc_Create_ReturnValue; // 0x38
        FMargin K2Node_MakeStruct_Margin_1; // 0x40
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue; // 0x50
    }; // Size: 0x58
    Params_BuldHeaderRow params{};
    params.Header = (FString)Header;
    params.Large = (bool)Large;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.CallFunc_Create_ReturnValue = (UUI_BP_InputHeader_Row_C*)CallFunc_Create_ReturnValue;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.CallFunc_AddChildToVerticalBox_ReturnValue = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::UpdateConflictMessage(FMargin ItemMargin, FMargin HeaderMargin, FName LastAddedGroup, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_KeyMapping_ConflictItem_C* CallFunc_Create_ReturnValue, UUI_BP_KeyMapping_ConflictItem_C* CallFunc_Create_ReturnValue_1, ESlateVisibility Temp_byte_Variable, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_GetHasAnyUnboundActions_HasAnyUnbound, ESlateVisibility K2Node_Select_Default, UUI_BP_KeyMapping_ConflictItemGroupHeader_C* CallFunc_Create_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_2, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UUI_BP_KeyMapping_ConflictItemGroupHeader_C* CallFunc_Create_ReturnValue_3, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_3, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_3, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_InputAxisAlt_Row_C* K2Node_DynamicCast_AsUI_BP_Input_Axis_Alt_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsAxisRowUnassigned_isUnassigned, UUI_BP_InputActionAlt_Row_C* K2Node_DynamicCast_AsUI_BP_Input_Action_Alt_Row, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsActionRowUnassigned_isUnassigned, bool CallFunc_EqualEqual_NameName_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.UpdateConflictMessage"));
    struct Params_UpdateConflictMessage {
        FMargin ItemMargin; // 0x0
        FMargin HeaderMargin; // 0x10
        FName LastAddedGroup; // 0x20
        int32_t Temp_int_Array_Index_Variable; // 0x28
        int32_t Temp_int_Loop_Counter_Variable; // 0x2c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x30
        char pad_34[0x4];
        UUI_BP_KeyMapping_ConflictItem_C* CallFunc_Create_ReturnValue; // 0x38
        UUI_BP_KeyMapping_ConflictItem_C* CallFunc_Create_ReturnValue_1; // 0x40
        ESlateVisibility Temp_byte_Variable; // 0x48
        char pad_49[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x4c
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x50
        ESlateVisibility Temp_byte_Variable_1; // 0x54
        bool Temp_bool_Variable; // 0x55
        bool CallFunc_GetHasAnyUnboundActions_HasAnyUnbound; // 0x56
        ESlateVisibility K2Node_Select_Default; // 0x57
        UUI_BP_KeyMapping_ConflictItemGroupHeader_C* CallFunc_Create_ReturnValue_2; // 0x58
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0x60
        char pad_64[0x4];
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue; // 0x68
        UUI_BP_KeyMapping_ConflictItemGroupHeader_C* CallFunc_Create_ReturnValue_3; // 0x70
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1; // 0x78
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2; // 0x80
        int32_t CallFunc_Array_Add_ReturnValue_3; // 0x88
        char pad_8c[0x4];
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_3; // 0x90
        TArray<UWidget*> CallFunc_GetAllChildren_ReturnValue; // 0x98
        int32_t CallFunc_Array_Length_ReturnValue; // 0xa8
        char pad_ac[0x4];
        UWidget* CallFunc_Array_Get_Item; // 0xb0
        bool CallFunc_Less_IntInt_ReturnValue; // 0xb8
        char pad_b9[0x7];
        UUI_BP_InputAxisAlt_Row_C* K2Node_DynamicCast_AsUI_BP_Input_Axis_Alt_Row; // 0xc0
        bool K2Node_DynamicCast_bSuccess; // 0xc8
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0xc9
        bool CallFunc_IsAxisRowUnassigned_isUnassigned; // 0xca
        char pad_cb[0x5];
        UUI_BP_InputActionAlt_Row_C* K2Node_DynamicCast_AsUI_BP_Input_Action_Alt_Row; // 0xd0
        bool K2Node_DynamicCast_bSuccess_1; // 0xd8
        bool CallFunc_IsActionRowUnassigned_isUnassigned; // 0xd9
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0xda
        char pad_db[0x5];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0xe0
        FString CallFunc_Concat_StrStr_ReturnValue; // 0xf0
    }; // Size: 0x100
    Params_UpdateConflictMessage params{};
    params.ItemMargin = (FMargin)ItemMargin;
    params.HeaderMargin = (FMargin)HeaderMargin;
    params.LastAddedGroup = (FName)LastAddedGroup;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_KeyMapping_ConflictItem_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_Create_ReturnValue_1 = (UUI_BP_KeyMapping_ConflictItem_C*)CallFunc_Create_ReturnValue_1;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_GetHasAnyUnboundActions_HasAnyUnbound = (bool)CallFunc_GetHasAnyUnboundActions_HasAnyUnbound;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_Create_ReturnValue_2 = (UUI_BP_KeyMapping_ConflictItemGroupHeader_C*)CallFunc_Create_ReturnValue_2;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    params.CallFunc_AddChildToVerticalBox_ReturnValue = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue;
    params.CallFunc_Create_ReturnValue_3 = (UUI_BP_KeyMapping_ConflictItemGroupHeader_C*)CallFunc_Create_ReturnValue_3;
    params.CallFunc_AddChildToVerticalBox_ReturnValue_1 = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue_1;
    params.CallFunc_AddChildToVerticalBox_ReturnValue_2 = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue_2;
    params.CallFunc_Array_Add_ReturnValue_3 = (int32_t)CallFunc_Array_Add_ReturnValue_3;
    params.CallFunc_AddChildToVerticalBox_ReturnValue_3 = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue_3;
    params.CallFunc_GetAllChildren_ReturnValue = (TArray<UWidget*>)CallFunc_GetAllChildren_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UWidget*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Input_Axis_Alt_Row = (UUI_BP_InputAxisAlt_Row_C*)K2Node_DynamicCast_AsUI_BP_Input_Axis_Alt_Row;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_IsAxisRowUnassigned_isUnassigned = (bool)CallFunc_IsAxisRowUnassigned_isUnassigned;
    params.K2Node_DynamicCast_AsUI_BP_Input_Action_Alt_Row = (UUI_BP_InputActionAlt_Row_C*)K2Node_DynamicCast_AsUI_BP_Input_Action_Alt_Row;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_IsActionRowUnassigned_isUnassigned = (bool)CallFunc_IsActionRowUnassigned_isUnassigned;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetAllChildren_ReturnValue = params.CallFunc_GetAllChildren_ReturnValue;
}
void UUI_BP_KeyMapping_C::GetAxisRow(FName AxisName, bool PositiveAxis, UUI_BP_InputAxisAlt_Row_C*& AxisRow, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_InputAxisAlt_Row_C* K2Node_DynamicCast_AsUI_BP_Input_Axis_Alt_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.GetAxisRow"));
    struct Params_GetAxisRow {
        FName AxisName; // 0x0
        bool PositiveAxis; // 0x8
        char pad_9[0x7];
        UUI_BP_InputAxisAlt_Row_C* AxisRow; // 0x10
        int32_t Temp_int_Array_Index_Variable; // 0x18
        int32_t Temp_int_Loop_Counter_Variable; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x20
        char pad_24[0x4];
        TArray<UWidget*> CallFunc_GetAllChildren_ReturnValue; // 0x28
        int32_t CallFunc_Array_Length_ReturnValue; // 0x38
        char pad_3c[0x4];
        UWidget* CallFunc_Array_Get_Item; // 0x40
        bool CallFunc_Less_IntInt_ReturnValue; // 0x48
        char pad_49[0x7];
        UUI_BP_InputAxisAlt_Row_C* K2Node_DynamicCast_AsUI_BP_Input_Axis_Alt_Row; // 0x50
        bool K2Node_DynamicCast_bSuccess; // 0x58
        bool CallFunc_EqualEqual_BoolBool_ReturnValue; // 0x59
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x5a
        bool CallFunc_BooleanAND_ReturnValue; // 0x5b
    }; // Size: 0x5c
    Params_GetAxisRow params{};
    params.AxisName = (FName)AxisName;
    params.PositiveAxis = (bool)PositiveAxis;
    params.AxisRow = (UUI_BP_InputAxisAlt_Row_C*)AxisRow;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetAllChildren_ReturnValue = (TArray<UWidget*>)CallFunc_GetAllChildren_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UWidget*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Input_Axis_Alt_Row = (UUI_BP_InputAxisAlt_Row_C*)K2Node_DynamicCast_AsUI_BP_Input_Axis_Alt_Row;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_EqualEqual_BoolBool_ReturnValue = (bool)CallFunc_EqualEqual_BoolBool_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    AxisRow = params.AxisRow;
    CallFunc_GetAllChildren_ReturnValue = params.CallFunc_GetAllChildren_ReturnValue;
}
void UUI_BP_KeyMapping_C::GetHasAnyUnboundActions(bool& HasAnyUnbound) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.GetHasAnyUnboundActions"));
    struct Params_GetHasAnyUnboundActions {
        bool HasAnyUnbound; // 0x0
    }; // Size: 0x1
    Params_GetHasAnyUnboundActions params{};
    params.HasAnyUnbound = (bool)HasAnyUnbound;
    ProcessEvent(func, &params);
    HasAnyUnbound = params.HasAnyUnbound;
}
void UUI_BP_KeyMapping_C::HandleInputActionHovered(UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleInputActionHovered"));
    struct Params_HandleInputActionHovered {
        UUI_BP_InputActionAlt_Row_C* Row; // 0x0
        bool IsPrimary; // 0x8
    }; // Size: 0x9
    Params_HandleInputActionHovered params{};
    params.Row = (UUI_BP_InputActionAlt_Row_C*)Row;
    params.IsPrimary = (bool)IsPrimary;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::IsAxisRowUnassigned(UUI_BP_InputAxisAlt_Row_C* Row, bool& isUnassigned, bool CallFunc_Key_IsValid_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue_1, bool CallFunc_Key_IsValid_ReturnValue_2, bool K2Node_MathExpression_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.IsAxisRowUnassigned"));
    struct Params_IsAxisRowUnassigned {
        UUI_BP_InputAxisAlt_Row_C* Row; // 0x0
        bool isUnassigned; // 0x8
        bool CallFunc_Key_IsValid_ReturnValue; // 0x9
        bool CallFunc_Key_IsValid_ReturnValue_1; // 0xa
        bool CallFunc_Key_IsValid_ReturnValue_2; // 0xb
        bool K2Node_MathExpression_ReturnValue; // 0xc
    }; // Size: 0xd
    Params_IsAxisRowUnassigned params{};
    params.Row = (UUI_BP_InputAxisAlt_Row_C*)Row;
    params.isUnassigned = (bool)isUnassigned;
    params.CallFunc_Key_IsValid_ReturnValue = (bool)CallFunc_Key_IsValid_ReturnValue;
    params.CallFunc_Key_IsValid_ReturnValue_1 = (bool)CallFunc_Key_IsValid_ReturnValue_1;
    params.CallFunc_Key_IsValid_ReturnValue_2 = (bool)CallFunc_Key_IsValid_ReturnValue_2;
    params.K2Node_MathExpression_ReturnValue = (bool)K2Node_MathExpression_ReturnValue;
    ProcessEvent(func, &params);
    isUnassigned = params.isUnassigned;
}
void UUI_BP_KeyMapping_C::IsActionRowUnassigned(UUI_BP_InputActionAlt_Row_C* Row, bool& isUnassigned, bool CallFunc_Key_IsValid_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue_1, bool K2Node_MathExpression_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.IsActionRowUnassigned"));
    struct Params_IsActionRowUnassigned {
        UUI_BP_InputActionAlt_Row_C* Row; // 0x0
        bool isUnassigned; // 0x8
        bool CallFunc_Key_IsValid_ReturnValue; // 0x9
        bool CallFunc_Key_IsValid_ReturnValue_1; // 0xa
        bool K2Node_MathExpression_ReturnValue; // 0xb
    }; // Size: 0xc
    Params_IsActionRowUnassigned params{};
    params.Row = (UUI_BP_InputActionAlt_Row_C*)Row;
    params.isUnassigned = (bool)isUnassigned;
    params.CallFunc_Key_IsValid_ReturnValue = (bool)CallFunc_Key_IsValid_ReturnValue;
    params.CallFunc_Key_IsValid_ReturnValue_1 = (bool)CallFunc_Key_IsValid_ReturnValue_1;
    params.K2Node_MathExpression_ReturnValue = (bool)K2Node_MathExpression_ReturnValue;
    ProcessEvent(func, &params);
    isUnassigned = params.isUnassigned;
}
void UUI_BP_KeyMapping_C::HandleInputActionClicked(UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleInputActionClicked"));
    struct Params_HandleInputActionClicked {
        UUI_BP_InputActionAlt_Row_C* Row; // 0x0
        bool IsPrimary; // 0x8
    }; // Size: 0x9
    Params_HandleInputActionClicked params{};
    params.Row = (UUI_BP_InputActionAlt_Row_C*)Row;
    params.IsPrimary = (bool)IsPrimary;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::ShouldCancelRowCreation(FInputAxisKeyMapping Primary, FInputAxisKeyMapping Alternative, bool& Ignore, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.ShouldCancelRowCreation"));
    struct Params_ShouldCancelRowCreation {
        FInputAxisKeyMapping Primary; // 0x0
        FInputAxisKeyMapping Alternative; // 0x38
        bool Ignore; // 0x70
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x71
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0x72
        bool CallFunc_BooleanOR_ReturnValue; // 0x73
    }; // Size: 0x74
    Params_ShouldCancelRowCreation params{};
    params.Primary = (FInputAxisKeyMapping)Primary;
    params.Alternative = (FInputAxisKeyMapping)Alternative;
    params.Ignore = (bool)Ignore;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    Ignore = params.Ignore;
}
void UUI_BP_KeyMapping_C::ToggleRebindingMode(bool Rebinding, bool RebindingIsPrimary, UUI_BP_MKBInput_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.ToggleRebindingMode"));
    struct Params_ToggleRebindingMode {
        bool Rebinding; // 0x0
        bool RebindingIsPrimary; // 0x1
        char pad_2[0x6];
        UUI_BP_MKBInput_C* CallFunc_Create_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ToggleRebindingMode params{};
    params.Rebinding = (bool)Rebinding;
    params.RebindingIsPrimary = (bool)RebindingIsPrimary;
    params.CallFunc_Create_ReturnValue = (UUI_BP_MKBInput_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::HandleRebuildAllRows(UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleRebuildAllRows"));
    struct Params_HandleRebuildAllRows {
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_HandleRebuildAllRows params{};
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::HandleResetToDefaults() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleResetToDefaults"));
    struct Params_HandleResetToDefaults {
    }; // Size: 0x0
    Params_HandleResetToDefaults params{};
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::HandleInputAxisUnhovered(UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary, bool CallFunc_EqualEqual_ObjectObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleInputAxisUnhovered"));
    struct Params_HandleInputAxisUnhovered {
        UUI_BP_InputAxisAlt_Row_C* Row; // 0x0
        bool IsPrimary; // 0x8
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x9
    }; // Size: 0xa
    Params_HandleInputAxisUnhovered params{};
    params.Row = (UUI_BP_InputAxisAlt_Row_C*)Row;
    params.IsPrimary = (bool)IsPrimary;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::HandleInputAxisHovered(UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleInputAxisHovered"));
    struct Params_HandleInputAxisHovered {
        UUI_BP_InputAxisAlt_Row_C* Row; // 0x0
        bool IsPrimary; // 0x8
    }; // Size: 0x9
    Params_HandleInputAxisHovered params{};
    params.Row = (UUI_BP_InputAxisAlt_Row_C*)Row;
    params.IsPrimary = (bool)IsPrimary;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::HandleInputAxisClicked(UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleInputAxisClicked"));
    struct Params_HandleInputAxisClicked {
        UUI_BP_InputAxisAlt_Row_C* Row; // 0x0
        bool IsPrimary; // 0x8
    }; // Size: 0x9
    Params_HandleInputAxisClicked params{};
    params.Row = (UUI_BP_InputAxisAlt_Row_C*)Row;
    params.IsPrimary = (bool)IsPrimary;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::HandleInputActionUnhovered(UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary, bool CallFunc_EqualEqual_ObjectObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.HandleInputActionUnhovered"));
    struct Params_HandleInputActionUnhovered {
        UUI_BP_InputActionAlt_Row_C* Row; // 0x0
        bool IsPrimary; // 0x8
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x9
    }; // Size: 0xa
    Params_HandleInputActionUnhovered params{};
    params.Row = (UUI_BP_InputActionAlt_Row_C*)Row;
    params.IsPrimary = (bool)IsPrimary;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::ExecuteUbergraph_UI_BP_KeyMapping(int32_t EntryPoint, ULegendItem* K2Node_Event_LegendItem, bool K2Node_Event_HoldWasCompleted, bool K2Node_ComponentBoundEvent_isChecked, UUI_BP_SettingsCheckboxButton_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_1, bool CallFunc_GetAltTooltipsEnabled_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_2, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue_4, bool Temp_bool_Variable) {}
void UUI_BP_KeyMapping_C::BuildAxisRow(FName AxisName, FInputAxisKeyMapping Primary, FInputAxisKeyMapping FakeLockedPrimary, FInputAxisKeyMapping Alternative, bool IsBiDirectionalAxis, bool IsPositiveAxis, FName GroupName) {}
void UUI_BP_KeyMapping_C::Build_Action_Row(FInputActionKeyMapping Primary, FInputActionKeyMapping Alternative, FName ActionName, FName GroupName) {}
void UUI_BP_KeyMapping_C::BuildRowsForGroup(FName GroupName, TArray<FName>& Actions, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, FName CallFunc_Array_Get_Item, FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutPosMain, FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutFakePosMain, FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutPosAlt, FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutNegMain, FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutFakeNegMain, FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutNegAlt, bool CallFunc_GetMutatedMKBAxisMappingsByName_ReturnValue, FInputActionKeyMapping CallFunc_GetMKBActionPairByName_OutPrimary, FInputActionKeyMapping CallFunc_GetMKBActionPairByName_OutAlternative, bool CallFunc_GetMKBActionPairByName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.BuildRowsForGroup"));
    struct Params_BuildRowsForGroup {
        FName GroupName; // 0x0
        TArray<FName> Actions; // 0x8
        int32_t CallFunc_Array_Length_ReturnValue; // 0x18
        int32_t Temp_int_Array_Index_Variable; // 0x1c
        FName CallFunc_Array_Get_Item; // 0x20
        FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutPosMain; // 0x28
        FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutFakePosMain; // 0x60
        FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutPosAlt; // 0x98
        FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutNegMain; // 0xd0
        FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutFakeNegMain; // 0x108
        FInputAxisKeyMapping CallFunc_GetMutatedMKBAxisMappingsByName_OutNegAlt; // 0x140
        bool CallFunc_GetMutatedMKBAxisMappingsByName_ReturnValue; // 0x178
        char pad_179[0x7];
        FInputActionKeyMapping CallFunc_GetMKBActionPairByName_OutPrimary; // 0x180
        FInputActionKeyMapping CallFunc_GetMKBActionPairByName_OutAlternative; // 0x1b8
        bool CallFunc_GetMKBActionPairByName_ReturnValue; // 0x1f0
        bool CallFunc_Array_Contains_ReturnValue; // 0x1f1
        bool CallFunc_Not_PreBool_ReturnValue; // 0x1f2
        char pad_1f3[0x1];
        int32_t Temp_int_Loop_Counter_Variable; // 0x1f4
        bool CallFunc_Less_IntInt_ReturnValue; // 0x1f8
        char pad_1f9[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x1fc
    }; // Size: 0x200
    Params_BuildRowsForGroup params{};
    params.GroupName = (FName)GroupName;
    params.Actions = (TArray<FName>)Actions;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_GetMutatedMKBAxisMappingsByName_OutPosMain = (FInputAxisKeyMapping)CallFunc_GetMutatedMKBAxisMappingsByName_OutPosMain;
    params.CallFunc_GetMutatedMKBAxisMappingsByName_OutFakePosMain = (FInputAxisKeyMapping)CallFunc_GetMutatedMKBAxisMappingsByName_OutFakePosMain;
    params.CallFunc_GetMutatedMKBAxisMappingsByName_OutPosAlt = (FInputAxisKeyMapping)CallFunc_GetMutatedMKBAxisMappingsByName_OutPosAlt;
    params.CallFunc_GetMutatedMKBAxisMappingsByName_OutNegMain = (FInputAxisKeyMapping)CallFunc_GetMutatedMKBAxisMappingsByName_OutNegMain;
    params.CallFunc_GetMutatedMKBAxisMappingsByName_OutFakeNegMain = (FInputAxisKeyMapping)CallFunc_GetMutatedMKBAxisMappingsByName_OutFakeNegMain;
    params.CallFunc_GetMutatedMKBAxisMappingsByName_OutNegAlt = (FInputAxisKeyMapping)CallFunc_GetMutatedMKBAxisMappingsByName_OutNegAlt;
    params.CallFunc_GetMutatedMKBAxisMappingsByName_ReturnValue = (bool)CallFunc_GetMutatedMKBAxisMappingsByName_ReturnValue;
    params.CallFunc_GetMKBActionPairByName_OutPrimary = (FInputActionKeyMapping)CallFunc_GetMKBActionPairByName_OutPrimary;
    params.CallFunc_GetMKBActionPairByName_OutAlternative = (FInputActionKeyMapping)CallFunc_GetMKBActionPairByName_OutAlternative;
    params.CallFunc_GetMKBActionPairByName_ReturnValue = (bool)CallFunc_GetMKBActionPairByName_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    Actions = params.Actions;
}
void UUI_BP_KeyMapping_C::BuildAllRows(FString PreviousActionName, FInputActionKeyMapping NextKeyboardMapping, FInputAxisKeyMapping CurrentAxisMapping, FInputActionKeyMapping CurrentKeyboardMapping, FString CurrentActionName, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, TArray<FInputGroupHeader>& CallFunc_GetPCInputGroupHeaders_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FInputGroupHeader CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, TArray<FName>& CallFunc_GetGroupMappingNames_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<FName>& CallFunc_GetGroupMappingNames_ReturnValue_1, bool CallFunc_IsPackagedForDistribution_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.BuildAllRows"));
    struct Params_BuildAllRows {
        FString PreviousActionName; // 0x0
        FInputActionKeyMapping NextKeyboardMapping; // 0x10
        FInputAxisKeyMapping CurrentAxisMapping; // 0x48
        FInputActionKeyMapping CurrentKeyboardMapping; // 0x80
        FString CurrentActionName; // 0xb8
        int32_t Temp_int_Loop_Counter_Variable; // 0xc8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xcc
        int32_t Temp_int_Array_Index_Variable; // 0xd0
        char pad_d4[0x4];
        TArray<FInputGroupHeader> CallFunc_GetPCInputGroupHeaders_ReturnValue; // 0xd8
        int32_t CallFunc_Array_Length_ReturnValue; // 0xe8
        int32_t Temp_int_Array_Index_Variable_1; // 0xec
        FInputGroupHeader CallFunc_Array_Get_Item; // 0xf0
        FName CallFunc_Array_Get_Item_1; // 0x108
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x110
        char pad_114[0x4];
        TArray<FName> CallFunc_GetGroupMappingNames_ReturnValue; // 0x118
        bool CallFunc_Less_IntInt_ReturnValue; // 0x128
        char pad_129[0x7];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x130
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x140
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x150
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x154
        char pad_155[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x158
        char pad_15c[0x4];
        TArray<FName> CallFunc_GetGroupMappingNames_ReturnValue_1; // 0x160
        bool CallFunc_IsPackagedForDistribution_ReturnValue; // 0x170
        char pad_171[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x174
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x178
    }; // Size: 0x179
    Params_BuildAllRows params{};
    params.PreviousActionName = (FString)PreviousActionName;
    params.NextKeyboardMapping = (FInputActionKeyMapping)NextKeyboardMapping;
    params.CurrentAxisMapping = (FInputAxisKeyMapping)CurrentAxisMapping;
    params.CurrentKeyboardMapping = (FInputActionKeyMapping)CurrentKeyboardMapping;
    params.CurrentActionName = (FString)CurrentActionName;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_GetPCInputGroupHeaders_ReturnValue = (TArray<FInputGroupHeader>)CallFunc_GetPCInputGroupHeaders_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Array_Get_Item = (FInputGroupHeader)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (FName)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_GetGroupMappingNames_ReturnValue = (TArray<FName>)CallFunc_GetGroupMappingNames_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_GetGroupMappingNames_ReturnValue_1 = (TArray<FName>)CallFunc_GetGroupMappingNames_ReturnValue_1;
    params.CallFunc_IsPackagedForDistribution_ReturnValue = (bool)CallFunc_IsPackagedForDistribution_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetPCInputGroupHeaders_ReturnValue = params.CallFunc_GetPCInputGroupHeaders_ReturnValue;
    CallFunc_GetGroupMappingNames_ReturnValue_1 = params.CallFunc_GetGroupMappingNames_ReturnValue_1;
    CallFunc_GetGroupMappingNames_ReturnValue = params.CallFunc_GetGroupMappingNames_ReturnValue;
}
void UUI_BP_KeyMapping_C::BndEvt__UI_BP_KeyMapping_UI_BP_SettingsCheckboxButton_K2Node_ComponentBoundEvent_1_SettingsCheckmarkPressed__DelegateSignature(bool IsChecked, UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.BndEvt__UI_BP_KeyMapping_UI_BP_SettingsCheckboxButton_K2Node_ComponentBoundEvent_1_SettingsCheckmarkPressed__DelegateSignature"));
    struct Params_BndEvt__UI_BP_KeyMapping_UI_BP_SettingsCheckboxButton_K2Node_ComponentBoundEvent_1_SettingsCheckmarkPressed__DelegateSignature {
        bool IsChecked; // 0x0
        char pad_1[0x7];
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_KeyMapping_UI_BP_SettingsCheckboxButton_K2Node_ComponentBoundEvent_1_SettingsCheckmarkPressed__DelegateSignature params{};
    params.IsChecked = (bool)IsChecked;
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::KeyLayoutChanged(EKeyLayout OldLayout, EKeyLayout NewLayout) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.KeyLayoutChanged"));
    struct Params_KeyLayoutChanged {
        EKeyLayout OldLayout; // 0x0
        EKeyLayout NewLayout; // 0x1
    }; // Size: 0x2
    Params_KeyLayoutChanged params{};
    params.OldLayout = (EKeyLayout)OldLayout;
    params.NewLayout = (EKeyLayout)NewLayout;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::OnLegendItemHoldEnd(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.OnLegendItemHoldEnd"));
    struct Params_OnLegendItemHoldEnd {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_OnLegendItemHoldEnd params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_C::BndEvt__UI_BP_KeyMapping_ShowAlternatives_K2Node_ComponentBoundEvent_0_ToggleHovered__DelegateSignature(UUI_BP_SettingsCheckboxButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping.UI_BP_KeyMapping_C.BndEvt__UI_BP_KeyMapping_ShowAlternatives_K2Node_ComponentBoundEvent_0_ToggleHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_KeyMapping_ShowAlternatives_K2Node_ComponentBoundEvent_0_ToggleHovered__DelegateSignature {
        UUI_BP_SettingsCheckboxButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_KeyMapping_ShowAlternatives_K2Node_ComponentBoundEvent_0_ToggleHovered__DelegateSignature params{};
    params.Button = (UUI_BP_SettingsCheckboxButton_C*)Button;
    ProcessEvent(func, &params);
}
