#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBasicLightShadowDescription {
    uint8_t bCastShadows : 1; // 0x0
    uint8_t bCastStaticShadows : 1; // 0x0
    uint8_t bCastDynamicShadows : 1; // 0x0
    uint8_t bCastVolumetricShadow : 1; // 0x0
    uint8_t bContactShadowLengthInWS : 1; // 0x0
    uint8_t bCastTranslucentShadows : 1; // 0x0
    uint8_t bCastShadowsFromCinematicObjectsOnly : 1; // 0x0
    uint8_t pad_bitfield_0_7 : 1;
    char pad_1[0x3];
    float ShadowResolutionScale; // 0x4
    float ShadowBias; // 0x8
    float ShadowSlopeBias; // 0xc
    float ShadowSharpen; // 0x10
    float ContactShadowLength; // 0x14
    float NearShadowClippingDistance; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
