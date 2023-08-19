#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FBatchedPoint {
    FVector Position; // 0x0
    FLinearColor Color; // 0xc
    float PointSize; // 0x1c
    float RemainingLifeTime; // 0x20
    uint8_t DepthPriority; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
