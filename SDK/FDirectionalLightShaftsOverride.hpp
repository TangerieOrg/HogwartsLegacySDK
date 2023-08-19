#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FDirectionalLightShaftsOverride {
    uint8_t bOverride_EnableLightShaftOcclusion : 1; // 0x0
    uint8_t bOverride_OcclusionMaskDarkness : 1; // 0x0
    uint8_t bOverride_OcclusionDepthRange : 1; // 0x0
    uint8_t bOverride_EnableLightShaftBloom : 1; // 0x0
    uint8_t bOverride_BloomScale : 1; // 0x0
    uint8_t bOverride_BloomThreshold : 1; // 0x0
    uint8_t bOverride_BloomTint : 1; // 0x0
    uint8_t bOverride_LightShaftOverrideDirection : 1; // 0x0
    bool bEnableLightShaftOcclusion; // 0x1
    char pad_2[0x2];
    float OcclusionMaskDarkness; // 0x4
    float OcclusionDepthRange; // 0x8
    bool bEnableLightShaftBloom; // 0xc
    char pad_d[0x3];
    float BloomScale; // 0x10
    float BloomThreshold; // 0x14
    FColor BloomTint; // 0x18
    FVector LightShaftOverrideDirection; // 0x1c
}; // Size: 0x28
#pragma pack(pop)
