#include "FFormatArgumentData.hpp"
#include "FGearItemID.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UBrewingManager.hpp"
#include "UCreatureDefinition.hpp"
#include "UCreatureManager.hpp"
#include "UCreatureState.hpp"
#include "UFL_Dev_SanctuaryTesting_C.hpp"
#include "UFunction.hpp"
#include "UHerbPlotManager.hpp"
#include "UObject.hpp"
UFL_Dev_SanctuaryTesting_C* UFL_Dev_SanctuaryTesting_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Nurturing/FL_Dev_SanctuaryTesting.FL_Dev_SanctuaryTesting_C");
    return (UFL_Dev_SanctuaryTesting_C*)res;
}
void UFL_Dev_SanctuaryTesting_C::SetSanctuaryInitialIdentity(int32_t InitialIdentityIndex, UObject* __WorldContext, FString Temp_string_Variable, FString Temp_string_Variable_1, FString Temp_string_Variable_2, FString Temp_string_Variable_3, FString Temp_string_Variable_4, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Variable, FString K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_DbWriteMiscSaveDataItem_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue_1) {}
void UFL_Dev_SanctuaryTesting_C::GetSanctuaryIdentityStrings(UObject* __WorldContext, TArray<FString>& Strings, TArray<FString> OutStrings, TArray<FString>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_Dev_SanctuaryTesting.FL_Dev_SanctuaryTesting_C.GetSanctuaryIdentityStrings"));
    struct Params_GetSanctuaryIdentityStrings {
        UObject* __WorldContext; // 0x0
        TArray<FString> Strings; // 0x8
        TArray<FString> OutStrings; // 0x18
        TArray<FString> K2Node_MakeArray_Array; // 0x28
    }; // Size: 0x38
    Params_GetSanctuaryIdentityStrings params{};
    params.__WorldContext = (UObject*)__WorldContext;
    params.Strings = (TArray<FString>)Strings;
    params.OutStrings = (TArray<FString>)OutStrings;
    params.K2Node_MakeArray_Array = (TArray<FString>)K2Node_MakeArray_Array;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Strings = params.Strings;
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UFL_Dev_SanctuaryTesting_C::PlaySanctuaryViaFrontend(UObject* WorldContextObject, UObject* __WorldContext, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, TArray<FName>& K2Node_MakeArray_Array, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<FGearItemID>& CallFunc_IdentifyAllItems_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_1, FName CallFunc_Array_Get_Item, FGearItemID CallFunc_GenerateGearAndAddToInventory_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue_3, int32_t CallFunc_AdjustCount_ReturnValue, TArray<UCreatureDefinition*>& CallFunc_GetAllCreatureDefinitions_ReturnValue, int32_t CallFunc_AdjustCount_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, TArray<FName>& CallFunc_GetAllTransfigurationLocks_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FName CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_2, int32_t CallFunc_AdjustCount_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_AdjustCount_ReturnValue_3, int32_t CallFunc_AdjustCount_ReturnValue_4, int32_t Temp_int_Array_Index_Variable_2, UCreatureDefinition* CallFunc_Array_Get_Item_2, FName CallFunc_GetTypeID_ReturnValue, bool CallFunc_IsAdult_ReturnValue, UCreatureState* CallFunc_RegisterCapturedCreature_ReturnValue, UCreatureState* CallFunc_RegisterCapturedCreature_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_GetCanBeCaptured_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, UHerbPlotManager* CallFunc_BP_Get_ReturnValue, UBrewingManager* CallFunc_BP_Get_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_Dev_SanctuaryTesting.FL_Dev_SanctuaryTesting_C.PlaySanctuaryViaFrontend"));
    struct Params_PlaySanctuaryViaFrontend {
        UObject* WorldContextObject; // 0x0
        UObject* __WorldContext; // 0x8
        int32_t Temp_int_Loop_Counter_Variable; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x14
        int32_t Temp_int_Array_Index_Variable; // 0x18
        char pad_1c[0x4];
        TArray<FName> K2Node_MakeArray_Array; // 0x20
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue; // 0x34
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x38
        char pad_3c[0x4];
        TArray<FGearItemID> CallFunc_IdentifyAllItems_ReturnValue; // 0x40
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x50
        UCreatureManager* CallFunc_Get_ReturnValue_1; // 0x58
        UCreatureManager* CallFunc_Get_ReturnValue_2; // 0x60
        int32_t Temp_int_Array_Index_Variable_1; // 0x68
        FName CallFunc_Array_Get_Item; // 0x6c
        FGearItemID CallFunc_GenerateGearAndAddToInventory_ReturnValue; // 0x74
        UCreatureManager* CallFunc_Get_ReturnValue_3; // 0x88
        int32_t CallFunc_AdjustCount_ReturnValue; // 0x90
        char pad_94[0x4];
        TArray<UCreatureDefinition*> CallFunc_GetAllCreatureDefinitions_ReturnValue; // 0x98
        int32_t CallFunc_AdjustCount_ReturnValue_1; // 0xa8
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xac
        TArray<FName> CallFunc_GetAllTransfigurationLocks_ReturnValue; // 0xb0
        bool CallFunc_Less_IntInt_ReturnValue; // 0xc0
        char pad_c1[0x3];
        FName CallFunc_Array_Get_Item_1; // 0xc4
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0xcc
        int32_t CallFunc_AdjustCount_ReturnValue_2; // 0xd0
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0xd4
        char pad_d5[0x3];
        int32_t CallFunc_AdjustCount_ReturnValue_3; // 0xd8
        int32_t CallFunc_AdjustCount_ReturnValue_4; // 0xdc
        int32_t Temp_int_Array_Index_Variable_2; // 0xe0
        char pad_e4[0x4];
        UCreatureDefinition* CallFunc_Array_Get_Item_2; // 0xe8
        FName CallFunc_GetTypeID_ReturnValue; // 0xf0
        bool CallFunc_IsAdult_ReturnValue; // 0xf8
        char pad_f9[0x7];
        UCreatureState* CallFunc_RegisterCapturedCreature_ReturnValue; // 0x100
        UCreatureState* CallFunc_RegisterCapturedCreature_ReturnValue_1; // 0x108
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x110
        bool CallFunc_GetCanBeCaptured_ReturnValue; // 0x111
        bool CallFunc_BooleanAND_ReturnValue; // 0x112
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x113
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x114
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x118
        char pad_119[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x11c
        UHerbPlotManager* CallFunc_BP_Get_ReturnValue; // 0x120
        UBrewingManager* CallFunc_BP_Get_ReturnValue_1; // 0x128
    }; // Size: 0x130
    Params_PlaySanctuaryViaFrontend params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.__WorldContext = (UObject*)__WorldContext;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.K2Node_MakeArray_Array = (TArray<FName>)K2Node_MakeArray_Array;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_IdentifyAllItems_ReturnValue = (TArray<FGearItemID>)CallFunc_IdentifyAllItems_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_Get_ReturnValue_1 = (UCreatureManager*)CallFunc_Get_ReturnValue_1;
    params.CallFunc_Get_ReturnValue_2 = (UCreatureManager*)CallFunc_Get_ReturnValue_2;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_GenerateGearAndAddToInventory_ReturnValue = (FGearItemID)CallFunc_GenerateGearAndAddToInventory_ReturnValue;
    params.CallFunc_Get_ReturnValue_3 = (UCreatureManager*)CallFunc_Get_ReturnValue_3;
    params.CallFunc_AdjustCount_ReturnValue = (int32_t)CallFunc_AdjustCount_ReturnValue;
    params.CallFunc_GetAllCreatureDefinitions_ReturnValue = (TArray<UCreatureDefinition*>)CallFunc_GetAllCreatureDefinitions_ReturnValue;
    params.CallFunc_AdjustCount_ReturnValue_1 = (int32_t)CallFunc_AdjustCount_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_GetAllTransfigurationLocks_ReturnValue = (TArray<FName>)CallFunc_GetAllTransfigurationLocks_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (FName)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_AdjustCount_ReturnValue_2 = (int32_t)CallFunc_AdjustCount_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_AdjustCount_ReturnValue_3 = (int32_t)CallFunc_AdjustCount_ReturnValue_3;
    params.CallFunc_AdjustCount_ReturnValue_4 = (int32_t)CallFunc_AdjustCount_ReturnValue_4;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.CallFunc_Array_Get_Item_2 = (UCreatureDefinition*)CallFunc_Array_Get_Item_2;
    params.CallFunc_GetTypeID_ReturnValue = (FName)CallFunc_GetTypeID_ReturnValue;
    params.CallFunc_IsAdult_ReturnValue = (bool)CallFunc_IsAdult_ReturnValue;
    params.CallFunc_RegisterCapturedCreature_ReturnValue = (UCreatureState*)CallFunc_RegisterCapturedCreature_ReturnValue;
    params.CallFunc_RegisterCapturedCreature_ReturnValue_1 = (UCreatureState*)CallFunc_RegisterCapturedCreature_ReturnValue_1;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_GetCanBeCaptured_ReturnValue = (bool)CallFunc_GetCanBeCaptured_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.CallFunc_BP_Get_ReturnValue = (UHerbPlotManager*)CallFunc_BP_Get_ReturnValue;
    params.CallFunc_BP_Get_ReturnValue_1 = (UBrewingManager*)CallFunc_BP_Get_ReturnValue_1;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    CallFunc_IdentifyAllItems_ReturnValue = params.CallFunc_IdentifyAllItems_ReturnValue;
    CallFunc_GetAllCreatureDefinitions_ReturnValue = params.CallFunc_GetAllCreatureDefinitions_ReturnValue;
    CallFunc_GetAllTransfigurationLocks_ReturnValue = params.CallFunc_GetAllTransfigurationLocks_ReturnValue;
}
