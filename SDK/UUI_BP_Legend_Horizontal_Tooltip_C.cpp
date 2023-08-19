#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UHorizontalBoxSlot.hpp"
#include "ULegend.hpp"
#include "ULegendItem.hpp"
#include "UUI_BP_Legend_Horizontal_Tooltip_C.hpp"
void UUI_BP_Legend_Horizontal_Tooltip_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Tooltip.UI_BP_Legend_Horizontal_Tooltip_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
UUI_BP_Legend_Horizontal_Tooltip_C* UUI_BP_Legend_Horizontal_Tooltip_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Tooltip.UI_BP_Legend_Horizontal_Tooltip_C");
    return (UUI_BP_Legend_Horizontal_Tooltip_C*)res;
}
TArray<FString> UUI_BP_Legend_Horizontal_Tooltip_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, ULegendItem* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Tooltip.UI_BP_Legend_Horizontal_Tooltip_C.GatherMenuReaderStrings"));
    struct Params_GatherMenuReaderStrings {
        int32_t DepthLevel; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
        TArray<FString> TempGatheredStrings; // 0x18
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue; // 0x28
        int32_t Temp_int_Array_Index_Variable; // 0x38
        int32_t Temp_int_Loop_Counter_Variable; // 0x3c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x40
        char pad_44[0x4];
        ULegendItem* CallFunc_Array_Get_Item; // 0x48
        int32_t CallFunc_Array_Length_ReturnValue; // 0x50
        char pad_54[0x4];
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_1; // 0x58
        bool CallFunc_Less_IntInt_ReturnValue; // 0x68
    }; // Size: 0x69
    Params_GatherMenuReaderStrings params{};
    params.DepthLevel = (int32_t)DepthLevel;
    params.TempGatheredStrings = (TArray<FString>)TempGatheredStrings;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (ULegendItem*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_1 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GatherMenuReaderStrings_ReturnValue = params.CallFunc_GatherMenuReaderStrings_ReturnValue;
    CallFunc_GatherMenuReaderStrings_ReturnValue_1 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    return (TArray<FString>)params.ReturnValue;
}
void UUI_BP_Legend_Horizontal_Tooltip_C::AddLegendItem0(ULegendItem* NewLegendItem) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Tooltip.UI_BP_Legend_Horizontal_Tooltip_C.AddLegendItem"));
    struct Params_AddLegendItem {
        ULegendItem* NewLegendItem; // 0x0
    }; // Size: 0x8
    Params_AddLegendItem params{};
    params.NewLegendItem = (ULegendItem*)NewLegendItem;
    ProcessEvent(func, &params);
}
void UUI_BP_Legend_Horizontal_Tooltip_C::RemoveAllLegendItems0(int32_t StartFromIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Tooltip.UI_BP_Legend_Horizontal_Tooltip_C.RemoveAllLegendItems"));
    struct Params_RemoveAllLegendItems {
        int32_t StartFromIndex; // 0x0
    }; // Size: 0x4
    Params_RemoveAllLegendItems params{};
    params.StartFromIndex = (int32_t)StartFromIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_Legend_Horizontal_Tooltip_C::ExecuteUbergraph_UI_BP_Legend_Horizontal_Tooltip(int32_t EntryPoint, int32_t CallFunc_Array_Length_ReturnValue, bool K2Node_Event_IsDesignTime, int32_t CallFunc_Subtract_IntInt_ReturnValue, ULegendItem* K2Node_Event_NewLegendItem, int32_t K2Node_Event_StartFromIndex, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, int32_t CallFunc_GetChildrenCount_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue_1, FMargin K2Node_MakeStruct_Margin, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_RemoveChildAt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Legend/UI_BP_Legend_Horizontal_Tooltip.UI_BP_Legend_Horizontal_Tooltip_C.ExecuteUbergraph_UI_BP_Legend_Horizontal_Tooltip"));
    struct Params_ExecuteUbergraph_UI_BP_Legend_Horizontal_Tooltip {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x4
        bool K2Node_Event_IsDesignTime; // 0x8
        char pad_9[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0xc
        ULegendItem* K2Node_Event_NewLegendItem; // 0x10
        int32_t K2Node_Event_StartFromIndex; // 0x18
        char pad_1c[0x4];
        UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue; // 0x20
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x28
        int32_t CallFunc_GetChildrenCount_ReturnValue; // 0x58
        char pad_5c[0x4];
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x60
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x70
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x74
        char pad_75[0x3];
        int32_t CallFunc_GetChildrenCount_ReturnValue_1; // 0x78
        FMargin K2Node_MakeStruct_Margin; // 0x7c
        int32_t CallFunc_Subtract_IntInt_ReturnValue_2; // 0x8c
        bool CallFunc_RemoveChildAt_ReturnValue; // 0x90
        char pad_91[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x94
    }; // Size: 0x98
    Params_ExecuteUbergraph_UI_BP_Legend_Horizontal_Tooltip params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.K2Node_Event_NewLegendItem = (ULegendItem*)K2Node_Event_NewLegendItem;
    params.K2Node_Event_StartFromIndex = (int32_t)K2Node_Event_StartFromIndex;
    params.CallFunc_AddChildToHorizontalBox_ReturnValue = (UHorizontalBoxSlot*)CallFunc_AddChildToHorizontalBox_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.CallFunc_GetChildrenCount_ReturnValue = (int32_t)CallFunc_GetChildrenCount_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_GetChildrenCount_ReturnValue_1 = (int32_t)CallFunc_GetChildrenCount_ReturnValue_1;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.CallFunc_Subtract_IntInt_ReturnValue_2 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_2;
    params.CallFunc_RemoveChildAt_ReturnValue = (bool)CallFunc_RemoveChildAt_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
