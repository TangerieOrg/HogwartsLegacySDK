#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDirectionalLightDistanceFieldShadowsOverride {
    uint8_t bOverride_UseRayTracedDistanceFieldShadows : 1; // 0x0
    uint8_t bOverride_RayStartOffsetDepthScale : 1; // 0x0
    uint8_t bOverride_DistanceFieldShadowDistance : 1; // 0x0
    uint8_t bOverride_TraceDistance : 1; // 0x0
    uint8_t pad_bitfield_0_4 : 4;
    bool bUseRayTracedDistanceFieldShadows; // 0x1
    char pad_2[0x2];
    float RayStartOffsetDepthScale; // 0x4
    float DistanceFieldShadowDistance; // 0x8
    float TraceDistance; // 0xc
}; // Size: 0x10
#pragma pack(pop)
