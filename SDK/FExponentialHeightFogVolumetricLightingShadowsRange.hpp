#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FExponentialHeightFogVolumetricLightingShadowsRange {
    float NearShadowMinimum; // 0x0
    float FarShadowMinimum; // 0x4
    float NearDistance; // 0x8
    float FarDistance; // 0xc
}; // Size: 0x10
#pragma pack(pop)
