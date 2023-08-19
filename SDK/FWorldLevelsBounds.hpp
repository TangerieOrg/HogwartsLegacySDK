#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWorldLevelsBounds {
    char pad_0[0x50];
    int32_t TickInitialized; // 0x50
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
