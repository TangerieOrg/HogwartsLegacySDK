#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FDirectionalLightShafts {
    bool bEnableLightShaftOcclusion; // 0x0
    char pad_1[0x3];
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
