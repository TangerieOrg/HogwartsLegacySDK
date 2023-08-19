#pragma once
#include <cstdint>
#include "FStatColorMapEntry.hpp"
#pragma pack(push, 1)
struct FStatColorMapping {
    FString StatName; // 0x0
    TArray<FStatColorMapEntry> ColorMap; // 0x10
    uint8_t DisableBlend : 1; // 0x20
    uint8_t pad_bitfield_20_1 : 7;
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
