#include "FLinearColor.hpp"
#include "FUI_BP_ColorEntry.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_BlueprintFunctionLibrary_C.hpp"
UUI_BP_BlueprintFunctionLibrary_C* UUI_BP_BlueprintFunctionLibrary_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/UI_BP_BlueprintFunctionLibrary.UI_BP_BlueprintFunctionLibrary_C");
    return (UUI_BP_BlueprintFunctionLibrary_C*)res;
}
void UUI_BP_BlueprintFunctionLibrary_C::GetSaveWarningString(UObject* __WorldContext, FString& SaveWarning) {}
void UUI_BP_BlueprintFunctionLibrary_C::ContainsBannedWord(FString inString, TArray<FString>& BannedWords, bool CheckSubstrings, UObject* __WorldContext, bool& ContainsBanned, FString ReplaceChars, FString CheckWord, int32_t CallFunc_Len_ReturnValue, int32_t Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_1, FString CallFunc_EncryptString_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, FString CallFunc_EncryptString_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, int32_t CallFunc_ReplaceInline_ReturnValue, TArray<FString>& CallFunc_ParseIntoArray_ReturnValue, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_EncryptString_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, int32_t CallFunc_Len_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, TArray<FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, FString CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_2, int32_t CallFunc_ReplaceInline_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FString CallFunc_GetSubstring_ReturnValue, FString CallFunc_EncryptString_ReturnValue_3, int32_t CallFunc_Len_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_3, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_BlueprintFunctionLibrary.UI_BP_BlueprintFunctionLibrary_C.ContainsBannedWord"));
    struct Params_ContainsBannedWord {
        FString inString; // 0x0
        TArray<FString> BannedWords; // 0x10
        bool CheckSubstrings; // 0x20
        char pad_21[0x7];
        UObject* __WorldContext; // 0x28
        bool ContainsBanned; // 0x30
        char pad_31[0x7];
        FString ReplaceChars; // 0x38
        FString CheckWord; // 0x48
        int32_t CallFunc_Len_ReturnValue; // 0x58
        int32_t Temp_int_Variable; // 0x5c
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x60
        char pad_61[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x64
        int32_t Temp_int_Loop_Counter_Variable; // 0x68
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x6c
        int32_t Temp_int_Variable_1; // 0x70
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x74
        int32_t Temp_int_Array_Index_Variable; // 0x78
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x7c
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x80
        int32_t Temp_int_Array_Index_Variable_1; // 0x84
        FString CallFunc_EncryptString_ReturnValue; // 0x88
        bool CallFunc_Array_Contains_ReturnValue; // 0x98
        char pad_99[0x7];
        FString CallFunc_EncryptString_ReturnValue_1; // 0xa0
        bool CallFunc_Array_Contains_ReturnValue_1; // 0xb0
        char pad_b1[0x3];
        int32_t CallFunc_ReplaceInline_ReturnValue; // 0xb4
        TArray<FString> CallFunc_ParseIntoArray_ReturnValue; // 0xb8
        FString CallFunc_Array_Get_Item; // 0xc8
        int32_t CallFunc_Array_Length_ReturnValue; // 0xd8
        char pad_dc[0x4];
        FString CallFunc_EncryptString_ReturnValue_2; // 0xe0
        bool CallFunc_Less_IntInt_ReturnValue; // 0xf0
        bool CallFunc_Array_Contains_ReturnValue_2; // 0xf1
        char pad_f2[0x2];
        int32_t CallFunc_Len_ReturnValue_1; // 0xf4
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xf8
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0xfc
        bool CallFunc_LessEqual_IntInt_ReturnValue_1; // 0xfd
        char pad_fe[0x2];
        TArray<FString> CallFunc_GetCharacterArrayFromString_ReturnValue; // 0x100
        FString CallFunc_Array_Get_Item_1; // 0x110
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x120
        int32_t CallFunc_ReplaceInline_ReturnValue_1; // 0x124
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x128
        char pad_129[0x7];
        FString CallFunc_GetSubstring_ReturnValue; // 0x130
        FString CallFunc_EncryptString_ReturnValue_3; // 0x140
        int32_t CallFunc_Len_ReturnValue_2; // 0x150
        bool CallFunc_Array_Contains_ReturnValue_3; // 0x154
        char pad_155[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x158
        bool CallFunc_LessEqual_IntInt_ReturnValue_2; // 0x15c
        char pad_15d[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x160
        bool CallFunc_LessEqual_IntInt_ReturnValue_3; // 0x164
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x165
    }; // Size: 0x166
    Params_ContainsBannedWord params{};
    params.inString = (FString)inString;
    params.BannedWords = (TArray<FString>)BannedWords;
    params.CheckSubstrings = (bool)CheckSubstrings;
    params.__WorldContext = (UObject*)__WorldContext;
    params.ContainsBanned = (bool)ContainsBanned;
    params.ReplaceChars = (FString)ReplaceChars;
    params.CheckWord = (FString)CheckWord;
    params.CallFunc_Len_ReturnValue = (int32_t)CallFunc_Len_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_EncryptString_ReturnValue = (FString)CallFunc_EncryptString_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_EncryptString_ReturnValue_1 = (FString)CallFunc_EncryptString_ReturnValue_1;
    params.CallFunc_Array_Contains_ReturnValue_1 = (bool)CallFunc_Array_Contains_ReturnValue_1;
    params.CallFunc_ReplaceInline_ReturnValue = (int32_t)CallFunc_ReplaceInline_ReturnValue;
    params.CallFunc_ParseIntoArray_ReturnValue = (TArray<FString>)CallFunc_ParseIntoArray_ReturnValue;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_EncryptString_ReturnValue_2 = (FString)CallFunc_EncryptString_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue_2 = (bool)CallFunc_Array_Contains_ReturnValue_2;
    params.CallFunc_Len_ReturnValue_1 = (int32_t)CallFunc_Len_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue_1 = (bool)CallFunc_LessEqual_IntInt_ReturnValue_1;
    params.CallFunc_GetCharacterArrayFromString_ReturnValue = (TArray<FString>)CallFunc_GetCharacterArrayFromString_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (FString)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_ReplaceInline_ReturnValue_1 = (int32_t)CallFunc_ReplaceInline_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_GetSubstring_ReturnValue = (FString)CallFunc_GetSubstring_ReturnValue;
    params.CallFunc_EncryptString_ReturnValue_3 = (FString)CallFunc_EncryptString_ReturnValue_3;
    params.CallFunc_Len_ReturnValue_2 = (int32_t)CallFunc_Len_ReturnValue_2;
    params.CallFunc_Array_Contains_ReturnValue_3 = (bool)CallFunc_Array_Contains_ReturnValue_3;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue_2 = (bool)CallFunc_LessEqual_IntInt_ReturnValue_2;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    params.CallFunc_LessEqual_IntInt_ReturnValue_3 = (bool)CallFunc_LessEqual_IntInt_ReturnValue_3;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BannedWords = params.BannedWords;
    ContainsBanned = params.ContainsBanned;
    CallFunc_ParseIntoArray_ReturnValue = params.CallFunc_ParseIntoArray_ReturnValue;
    CallFunc_GetCharacterArrayFromString_ReturnValue = params.CallFunc_GetCharacterArrayFromString_ReturnValue;
}
void UUI_BP_BlueprintFunctionLibrary_C::GetHouseColors(UObject* __WorldContext, FLinearColor& HouseColor, FUI_BP_ColorEntry CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FUI_BP_ColorEntry CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_BlueprintFunctionLibrary.UI_BP_BlueprintFunctionLibrary_C.GetHouseColors"));
    struct Params_GetHouseColors {
        UObject* __WorldContext; // 0x0
        FLinearColor HouseColor; // 0x8
        FUI_BP_ColorEntry CallFunc_GetDataTableRowFromName_OutRow; // 0x18
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x28
        char pad_29[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0x30
        FString CallFunc_GetPlayerHouse_ReturnValue; // 0x38
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x48
        FUI_BP_ColorEntry CallFunc_GetDataTableRowFromName_OutRow_1; // 0x50
        bool CallFunc_GetDataTableRowFromName_ReturnValue_1; // 0x60
    }; // Size: 0x61
    Params_GetHouseColors params{};
    params.__WorldContext = (UObject*)__WorldContext;
    params.HouseColor = (FLinearColor)HouseColor;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FUI_BP_ColorEntry)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlayerHouse_ReturnValue = (FString)CallFunc_GetPlayerHouse_ReturnValue;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.CallFunc_GetDataTableRowFromName_OutRow_1 = (FUI_BP_ColorEntry)CallFunc_GetDataTableRowFromName_OutRow_1;
    params.CallFunc_GetDataTableRowFromName_ReturnValue_1 = (bool)CallFunc_GetDataTableRowFromName_ReturnValue_1;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HouseColor = params.HouseColor;
}
