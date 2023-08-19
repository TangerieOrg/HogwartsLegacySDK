#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAkGeometrySurfacePropertiesToMap {
    char pad_0[0x28];
    float OcclusionValue; // 0x28
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
