#pragma once
#include <cstdint>
#include "ENPC_GameContext.hpp"
#pragma pack(push, 1)
struct FEnemy_EnergyData {
    ENPC_GameContext GameContext; // 0x0
    char pad_1[0x3];
    float DrainRateScale; // 0x4
    float Max; // 0x8
    float MaxDeviation; // 0xc
    float RefillRate; // 0x10
    float RefillRateScale; // 0x14
}; // Size: 0x18
#pragma pack(pop)
