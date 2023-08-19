#pragma once
#include <cstdint>
class UAkAcousticTexture;
#pragma pack(push, 1)
struct FAkGeometrySurfaceOverride {
    UAkAcousticTexture* AcousticTexture; // 0x0
    uint8_t bEnableOcclusionOverride : 1; // 0x8
    uint8_t pad_bitfield_8_1 : 7;
    char pad_9[0x3];
    float OcclusionValue; // 0xc
    float SurfaceArea; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
