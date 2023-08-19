#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FPositionHistory {
    TArray<FVector> Positions; // 0x0
    float Range; // 0x10
    char pad_14[0x1c];
}; // Size: 0x30
#pragma pack(pop)
