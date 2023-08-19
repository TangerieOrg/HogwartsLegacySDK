#pragma once
#include <cstdint>
#include "USaveGame.hpp"
#pragma pack(push, 1)
class UModLoaderSave_C : public USaveGame {
public:
    TArray<void*> MapName; // 0x28
    char pad_38[0x50];
    static UModLoaderSave_C* StaticClass();
    void Convert();
    void Ver1ToVer2(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, int32_t CallFunc_Array_Length_ReturnValue);
}; // Size: 0x88
#pragma pack(pop)
