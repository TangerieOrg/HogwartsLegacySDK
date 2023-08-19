#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UUI_BP_TraitNote_C;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_FG_IDP_TraitStat_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UUI_BP_TraitNote_C* trait1; // 0x330
    UPhoenixTextBlock* TraitSlotLevel; // 0x338
    UPhoenixTextBlock* traitTier; // 0x340
    TArray<FName> FinalTraitArray; // 0x348
    TArray<UUI_BP_TraitNote_C*> TraitArray; // 0x358
    bool showAvailableTraits; // 0x368
    char pad_369[0x7];
    FString TraitTierValueNumber; // 0x370
    static UUI_BP_FG_IDP_TraitStat_C* StaticClass();
    void GetTraitTierValueNumeric(FName TraitRarity, FString& TraitTierValue, bool K2Node_SwitchName_CmpSuccess);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, UUI_BP_TraitNote_C* CallFunc_Array_Get_Item);
    void GetTraitTierValue(FName TraitRarity);
    void ResetTraits(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UUI_BP_TraitNote_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void SetTraitData(TArray<FName>& TraitArray, int32_t AvailableTraits, FName ObjectRarity);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_BP_FG_IDP_TraitStat(int32_t EntryPoint, TArray<UUI_BP_TraitNote_C*>& K2Node_MakeArray_Array, bool K2Node_Event_IsDesignTime);
}; // Size: 0x380
#pragma pack(pop)
