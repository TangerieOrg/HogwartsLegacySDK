#pragma once
#include <cstdint>
#include "FCinematicInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UUI_BP_SettingsDropDownButton_C;
class UUI_BP_MenuTextButton_C;
#pragma pack(push, 1)
class UUI_BP_CinematicPicker_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UUI_BP_SettingsDropDownButton_C* CinematicDropDown; // 0x270
    UUI_BP_MenuTextButton_C* PlayCinematicButton; // 0x278
    static UUI_BP_CinematicPicker_C* StaticClass();
    void GetLastPlayedIndex(TArray<FString>& Cinematics, int32_t& Index, FString CallFunc_DbReadMiscSaveDataItem_outValue, bool CallFunc_DbReadMiscSaveDataItem_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void GetCinematicIDs(TArray<FString>& CinematicIDs, TArray<FString> IDs, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FCinematicInfo CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
    void BndEvt__MissionCustom_K2Node_ComponentBoundEvent_0_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void Construct();
    void ExecuteUbergraph_UI_BP_CinematicPicker(int32_t EntryPoint, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button, TArray<FString>& CallFunc_GetCinematicIDs_CinematicIDs, TArray<FString>& CallFunc_SortStrings_ReturnValue, int32_t CallFunc_GetLastPlayedIndex_Index, FString CallFunc_GetSelectedOption_SelectedOption, bool CallFunc_DbWriteMiscSaveDataItem_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FCinematicInfo CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_PlayCinematicFromPath_ReturnValue);
}; // Size: 0x280
#pragma pack(pop)
