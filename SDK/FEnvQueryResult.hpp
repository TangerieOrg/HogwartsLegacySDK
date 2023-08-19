#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FEnvQueryResult {
    char pad_0[0x10];
    UClass* ItemType; // 0x10
    char pad_18[0x14];
    int32_t OptionIndex; // 0x2c
    int32_t QueryID; // 0x30
    char pad_34[0xc];
}; // Size: 0x40
#pragma pack(pop)
