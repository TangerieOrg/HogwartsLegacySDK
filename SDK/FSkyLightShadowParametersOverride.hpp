#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSkyLightShadowParametersOverride {
    uint8_t bOverride_CastShadows : 1; // 0x0
    uint8_t bOverride_CastVolumetricShadow : 1; // 0x0
    uint8_t bOverride_CastStaticShadow : 1; // 0x0
    uint8_t bOverride_CastDynamicShadow : 1; // 0x0
    uint8_t bOverride_CastRaytracedShadow : 1; // 0x0
    uint8_t pad_bitfield_0_5 : 3;
    bool bCastShadows; // 0x1
    bool bCastStaticShadow; // 0x2
    bool bCastDynamicShadow; // 0x3
    bool bCastVolumetricShadow; // 0x4
    bool bCastRaytracedShadow; // 0x5
}; // Size: 0x6
#pragma pack(pop)
