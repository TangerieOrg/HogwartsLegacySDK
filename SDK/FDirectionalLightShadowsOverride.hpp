#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDirectionalLightShadowsOverride {
    uint8_t bOverride_ShadowResolutionScale : 1; // 0x0
    uint8_t bOverride_ShadowBias : 1; // 0x0
    uint8_t bOverride_ShadowSlopeBias : 1; // 0x0
    uint8_t bOverride_ShadowSharpen : 1; // 0x0
    uint8_t bOverride_ContactShadowLength : 1; // 0x0
    uint8_t bOverride_ContactShadowLengthWorldSpace : 1; // 0x0
    uint8_t bOverride_ContactShadowLengthInWS : 1; // 0x0
    uint8_t bOverride_CastVolumetricShadow : 1; // 0x0
    uint8_t bOverride_CastTranslucentShadows : 1; // 0x1
    uint8_t pad_bitfield_1_1 : 7;
    char pad_2[0x2];
    float ShadowResolutionScale; // 0x4
    float ShadowBias; // 0x8
    float ShadowSlopeBias; // 0xc
    float ShadowSharpen; // 0x10
    float ContactShadowLength; // 0x14
    float ContactShadowLengthWorldSpace; // 0x18
    bool bContactShadowLengthInWS; // 0x1c
    bool bCastVolumetricShadow; // 0x1d
    bool bCastTranslucentShadows; // 0x1e
    char pad_1f[0x1];
}; // Size: 0x20
#pragma pack(pop)
