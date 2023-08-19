#pragma once
#include <cstdint>
#include "EBeaconType.hpp"
#pragma pack(push, 1)
struct FRegionPopuplData {
    FString IconName; // 0x0
    FString ItemName; // 0x10
    EBeaconType Type; // 0x20
    char pad_21[0x3];
    int32_t Total; // 0x24
    int32_t TotalFinished; // 0x28
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
