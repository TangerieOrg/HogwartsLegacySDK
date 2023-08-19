#pragma once
#include <cstdint>
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "ULegend.hpp"
class UHorizontalBox;
class ULegendItem;
class UHorizontalBoxSlot;
#pragma pack(push, 1)
class UUI_BP_Legend_Horizontal_Tooltip_C : public ULegend {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x388
    UHorizontalBox* ParentLegendPanel; // 0x390
    TArray<ULegendItem*> CachedLegendItems; // 0x398
    static UUI_BP_Legend_Horizontal_Tooltip_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, ULegendItem* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void AddLegendItem0(ULegendItem* NewLegendItem);
    void RemoveAllLegendItems0(int32_t StartFromIndex);
    void ExecuteUbergraph_UI_BP_Legend_Horizontal_Tooltip(int32_t EntryPoint, int32_t CallFunc_Array_Length_ReturnValue, bool K2Node_Event_IsDesignTime, int32_t CallFunc_Subtract_IntInt_ReturnValue, ULegendItem* K2Node_Event_NewLegendItem, int32_t K2Node_Event_StartFromIndex, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, int32_t CallFunc_GetChildrenCount_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue_1, FMargin K2Node_MakeStruct_Margin, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_RemoveChildAt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
}; // Size: 0x3a8
#pragma pack(pop)
