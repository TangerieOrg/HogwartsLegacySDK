#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UUI_BP_ActionHUD_PC_MiniHUD_C.hpp"
#include "UUI_BP_MiniSelectionDiamond_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_ActionHUD_PC_MiniHUD_C* UUI_BP_ActionHUD_PC_MiniHUD_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC_MiniHUD.UI_BP_ActionHUD_PC_MiniHUD_C");
    return (UUI_BP_ActionHUD_PC_MiniHUD_C*)res;
}
void UUI_BP_ActionHUD_PC_MiniHUD_C::SetHUDGroup(int32_t NewGroupIndex, int32_t AvailableGroups, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_MiniSelectionDiamond_C* CallFunc_Array_Get_Item, UUI_BP_MiniSelectionDiamond_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC_MiniHUD.UI_BP_ActionHUD_PC_MiniHUD_C.SetHUDGroup"));
    struct Params_SetHUDGroup {
        int32_t NewGroupIndex; // 0x0
        int32_t AvailableGroups; // 0x4
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t Temp_int_Loop_Counter_Variable; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        char pad_14[0x4];
        UUI_BP_MiniSelectionDiamond_C* CallFunc_Array_Get_Item; // 0x18
        UUI_BP_MiniSelectionDiamond_C* CallFunc_Array_Get_Item_1; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x28
        bool CallFunc_Less_IntInt_ReturnValue; // 0x2c
        char pad_2d[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x30
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x34
    }; // Size: 0x35
    Params_SetHUDGroup params{};
    params.NewGroupIndex = (int32_t)NewGroupIndex;
    params.AvailableGroups = (int32_t)AvailableGroups;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_MiniSelectionDiamond_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (UUI_BP_MiniSelectionDiamond_C*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_MiniHUD_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC_MiniHUD.UI_BP_ActionHUD_PC_MiniHUD_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_MiniHUD_C::ExecuteUbergraph_UI_BP_ActionHUD_PC_MiniHUD(int32_t EntryPoint, TArray<UUI_BP_MiniSelectionDiamond_C*>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC_MiniHUD.UI_BP_ActionHUD_PC_MiniHUD_C.ExecuteUbergraph_UI_BP_ActionHUD_PC_MiniHUD"));
    struct Params_ExecuteUbergraph_UI_BP_ActionHUD_PC_MiniHUD {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        TArray<UUI_BP_MiniSelectionDiamond_C*> K2Node_MakeArray_Array; // 0x8
    }; // Size: 0x18
    Params_ExecuteUbergraph_UI_BP_ActionHUD_PC_MiniHUD params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_MakeArray_Array = (TArray<UUI_BP_MiniSelectionDiamond_C*>)K2Node_MakeArray_Array;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
