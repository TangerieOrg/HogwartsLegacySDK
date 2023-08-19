#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSkyLightHemisphereParametersOverride {
    uint8_t bOverride_bUseHemisphereLight : 1; // 0x0
    uint8_t bOverride_HemiTopColor : 1; // 0x0
    uint8_t bOverride_HemiBottomColor : 1; // 0x0
    uint8_t bOverride_HemiOutsideIntensity : 1; // 0x0
    uint8_t bOverride_HemiInsideIntensity : 1; // 0x0
    uint8_t bOverride_ProbeOutsideMinimumIntensity : 1; // 0x0
    uint8_t bOverride_ProbeInsideMinimumIntensity : 1; // 0x0
    uint8_t bOverride_SkyOcclusionContrast : 1; // 0x0
    uint8_t bOverride_SkyOcclusionExponent : 1; // 0x1
    uint8_t pad_bitfield_1_1 : 7;
    bool bUseHemisphereLight; // 0x2
    char pad_3[0x1];
    FLinearColor HemiTopColor; // 0x4
    FLinearColor HemiBottomColor; // 0x14
    float HemiOutsideIntensity; // 0x24
    float HemiInsideIntensity; // 0x28
    float ProbeOutsideMinimumIntensity; // 0x2c
    float ProbeInsideMinimumIntensity; // 0x30
    float SkyOcclusionContrast; // 0x34
    float SkyOcclusionExponent; // 0x38
}; // Size: 0x3c
#pragma pack(pop)
