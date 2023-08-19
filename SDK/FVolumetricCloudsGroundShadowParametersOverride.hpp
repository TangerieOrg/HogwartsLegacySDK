#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVolumetricCloudsGroundShadowParametersOverride {
    uint8_t bOverride_ShadowStrength : 1; // 0x0
    uint8_t bOverride_CutOutDistanceMeters : 1; // 0x0
    uint8_t bOverride_CutOutFadeDistanceMeters : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
    char pad_1[0x3];
    float ShadowStrength; // 0x4
    float CutOutDistanceMeters; // 0x8
    float CutOutFadeDistanceMeters; // 0xc
}; // Size: 0x10
#pragma pack(pop)
