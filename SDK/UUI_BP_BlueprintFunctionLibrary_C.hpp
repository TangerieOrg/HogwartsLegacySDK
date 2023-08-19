#pragma once
#include <cstdint>
#include "FUI_BP_ColorEntry.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
struct FLinearColor;
class UUIManager;
#pragma pack(push, 1)
class UUI_BP_BlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary {
public:
    static UUI_BP_BlueprintFunctionLibrary_C* StaticClass();
    static void GetSaveWarningString(UObject* __WorldContext, FString& SaveWarning);
    static void ContainsBannedWord(FString inString, TArray<FString>& BannedWords, bool CheckSubstrings, UObject* __WorldContext, bool& ContainsBanned, FString ReplaceChars, FString CheckWord, int32_t CallFunc_Len_ReturnValue, int32_t Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_1, FString CallFunc_EncryptString_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, FString CallFunc_EncryptString_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, int32_t CallFunc_ReplaceInline_ReturnValue, TArray<FString>& CallFunc_ParseIntoArray_ReturnValue, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_EncryptString_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, int32_t CallFunc_Len_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, TArray<FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, FString CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_2, int32_t CallFunc_ReplaceInline_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FString CallFunc_GetSubstring_ReturnValue, FString CallFunc_EncryptString_ReturnValue_3, int32_t CallFunc_Len_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_3, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1);
    static void GetHouseColors(UObject* __WorldContext, FLinearColor& HouseColor, FUI_BP_ColorEntry CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FUI_BP_ColorEntry CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1);
}; // Size: 0x28
#pragma pack(pop)
