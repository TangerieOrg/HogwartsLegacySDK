#pragma once
#include <cstdint>
#include "FInsideVolumeOptionsMask.hpp"
#pragma pack(push, 1)
struct FInsideVolumeDistanceTest {
    FInsideVolumeOptionsMask InsideMask; // 0x0
    float TestDistance; // 0x4
    TArray<float> Distances; // 0x8
}; // Size: 0x18
#pragma pack(pop)
