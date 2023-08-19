#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_FG_IDP_TraitStat_C.hpp"
#include "UUI_BP_TraitNote_C.hpp"
UUI_BP_FG_IDP_TraitStat_C* UUI_BP_FG_IDP_TraitStat_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C");
    return (UUI_BP_FG_IDP_TraitStat_C*)res;
}
TArray<FString> UUI_BP_FG_IDP_TraitStat_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, UUI_BP_TraitNote_C* CallFunc_Array_Get_Item) {}
void UUI_BP_FG_IDP_TraitStat_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_IDP_TraitStat_C::ResetTraits(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UUI_BP_TraitNote_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.ResetTraits"));
    struct Params_ResetTraits {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t CallFunc_Array_Length_ReturnValue; // 0xc
        UUI_BP_TraitNote_C* CallFunc_Array_Get_Item; // 0x10
        bool CallFunc_Less_IntInt_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_ResetTraits params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_TraitNote_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_IDP_TraitStat_C::GetTraitTierValueNumeric(FName TraitRarity, FString& TraitTierValue, bool K2Node_SwitchName_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.GetTraitTierValueNumeric"));
    struct Params_GetTraitTierValueNumeric {
        FName TraitRarity; // 0x0
        FString TraitTierValue; // 0x8
        bool K2Node_SwitchName_CmpSuccess; // 0x18
    }; // Size: 0x19
    Params_GetTraitTierValueNumeric params{};
    params.TraitRarity = (FName)TraitRarity;
    params.TraitTierValue = (FString)TraitTierValue;
    params.K2Node_SwitchName_CmpSuccess = (bool)K2Node_SwitchName_CmpSuccess;
    ProcessEvent(func, &params);
    TraitTierValue = params.TraitTierValue;
}
void UUI_BP_FG_IDP_TraitStat_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_IDP_TraitStat_C::GetTraitTierValue(FName TraitRarity) {}
void UUI_BP_FG_IDP_TraitStat_C::SetTraitData(TArray<FName>& TraitArray, int32_t AvailableTraits, FName ObjectRarity) {}
void UUI_BP_FG_IDP_TraitStat_C::ExecuteUbergraph_UI_BP_FG_IDP_TraitStat(int32_t EntryPoint, TArray<UUI_BP_TraitNote_C*>& K2Node_MakeArray_Array, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_IDP_TraitStat.UI_BP_FG_IDP_TraitStat_C.ExecuteUbergraph_UI_BP_FG_IDP_TraitStat"));
    struct Params_ExecuteUbergraph_UI_BP_FG_IDP_TraitStat {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        TArray<UUI_BP_TraitNote_C*> K2Node_MakeArray_Array; // 0x8
        bool K2Node_Event_IsDesignTime; // 0x18
    }; // Size: 0x19
    Params_ExecuteUbergraph_UI_BP_FG_IDP_TraitStat params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_MakeArray_Array = (TArray<UUI_BP_TraitNote_C*>)K2Node_MakeArray_Array;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
