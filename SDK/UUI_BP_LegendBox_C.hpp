#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "ULegendBox.hpp"
class UHorizontalBox;
class UWidget;
class UPhoenixRichTextBlock;
class UHorizontalBoxSlot;
#pragma pack(push, 1)
class UUI_BP_LegendBox_C : public ULegendBox {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UHorizontalBox* NewLegendContainer; // 0x270
    TArray<FString> LegendStrings; // 0x278
    static UUI_BP_LegendBox_C* StaticClass();
    void PopulateCallouts(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, FMargin K2Node_MakeStruct_Margin, int32_t CallFunc_GetChildrenCount_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t Temp_int_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue_1, UPhoenixRichTextBlock* K2Node_DynamicCast_AsRich_Text_Block__Phoenix_, bool K2Node_DynamicCast_bSuccess, UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_BP_LegendBox(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
}; // Size: 0x288
#pragma pack(pop)
