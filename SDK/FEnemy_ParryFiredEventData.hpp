#pragma once
#include <cstdint>
#include "EEnemy_ParryType.hpp"
#pragma pack(push, 1)
struct FEnemy_ParryFiredEventData {
    int32_t WindowID; // 0x0
    EEnemy_ParryType ParryType; // 0x4
    char pad_5[0x3];
    float TimeToImpact; // 0x8
}; // Size: 0xc
#pragma pack(pop)
