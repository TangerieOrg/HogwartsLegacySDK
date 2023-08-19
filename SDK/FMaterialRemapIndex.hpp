#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMaterialRemapIndex {
    uint32_t ImportVersionKey; // 0x0
    char pad_4[0x4];
    TArray<int32_t> MaterialRemap; // 0x8
}; // Size: 0x18
#pragma pack(pop)
