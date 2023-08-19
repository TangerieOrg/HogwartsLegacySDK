#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDirectionalLightDistanceFieldShadows {
    bool bUseRayTracedDistanceFieldShadows; // 0x0
    char pad_1[0x3];
    float RayStartOffsetDepthScale; // 0x4
    float DistanceFieldShadowDistance; // 0x8
    float TraceDistance; // 0xc
}; // Size: 0x10
#pragma pack(pop)
