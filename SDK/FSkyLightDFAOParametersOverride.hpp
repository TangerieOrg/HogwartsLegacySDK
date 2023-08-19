#pragma once
#include <cstdint>
#include "EOcclusionCombineMode.hpp"
#include "FColor.hpp"
#pragma pack(push, 1)
struct FSkyLightDFAOParametersOverride {
    uint8_t bOverride_OcclusionMaxDistance : 1; // 0x0
    uint8_t bOverride_Contrast : 1; // 0x0
    uint8_t bOverride_OcclusionExponent : 1; // 0x0
    uint8_t bOverride_MinOcclusion : 1; // 0x0
    uint8_t bOverride_OcclusionTint : 1; // 0x0
    uint8_t bOverride_OcclusionCombineMode : 1; // 0x0
    uint8_t pad_bitfield_0_6 : 2;
    char pad_1[0x3];
    float OcclusionMaxDistance; // 0x4
    float Contrast; // 0x8
    float OcclusionExponent; // 0xc
    float MinOcclusion; // 0x10
    FColor OcclusionTint; // 0x14
    EOcclusionCombineMode OcclusionCombineMode; // 0x18
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
