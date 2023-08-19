#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDirectionalLightShadows {
    float ShadowResolutionScale; // 0x0
    float ShadowBias; // 0x4
    float ShadowSlopeBias; // 0x8
    float ShadowSharpen; // 0xc
    float ContactShadowLength; // 0x10
    float ContactShadowLengthWorldSpace; // 0x14
    bool bContactShadowLengthInWS; // 0x18
    bool bCastVolumetricShadow; // 0x19
    bool bCastTranslucentShadows; // 0x1a
    char pad_1b[0x1];
}; // Size: 0x1c
#pragma pack(pop)
