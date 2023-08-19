#pragma once
#include <cstdint>
#include "FFormatArgumentData.hpp"
#include "FGearItemID.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class UCreatureManager;
class UCreatureDefinition;
class UCreatureState;
class UHerbPlotManager;
class UBrewingManager;
#pragma pack(push, 1)
class UFL_Dev_SanctuaryTesting_C : public UBlueprintFunctionLibrary {
public:
    static UFL_Dev_SanctuaryTesting_C* StaticClass();
    static void SetSanctuaryInitialIdentity(int32_t InitialIdentityIndex, UObject* __WorldContext, FString Temp_string_Variable, FString Temp_string_Variable_1, FString Temp_string_Variable_2, FString Temp_string_Variable_3, FString Temp_string_Variable_4, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Variable, FString K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_DbWriteMiscSaveDataItem_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue_1);
    static void GetSanctuaryIdentityStrings(UObject* __WorldContext, TArray<FString>& Strings, TArray<FString> OutStrings, TArray<FString>& K2Node_MakeArray_Array);
    static void PlaySanctuaryViaFrontend(UObject* WorldContextObject, UObject* __WorldContext, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, TArray<FName>& K2Node_MakeArray_Array, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<FGearItemID>& CallFunc_IdentifyAllItems_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_1, FName CallFunc_Array_Get_Item, FGearItemID CallFunc_GenerateGearAndAddToInventory_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue_3, int32_t CallFunc_AdjustCount_ReturnValue, TArray<UCreatureDefinition*>& CallFunc_GetAllCreatureDefinitions_ReturnValue, int32_t CallFunc_AdjustCount_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, TArray<FName>& CallFunc_GetAllTransfigurationLocks_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FName CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_2, int32_t CallFunc_AdjustCount_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_AdjustCount_ReturnValue_3, int32_t CallFunc_AdjustCount_ReturnValue_4, int32_t Temp_int_Array_Index_Variable_2, UCreatureDefinition* CallFunc_Array_Get_Item_2, FName CallFunc_GetTypeID_ReturnValue, bool CallFunc_IsAdult_ReturnValue, UCreatureState* CallFunc_RegisterCapturedCreature_ReturnValue, UCreatureState* CallFunc_RegisterCapturedCreature_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_GetCanBeCaptured_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, UHerbPlotManager* CallFunc_BP_Get_ReturnValue, UBrewingManager* CallFunc_BP_Get_ReturnValue_1);
}; // Size: 0x28
#pragma pack(pop)
