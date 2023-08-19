#pragma once
#include <cstdint>
#include "EOcclusionCombineMode.hpp"
#include "FColor.hpp"
#pragma pack(push, 1)
struct FSkyLightDFAOParameters {
    float OcclusionMaxDistance; // 0x0
    float Contrast; // 0x4
    float OcclusionExponent; // 0x8
    float MinOcclusion; // 0xc
    FColor OcclusionTint; // 0x10
    EOcclusionCombineMode OcclusionCombineMode; // 0x14
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
