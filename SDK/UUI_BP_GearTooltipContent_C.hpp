#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#include "ESlateVisibility.hpp"
#include "FSlateColor.hpp"
#include "FWidgetTransform.hpp"
#include "UUserWidget.hpp"
class UImage;
class UHorizontalBox;
class UPhoenixTextBlock;
class UVerticalBox;
class UUI_BP_TraitNote_C;
class UGearManager;
#pragma pack(push, 1)
class UUI_BP_GearTooltipContent_C : public UUserWidget {
public:
    UImage* cooldownArrow; // 0x268
    UHorizontalBox* cooldownBox; // 0x270
    UPhoenixTextBlock* cooldownValue; // 0x278
    UImage* defenseArrow; // 0x280
    UHorizontalBox* defenseBox; // 0x288
    UPhoenixTextBlock* defenseValue; // 0x290
    UPhoenixTextBlock* GearDeleteMessage; // 0x298
    UImage* gearDivider; // 0x2a0
    UVerticalBox* GearStats; // 0x2a8
    UImage* offenseArrow; // 0x2b0
    UHorizontalBox* offenseBox; // 0x2b8
    UPhoenixTextBlock* offenseValue; // 0x2c0
    UUI_BP_TraitNote_C* trait1; // 0x2c8
    UUI_BP_TraitNote_C* trait2; // 0x2d0
    UUI_BP_TraitNote_C* trait3; // 0x2d8
    TArray<FName> StatsArray; // 0x2e0
    static UUI_BP_GearTooltipContent_C* StaticClass();
    void CreateStatArray(TArray<FName>& TraitArray, int32_t EmptySlotCount, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable, FName CallFunc_Array_Get_Item, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, FName Temp_name_Variable, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1);
    void SetStatData(FString GearID, FName Variation, bool DisplayIfSafeToDelete, EGearSlotIDEnum currentSlotID, int32_t Offense, int32_t Defense, int32_t Cooldown, TArray<FName> tempArray, bool StatArray, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, FWidgetTransform K2Node_MakeStruct_WidgetTransform, FWidgetTransform K2Node_MakeStruct_WidgetTransform_1, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2, FSlateColor K2Node_MakeStruct_SlateColor_3, FWidgetTransform K2Node_MakeStruct_WidgetTransform_2, FWidgetTransform K2Node_MakeStruct_WidgetTransform_3, FWidgetTransform K2Node_MakeStruct_WidgetTransform_4, FWidgetTransform K2Node_MakeStruct_WidgetTransform_5, FWidgetTransform K2Node_MakeStruct_WidgetTransform_6, FSlateColor K2Node_MakeStruct_SlateColor_4, FSlateColor K2Node_MakeStruct_SlateColor_5, FSlateColor K2Node_MakeStruct_SlateColor_6, FSlateColor K2Node_MakeStruct_SlateColor_7, FSlateColor K2Node_MakeStruct_SlateColor_8, FSlateColor K2Node_MakeStruct_SlateColor_9, FSlateColor K2Node_MakeStruct_SlateColor_10, FSlateColor K2Node_MakeStruct_SlateColor_11, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, UGearManager* CallFunc_Get_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, int32_t CallFunc_GetGearEmptyTraitSlots_ReturnValue, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, bool CallFunc_Greater_IntInt_ReturnValue);
}; // Size: 0x2f0
#pragma pack(pop)
