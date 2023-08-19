#pragma once
#include <cstdint>
#include "EWaterType.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FFlowDataQueryResult {
    EWaterType Type; // 0x0
    char pad_1[0x3];
    float Height; // 0x4
    FVector Normal; // 0x8
    char pad_14[0x8];
}; // Size: 0x1c
#pragma pack(pop)
