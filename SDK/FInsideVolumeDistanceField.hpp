#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FInsideVolumeDistanceField {
    TArray<uint8_t> CompressedDistanceField; // 0x0
    FVector2D DistanceMinMax; // 0x10
}; // Size: 0x18
#pragma pack(pop)
