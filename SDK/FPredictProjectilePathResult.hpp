#pragma once
#include <cstdint>
#include "FHitResult.hpp"
#include "FPredictProjectilePathPointData.hpp"
#pragma pack(push, 1)
struct FPredictProjectilePathResult {
    TArray<FPredictProjectilePathPointData> PathData; // 0x0
    FPredictProjectilePathPointData LastTraceDestination; // 0x10
    FHitResult HitResult; // 0x2c
    char pad_b4[0x4];
}; // Size: 0xb8
#pragma pack(pop)
