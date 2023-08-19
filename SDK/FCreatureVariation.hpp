#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCreatureVariation {
    FName VariationName; // 0x0
    char pad_8[0x78];
}; // Size: 0x80
#pragma pack(pop)
