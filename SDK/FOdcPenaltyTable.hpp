#pragma once
#include <cstdint>
#include "EOdcPenaltyTableMode.hpp"
#pragma pack(push, 1)
struct FOdcPenaltyTable {
    EOdcPenaltyTableMode Mode; // 0x0
    char pad_1[0x7];
    TArray<uint8_t> PerFlagPenalties; // 0x8
    uint8_t FixedPointDenominator; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
