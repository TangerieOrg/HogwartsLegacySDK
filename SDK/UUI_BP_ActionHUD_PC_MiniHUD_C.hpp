#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UUI_BP_MiniSelectionDiamond_C;
#pragma pack(push, 1)
class UUI_BP_ActionHUD_PC_MiniHUD_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UUI_BP_MiniSelectionDiamond_C* Group1; // 0x270
    UUI_BP_MiniSelectionDiamond_C* Group2; // 0x278
    UUI_BP_MiniSelectionDiamond_C* Group3; // 0x280
    UUI_BP_MiniSelectionDiamond_C* Group4; // 0x288
    int32_t GroupId; // 0x290
    char pad_294[0x4];
    TArray<UUI_BP_MiniSelectionDiamond_C*> ActionGroupArray; // 0x298
    TArray<UUI_BP_MiniSelectionDiamond_C*> GropuArray; // 0x2a8
    static UUI_BP_ActionHUD_PC_MiniHUD_C* StaticClass();
    void SetHUDGroup(int32_t NewGroupIndex, int32_t AvailableGroups, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_MiniSelectionDiamond_C* CallFunc_Array_Get_Item, UUI_BP_MiniSelectionDiamond_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void Construct0();
    void ExecuteUbergraph_UI_BP_ActionHUD_PC_MiniHUD(int32_t EntryPoint, TArray<UUI_BP_MiniSelectionDiamond_C*>& K2Node_MakeArray_Array);
}; // Size: 0x2b8
#pragma pack(pop)
