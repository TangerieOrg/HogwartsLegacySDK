#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLootWeight {
    int32_t WeightMin; // 0x0
    int32_t WeightMax; // 0x4
    int32_t ItemIndex; // 0x8
}; // Size: 0xc
#pragma pack(pop)
