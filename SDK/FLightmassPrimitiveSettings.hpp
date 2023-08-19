#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLightmassPrimitiveSettings {
    uint8_t bUseTwoSidedLighting : 1; // 0x0
    uint8_t bShadowIndirectOnly : 1; // 0x0
    uint8_t bUseEmissiveForStaticLighting : 1; // 0x0
    uint8_t bUseVertexNormalForHemisphereGather : 1; // 0x0
    uint8_t pad_bitfield_0_4 : 4;
    char pad_1[0x3];
    float EmissiveLightFalloffExponent; // 0x4
    float EmissiveLightExplicitInfluenceRadius; // 0x8
    float EmissiveBoost; // 0xc
    float DiffuseBoost; // 0x10
    float FullyOccludedSamplesFraction; // 0x14
}; // Size: 0x18
#pragma pack(pop)
