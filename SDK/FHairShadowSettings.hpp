#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FHairShadowSettings {
    float HairShadowDensity; // 0x0
    float HairRaytracingRadiusScale; // 0x4
    bool bUseHairRaytracingGeometry; // 0x8
    bool bVoxelize; // 0x9
    char pad_a[0x2];
}; // Size: 0xc
#pragma pack(pop)
