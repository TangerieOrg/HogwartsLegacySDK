#include "FCinematicInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UUI_BP_CinematicPicker_C.hpp"
#include "UUI_BP_MenuTextButton_C.hpp"
#include "UUI_BP_SettingsDropDownButton_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_CinematicPicker_C* UUI_BP_CinematicPicker_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_CinematicPicker.UI_BP_CinematicPicker_C");
    return (UUI_BP_CinematicPicker_C*)res;
}
void UUI_BP_CinematicPicker_C::GetLastPlayedIndex(TArray<FString>& Cinematics, int32_t& Index, FString CallFunc_DbReadMiscSaveDataItem_outValue, bool CallFunc_DbReadMiscSaveDataItem_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CinematicPicker.UI_BP_CinematicPicker_C.GetLastPlayedIndex"));
    struct Params_GetLastPlayedIndex {
        TArray<FString> Cinematics; // 0x0
        int32_t Index; // 0x10
        char pad_14[0x4];
        FString CallFunc_DbReadMiscSaveDataItem_outValue; // 0x18
        bool CallFunc_DbReadMiscSaveDataItem_ReturnValue; // 0x28
        char pad_29[0x3];
        int32_t CallFunc_Array_Find_ReturnValue; // 0x2c
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetLastPlayedIndex params{};
    params.Cinematics = (TArray<FString>)Cinematics;
    params.Index = (int32_t)Index;
    params.CallFunc_DbReadMiscSaveDataItem_outValue = (FString)CallFunc_DbReadMiscSaveDataItem_outValue;
    params.CallFunc_DbReadMiscSaveDataItem_ReturnValue = (bool)CallFunc_DbReadMiscSaveDataItem_ReturnValue;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    Cinematics = params.Cinematics;
    Index = params.Index;
}
void UUI_BP_CinematicPicker_C::ExecuteUbergraph_UI_BP_CinematicPicker(int32_t EntryPoint, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button, TArray<FString>& CallFunc_GetCinematicIDs_CinematicIDs, TArray<FString>& CallFunc_SortStrings_ReturnValue, int32_t CallFunc_GetLastPlayedIndex_Index, FString CallFunc_GetSelectedOption_SelectedOption, bool CallFunc_DbWriteMiscSaveDataItem_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FCinematicInfo CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_PlayCinematicFromPath_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CinematicPicker.UI_BP_CinematicPicker_C.ExecuteUbergraph_UI_BP_CinematicPicker"));
    struct Params_ExecuteUbergraph_UI_BP_CinematicPicker {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button; // 0x8
        TArray<FString> CallFunc_GetCinematicIDs_CinematicIDs; // 0x10
        TArray<FString> CallFunc_SortStrings_ReturnValue; // 0x20
        int32_t CallFunc_GetLastPlayedIndex_Index; // 0x30
        char pad_34[0x4];
        FString CallFunc_GetSelectedOption_SelectedOption; // 0x38
        bool CallFunc_DbWriteMiscSaveDataItem_ReturnValue; // 0x48
        char pad_49[0x3];
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x4c
        char pad_54[0x4];
        FCinematicInfo CallFunc_GetDataTableRowFromName_OutRow; // 0x58
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x98
        bool CallFunc_PlayCinematicFromPath_ReturnValue; // 0x99
    }; // Size: 0x9a
    Params_ExecuteUbergraph_UI_BP_CinematicPicker params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_ComponentBoundEvent_Button = (UUI_BP_MenuTextButton_C*)K2Node_ComponentBoundEvent_Button;
    params.CallFunc_GetCinematicIDs_CinematicIDs = (TArray<FString>)CallFunc_GetCinematicIDs_CinematicIDs;
    params.CallFunc_SortStrings_ReturnValue = (TArray<FString>)CallFunc_SortStrings_ReturnValue;
    params.CallFunc_GetLastPlayedIndex_Index = (int32_t)CallFunc_GetLastPlayedIndex_Index;
    params.CallFunc_GetSelectedOption_SelectedOption = (FString)CallFunc_GetSelectedOption_SelectedOption;
    params.CallFunc_DbWriteMiscSaveDataItem_ReturnValue = (bool)CallFunc_DbWriteMiscSaveDataItem_ReturnValue;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FCinematicInfo)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    params.CallFunc_PlayCinematicFromPath_ReturnValue = (bool)CallFunc_PlayCinematicFromPath_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetCinematicIDs_CinematicIDs = params.CallFunc_GetCinematicIDs_CinematicIDs;
    CallFunc_SortStrings_ReturnValue = params.CallFunc_SortStrings_ReturnValue;
}
void UUI_BP_CinematicPicker_C::GetCinematicIDs(TArray<FString>& CinematicIDs, TArray<FString> IDs, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FCinematicInfo CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CinematicPicker.UI_BP_CinematicPicker_C.GetCinematicIDs"));
    struct Params_GetCinematicIDs {
        TArray<FString> CinematicIDs; // 0x0
        TArray<FString> IDs; // 0x10
        int32_t Temp_int_Array_Index_Variable; // 0x20
        int32_t Temp_int_Loop_Counter_Variable; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x28
        char pad_2c[0x4];
        TArray<FName> CallFunc_GetDataTableRowNames_OutRowNames; // 0x30
        FName CallFunc_Array_Get_Item; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0x48
        char pad_4c[0x4];
        FCinematicInfo CallFunc_GetDataTableRowFromName_OutRow; // 0x50
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x90
        bool CallFunc_Less_IntInt_ReturnValue; // 0x91
        char pad_92[0x6];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x98
        bool CallFunc_NotEqual_StrStr_ReturnValue; // 0xa8
        char pad_a9[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0xac
    }; // Size: 0xb0
    Params_GetCinematicIDs params{};
    params.CinematicIDs = (TArray<FString>)CinematicIDs;
    params.IDs = (TArray<FString>)IDs;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetDataTableRowNames_OutRowNames = (TArray<FName>)CallFunc_GetDataTableRowNames_OutRowNames;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FCinematicInfo)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_NotEqual_StrStr_ReturnValue = (bool)CallFunc_NotEqual_StrStr_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    ProcessEvent(func, &params);
    CinematicIDs = params.CinematicIDs;
    CallFunc_GetDataTableRowNames_OutRowNames = params.CallFunc_GetDataTableRowNames_OutRowNames;
}
void UUI_BP_CinematicPicker_C::BndEvt__MissionCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CinematicPicker.UI_BP_CinematicPicker_C.BndEvt__MissionCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__MissionCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__MissionCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CinematicPicker_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CinematicPicker.UI_BP_CinematicPicker_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
