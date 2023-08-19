#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCrowdAvoidanceSamplingPattern {
    TArray<float> Angles; // 0x0
    TArray<float> Radii; // 0x10
}; // Size: 0x20
#pragma pack(pop)
