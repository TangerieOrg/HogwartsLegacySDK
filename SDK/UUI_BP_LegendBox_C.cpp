#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UHorizontalBoxSlot.hpp"
#include "ULegendBox.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UUI_BP_LegendBox_C.hpp"
#include "UWidget.hpp"
UUI_BP_LegendBox_C* UUI_BP_LegendBox_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Labels/UI_BP_LegendBox.UI_BP_LegendBox_C");
    return (UUI_BP_LegendBox_C*)res;
}
void UUI_BP_LegendBox_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Labels/UI_BP_LegendBox.UI_BP_LegendBox_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_LegendBox_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Labels/UI_BP_LegendBox.UI_BP_LegendBox_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_LegendBox_C::PopulateCallouts(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, FMargin K2Node_MakeStruct_Margin, int32_t CallFunc_GetChildrenCount_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t Temp_int_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue_1, UPhoenixRichTextBlock* K2Node_DynamicCast_AsRich_Text_Block__Phoenix_, bool K2Node_DynamicCast_bSuccess, UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Labels/UI_BP_LegendBox.UI_BP_LegendBox_C.PopulateCallouts"));
    struct Params_PopulateCallouts {
        int32_t Temp_int_Loop_Counter_Variable; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        int32_t Temp_int_Array_Index_Variable; // 0x8
        FMargin K2Node_MakeStruct_Margin; // 0xc
        int32_t CallFunc_GetChildrenCount_ReturnValue; // 0x1c
        int32_t CallFunc_Array_Length_ReturnValue; // 0x20
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x24
        int32_t Temp_int_Variable; // 0x28
        char pad_2c[0x4];
        UWidget* CallFunc_GetChildAt_ReturnValue; // 0x30
        UWidget* CallFunc_GetChildAt_ReturnValue_1; // 0x38
        UPhoenixRichTextBlock* K2Node_DynamicCast_AsRich_Text_Block__Phoenix_; // 0x40
        bool K2Node_DynamicCast_bSuccess; // 0x48
        char pad_49[0x7];
        UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot; // 0x50
        bool K2Node_DynamicCast_bSuccess_1; // 0x58
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x59
        char pad_5a[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x5c
        FString CallFunc_Array_Get_Item; // 0x60
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x70
        bool CallFunc_Less_IntInt_ReturnValue; // 0x74
    }; // Size: 0x75
    Params_PopulateCallouts params{};
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.CallFunc_GetChildrenCount_ReturnValue = (int32_t)CallFunc_GetChildrenCount_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_GetChildAt_ReturnValue = (UWidget*)CallFunc_GetChildAt_ReturnValue;
    params.CallFunc_GetChildAt_ReturnValue_1 = (UWidget*)CallFunc_GetChildAt_ReturnValue_1;
    params.K2Node_DynamicCast_AsRich_Text_Block__Phoenix_ = (UPhoenixRichTextBlock*)K2Node_DynamicCast_AsRich_Text_Block__Phoenix_;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsHorizontal_Box_Slot = (UHorizontalBoxSlot*)K2Node_DynamicCast_AsHorizontal_Box_Slot;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_LegendBox_C::ExecuteUbergraph_UI_BP_LegendBox(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Labels/UI_BP_LegendBox.UI_BP_LegendBox_C.ExecuteUbergraph_UI_BP_LegendBox"));
    struct Params_ExecuteUbergraph_UI_BP_LegendBox {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_UI_BP_LegendBox params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
