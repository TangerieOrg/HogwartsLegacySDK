#pragma once
#include <cstdint>
#include "FEnemy_Idle.hpp"
#pragma pack(push, 1)
struct FEnemy_Shuffle {
    int32_t SupportedDirections; // 0x0
    char pad_4[0x4];
    FEnemy_Idle Data; // 0x8
}; // Size: 0x68
#pragma pack(pop)
