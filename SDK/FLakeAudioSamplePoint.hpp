#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FLakeAudioSamplePoint {
    FVector Location; // 0x0
    float GeometricDepth; // 0xc
    float WaterDepth; // 0x10
    float DistanceToCoast; // 0x14
    FVector2D CoastDirection; // 0x18
    float MaxWaveHeight; // 0x20
}; // Size: 0x24
#pragma pack(pop)
