#include "EGearSlotIDEnum.hpp"
#include "ESlateVisibility.hpp"
#include "FSlateColor.hpp"
#include "FWidgetTransform.hpp"
#include "UFunction.hpp"
#include "UGearManager.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_GearTooltipContent_C.hpp"
#include "UUI_BP_TraitNote_C.hpp"
#include "UUserWidget.hpp"
#include "UVerticalBox.hpp"
UUI_BP_GearTooltipContent_C* UUI_BP_GearTooltipContent_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/ToolTipContent/UI_BP_GearTooltipContent.UI_BP_GearTooltipContent_C");
    return (UUI_BP_GearTooltipContent_C*)res;
}
void UUI_BP_GearTooltipContent_C::SetStatData(FString GearID, FName Variation, bool DisplayIfSafeToDelete, EGearSlotIDEnum currentSlotID, int32_t Offense, int32_t Defense, int32_t Cooldown, TArray<FName> tempArray, bool StatArray, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, FWidgetTransform K2Node_MakeStruct_WidgetTransform, FWidgetTransform K2Node_MakeStruct_WidgetTransform_1, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2, FSlateColor K2Node_MakeStruct_SlateColor_3, FWidgetTransform K2Node_MakeStruct_WidgetTransform_2, FWidgetTransform K2Node_MakeStruct_WidgetTransform_3, FWidgetTransform K2Node_MakeStruct_WidgetTransform_4, FWidgetTransform K2Node_MakeStruct_WidgetTransform_5, FWidgetTransform K2Node_MakeStruct_WidgetTransform_6, FSlateColor K2Node_MakeStruct_SlateColor_4, FSlateColor K2Node_MakeStruct_SlateColor_5, FSlateColor K2Node_MakeStruct_SlateColor_6, FSlateColor K2Node_MakeStruct_SlateColor_7, FSlateColor K2Node_MakeStruct_SlateColor_8, FSlateColor K2Node_MakeStruct_SlateColor_9, FSlateColor K2Node_MakeStruct_SlateColor_10, FSlateColor K2Node_MakeStruct_SlateColor_11, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, UGearManager* CallFunc_Get_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, int32_t CallFunc_GetGearEmptyTraitSlots_ReturnValue, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, bool CallFunc_Greater_IntInt_ReturnValue) {}
void UUI_BP_GearTooltipContent_C::CreateStatArray(TArray<FName>& TraitArray, int32_t EmptySlotCount, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable, FName CallFunc_Array_Get_Item, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, FName Temp_name_Variable, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ToolTipContent/UI_BP_GearTooltipContent.UI_BP_GearTooltipContent_C.CreateStatArray"));
    struct Params_CreateStatArray {
        TArray<FName> TraitArray; // 0x0
        int32_t EmptySlotCount; // 0x10
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x14
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x1c
        int32_t Temp_int_Loop_Counter_Variable; // 0x20
        bool CallFunc_Less_IntInt_ReturnValue; // 0x24
        char pad_25[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x28
        int32_t Temp_int_Array_Index_Variable; // 0x2c
        int32_t Temp_int_Variable; // 0x30
        FName CallFunc_Array_Get_Item; // 0x34
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x3c
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x3d
        char pad_3e[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x40
        FName Temp_name_Variable; // 0x44
        int32_t CallFunc_Array_Add_ReturnValue; // 0x4c
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x50
    }; // Size: 0x54
    Params_CreateStatArray params{};
    params.TraitArray = (TArray<FName>)TraitArray;
    params.EmptySlotCount = (int32_t)EmptySlotCount;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    ProcessEvent(func, &params);
    TraitArray = params.TraitArray;
}
