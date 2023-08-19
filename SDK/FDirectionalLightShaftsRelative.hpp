#pragma once
#include <cstdint>
#include "FAdjustedValueBoolean.hpp"
#include "FAdjustedValueFloat.hpp"
#include "FColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FDirectionalLightShaftsRelative {
    uint8_t bOverride_BloomTint : 1; // 0x0
    uint8_t bOverride_LightShaftOverrideDirection : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
    FAdjustedValueBoolean bEnableLightShaftOcclusion; // 0x1
    char pad_2[0x2];
    FAdjustedValueFloat OcclusionMaskDarkness; // 0x4
    FAdjustedValueFloat OcclusionDepthRange; // 0x24
    FAdjustedValueBoolean bEnableLightShaftBloom; // 0x44
    char pad_45[0x3];
    FAdjustedValueFloat BloomScale; // 0x48
    FAdjustedValueFloat BloomThreshold; // 0x68
    FColor BloomTint; // 0x88
    FVector LightShaftOverrideDirection; // 0x8c
}; // Size: 0x98
#pragma pack(pop)
